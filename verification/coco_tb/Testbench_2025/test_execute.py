import cocotb
import utilities
from parameters import *
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer
import random
import math

async def cycle_counter(dut):
    while True:
        await RisingEdge(dut.hclk)
        dut.cycle_cnt.value = (dut.cycle_cnt.value % 4) + 1

    
def twos_comp(val, bits):
    """compute the 2's complement of int value val"""
    if (val & (1 << (bits - 1))) != 0: # if sign bit is set e.g., 8bit: 128-255
        val = val - (1 << bits)        # compute negative value
    return val   

def logical_right(val, n):
    return val >>n if val >=0 else (val +0x10000000)>>n

def arithmetic_right(val, n):
    shifted = val
    bits = 32
    sign_bit = (val & (1<< (bits-1)) != 0)
    for i in range(n):
         shifted = shifted >> 1 | sign_bit << (bits-1)
    return shifted

def sign_extend(dut, val, curr_bits, out_bits):
    sign_bit = (val & (1<< (curr_bits-1)) != 0)
    if (sign_bit == 0):
        return val
    else:
        return ((1<<out_bits) - 1) ^ ((1 << curr_bits) - 1) | val
    
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

@cocotb.coroutine
async def wait_for_signal_change(signal, clk):
    prev_val = signal.value
    while True:
        await RisingEdge(clk)
        current_val = signal.value
        if prev_val != current_val:
            break

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
async def test_addi(dut):
    """Testing with random data"""
    # Define our variables
    reg_rdata_1 = random.randint(-2**30, 2**30-1)
    imm_data = random.randint(-2**30, 2**30-1)
    addi = 0x0000_0000_0000_0400
    imm_ins = 0x0000_0000
    cmd = "addi"
    
    # Assign values to the DUT
    dut.instruction = imm_ins
    dut.pc_i.value = 0
    dut.operand1_pi.value = reg_rdata_1
    dut.operand2_pi.value = random.randint(-2**30, 2**30-1)
    dut.imm_i.value = imm_data
    dut.rd_i.value = 2
    dut.rs1_i.value = 0
    dut.rs2_i.value = 1
    dut.Single_Instruction_i.value = addi

    # Start the 100MHz clk signal
    clock = Clock(dut.i_clk, 10, units="ns")
    cocotb.start_soon(clock.start())

    # Sys reset using i_en
    dut.i_en.value = 0  # De-assert enable to simulate reset
    await Timer(10, units="ns")
    dut.i_en.value = 1  # Assert enable to bring the module out of reset

    # await wait_for_signal_change(dut.alu_result_1, dut.i_clk)
    # Get the results from the model
    result = reg_rdata_1 + imm_data
    # Get the actual results from the simulation
    actual = twos_comp(dut.alu_result_1.value, 32)
    # Report the data
    dut._log.info("reg_wdata is     %s", actual)
    dut._log.info("Result should be %s", result)
    dut._log.info("For reg=%s, imm=%s", reg_rdata_1, imm_data)
    assert actual == result, f"ADDI result is incorrect: {actual} != {result}"

@cocotb.test()
async def test_xori(dut):
    """Testing with random data"""
    # Define our variables
    reg_rdata_1 = random.randint(0, 2**32-1)
    imm_data = random.randint(0, 2**32-1)
    xori = 0x0000_0000_0000_0800
    imm_ins = 0x0000_0000
    
    # Assign values to the DUT
    dut.instruction = imm_ins
    dut.pc_i.value = 0
    dut.operand1_pi.value = reg_rdata_1
    dut.operand2_pi.value = random.randint(0, 2**32-1)
    dut.imm_i.value = imm_data
    dut.rd_i.value = 2
    dut.rs1_i.value = 0
    dut.rs2_i.value = 1
    dut.Single_Instruction_i.value = xori

    # Start the 100MHz clk signal
    clock = Clock(dut.i_clk, 10, units="ns")
    cocotb.start_soon(clock.start())

    # Sys reset using i_en
    dut.i_en.value = 0  # De-assert enable to simulate reset
    await Timer(10, units="ns")
    dut.i_en.value = 1  # Assert enable to bring the module out of reset

    # await wait_for_signal_change(dut.alu_result_1, dut.i_clk)
    # Get the results from the model
    result = reg_rdata_1 ^ imm_data
    # Get the actual results from the simulation
    actual = int(str(dut.alu_result_1.value),2)
    # Report the data
    dut._log.info("reg_wdata is     %s", actual)
    dut._log.info("Result should be %s", result)
    dut._log.info("For reg=%s, imm=%s", reg_rdata_1, imm_data)
    assert actual == result, f"XORI result is incorrect: {actual} != {result}"

@cocotb.test()
async def test_ori(dut):
    """Testing with random data"""
    # Define our variables
    reg_rdata_1 = random.randint(0, 2**32-1)
    imm_data = random.randint(0, 2**32-1)
    ori = 0x0000_0000_0000_1000
    imm_ins = 0x0000_0000
    
    # Assign values to the DUT
    dut.instruction = imm_ins
    dut.pc_i.value = 0
    dut.operand1_pi.value = reg_rdata_1
    dut.operand2_pi.value = random.randint(0, 2**32-1)
    dut.imm_i.value = imm_data
    dut.rd_i.value = 2
    dut.rs1_i.value = 0
    dut.rs2_i.value = 1
    dut.Single_Instruction_i.value = ori

    # Start the 100MHz clk signal
    clock = Clock(dut.i_clk, 10, units="ns")
    cocotb.start_soon(clock.start())

    # Sys reset using i_en
    dut.i_en.value = 0  # De-assert enable to simulate reset
    await Timer(10, units="ns")
    dut.i_en.value = 1  # Assert enable to bring the module out of reset

    # await wait_for_signal_change(dut.alu_result_1, dut.i_clk)
    # Get the results from the model
    result = reg_rdata_1 | imm_data
    # Get the actual results from the simulation
    actual = int(str(dut.alu_result_1.value),2)
    # Report the data
    dut._log.info("reg_wdata is     %s", actual)
    dut._log.info("Result should be %s", result)
    dut._log.info("For reg=%s, imm=%s", reg_rdata_1, imm_data)
    assert actual == result, f"ORI result is incorrect: {actual} != {result}"

@cocotb.test()
async def test_andi(dut):
    """Testing with random data"""
    # Define our variables
    reg_rdata_1 = random.randint(0, 2**32-1)
    imm_data = random.randint(0, 2**32-1)
    andi = 0x0000_0000_0000_2000
    imm_ins = 0x0000_0000
    cmd = "andi"
    
    # Assign values to the DUT
    dut.instruction = imm_ins
    dut.pc_i.value = 0
    dut.operand1_pi.value = reg_rdata_1
    dut.operand2_pi.value = random.randint(0, 2**32-1)
    dut.imm_i.value = imm_data
    dut.rd_i.value = 2
    dut.rs1_i.value = 0
    dut.rs2_i.value = 1
    dut.Single_Instruction_i.value = andi

    # Start the 100MHz clk signal
    clock = Clock(dut.i_clk, 10, units="ns")
    cocotb.start_soon(clock.start())

    # Sys reset using i_en
    dut.i_en.value = 0  # De-assert enable to simulate reset
    await Timer(10, units="ns")
    dut.i_en.value = 1  # Assert enable to bring the module out of reset

    # await wait_for_signal_change(dut.alu_result_1, dut.i_clk)
    # Get the results from the model
    result = reg_rdata_1 & imm_data
    # Get the actual results from the simulation
    actual = int(str(dut.alu_result_1.value),2)
    # Report the data
    dut._log.info("reg_wdata is     %s", actual)
    dut._log.info("Result should be %s", result)
    dut._log.info("For reg=%s, imm=%s", reg_rdata_1, imm_data)
    assert actual == result, f"ANDI result is incorrect: {actual} != {result}"

@cocotb.test()
async def test_slli(dut):
    """Testing with random data"""
    # Define our variables
    reg_rdata_1 = random.randint(0, 2**32-1)
    imm_data = random.randint(0, 31 - math.floor(math.log2(reg_rdata_1)))
    slli = 0x0000_0000_0000_4000
    imm_ins = 0x0000_0000
    
    # Assign values to the DUT
    dut.instruction = imm_ins
    dut.pc_i.value = 0
    dut.operand1_pi.value = reg_rdata_1
    dut.operand2_pi.value = random.randint(0, 2**32-1)
    dut.imm_i.value = imm_data
    dut.rd_i.value = 2
    dut.rs1_i.value = 0
    dut.rs2_i.value = 1
    dut.Single_Instruction_i.value = slli

    # Start the 100MHz clk signal
    clock = Clock(dut.i_clk, 10, units="ns")
    cocotb.start_soon(clock.start())

    # Sys reset using i_en
    dut.i_en.value = 0  # De-assert enable to simulate reset
    await Timer(10, units="ns")
    dut.i_en.value = 1  # Assert enable to bring the module out of reset

    # await wait_for_signal_change(dut.alu_result_1, dut.i_clk)
    # Get the results from the model
    result = reg_rdata_1 << imm_data
    # Get the actual results from the simulation
    actual = int(str(dut.alu_result_1.value),2)
    # Report the data
    dut._log.info("reg_wdata is     %s", actual)
    dut._log.info("Result should be %s", result)
    dut._log.info("For reg=%s, imm=%s", reg_rdata_1, imm_data)
    assert actual == result, f"SLLI result is incorrect: {actual} != {result}"

@cocotb.test()
async def test_srli(dut):
    """Testing with random data"""
    # Define our variables
    reg_rdata_1 = random.randint(0, 2**32-1)
    imm_data = random.randint(0,31)
    srli = 0x0000_0000_0000_8000
    imm_ins = 0x0000_0000
    
    # Assign values to the DUT
    dut.instruction = imm_ins
    dut.pc_i.value = 0
    dut.operand1_pi.value = reg_rdata_1
    dut.operand2_pi.value = random.randint(0, 2**32-1)
    dut.imm_i.value = imm_data
    dut.rd_i.value = 2
    dut.rs1_i.value = 0
    dut.rs2_i.value = 1
    dut.Single_Instruction_i.value = srli

    # Start the 100MHz clk signal
    clock = Clock(dut.i_clk, 10, units="ns")
    cocotb.start_soon(clock.start())

    # Sys reset using i_en
    dut.i_en.value = 0  # De-assert enable to simulate reset
    await Timer(10, units="ns")
    dut.i_en.value = 1  # Assert enable to bring the module out of reset

    # await wait_for_signal_change(dut.alu_result_1, dut.i_clk)
    # Get the results from the model
    result = reg_rdata_1 >> imm_data
    # Get the actual results from the simulation
    actual = int(str(dut.alu_result_1.value),2)
    # Report the data
    dut._log.info("reg_wdata is     %s", actual)
    dut._log.info("Result should be %s", result)
    dut._log.info("For reg=%s, imm=%s", reg_rdata_1, imm_data)
    assert actual == result, f"SRLI result is incorrect: {actual} != {result}"

@cocotb.test()
async def test_srai(dut):
    """Testing with random data"""
    # Define our variables
    reg_rdata_1 = random.randint(-2**31, 2**31-1)
    imm_data = random.randint(0, 31)
    srai = 0x0000_0000_0001_0000
    imm_ins = 0x0000_0000
    
    # Assign values to the DUT
    dut.instruction = imm_ins
    dut.pc_i.value = 0
    dut.operand1_pi.value = reg_rdata_1
    dut.operand2_pi.value = random.randint(-2**31, 2**31-1)
    dut.imm_i.value = imm_data
    dut.rd_i.value = 2
    dut.rs1_i.value = 0
    dut.rs2_i.value = 1
    dut.Single_Instruction_i.value = srai

    # Start the 100MHz clk signal
    clock = Clock(dut.i_clk, 10, units="ns")
    cocotb.start_soon(clock.start())

    # Sys reset using i_en
    dut.i_en.value = 0  # De-assert enable to simulate reset
    await Timer(10, units="ns")
    dut.i_en.value = 1  # Assert enable to bring the module out of reset

    # await wait_for_signal_change(dut.alu_result_1, dut.i_clk)
    # Get the results from the model
    result = reg_rdata_1 >> imm_data
    # Get the actual results from the simulation
    actual = dut.alu_result_1.value.signed_integer
    # Report the data
    dut._log.info("reg_wdata is     %s", actual)
    dut._log.info("Result should be %s", result)
    dut._log.info("For reg=%s, imm=%s", reg_rdata_1, imm_data)
    assert actual == result, f"SRAI result is incorrect: {actual} != {result}"

@cocotb.test()
async def test_slti(dut):
    """Testing with random data"""
    # Define our variables
    reg_rdata_1 = random.randint(0, 2**32-1)
    imm_data = random.randint(0, 2**32-1)
    slti = 0x0000_0000_0002_0000
    imm_ins = 0x0000_0000

    # Assign values to the DUT
    dut.instruction = imm_ins
    dut.pc_i.value = 0
    dut.operand1_pi.value = reg_rdata_1
    dut.operand2_pi.value = random.randint(0, 2**32-1)
    dut.imm_i.value = imm_data
    dut.rd_i.value = 2
    dut.rs1_i.value = 0
    dut.rs2_i.value = 1
    dut.Single_Instruction_i.value = slti

    # Start the 100MHz clk signal
    clock = Clock(dut.i_clk, 10, units="ns")
    cocotb.start_soon(clock.start())

    # Sys reset using i_en
    dut.i_en.value = 0  # De-assert enable to simulate reset
    await Timer(10, units="ns")
    dut.i_en.value = 1  # Assert enable to bring the module out of reset

    # await wait_for_signal_change(dut.alu_result_1, dut.i_clk)
    # Get the results from the model
    result = int(reg_rdata_1 < imm_data)
    # Get the actual results from the simulation
    actual = int(str(dut.alu_result_1.value),2)
    # Report the data
    dut._log.info("reg_wdata is     %s", actual)
    dut._log.info("Result should be %s", result)
    dut._log.info("For reg=%s, imm=%s", reg_rdata_1, imm_data)
    assert actual == result, f"SLTI result is incorrect: {actual} != {result}"

@cocotb.test()
async def test_sltiu(dut):
    """Testing with random data"""
    # Define our variables
    reg_rdata_1 = random.randint(-2**31, 2**31-1)
    imm_data = random.randint(-2**31, 2**31-1)
    sltiu = 0x0000_0000_0004_0000
    imm_ins = 0x0000_0000

    # Assign values to the DUT
    dut.instruction = imm_ins
    dut.pc_i.value = 0
    dut.operand1_pi.value = reg_rdata_1
    dut.operand2_pi.value = random.randint(-2**31, 2**31-1)
    dut.imm_i.value = imm_data
    dut.rd_i.value = 2
    dut.rs1_i.value = 0
    dut.rs2_i.value = 1
    dut.Single_Instruction_i.value = sltiu

    # Start the 100MHz clk signal
    clock = Clock(dut.i_clk, 10, units="ns")
    cocotb.start_soon(clock.start())

    # Sys reset using i_en
    dut.i_en.value = 0  # De-assert enable to simulate reset
    await Timer(10, units="ns")
    dut.i_en.value = 1  # Assert enable to bring the module out of reset

    # await wait_for_signal_change(dut.alu_result_1, dut.i_clk)
    # Get the results from the model
    result = int(reg_rdata_1 < imm_data)
    # Get the actual results from the simulation
    actual = int(str(dut.alu_result_1.value),2)
    # Report the data
    dut._log.info("reg_wdata is     %s", actual)
    dut._log.info("Result should be %s", result)
    dut._log.info("For reg=%s, imm=%s", reg_rdata_1, imm_data)
    assert actual == result, f"SLTIU result is incorrect: {actual} != {result}"

@cocotb.test()
async def test_add(dut):
    """Testing with random data"""
    # Define our variables
    reg_rdata_1 = random.randint(-2**30, 2**30-1)
    reg_rdata_2 = random.randint(-2**30, 2**30-1)
    imm_data = random.randint(-2**31, 2**31-1)
    add = 0x0000_0000_0000_0001
    imm_ins = 0x0000_0000

    # Assign values to the DUT
    dut.instruction = imm_ins
    dut.pc_i.value = 0
    dut.operand1_pi.value = reg_rdata_1
    dut.operand2_pi.value = reg_rdata_2
    dut.imm_i.value = imm_data
    dut.rd_i.value = 2
    dut.rs1_i.value = 0
    dut.rs2_i.value = 1
    dut.Single_Instruction_i.value = add

    # Start the 100MHz clk signal
    clock = Clock(dut.i_clk, 10, units="ns")
    cocotb.start_soon(clock.start())

    # Sys reset using i_en
    dut.i_en.value = 0  # De-assert enable to simulate reset
    await Timer(10, units="ns")
    dut.i_en.value = 1  # Assert enable to bring the module out of reset

    # await wait_for_signal_change(dut.alu_result_1, dut.i_clk)
    # Get the results from the model
    result = reg_rdata_1 + reg_rdata_2
    # Get the actual results from the simulation
    actual = twos_comp(dut.alu_result_1.value, 32)
    # Report the data
    dut._log.info("reg_wdata is     %s", actual)
    dut._log.info("Result should be %s", result)
    dut._log.info("For reg1=%s, reg2=%s", reg_rdata_1, reg_rdata_2)
    assert actual == result, f"ADD result is incorrect: {actual} != {result}"

@cocotb.test()
async def test_sub(dut):
    """Testing with random data"""
    # Define our variables
    reg_rdata_1 = random.randint(-2**30, 2**30-1)
    reg_rdata_2 = random.randint(-2**30, 2**30-1)
    imm_data = random.randint(-2**31, 2**31-1)
    sub = 0x0000_0000_0000_0002
    imm_ins = 0x0000_0000

    # Assign values to the DUT
    dut.instruction = imm_ins
    dut.pc_i.value = 0
    dut.operand1_pi.value = reg_rdata_1
    dut.operand2_pi.value = reg_rdata_2
    dut.imm_i.value = imm_data
    dut.rd_i.value = 2
    dut.rs1_i.value = 0
    dut.rs2_i.value = 1
    dut.Single_Instruction_i.value = sub

    # Start the 100MHz clk signal
    clock = Clock(dut.i_clk, 10, units="ns")
    cocotb.start_soon(clock.start())

    # Sys reset using i_en
    dut.i_en.value = 0  # De-assert enable to simulate reset
    await Timer(10, units="ns")
    dut.i_en.value = 1  # Assert enable to bring the module out of reset

    # await wait_for_signal_change(dut.alu_result_1, dut.i_clk)
    # Get the results from the model
    result = reg_rdata_1 - reg_rdata_2
    # Get the actual results from the simulation
    actual = twos_comp(dut.alu_result_1.value, 32)
    # Report the data
    dut._log.info("reg_wdata is     %s", actual)
    dut._log.info("Result should be %s", result)
    dut._log.info("For reg1=%s, reg2=%s", reg_rdata_1, reg_rdata_2)
    assert actual == result, f"SUB result is incorrect: {actual} != {result}"

@cocotb.test()
async def test_xor(dut):
    """Testing with random data"""
    # Define our variables
    reg_rdata_1 = random.randint(0, 2**32-1)
    reg_rdata_2 = random.randint(0, 2**32-1)
    imm_data = random.randint(0, 2**32-1)
    xor = 0x0000_0000_0000_0004
    imm_ins = 0x0000_0000

    # Assign values to the DUT
    dut.instruction = imm_ins
    dut.pc_i.value = 0
    dut.operand1_pi.value = reg_rdata_1
    dut.operand2_pi.value = reg_rdata_2
    dut.imm_i.value = imm_data
    dut.rd_i.value = 2
    dut.rs1_i.value = 0
    dut.rs2_i.value = 1
    dut.Single_Instruction_i.value = xor

    # Start the 100MHz clk signal
    clock = Clock(dut.i_clk, 10, units="ns")
    cocotb.start_soon(clock.start())

    # Sys reset using i_en
    dut.i_en.value = 0  # De-assert enable to simulate reset
    await Timer(10, units="ns")
    dut.i_en.value = 1  # Assert enable to bring the module out of reset

    # await wait_for_signal_change(dut.alu_result_1, dut.i_clk)
    # Get the results from the model
    result = reg_rdata_1 ^ reg_rdata_2
    # Get the actual results from the simulation
    actual = int(dut.alu_result_1.value)
    # Report the data
    dut._log.info("reg_wdata is     %s", actual)
    dut._log.info("Result should be %s", result)
    dut._log.info("For reg1=%s, reg2=%s", reg_rdata_1, reg_rdata_2)
    assert actual == result, f"XOR result is incorrect: {actual} != {result}"

@cocotb.test()
async def test_or(dut):
    """Testing with random data"""
    # Define our variables
    reg_rdata_1 = random.randint(0, 2**32-1)
    reg_rdata_2 = random.randint(0, 2**32-1)
    imm_data = random.randint(0, 2**32-1)
    or_test = 0x0000_0000_0000_0008
    imm_ins = 0x0000_0000

    # Assign values to the DUT
    dut.instruction = imm_ins
    dut.pc_i.value = 0
    dut.operand1_pi.value = reg_rdata_1
    dut.operand2_pi.value = reg_rdata_2
    dut.imm_i.value = imm_data
    dut.rd_i.value = 2
    dut.rs1_i.value = 0
    dut.rs2_i.value = 1
    dut.Single_Instruction_i.value = or_test

    # Start the 100MHz clk signal
    clock = Clock(dut.i_clk, 10, units="ns")
    cocotb.start_soon(clock.start())

    # Sys reset using i_en
    dut.i_en.value = 0  # De-assert enable to simulate reset
    await Timer(10, units="ns")
    dut.i_en.value = 1  # Assert enable to bring the module out of reset

    # await wait_for_signal_change(dut.alu_result_1, dut.i_clk)
    # Get the results from the model
    result = reg_rdata_1 | reg_rdata_2
    # Get the actual results from the simulation
    actual = int(dut.alu_result_1.value)
    # Report the data
    dut._log.info("reg_wdata is     %s", actual)
    dut._log.info("Result should be %s", result)
    dut._log.info("For reg1=%s, reg2=%s", reg_rdata_1, reg_rdata_2)
    assert actual == result, f"OR result is incorrect: {actual} != {result}"

@cocotb.test()
async def test_and(dut):
    """Testing with random data"""
    # Define our variables
    reg_rdata_1 = random.randint(0, 2**32-1)
    reg_rdata_2 = random.randint(0, 2**32-1)
    imm_data = random.randint(0, 2**32-1)
    and_test = 0x0000_0000_0000_0010
    imm_ins = 0x0000_0000

    # Assign values to the DUT
    dut.instruction = imm_ins
    dut.pc_i.value = 0
    dut.operand1_pi.value = reg_rdata_1
    dut.operand2_pi.value = reg_rdata_2
    dut.imm_i.value = imm_data
    dut.rd_i.value = 2
    dut.rs1_i.value = 0
    dut.rs2_i.value = 1
    dut.Single_Instruction_i.value = and_test

    # Start the 100MHz clk signal
    clock = Clock(dut.i_clk, 10, units="ns")
    cocotb.start_soon(clock.start())

    # Sys reset using i_en
    dut.i_en.value = 0  # De-assert enable to simulate reset
    await Timer(10, units="ns")
    dut.i_en.value = 1  # Assert enable to bring the module out of reset

    # await wait_for_signal_change(dut.alu_result_1, dut.i_clk)
    # Get the results from the model
    result = reg_rdata_1 & reg_rdata_2
    # Get the actual results from the simulation
    actual = int(dut.alu_result_1.value)
    # Report the data
    dut._log.info("reg_wdata is     %s", actual)
    dut._log.info("Result should be %s", result)
    dut._log.info("For reg1=%s, reg2=%s", reg_rdata_1, reg_rdata_2)
    assert actual == result, f"AND result is incorrect: {actual} != {result}"

@cocotb.test()
async def test_sll(dut):
    """Testing with random data"""
    # Define our variables
    reg_rdata_1 = random.randint(0, 2**32-1)
    reg_rdata_2 = random.randint(0, 31 - math.floor(math.log2(reg_rdata_1)))
    imm_data = random.randint(0, 2**32-1)
    sll = 0x0000_0000_0000_0020
    imm_ins = 0x0000_0000

    # Assign values to the DUT
    dut.instruction = imm_ins
    dut.pc_i.value = 0
    dut.operand1_pi.value = reg_rdata_1
    dut.operand2_pi.value = reg_rdata_2
    dut.imm_i.value = imm_data
    dut.rd_i.value = 2
    dut.rs1_i.value = 0
    dut.rs2_i.value = 1
    dut.Single_Instruction_i.value = sll

    # Start the 100MHz clk signal
    clock = Clock(dut.i_clk, 10, units="ns")
    cocotb.start_soon(clock.start())

    # Sys reset using i_en
    dut.i_en.value = 0  # De-assert enable to simulate reset
    await Timer(10, units="ns")
    dut.i_en.value = 1  # Assert enable to bring the module out of reset

    # await wait_for_signal_change(dut.alu_result_1, dut.i_clk)
    # Get the results from the model
    result = reg_rdata_1 << reg_rdata_2
    # Get the actual results from the simulation
    actual = int(dut.alu_result_1.value)
    # Report the data
    dut._log.info("reg_wdata is     %s", actual)
    dut._log.info("Result should be %s", result)
    dut._log.info("For reg1=%s, reg2=%s", reg_rdata_1, reg_rdata_2)
    assert actual == result, f"SLL result is incorrect: {actual} != {result}"

@cocotb.test()
async def test_srl(dut):
    """Testing with random data"""
    # Define our variables
    reg_rdata_1 = random.randint(0, 2**32-1)
    reg_rdata_2 = random.randint(0, 31)
    imm_data = random.randint(0, 2**32-1)
    srl = 0x0000_0000_0000_0040
    imm_ins = 0x0000_0000

    # Assign values to the DUT
    dut.instruction = imm_ins
    dut.pc_i.value = 0
    dut.operand1_pi.value = reg_rdata_1
    dut.operand2_pi.value = reg_rdata_2
    dut.imm_i.value = imm_data
    dut.rd_i.value = 2
    dut.rs1_i.value = 0
    dut.rs2_i.value = 1
    dut.Single_Instruction_i.value = srl

    # Start the 100MHz clk signal
    clock = Clock(dut.i_clk, 10, units="ns")
    cocotb.start_soon(clock.start())

    # Sys reset using i_en
    dut.i_en.value = 0  # De-assert enable to simulate reset
    await Timer(10, units="ns")
    dut.i_en.value = 1  # Assert enable to bring the module out of reset

    # await wait_for_signal_change(dut.alu_result_1, dut.i_clk)
    # Get the results from the model
    result = reg_rdata_1 >> reg_rdata_2
    # Get the actual results from the simulation
    actual = int(dut.alu_result_1.value)
    # Report the data
    dut._log.info("reg_wdata is     %s", actual)
    dut._log.info("Result should be %s", result)
    dut._log.info("For reg1=%s, reg2=%s", reg_rdata_1, reg_rdata_2)
    assert actual == result, f"SRL result is incorrect: {actual} != {result}"

@cocotb.test()
async def test_sra(dut):
    """Testing with random data"""
    # Define our variables
    reg_rdata_1 = random.randint(-2**31, 2**31-1)
    reg_rdata_2 = random.randint(0, 31)
    imm_data = random.randint(-2**31, 2**31-1)
    sra = 0x0000_0000_0000_0080
    imm_ins = 0x0000_0000

    # Assign values to the DUT
    dut.instruction = imm_ins
    dut.pc_i.value = 0
    dut.operand1_pi.value = reg_rdata_1
    dut.operand2_pi.value = reg_rdata_2
    dut.imm_i.value = imm_data
    dut.rd_i.value = 2
    dut.rs1_i.value = 0
    dut.rs2_i.value = 1
    dut.Single_Instruction_i.value = sra

    # Start the 100MHz clk signal
    clock = Clock(dut.i_clk, 10, units="ns")
    cocotb.start_soon(clock.start())

    # Sys reset using i_en
    dut.i_en.value = 0  # De-assert enable to simulate reset
    await Timer(10, units="ns")
    dut.i_en.value = 1  # Assert enable to bring the module out of reset

    # await wait_for_signal_change(dut.alu_result_1, dut.i_clk)
    # Get the results from the model
    result = arithmetic_right(reg_rdata_1, reg_rdata_2)
    # Get the actual results from the simulation
    actual = dut.alu_result_1.value.signed_integer
    # Report the data
    dut._log.info("reg_wdata is     %s", actual)
    dut._log.info("Result should be %s", result)
    dut._log.info("For reg1=%s, reg2=%s", reg_rdata_1, reg_rdata_2)
    assert actual == result, f"SRA result is incorrect: {actual} != {result}"

@cocotb.test()
async def test_slt(dut):
    """Testing with random data"""
    # Define our variables
    reg_rdata_1 = random.randint(0, 2**32-1)
    reg_rdata_2 = random.randint(0, 2**32-1)
    imm_data = random.randint(0, 2**32-1)
    slt = 0x0000_0000_0000_0100
    imm_ins = 0x0000_0000

    # Assign values to the DUT
    dut.instruction = imm_ins
    dut.pc_i.value = 0
    dut.operand1_pi.value = reg_rdata_1
    dut.operand2_pi.value = reg_rdata_2
    dut.imm_i.value = imm_data
    dut.rd_i.value = 2
    dut.rs1_i.value = 0
    dut.rs2_i.value = 1
    dut.Single_Instruction_i.value = slt

    # Start the 100MHz clk signal
    clock = Clock(dut.i_clk, 10, units="ns")
    cocotb.start_soon(clock.start())

    # Sys reset using i_en
    dut.i_en.value = 0  # De-assert enable to simulate reset
    await Timer(10, units="ns")
    dut.i_en.value = 1  # Assert enable to bring the module out of reset

    # await wait_for_signal_change(dut.alu_result_1, dut.i_clk)
    # Get the results from the model
    result = int(reg_rdata_1 < reg_rdata_2)
    # Get the actual results from the simulation
    actual = int(str(dut.alu_result_1.value),2)
    # Report the data
    dut._log.info("reg_wdata is     %s", actual)
    dut._log.info("Result should be %s", result)
    dut._log.info("For reg=%s, regs=%s", reg_rdata_1, reg_rdata_2)
    assert actual == result, f"SLT result is incorrect: {actual} != {result}"

@cocotb.test()
async def test_sltu(dut):
    """Testing with random data"""
    # Define our variables
    reg_rdata_1 = random.randint(-2**31, 2**31-1)
    reg_rdata_2 = random.randint(-2**31, 2**31-1)
    imm_data = random.randint(-2**31, 2**31-1)
    sltu = 0x0000_0000_0000_0200
    imm_ins = 0x0000_0000

    # Assign values to the DUT
    dut.instruction = imm_ins
    dut.pc_i.value = 0
    dut.operand1_pi.value = reg_rdata_1
    dut.operand2_pi.value = reg_rdata_2
    dut.imm_i.value = imm_data
    dut.rd_i.value = 2
    dut.rs1_i.value = 0
    dut.rs2_i.value = 1
    dut.Single_Instruction_i.value = sltu

    # Start the 100MHz clk signal
    clock = Clock(dut.i_clk, 10, units="ns")
    cocotb.start_soon(clock.start())

    # Sys reset using i_en
    dut.i_en.value = 0  # De-assert enable to simulate reset
    await Timer(10, units="ns")
    dut.i_en.value = 1  # Assert enable to bring the module out of reset

    # await wait_for_signal_change(dut.alu_result_1, dut.i_clk)
    # Get the results from the model
    result = int(reg_rdata_1 < reg_rdata_2)
    # Get the actual results from the simulation
    actual = int(str(dut.alu_result_1.value),2)
    # Report the data
    dut._log.info("reg_wdata is     %s", actual)
    dut._log.info("Result should be %s", result)
    dut._log.info("For reg=%s, regs=%s", reg_rdata_1, reg_rdata_2)
    assert actual == result, f"SLT result is incorrect: {actual} != {result}"

def generate_numbers():
    if random.choice([True, False]):  # 50% chance
        num = random.randint(0, 2**32-1)
        return num, num
    else:
        return random.randint(0, 2**32-1), random.randint(0, 2**32-1)

@cocotb.test()
async def test_beq(dut):
    """Testing with random data"""
    # Define our variables
    reg_rdata_1, reg_rdata_2 = generate_numbers()
    imm_data = random.randint(0, 2**31-1)
    pc_data = random.randint(0, 2**31-1)
    beq = 0x0000_0000_0800_0000
    imm_ins = 0x0000_0000

    # Assign values to the DUT
    dut.instruction = imm_ins
    dut.pc_i.value = pc_data
    dut.operand1_pi.value = reg_rdata_1
    dut.operand2_pi.value = reg_rdata_2
    dut.imm_i.value = imm_data
    dut.rd_i.value = 2
    dut.rs1_i.value = 0
    dut.rs2_i.value = 1
    dut.Single_Instruction_i.value = beq

    # Start the 100MHz clk signal
    clock = Clock(dut.i_clk, 10, units="ns")
    cocotb.start_soon(clock.start())

    # Sys reset using i_en
    dut.i_en.value = 0  # De-assert enable to simulate reset
    await Timer(10, units="ns")
    dut.i_en.value = 1  # Assert enable to bring the module out of reset

    # await wait_for_signal_change(dut.alu_result_1, dut.i_clk)
    # Get the results from the model
    result_eq = int(reg_rdata_1 == reg_rdata_2)
    result_dest = pc_data + imm_data
    # Get the actual results from the simulation
    actual_eq = int(str(dut.alu_result_1.value),2)
    actual_dest = int(str(dut.alu_result_2.value),2)
    # Report the data
    dut._log.info("reg_wdata is     %s", actual_eq)
    dut._log.info("Result should be %s", result_eq)
    dut._log.info("For reg=%s, regs=%s", reg_rdata_1, reg_rdata_2)
    dut._log.info("Destination is     %s", actual_dest)
    dut._log.info("Destination should be %s", result_dest)
    dut._log.info("For pc=%s, imm=%s", pc_data, imm_data)
    assert actual_eq == result_eq, f"BEQ result is incorrect: {actual_eq} != {result_eq}"
    assert actual_dest == result_dest, f"BEQ destination is incorrect: {actual_dest} != {result_dest}"

@cocotb.test()
async def test_bne(dut):
    """Testing with random data"""
    # Define our variables
    reg_rdata_1, reg_rdata_2 = generate_numbers()
    imm_data = random.randint(0, 2**31-1)
    pc_data = random.randint(0, 2**31-1)
    bne = 0x0000_0000_1000_0000
    imm_ins = 0x0000_0000

    # Assign values to the DUT
    dut.instruction = imm_ins
    dut.pc_i.value = pc_data
    dut.operand1_pi.value = reg_rdata_1
    dut.operand2_pi.value = reg_rdata_2
    dut.imm_i.value = imm_data
    dut.rd_i.value = 2
    dut.rs1_i.value = 0
    dut.rs2_i.value = 1
    dut.Single_Instruction_i.value = bne

    # Start the 100MHz clk signal
    clock = Clock(dut.i_clk, 10, units="ns")
    cocotb.start_soon(clock.start())

    # Sys reset using i_en
    dut.i_en.value = 0  # De-assert enable to simulate reset
    await Timer(10, units="ns")
    dut.i_en.value = 1  # Assert enable to bring the module out of reset

    # await wait_for_signal_change(dut.alu_result_1, dut.i_clk)
    # Get the results from the model
    result_eq = int(reg_rdata_1 != reg_rdata_2)
    result_dest = pc_data + imm_data
    # Get the actual results from the simulation
    actual_eq = int(str(dut.alu_result_1.value),2)
    actual_dest = int(str(dut.alu_result_2.value),2)
    # Report the data
    dut._log.info("reg_wdata is     %s", actual_eq)
    dut._log.info("Result should be %s", result_eq)
    dut._log.info("For reg=%s, regs=%s", reg_rdata_1, reg_rdata_2)
    dut._log.info("Destination is     %s", actual_dest)
    dut._log.info("Destination should be %s", result_dest)
    dut._log.info("For pc=%s, imm=%s", pc_data, imm_data)
    assert actual_eq == result_eq, f"BNE result is incorrect: {actual_eq} != {result_eq}"
    assert actual_dest == result_dest, f"BNE destination is incorrect: {actual_dest} != {result_dest}"

@cocotb.test()
async def test_blt(dut):
    """Testing with random data"""
    # Define our variables
    reg_rdata_1 = random.randint(0, 2**32-1)
    reg_rdata_2 = random.randint(0, 2**32-1)
    imm_data = random.randint(0, 2**31-1)
    pc_data = random.randint(0, 2**31-1)
    blt = 0x0000_0000_2000_0000
    imm_ins = 0x0000_0000

    # Assign values to the DUT
    dut.instruction = imm_ins
    dut.pc_i.value = pc_data
    dut.operand1_pi.value = reg_rdata_1
    dut.operand2_pi.value = reg_rdata_2
    dut.imm_i.value = imm_data
    dut.rd_i.value = 2
    dut.rs1_i.value = 0
    dut.rs2_i.value = 1
    dut.Single_Instruction_i.value = blt

    # Start the 100MHz clk signal
    clock = Clock(dut.i_clk, 10, units="ns")
    cocotb.start_soon(clock.start())

    # Sys reset using i_en
    dut.i_en.value = 0  # De-assert enable to simulate reset
    await Timer(10, units="ns")
    dut.i_en.value = 1  # Assert enable to bring the module out of reset

    # await wait_for_signal_change(dut.alu_result_1, dut.i_clk)
    # Get the results from the model
    result_eq = int(reg_rdata_1 < reg_rdata_2)
    result_dest = pc_data + imm_data
    # Get the actual results from the simulation
    actual_eq = int(str(dut.alu_result_1.value),2)
    actual_dest = int(str(dut.alu_result_2.value),2)
    # Report the data
    dut._log.info("reg_wdata is     %s", actual_eq)
    dut._log.info("Result should be %s", result_eq)
    dut._log.info("For reg=%s, regs=%s", reg_rdata_1, reg_rdata_2)
    dut._log.info("Destination is     %s", actual_dest)
    dut._log.info("Destination should be %s", result_dest)
    dut._log.info("For pc=%s, imm=%s", pc_data, imm_data)
    assert actual_eq == result_eq, f"BLT result is incorrect: {actual_eq} != {result_eq}"
    assert actual_dest == result_dest, f"BLT destination is incorrect: {actual_dest} != {result_dest}"

@cocotb.test()
async def test_bge(dut):
    """Testing with random data"""
    # Define our variables
    reg_rdata_1, reg_rdata_2 = generate_numbers()
    imm_data = random.randint(0, 2**31-1)
    pc_data = random.randint(0, 2**31-1)
    bge = 0x0000_0000_4000_0000
    imm_ins = 0x0000_0000

    # Assign values to the DUT
    dut.instruction = imm_ins
    dut.pc_i.value = pc_data
    dut.operand1_pi.value = reg_rdata_1
    dut.operand2_pi.value = reg_rdata_2
    dut.imm_i.value = imm_data
    dut.rd_i.value = 2
    dut.rs1_i.value = 0
    dut.rs2_i.value = 1
    dut.Single_Instruction_i.value = bge

    # Start the 100MHz clk signal
    clock = Clock(dut.i_clk, 10, units="ns")
    cocotb.start_soon(clock.start())

    # Sys reset using i_en
    dut.i_en.value = 0  # De-assert enable to simulate reset
    await Timer(10, units="ns")
    dut.i_en.value = 1  # Assert enable to bring the module out of reset

    # await wait_for_signal_change(dut.alu_result_1, dut.i_clk)
    # Get the results from the model
    result_eq = int(reg_rdata_1 >= reg_rdata_2)
    result_dest = pc_data + imm_data
    # Get the actual results from the simulation
    actual_eq = int(str(dut.alu_result_1.value),2)
    actual_dest = int(str(dut.alu_result_2.value),2)
    # Report the data
    dut._log.info("reg_wdata is     %s", actual_eq)
    dut._log.info("Result should be %s", result_eq)
    dut._log.info("For reg=%s, regs=%s", reg_rdata_1, reg_rdata_2)
    dut._log.info("Destination is     %s", actual_dest)
    dut._log.info("Destination should be %s", result_dest)
    dut._log.info("For pc=%s, imm=%s", pc_data, imm_data)
    assert actual_eq == result_eq, f"BGE result is incorrect: {actual_eq} != {result_eq}"
    assert actual_dest == result_dest, f"BGE destination is incorrect: {actual_dest} != {result_dest}"
