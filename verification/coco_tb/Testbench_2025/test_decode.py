import cocotb
import utilities
from parameters import *
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer

# Cycle counter to increment cycle_cnt
async def cycle_counter(dut):
    while True:
        await RisingEdge(dut.i_clk)
        dut.cycle_cnt.value = (dut.cycle_cnt.value % 4) + 1

# R type instruction test
@cocotb.test()
async def test_R(dut):
    clock = Clock(dut.i_clk, 10, units="ns")  # 100MHz clk signal
    cocotb.start_soon(clock.start())

    # Sys reset using i_en
    dut.i_en.value = 0  # De-assert enable to simulate reset
    await Timer(10, units="ns")
    dut.i_en.value = 1  # Assert enable to bring the module out of reset

    # Test R-Type Instruction
    INS = utilities.ins_gen('R')  # Generate an R-type instruction using utility function
    dut.instruction.value = INS[ins_idx]  # Pass the instruction to the 'instruction' input port
    await Timer(60, units="ns")

    # Check if the decoded values are correct
    assert dut.rd_o.value == INS[r_rd_idx], f"rd_o incorrect: expected {INS[r_rd_idx]}, got {dut.rd_o.value}"
    assert dut.rs1_o.value == INS[r_rs1_idx], f"rs1_o incorrect: expected {INS[r_rs1_idx]}, got {dut.rs1_o.value}"
    assert dut.rs2_o.value == INS[r_rs2_idx], f"rs2_o incorrect: expected {INS[r_rs2_idx]}, got {dut.rs2_o.value}"

# I type
@cocotb.test()
async def test_I(dut):
    clock = Clock(dut.i_clk, 10, units="ns")  # 100MHz clk signal
    cocotb.start_soon(clock.start())

    # Sys reset using i_en
    dut.i_en.value = 0  # De-assert enable to simulate reset
    await Timer(10, units="ns")
    dut.i_en.value = 1  # Assert enable to bring the module out of reset

    # Test R-Type Instruction
    INS = utilities.ins_gen('I')
    dut.instruction.value = INS[ins_idx]
    await Timer(60, units="ns")
    assert dut.rd_o.value  == INS[i_rd_idx],  "dec_rd  incorrect"
    assert dut.rs1_o.value == INS[i_rs1_idx], "dec_rs1 incorrect"

# S type
@cocotb.test()
async def test_S(dut):
    clock = Clock(dut.i_clk, 10, units="ns")  # 100MHz clk signal
    cocotb.start_soon(clock.start())

    # Sys reset using i_en
    dut.i_en.value = 0  # De-assert enable to simulate reset
    await Timer(10, units="ns")
    dut.i_en.value = 1  # Assert enable to bring the module out of reset

    # Test S-Type Instruction
    INS = utilities.ins_gen('S')
    dut.instruction.value = INS[ins_idx]
    await Timer(60, units="ns")
    assert dut.rs1_o.value == INS[s_rs1_idx], "dec_rs1 incorrect"
    assert dut.rs2_o.value == INS[s_rs2_idx], "dec_rs2 incorrect"

# B type
@cocotb.test()
async def test_B(dut):
    clock = Clock(dut.i_clk, 10, units="ns")  # 100MHz clk signal
    cocotb.start_soon(clock.start())

    # Sys reset using i_en
    dut.i_en.value = 0  # De-assert enable to simulate reset
    await Timer(10, units="ns")
    dut.i_en.value = 1  # Assert enable to bring the module out of reset

    # Test B-Type Instruction
    INS = utilities.ins_gen('B')
    dut.instruction.value = INS[ins_idx]
    await Timer(60, units="ns")
    assert dut.rs1_o.value == INS[b_rs1_idx], "dec_rs1 incorrect"
    assert dut.rs2_o.value == INS[b_rs2_idx], "dec_rs2 incorrect"

# U type
@cocotb.test()
async def test_U(dut):
    clock = Clock(dut.i_clk, 10, units="ns")  # 100MHz clk signal
    cocotb.start_soon(clock.start())

    # Sys reset using i_en
    dut.i_en.value = 0  # De-assert enable to simulate reset
    await Timer(10, units="ns")
    dut.i_en.value = 1  # Assert enable to bring the module out of reset

    # Test U-Type Instruction
    INS = utilities.ins_gen('U')
    dut.instruction.value = INS[ins_idx]
    await Timer(60, units="ns")
    assert dut.rd_o.value == INS[u_rd_idx], "dec_rd incorrect"

# J type
@cocotb.test()
async def test_J(dut):
    clock = Clock(dut.i_clk, 10, units="ns")  # 100MHz clk signal
    cocotb.start_soon(clock.start())

    # Sys reset using i_en
    dut.i_en.value = 0  # De-assert enable to simulate reset
    await Timer(10, units="ns")
    dut.i_en.value = 1  # Assert enable to bring the module out of reset

    # Test J-Type Instruction
    INS = utilities.ins_gen('J')
    dut.instruction.value = INS[ins_idx]
    await Timer(60, units="ns")
    assert dut.rd_o.value == INS[j_rd_idx], "dec_rd incorrect"
