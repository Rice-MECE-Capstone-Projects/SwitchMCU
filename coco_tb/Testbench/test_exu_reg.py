import cocotb
import utilities
from parameters import *
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer
import random

async def cycle_counter(dut):
    while True:
        await RisingEdge(dut.hclk)
        dut.cycle_cnt.value = (dut.cycle_cnt.value % 4) + 1

@cocotb.coroutine
async def wait_for_signal_change(signal, clk):
    prev_val = signal.value
    while True:
        await RisingEdge(clk)
        current_val = signal.value
        if prev_val != current_val:
            break
  
def twos_comp(val, bits):
    """compute the 2's complement of int value val"""
    if bits == 0:
        return 0
    if (val & (1 << (bits - 1))) != 0: # if sign bit is 1
        val = val - (1 << bits)        # compute negative value
    return val

def logical_right(val, n):
    return val >>n if val >=0 else (val +0x100000000)>>n

def arithmetic_right(val, n):
    shifted = val
    bits = 32
    sign_bit = (val & (1<< (bits-1)) != 0)
    for i in range(n):
         shifted = shifted >> 1 | sign_bit << (bits-1)
    return shifted

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
    clock = Clock(dut.hclk, 2, units="ns") # 100MHz clk signal
    cocotb.start_soon(clock.start())

    # sys reset
    dut.hrstn.value = 0
    await Timer(10, units="ns")
    dut.hrstn.value = 1

    # cycle_counter++
    dut.cycle_cnt.value = 0
    cocotb.start_soon(cycle_counter(dut))

async def initialize_cmds(dut, cmd):
    dut.dec_add.value = (cmd == "add")
    dut.dec_sub.value = (cmd == "sub")
    dut.dec_sll.value = (cmd == "sll")
    dut.dec_slt.value = (cmd == "slt")
    dut.dec_sltu.value = (cmd == "sltu")
    dut.dec_xor.value = (cmd == "xor")
    dut.dec_srl.value = (cmd == "srl")
    dut.dec_sra.value = (cmd == "sra")
    dut.dec_or.value = (cmd == "or")
    dut.dec_and.value = (cmd == "and")

@cocotb.test()
async def exu_reg_cocotb(dut):
    """Testing adding 5 + 3"""
    # Define our variables
    reg_rdata_1 = 891858892
    reg_rdata_2 = 1188499730
    cmd = "sra"
    
    # Assign values to the DUT
    dut.reg_rdata_1.value = reg_rdata_1
    dut.reg_rdata_2.value = reg_rdata_2
    dut.en.value = 1
    dut.dec_rs1.value = 1
    dut.dec_rs2.value = 2
    dut.dec_rd.value = 3
    dut.exu_stall.value = 0
    await initialize_cmds(dut, cmd)
    await initialize_values(dut)

    await wait_for_signal_change(dut.reg_wdata, dut.hclk)
    # Get the results from the model
    result = reg_model(cmd, reg_rdata_1, reg_rdata_2)
    # Get the actual results from the simulation
    actual = int(str(dut.reg_wdata.value),2)

    # Report the data
    dut._log.info("reg_wdata is     %s", bin(actual))
    dut._log.info("Result should be %s", bin(result))
    dut._log.info("shifting %s by %s", bin(reg_rdata_1), reg_rdata_2&0x1F)
    assert actual == result, f"Reg result is incorrect for cmd={cmd}, reg1={reg_rdata_1}, reg2={reg_rdata_2}: {actual} != {result}"


@cocotb.test()
async def exu_reg_randomized_test(dut):
    """Test 50 random cmds with random reg1 and reg2 values"""
    coverage = []
    for i in range(50):
        # Initialize the values
        # Set random values for the register data, immediate, and cmd
        reg_rdata_1 = random.randint(0, 0xFFFFFFFF)
        reg_rdata_2 = random.randint(0, 0xFFFFFFFF)
        cmd_sel = random.randint(0,9)
        cmds = ["add", "sub", "sll", "slt", "sltu", "xor", "srl", "sra", "or", "and"]
        cmd = cmds[cmd_sel]
        if cmd not in coverage:
            coverage.append(cmd)

        # Assign the values to the dut
        dut.reg_rdata_1.value = reg_rdata_1
        dut.reg_rdata_2.value = reg_rdata_2
        dut.en.value = 1

        await initialize_cmds(dut, cmd)
        await initialize_values(dut)
        await wait_for_signal_change(dut.reg_wdata, dut.hclk)
        
        # Get the results from the model
        result = reg_model(cmd, reg_rdata_1, reg_rdata_2)
        # Get the actual results from the simulation
        actual = int(str(dut.reg_wdata.value),2)
        
        # Report the data
        dut._log.info("Running Test %s", i)
        dut._log.info(f"Call is {cmd}")
        dut._log.info("Reg1: %s, Reg2: %s", reg_rdata_1, reg_rdata_2)
        dut._log.info("wdata is %s", actual)
        dut._log.info("Result should be %s", result)
        dut._log.info("____________________________________")
        assert actual == result, f"Reg result is incorrect for cmd={cmd}, reg1={reg_rdata_1}, reg2={reg_rdata_2}: {actual} != {result}"

    dut._log.info(f"Coverage: {len(coverage)} out of 10 commands tested")


