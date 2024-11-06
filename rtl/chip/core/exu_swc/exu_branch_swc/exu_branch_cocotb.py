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


def branch_model(rs1, rs2, imm, beq, bne, blt, bltu, bge, bgeu, curr):
    """Model of the functionality of the branch module"""
    if(int(imm) == 4 or int(imm) == 8):
        return 0
    elif(beq):
        return (rs1 == rs2)*((curr + imm)-8)
    elif(bne):
        return (rs1 != rs2)*((curr + imm)-8)
    elif (blt):
        return (twos_comp(rs1, 32) < twos_comp(rs2, 32))*((curr + imm)-8)
    elif(bltu):
        return (rs1 < rs2)*((curr + imm)-8)
    elif(bge):
        return (twos_comp(rs1, 32) >= twos_comp(rs2, 32))*((curr+imm)-8)
    elif(bgeu):
        return (rs1 >= rs2)*((curr+imm)-8)
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


