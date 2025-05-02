import cocotb
import utilities
from parameters import *
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer

async def cycle_counter(dut):
    while True:
        await RisingEdge(dut.hclk)
        dut.cycle_cnt.value = (dut.cycle_cnt.value % 4) + 1

# R type
@cocotb.test()
async def test_R(dut):
    clock = Clock(dut.hclk, 10, units="ns") # 100MHz clk signal
    cocotb.start_soon(clock.start())

    # sys reset
    dut.hrstn.value = 0
    await Timer(10, units="ns")
    dut.hrstn.value = 1

    # cycle_counter++
    dut.cycle_cnt.value = 0
    cocotb.start_soon(cycle_counter(dut))

    # Test R-Type Instruction
    INS = utilities.ins_gen('R')
    dut.inst_in.value = INS[ins_idx]
    await Timer(60, units="ns")
    assert dut.dec_rd.value  == INS[r_rd_idx], "dec_rd  incorrect"
    assert dut.dec_rs1.value == INS[r_rs1_idx], "dec_rs1 incorrect"
    assert dut.dec_rs2.value == INS[r_rs2_idx], "dec_rs2 incorrect"

# I type
@cocotb.test()
async def test_I(dut):
    clock = Clock(dut.hclk, 10, units="ns") # 100MHz
    cocotb.start_soon(clock.start())

    # reset
    dut.hrstn.value = 0
    await Timer(10, units="ns")
    dut.hrstn.value = 1

    # cycle_counter++
    dut.cycle_cnt.value = 0
    cocotb.start_soon(cycle_counter(dut))

    # Test R-Type Instruction
    INS = utilities.ins_gen('I')
    dut.inst_in.value = INS[ins_idx]
    await Timer(60, units="ns")
    assert dut.dec_rd.value  == INS[i_rd_idx],  "dec_rd  incorrect"
    assert dut.dec_rs1.value == INS[i_rs1_idx], "dec_rs1 incorrect"

# S type
@cocotb.test()
async def test_S(dut):
    # 100MHz clk signal
    clock = Clock(dut.hclk, 10, units="ns")
    cocotb.start_soon(clock.start())

    # reset signal
    dut.hrstn.value = 0
    await Timer(10, units="ns")
    dut.hrstn.value = 1

    # update cycle_counter
    dut.cycle_cnt.value = 0
    cocotb.start_soon(cycle_counter(dut))

    # Test S-Type Instruction
    INS = utilities.ins_gen('S')
    dut.inst_in.value = INS[ins_idx]
    await Timer(60, units="ns")
    assert dut.dec_rs1.value == INS[s_rs1_idx], "dec_rs1 incorrect"
    assert dut.dec_rs2.value == INS[s_rs2_idx], "dec_rs2 incorrect"

# B type
@cocotb.test()
async def test_B(dut):
    # 100MHz clk signal
    clock = Clock(dut.hclk, 10, units="ns")
    cocotb.start_soon(clock.start())

    # reset signal
    dut.hrstn.value = 0
    await Timer(10, units="ns")
    dut.hrstn.value = 1

    # update cycle_counter
    dut.cycle_cnt.value = 0
    cocotb.start_soon(cycle_counter(dut))

    # Test B-Type Instruction
    INS = utilities.ins_gen('B')
    dut.inst_in.value = INS[ins_idx]
    await Timer(60, units="ns")
    assert dut.dec_rs1.value == INS[b_rs1_idx], "dec_rs1 incorrect"
    assert dut.dec_rs2.value == INS[b_rs2_idx], "dec_rs2 incorrect"

# U type
@cocotb.test()
async def test_U(dut):
    # 100MHz clk signal
    clock = Clock(dut.hclk, 10, units="ns")
    cocotb.start_soon(clock.start())

    # reset signal
    dut.hrstn.value = 0
    await Timer(10, units="ns")
    dut.hrstn.value = 1

    # update cycle_counter
    dut.cycle_cnt.value = 0
    cocotb.start_soon(cycle_counter(dut))

    # Test U-Type Instruction
    INS = utilities.ins_gen('U')
    dut.inst_in.value = INS[ins_idx]
    await Timer(60, units="ns")
    assert dut.dec_rd.value == INS[u_rd_idx], "dec_rd incorrect"

# J type
@cocotb.test()
async def test_J(dut):
    # 100MHz clk signal
    clock = Clock(dut.hclk, 10, units="ns")
    cocotb.start_soon(clock.start())

    # reset signal
    dut.hrstn.value = 0
    await Timer(10, units="ns")
    dut.hrstn.value = 1

    # update cycle_counter
    dut.cycle_cnt.value = 0
    cocotb.start_soon(cycle_counter(dut))

    # Test J-Type Instruction
    INS = utilities.ins_gen('J')
    dut.inst_in.value = INS[ins_idx]
    await Timer(60, units="ns")
    assert dut.dec_rd.value == INS[j_rd_idx], "dec_rd incorrect"

# R & I type
@cocotb.test()
async def test_add_addi(dut):
    # 100MHz clk signal
    clock = Clock(dut.hclk, 10, units="ns")
    cocotb.start_soon(clock.start())

    # reset signal
    dut.hrstn.value = 0
    await Timer(10, units="ns")
    dut.hrstn.value = 1

    # update cycle_counter
    dut.cycle_cnt.value = 0
    cocotb.start_soon(cycle_counter(dut))

    dut.inst_in.value = 0b00000000000100001000000110110011  # add
    await Timer(50, units="ns")
    assert dut.dec_add.value == 1, "dec_add signal incorrect"

    dut.inst_in.value = 0b00000000000100001000000010010011  # addi
    await Timer(100, units="ns")
    assert dut.dec_addi.value == 1, "dec_addi signal incorrect"
    assert dut.dec_imm_en.value == 1, "dec_imm_en signal incorrect"
    assert dut.dec_rd.value == 1, "dec_rd incorrect"
    assert dut.dec_rs1.value == 1, "dec_rs1 incorrect"

