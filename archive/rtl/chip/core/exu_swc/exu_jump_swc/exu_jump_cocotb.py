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


def jump_model(dut, cmd, imm_j, imm_i, reg, pc):
    """Model of the functionality of the jump module"""
    pc = pc - 8
    if(cmd == "jal"):
        dut._log.info(f"adding {pc} + {twos_comp(imm_j, 21)}")
        return pc + twos_comp(imm_j, 21), pc+4
    elif(cmd == "jalr"):
        dut._log.info(f"adding {twos_comp(imm_i, 12)} + {reg}")
        return (twos_comp(imm_i, 12) + reg)&~0x1, pc+4

async def initialize_values(dut):
    dut.hrstn.value = 0
    await cocotb.start(generate_clock(dut))
    await cocotb.start(start_cycle_cnt(dut))
    await Timer(5, units="ns")
    dut.hrstn.value = 1
    await Timer(9, units="ns")
    await RisingEdge(dut.hclk)

async def initialize_cmds(dut, cmd):
    dut.dec_jal.value = (cmd == "jal")
    dut.dec_jalr.value = (cmd == "jalr")

@cocotb.test()
async def exu_jump_cocotb(dut):
    """Testing JALR to add 5 + 3"""
    # Define our variables
    imm_i = 5
    imm_j = 0
    reg_rdata_1 = 3
    cmd = "jalr"
    
    # Assign values to the DUT
    dut.pc.value = 10
    dut.reg_rdata_1.value = reg_rdata_1
    dut.dec_imm_type_i.value = imm_i
    dut.dec_jump_en.value = 1

    await initialize_cmds(dut, cmd)
    await initialize_values(dut)

    # Get the results from the model
    new_pc, rd = jump_model(dut, cmd, imm_j, imm_i, reg_rdata_1, 10) 
    # Get the actual results from the simulation
    actual = int(str(dut.pc_wdata.value),2)
    # Report the data
    dut._log.info("pc_write is     %s", actual)
    dut._log.info("Result should be %s", new_pc)
    assert actual == new_pc, f"Jump result is incorrect: {actual} != {result}"

@cocotb.test()
async def exu_jump_randomized_test(dut):
    """Test 20 random calls with random reg and imm values"""
    dut.pc.value = 0
    coverage = []
    for i in range(50):
        # Initialize the values
        # Set random values for the register data, immediate, and call
        reg_rdata_1 = random.randint(0, 0xFFF) & (0xFFF)
        imm_i = random.randint(0, 0xFFF) & (0xFFF)
        imm_j = random.randint(0, 2097151) & (2097151)
        dut._log.info(f"Pre-sign extension i :{imm_i}, post extension: {twos_comp(imm_i, 12)}")
        call_sel = random.randint(0,1)
        calls = ["jal", "jalr"]
        cmd = calls[call_sel]
        if cmd not in coverage:
            coverage.append(cmd)

        # Assign the values to the dut
        dut.reg_rdata_1.value = reg_rdata_1
        dut.dec_imm_type_i.value = imm_i
        dut.dec_imm_type_j.value = imm_j
        dut.dec_jump_en.value = 1

        await initialize_cmds(dut, cmd)
        await initialize_values(dut)
        

        # Get the results from the model
        result, rd = jump_model(dut, cmd, imm_j, imm_i, reg_rdata_1, int(str(dut.pc.value), 2))
        # Get the actual results from the simulation
        actual = int(str(dut.pc_wdata.value),2)
        actual = twos_comp(actual, 32)
        # Report the data
        dut._log.info("Running Test %s", i)
        dut._log.info(f"Call is {cmd}")
        dut._log.info("Register: %s, I-Immediate: %s, J-Immediate: %s", reg_rdata_1, imm_i, imm_j)
        dut._log.info("pc_wdata is %s", actual)
        dut._log.info("Result should be %s", result)
        dut._log.info("____________________________________")
        
        assert actual == result, f"Branch result is incorrect: for {cmd}, with Register={reg_rdata_1}, I-Immediate={twos_comp(imm_i, 12)}, and J-Immediate={twos_comp(imm_j, 21)} we got {actual} when it should be {result}"

    dut._log.info(f"Coverage: {len(coverage)} out of 2 commands tested")


