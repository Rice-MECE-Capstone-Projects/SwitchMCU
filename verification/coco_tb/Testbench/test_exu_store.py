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

def sign_extend(val, curr_bits, out_bits):
    sign_bit = (val & (1<< (curr_bits-1)) != 0)
    if (sign_bit == 0):
        return val
    else:
        return ((1<<out_bits) - 1) ^ ((1 << curr_bits) - 1) | val


def store_model(reg1, reg2, cmd, imm):
    """Model of the functionality of the store module"""
    addr = reg1 + sign_extend(imm, 12, 32)
    if cmd == "sb":
        data = (reg2 & 0xFF)
        size = 0
    elif cmd == "sh":
        data = (reg2 & 0xFFFF)
        size = 1
    elif cmd == "sw":
        data = reg2
        size = 2  
    return addr, data, 1, size

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
    dut.dec_sb.value = (cmd == "sb")
    dut.dec_sh.value = (cmd == "sh")
    dut.dec_sw.value = (cmd == "sw")

async def report_data(dut, actual_addr, actual_data, actual_en, actual_size, addr, data, en, size):
    dut._log.info("store_addr is %s when it should be %s", actual_addr, addr)
    dut._log.info("store_data is %s when it should be %s", actual_data, data)
    dut._log.info("store_size is %s when it should be %s", actual_size, size)
    dut._log.info("store_en is %s when it should be %s", actual_en, en)
    assert actual_addr == addr, f"Load result for addr is incorrect: {actual_addr} != {addr}"
    assert actual_data == data, f"Load result for data is incorrect: {actual_data} != {data}"
    assert actual_size == size, f"Load result for size is incorrect: {actual_size} != {size}"
    assert actual_en == en, f"Load result for en is incorrect: {actual_en} != {en}"

@cocotb.test()
async def exu_store_cocotb(dut):
    """Testing storing a halfword"""
    # Define our variables
    cmd = "sh"
    reg_rdata_1 = 2
    reg_rdata_2 = 3
    imm = 5

    
    # Assign values to the DUT
    dut.reg_rdata_1.value = reg_rdata_1
    dut.reg_rdata_2.value = reg_rdata_2
    dut.dec_store_en.value = 1
    dut.dec_imm_type_s.value = imm

    await initialize_cmds(dut, cmd)
    await initialize_values(dut)
    await Timer(10, units="ns")
    # await wait_for_signal_change(dut.exu_store_addr, dut.hclk)
    # Get the results from the model
    addr, data, en, size = store_model(reg_rdata_1, reg_rdata_2, cmd, imm)
    # Get the actual results from the simulation
    actual_addr = int(str(dut.exu_store_addr.value),2)
    actual_data = int(str(dut.exu_store_data.value),2)
    actual_en = int(str(dut.exu_store_en.value),2)
    actual_size = int(str(dut.exu_store_size.value),2)
    # Report the data
    report_data(dut, actual_addr, actual_data, actual_en, actual_size, addr, data, en, size)


@cocotb.test()
async def exu_reg_randomized_test(dut):
    """Test 50 random cmds with random reg1, reg2, and imm values"""
    coverage = []
    for i in range(50):
        # Initialize the values
        # Set random values for the register data, immediate, and cmd
        reg_rdata_1 = random.randint(0, 0xFFFFFFFF)
        reg_rdata_2 = random.randint(0, 0xFFFFFFFF)
        imm = random.randint(0, 0xFFF)
        cmd_sel = random.randint(0,2)
        cmds = ["sb", "sh", "sw"]
        cmd = cmds[cmd_sel]
        if cmd not in coverage:
            coverage.append(cmd)

        # Assign the values to the dut
        dut.reg_rdata_1.value = reg_rdata_1
        dut.reg_rdata_2.value = reg_rdata_2
        dut.dec_store_en.value = 1
        dut.dec_imm_type_s.value = imm

        await initialize_cmds(dut, cmd)
        await initialize_values(dut)
        await Timer(10, units="ns")
        #await wait_for_signal_change(dut.exu_store_addr, dut.hclk)
        # Get the results from the model
        addr, data, en, size = store_model(reg_rdata_1, reg_rdata_2, cmd, imm)
        # Get the actual results from the simulation
        actual_addr = int(str(dut.exu_store_addr.value),2)
        actual_data = int(str(dut.exu_store_data.value),2)
        actual_en = int(str(dut.exu_store_en.value),2)
        actual_size = int(str(dut.exu_store_size.value),2)
        # Report the data
        report_data(dut, actual_addr, actual_data, actual_en, actual_size, addr, data, en, size)

    dut._log.info(f"Coverage: {len(coverage)} out of 3 commands tested")


