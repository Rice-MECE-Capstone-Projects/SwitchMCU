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

async def initialize_commands(dut, cmd):
    dut.dec_beq.value = (cmd == "beq")
    dut.dec_bne.value = (cmd == "bne")
    dut.dec_blt.value = (cmd == "blt")
    dut.dec_bltu.value = (cmd == "bltu")
    dut.dec_bge.value = (cmd == "bge")
    dut.dec_bgeu.value = (cmd == "bgeu")

    
def twos_comp(val, bits):
    """compute the 2's complement of int value val"""
    if (val & (1 << (bits - 1))) != 0: # if sign bit is set e.g., 8bit: 128-255
        val = val - (1 << bits)        # compute negative value
    return val   

def sign_extend(val, curr_bits, out_bits):
    sign_bit = (val & (1<< (curr_bits-1)) != 0)
    if (sign_bit == 0):
        return val
    else:
        return ((1<<out_bits) - 1) ^ ((1 << curr_bits) - 1) | val

@cocotb.coroutine
async def wait_for_signal_change(signal, clk):
    prev_val = signal.value
    while True:
        await RisingEdge(clk)
        current_val = signal.value
        if prev_val != current_val:
            break

@cocotb.coroutine
async def wait_for_cycle_count(cycle_count, desired_val, clk):
    while True:
        await RisingEdge(clk)
        if int(str(cycle_count.value), 2) == desired_val:
            break

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
    
async def initialize_values(dut):
    clock = Clock(dut.hclk, 2, units="ns") # 100MHz clk signal
    cocotb.start_soon(clock.start())

    # cycle_counter++
    dut.cycle_cnt.value = 0
    cocotb.start_soon(cycle_counter(dut))

    # sys reset
    dut.hrstn.value = 0
    await Timer(10, units="ns")
    dut.hrstn.value = 1

@cocotb.test()
async def exu_branch_cocotb(dut):
    """Testing BLTU, where rs1 is less than to rs2, branch by the imm_type_b"""
    # Define our variables
    reg_rdata_1 = 1485475987
    reg_rdata_2 = 2140999007
    imm = 2606
    cmd = "bltu"

    # Assign values to the DUT
    dut.pc.value = 0
    dut.reg_rdata_1.value = reg_rdata_1
    dut.reg_rdata_2.value = reg_rdata_2
    dut.dec_imm_type_b.value = imm
    dut.pc.value = 10
    dut.dec_branch_en.value = 1
    await initialize_commands(dut, cmd)
    await initialize_values(dut)

    # Get the results from the model
    await wait_for_signal_change(dut.pc_wdata, dut.hclk)
    result = branch_model(reg_rdata_1, reg_rdata_2, imm, int(str(dut.pc.value), 2), cmd)

    # Get the actual results from the simulation
    actual = int(str(dut.pc_wdata.value),2)

    # Report the data
    dut._log.info("pc_wdata is %s", actual)
    dut._log.info("Result should be %s", result)
    assert actual == result, f"Branch result is incorrect: {actual} != {result}"

@cocotb.test()
async def exu_branch_randomized_test(dut):
    """Test 50 random calls with random reg and imm values"""
    dut.pc.value = 0
    coverage = []
    await initialize_values(dut)
    for i in range(50):
        # Set random values for the register data, immediate, and call
        reg_rdata_1 = random.randint(0, 0xFFFFFFFF)
        reg_rdata_2 = random.randint(0, 0xFFFFFFFF)
        imm = random.randint(0, 0xFFF)
        cmd_sel = random.randint(0,5)
        cmds = ["beq", "bne", "blt", "bltu", "bge", "bgeu"]
        cmd = cmds[cmd_sel]
        if cmd not in coverage:
            coverage.append(cmd)

        # Assign the values to the dut
        dut.reg_rdata_1.value = reg_rdata_1
        dut.reg_rdata_2.value = reg_rdata_2
        dut.dec_imm_type_b.value = imm
        dut.dec_branch_en.value = 1
        await initialize_commands(dut, cmd)


        await Timer(4, "ns")
        await wait_for_cycle_count(dut.cycle_cnt, 4, dut.hclk)

        # Get the results from the model
        result = branch_model(reg_rdata_1, reg_rdata_2, imm, int(str(dut.pc.value), 2), cmd)
        # Get the actual results from the simulation
        actual = int(str(dut.pc_wdata.value),2)
        
        # Report the data
        dut._log.info("Running Test %s", i)
        dut._log.info(f"Call is {cmd}")
        dut._log.info("Data1 = %s, Data2 = %s", reg_rdata_1, reg_rdata_2)
        dut._log.info("Imm = %s", imm)
        dut._log.info("pc_wdata is %s", actual)
        dut._log.info("Result should be %s", result)
        dut._log.info("____________________________________")
        
        assert actual == result, f"Branch result is incorrect: for {cmd}, with X={reg_rdata_1} and Y={reg_rdata_2} and immediate {imm}, starting at pc={dut.pc.value}, we got {actual} when it should be {result}"

    dut._log.info(f"Coverage: {len(coverage)} out of 6 commands tested")



