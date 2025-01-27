import cocotb
from cocotb.triggers import Timer, RisingEdge
import random

async def generate_clock(dut):
    """Generate clock pulses."""
    for cycle in range(30):
        dut.hclk.value = 0
        await Timer(1, units="ns")
        dut.hclk.value = 1
        await Timer(1, units="ns")

async def start_cycle_cnt(dut):
    """Generate the cycle count"""
    dut.cycle_cnt.value = 1
    for cycle in range(15):
        await RisingEdge(dut.hclk)
        if(int(str(dut.cycle_cnt.value), 2) == 4):
            dut.cycle_cnt.value = 1
        else:
            dut.cycle_cnt.value = int(str(dut.cycle_cnt.value),2) + 1

def assign_call(i):
    beq = 0
    bne = 0
    blt = 0
    bge = 0
    bltu = 0
    bgeu = 0
    vect = [beq, bne, blt, bltu, bge, bgeu]
    call_dict = {0: "beq", 1: "bne", 2: "blt", 3: "bltu", 4: "bge", 5: "bgeu"}
    vect[i] = 1
    
    return call_dict[i], vect

    
def twos_comp(val, bits):
    """compute the 2's complement of int value val"""
    if (val & (1 << (bits - 1))) != 0: # if sign bit is set e.g., 8bit: 128-255
        val = val - (1 << bits)        # compute negative value
    return val   

def sign_extend(dut, val, curr_bits, out_bits):
    sign_bit = (val & (1<< (curr_bits-1)) != 0)
    if (sign_bit == 0):
        return val
    else:
        return ((1<<out_bits) - 1) ^ ((1 << curr_bits) - 1) | val
    
def branch_model(rs1, rs2, imm, curr, cmd):
    """Model of the functionality of the branch module"""
    imm = sign_extend(imm, 12, 32)
    if(int(imm) == 4 or int(imm) == 8):
        return 0
    elif(cmd == "beq"):
        return (rs1 == rs2)*((curr + imm)-8)
    elif(cmd == "bne"):
        return  (rs1 != rs2)*((curr + imm)-8)
    elif (cmd == "blt"):
        return  (twos_comp(rs1, 32) < twos_comp(rs2, 32))*((curr + imm)-8)
    elif(cmd == "bltu"):
        return  (rs1 < rs2)*((curr + imm)-8)
    elif(cmd == "bge"):
        return  (twos_comp(rs1, 32) >= twos_comp(rs2, 32))*((curr+imm)-8)
    elif(cmd == "bgeu"):
        return  (rs1 >= rs2)*((curr+imm)-8)
    else:
        return  0
    
async def flush_model(dut, flush, state):
    """Model of the functionality of the flush module"""
    global flush_stall
    for cycle in range(15):
        await RisingEdge(dut.hclk)
        if(int(str(dut.cycle_cnt.value),2) == 4):
            if state == 0:
                if flush == 1:
                    state = 1
                elif flush == 2:
                    state = 2
                else:
                    state = 0
            elif state == 1:
                if flush == 2:
                    state = 2
                else:
                    state = 0
            elif state == 2:
                state = 1
        #dut._log.info("Here, state %s cycle count %s", state, int(str(dut.cycle_cnt.value),2))
        if(state == 0):
            flush_stall = 0
        else:
            flush_stall = 1

def imm_model(dut, call, register, immediate):
    """Model of the functionality of the imm module"""
    if(call == "addi"):
        return (register + sign_extend(dut, immediate, 12, 32)) & 0xFFFFFFFF
    elif(call == "slti"):
        return twos_comp(register, 32) < twos_comp(immediate,12)
    elif(call == "sltiu"):
        return register < sign_extend(dut, immediate, 12, 32)
    elif(call == "xori"):
        return register ^ sign_extend(dut, immediate, 12, 32)
    elif(call == "ori"):
        return register | sign_extend(dut, immediate, 12, 32)
    elif(call == "andi"):
        return register & sign_extend(dut, immediate, 12, 32)
    elif(call == "slli"):
        return (register << (immediate&0x1f)) & 0xFFFFFFFF
    elif(call == "srli"):
        return logical_right(register, (immediate & 0x1f))
    elif(call == "srai"):
        return arithmetic_right(register, immediate&0x1f)
    else:
        return 0
    
def jump_model(dut, cmd, imm_j, imm_i, reg, pc):
    """Model of the functionality of the jump module"""
    pc = pc - 8
    if(cmd == "jal"):
        dut._log.info(f"adding {pc} + {twos_comp(imm_j, 21)}")
        return pc + twos_comp(imm_j, 21), pc+4
    elif(cmd == "jalr"):
        dut._log.info(f"adding {twos_comp(imm_i, 12)} + {reg}")
        return (twos_comp(imm_i, 12) + reg)&~0x1, pc+4


def load_model(cmd, rd, data, imm):
    """Model of the functionality of the load module"""
    load_rd = rd
    load_addr = data
    load_offset = sign_extend(imm, 12, 32)
    load_sext = ((cmd == "lb") | (cmd == "lh") | (cmd == "lw"))
    load_size = ((cmd == "lb") | (cmd == "lbu")) * 1 + ((cmd == "lh") | (cmd == "lhu"))*2 + (cmd == "lw")*3
    load_en = 1
    return load_rd, load_addr, load_offset, load_sext, load_size, load_en

def reg_model(cmd, reg1, reg2):
    """Model of the functionality of the reg module"""
    reg1_s = twos_comp(reg1, 32)
    reg2_s = twos_comp(reg2, 32)
    if(cmd == "add"):
        return (reg1 + reg2) & 0xFFFFFFFF
    elif(cmd == "sub"):
        return (reg1-reg2) & 0xFFFFFFFF
    elif(cmd == "sll"):
        return (reg1 << (reg2&0x1f)) & 0xFFFFFFFF
    elif(cmd == "slt"):
        return reg1_s < reg2_s
    elif(cmd == "sltu"):
        return reg1 < reg2
    elif(cmd == "xor"):
        return reg1 ^ reg2
    elif(cmd == "srl"):
        return logical_right(reg1, reg2&0x1f)
    elif(cmd == "sra"):
        return arithmetic_right(reg1, (reg2&0x1F))
    elif(cmd == "or"):
        return reg1 | reg2
    elif(cmd == "and"):
        return reg1 & reg2
    else:
        return 0

async def initialize_values(dut):
    dut.hrstn.value = 0
    await cocotb.start(generate_clock(dut))
    await cocotb.start(start_cycle_cnt(dut))
    await Timer(5, units="ns")
    dut.hrstn.value = 1
    await Timer(11, units="ns")
    await RisingEdge(dut.hclk)

@cocotb.test()
async def exu_branch_cocotb(dut):
    """Testing BEQ, where rs1 is equal to rs2, branch by the imm_type_b"""
    # Define our variables
    reg_rdata_1 = 2
    reg_rdata_2 = 2
    imm = 5

    # Assign values to the DUT
    dut.pc.value = 0
    dut.reg_rdata_1.value = reg_rdata_1
    dut.reg_rdata_2.value = reg_rdata_2
    dut.dec_imm_type_b.value = imm
    dut.dec_beq.value = 1
    dut.pc.value = 10
    dut.dec_branch_en.value = 1
    await initialize_values(dut)

    # Get the results from the model
    result = branch_model(reg_rdata_1, reg_rdata_2, imm, 1, 0, 0, 0, 0, 0, int(str(dut.pc.value), 2))
    # Get the actual results from the simulation
    actual = int(str(dut.pc_wdata.value),2)
    # Report the data
    dut._log.info("pc_wdata is %s", actual)
    dut._log.info("Result should be %s", result)
    assert actual == result, f"Branch result is incorrect: {actual} != {result}"

@cocotb.test()
async def exu_branch_randomized_test(dut):
    """Test 20 random calls with random reg and imm values"""
    dut.pc.value = 0
    for i in range(20):
        # Initialize the values
        # Set random values for the register data, immediate, and call
        reg_rdata_1 = random.randint(0, 15)
        reg_rdata_2 = random.randint(0, 15)
        imm = random.randint(0, 15)
        call_sel = random.randint(0,5)

        # Assign the values to the dut
        dut.reg_rdata_1.value = reg_rdata_1
        dut.reg_rdata_2.value = reg_rdata_2
        dut.dec_imm_type_b.value = imm
        call, call_vec = assign_call(call_sel)
        [dut.dec_beq.value, dut.dec_bne.value, dut.dec_blt.value, dut.dec_bltu.value, dut.dec_bge.value, dut.dec_bgeu.value] = call_vec
        dut.dec_branch_en.value = 1
        await initialize_values(dut)

        # Get the results from the model
        result = branch_model(reg_rdata_1, reg_rdata_2, imm, call_vec[0], call_vec[1], call_vec[2], call_vec[3], call_vec[4], call_vec[5], int(str(dut.pc.value), 2))
        # Get the actual results from the simulation
        actual = int(str(dut.pc_wdata.value),2)
        actual = twos_comp(actual, 32)
        # Report the data
        dut._log.info("Running Test %s", i)
        dut._log.info(f"Call is {call}")
        dut._log.info("Data1 = %s, Data2 = %s", reg_rdata_1, reg_rdata_2)
        dut._log.info("pc_wdata is %s", actual)
        dut._log.info("Result should be %s", result)
        dut._log.info("____________________________________")
        
        assert actual == result, f"Branch result is incorrect: for {call}, with X={reg_rdata_1} and Y={reg_rdata_2} and immediate {imm}, starting at pc={dut.pc.value}, we got {actual} when it should be {result}"


