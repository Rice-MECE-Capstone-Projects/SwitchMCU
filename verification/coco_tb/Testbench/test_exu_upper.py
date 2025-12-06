import cocotb
import utilities
from parameters import *
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer
import random

@cocotb.coroutine
async def wait_for_signal_change(signal, clk):
    prev_val = signal.value
    while True:
        await RisingEdge(clk)
        current_val = signal.value
        if prev_val != current_val:
            break

async def cycle_counter(dut):
    while True:
        await RisingEdge(dut.hclk)
        dut.cycle_cnt.value = (dut.cycle_cnt.value % 4) + 1
  
def twos_comp(val, bits):
    """compute the 2's complement of int value val"""
    if bits == 0:
        return 0
    if (val & (1 << (bits - 1))) != 0: # if sign bit is 1
        val = val - (1 << bits)        # compute negative value
    return val

def sign_extend(val, curr_bits, out_bits):
    sign_bit = (val & (1<< (curr_bits-1)) != 0)
    if (sign_bit == 0):
        return val
    else:
        return ((1<<out_bits) - 1) ^ ((1 << curr_bits) - 1) | val


def upper_model(cmd, imm, pc):
    """Model of the functionality of the upper module"""
    if (cmd == "auipc"):
        return (imm << 12) + pc-8
    elif (cmd == "lui"):
        return (imm <<12)
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
    dut.dec_lui.value = (cmd == "lui")
    dut.dec_auipc.value = (cmd == "auipc")

@cocotb.test()
async def exu_upper_cocotb(dut):
    """Testing auipc command"""
    # Define our variables
    cmd = "auipc"
    imm = 5
    pc = 10

    
    # Assign values to the DUT
    dut.dec_upper_en.value = 1
    dut.dec_imm_type_u.value = imm
    dut.pc.value = pc

    await initialize_cmds(dut, cmd)
    await initialize_values(dut)

    await wait_for_signal_change(dut.reg_wdata, dut.hclk)
    
    # Get the results from the model
    result = upper_model(cmd, imm, pc)

    # Get the actual results from the simulation
    actual = int(str(dut.reg_wdata.value),2)
    # Report the data
    dut._log.info("reg_wdata is %s", actual)
    dut._log.info("Result should be %s", result)
    assert actual == result, f"Upper result is incorrect: {actual} != {result}"


@cocotb.test()
async def exu_upper_randomized_test(dut):
    """Test 50 random cmds with random imm and pc"""
    coverage = []
    for i in range(50):
        # Initialize the values
        # Set random values for the register data, immediate, and cmd
        imm = random.randint(0, 0xFFF)
        pc = random.randint(0, 0xFFFFFFFF)
        cmd_sel = random.randint(0,1)
        cmds = ["auipc", "lui"]
        cmd = cmds[cmd_sel]
        if cmd not in coverage:
            coverage.append(cmd)

        # Assign the values to the dut
        dut.dec_upper_en.value = 1
        dut.dec_imm_type_u.value = imm
        dut.pc.value = pc

        await initialize_cmds(dut, cmd)
        await initialize_values(dut)
        await wait_for_signal_change(dut.reg_wdata, dut.hclk)
        
        # Get the results from the model
        result = upper_model(cmd, imm, pc)

        # Get the actual results from the simulation
        actual = int(str(dut.reg_wdata.value),2)
        # Report the data
        dut._log.info("reg_wdata is %s", actual)
        dut._log.info("Result should be %s", result)
        dut._log.info("____________________________________")
        assert actual == result, f"Upper result is incorrect: {actual} != {result}"

    dut._log.info(f"Coverage: {len(coverage)} out of 2 commands tested")


