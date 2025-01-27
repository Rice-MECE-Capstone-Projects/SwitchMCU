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
async def exu_imm_cocotb(dut):
    """Testing adding 5+3"""
    # Define our variables
    reg_rdata_1 = 5
    imm = 3
    cmd = "addi"
    
    # Assign values to the DUT
    dut.pc.value = 0
    dut.reg_rdata_1.value = reg_rdata_1
    dut.dec_imm_type_i.value = imm
    dut.dec_branch_en.value = 1

    await initialize_commands(dut, cmd)
    await initialize_values(dut)

    await wait_for_signal_change(dut.reg_wdata, dut.hclk)
    # Get the results from the model
    result = imm_model(dut, cmd, reg_rdata_1, imm)
    # Get the actual results from the simulation
    actual = int(str(dut.reg_wdata.value),2)
    # Report the data
    dut._log.info("reg_wdata is     %s", actual)
    dut._log.info("Result should be %s", result)
    dut._log.info("For reg=%s, imm=%s", reg_rdata_1, imm)
    assert actual == result, f"Branch result is incorrect: {actual} != {result}"

@cocotb.test()
async def exu_imm_randomized_test(dut):
    """Test 20 random calls with random reg and imm values"""
    dut.pc.value = 0
    coverage = []
    for i in range(50):
        # Initialize the values
        # Set random values for the register data, immediate, and call
        reg_rdata_1 = random.randint(0, 0xFFFFFFFF)
        imm = random.randint(0, 0xFFF)
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
        
        await wait_for_signal_change(dut.reg_wdata, dut.hclk)
        # Get the results from the model
        result = imm_model(dut, cmd, reg_rdata_1, imm)
        # Get the actual results from the simulation
        actual = int(str(dut.reg_wdata.value),2)
        # Report the data
        dut._log.info("Running Test %s", i)
        dut._log.info(f"Call is {cmd}")
        dut._log.info("Register: %s, Immediate: %s", reg_rdata_1, imm)
        dut._log.info("wdata is %s", actual)
        dut._log.info("Result should be %s", result)
        dut._log.info("____________________________________")
        
        assert actual == result, f"Imm result is incorrect: for {cmd}, with Register={reg_rdata_1} and Immediate={imm}, we got {actual} when it should be {result}"

    dut._log.info(f"Coverage: {len(coverage)} out of 9 commands tested")


