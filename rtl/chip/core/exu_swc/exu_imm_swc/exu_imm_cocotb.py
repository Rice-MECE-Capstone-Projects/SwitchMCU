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

    
def twos_comp(val, bits):
    """compute the 2's complement of int value val"""
    if (val & (1 << (bits - 1))) != 0: # if sign bit is set e.g., 8bit: 128-255
        val = val - (1 << bits)        # compute negative value
    return val   

def logical_right(val, n):
    return val >>n if val >=0 else (val +0x10000000)>>n

def logical_left(val, n):
    for i in range(n):
        val = (val <<1) | ((1 << val.bit_length())-1)
    return val
def imm_model(call, register, immediate):
    """Model of the functionality of the imm module"""
    if(call == "addi"):
        return register + immediate
    elif(call == "slti"):
        return twos_comp(register, 32) < twos_comp(immediate,12)
    elif(call == "sltiu"):
        return register < immediate
    elif(call == "xori"):
        return register ^ immediate
    elif(call == "ori"):
        return register | immediate
    elif(call == "andi"):
        return register & immediate
    elif(call == "slli"):
        return (register << (immediate&0x1f)) & 0xFFFFFFFF
        # return logical_left(register, (immediate & 0x1f))
    elif(call == "srli"):
        return logical_right(register, (immediate & 0x1f)) & 0xFFFFFFFF
    elif(call == "srai"):
        return (register >> (immediate&0x1f)) & 0xFFFFFFFF
    else:
        return 0
    
async def initialize_values(dut):
    dut.hrstn.value = 0
    await cocotb.start(generate_clock(dut))
    await cocotb.start(start_cycle_cnt(dut))
    await Timer(5, units="ns")
    dut.hrstn.value = 1
    await Timer(9, units="ns")
    await RisingEdge(dut.hclk)

async def initialize_commands(dut, cmd):
    dut.dec_addi.value = (cmd == "addi")
    dut.dec_slti.value = (cmd == "slti")
    dut.dec_sltiu.value = (cmd == "sltiu")
    dut.dec_xori.value = (cmd == "xori")
    dut.dec_ori.value = (cmd == "ori")
    dut.dec_andi.value = (cmd == "andi")
    dut.dec_slli.value = (cmd == "slli")
    dut.dec_srli.value = (cmd == "srli")
    dut.dec_srai.value = (cmd == "srai")

@cocotb.test()
async def exu_imm_cocotb(dut):
    """Testing adding 5+3"""
    # Define our variables
    reg_rdata_1 = 14
    dut._log.info(bin(reg_rdata_1))
    imm = 93
    cmd = "slli"
    
    # Assign values to the DUT
    dut.pc.value = 0
    dut.reg_rdata_1.value = reg_rdata_1
    dut.dec_imm_type_i.value = imm
    dut.dec_branch_en.value = 1

    await initialize_commands(dut, cmd)
    await initialize_values(dut)

    # Get the results from the model
    result = imm_model(cmd, reg_rdata_1, imm)
    # Get the actual results from the simulation
    actual = int(str(dut.reg_wdata.value),2)
    # Report the data
    dut._log.info("reg_wdata is     %s", actual)
    dut._log.info("Result should be %s", result)
    assert actual == result, f"Branch result is incorrect: {actual} != {result}"

@cocotb.test()
async def exu_imm_randomized_test(dut):
    """Test 20 random calls with random reg and imm values"""
    dut.pc.value = 0
    coverage = []
    for i in range(50):
        # Initialize the values
        # Set random values for the register data, immediate, and call
        reg_rdata_1 = random.randint(0, 200)
        imm = random.randint(0, 200)
        call_sel = random.randint(0,8)
        calls = ["addi", "slti", "sltiu", "xori", "ori", "andi", "slli", "srli", "srai"]
        cmd = calls[call_sel]
        if cmd not in coverage:
            coverage.append(cmd)
        # Assign the values to the dut
        dut.reg_rdata_1.value = reg_rdata_1
        dut.dec_imm_type_i.value = imm
        dut.dec_branch_en = 1

        await initialize_commands(dut, cmd)
        await initialize_values(dut)
        

        # Get the results from the model
        result = imm_model(cmd, reg_rdata_1, imm)
        # Get the actual results from the simulation
        actual = int(str(dut.reg_wdata.value),2)
        # Report the data
        dut._log.info("Running Test %s", i)
        dut._log.info(f"Call is {cmd}")
        dut._log.info("Register: %s, Immediate: %s", reg_rdata_1, imm)
        dut._log.info("wdata is %s", actual)
        dut._log.info("Result should be %s", result)
        dut._log.info("____________________________________")
        
        assert actual == result, f"Branch result is incorrect: for {cmd}, with Register={reg_rdata_1} and Immediate={imm}, we got {actual} when it should be {result}"

    dut._log.info(f"Coverage: {len(coverage)} out of 9 commands tested")


