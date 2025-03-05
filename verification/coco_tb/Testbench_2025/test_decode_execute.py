import cocotb
import utilities
from parameters import *
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer
import random
import math

# R type instruction test
@cocotb.test()
async def test_R(dut):
    # Test R-Type Instruction
    INS = utilities.ins_gen('R')  # Generate an R-type instruction using utility function
    dut.instruction.value = INS[ins_idx]  # Pass the instruction to the 'instruction' input port
    dut.rd_i.value = 0
    dut.rs1_i.value = 0
    dut.rs2_i.value = 0
    dut.operand1_pi.value = INS[4]
    dut.operand2_pi.value = INS[3]
    dut.Single_Instruction_i.value = 0
    dut.pc_i.value = 0
    dut.imm_i.value= 0
    await Timer(60, units="ns")

    # Start the 100MHz clk signal
    clock = Clock(dut.i_clk, 10, units="ns")
    cocotb.start_soon(clock.start())

    # Sys reset using i_en
    dut.i_en.value = 0  # De-assert enable to simulate reset
    await Timer(10, units="ns")
    dut.i_en.value = 1  # Assert enable to bring the module out of reset

    # Check if the decoded values are correct
    actual = utilities.twos_comp(dut.alu_result_1.value,32)
    expected = INS[1][2]
    dut._log.info("instruction is     %s", INS[1][0])
    dut._log.info("opernad1 is     %s", INS[4])
    dut._log.info("operand2 is     %s", INS[3])
    dut._log.info("reg_wdata is     %d", actual)
    dut._log.info("expected result is     %d", expected)
    # dut._log.info("INS is    %s", INS)
    assert actual == expected, f"R type result is incorrect: {actual} != {expected}"

# I type instruction test
@cocotb.test()
async def test_I(dut):
    # Test R-Type Instruction
    INS = utilities.ins_gen('I')  # Generate an R-type instruction using utility function
    dut.instruction.value = INS[ins_idx]  # Pass the instruction to the 'instruction' input port
    dut.rd_i.value = 0
    dut.rs1_i.value = 0
    dut.rs2_i.value = 0
    dut.operand1_pi.value = random.randint(0,2**30-1)
    dut.operand2_pi.value = 0
    dut.Single_Instruction_i.value = 0
    dut.pc_i.value = 0
    dut.imm_i.value= 0
    await Timer(60, units="ns")

    # Start the 100MHz clk signal
    clock = Clock(dut.i_clk, 10, units="ns")
    cocotb.start_soon(clock.start())

    # Sys reset using i_en
    dut.i_en.value = 0  # De-assert enable to simulate reset
    await Timer(10, units="ns")
    dut.i_en.value = 1  # Assert enable to bring the module out of reset

    # Check if the decoded values are correct
    actual = dut.alu_result_1.value
    expected = utilities.result_gen("I", INS[1][0], int(str(dut.inter_imm.value),2), 0, int(str(dut.operand1_pi.value),2), int(str(dut.pc_i.value),2))[1]
    dut._log.info("instruction is     %s", INS[1][0])
    dut._log.info("opernad1 is     %s", int(str(dut.operand1_pi.value),2))
    dut._log.info("immediate is     %s", int(str(dut.inter_imm.value),2))
    dut._log.info("reg_wdata is     %d", actual)
    dut._log.info("expected is     %d", expected)
    dut._log.info("INS is    %s", INS)
    assert actual == expected, f"I type result is incorrect: {actual} != {expected}"

# S type instruction test
@cocotb.test()
async def test_S(dut):
    # Test R-Type Instruction
    INS = utilities.ins_gen('S')  # Generate an R-type instruction using utility function
    dut.instruction.value = INS[ins_idx]  # Pass the instruction to the 'instruction' input port
    dut.rd_i.value = 0
    dut.rs1_i.value = 0
    dut.rs2_i.value = 0
    dut.operand1_pi.value = random.randint(0,2**30-1)
    dut.operand2_pi.value = random.randint(0,2**30-1)
    dut.Single_Instruction_i.value = 0
    dut.pc_i.value = 0
    dut.imm_i.value= 0
    await Timer(60, units="ns")

    # Start the 100MHz clk signal
    clock = Clock(dut.i_clk, 10, units="ns")
    cocotb.start_soon(clock.start())

    # Sys reset using i_en
    dut.i_en.value = 0  # De-assert enable to simulate reset
    await Timer(10, units="ns")
    dut.i_en.value = 1  # Assert enable to bring the module out of reset

    # Check if the decoded values are correct
    actual = dut.alu_result_1.value
    expected = utilities.result_gen("S", INS[1][0], int(str(dut.inter_imm.value),2), int(str(dut.operand2_pi.value),2), int(str(dut.operand1_pi.value),2), int(str(dut.pc_i.value),2))[1]
    dut._log.info("instruction is     %s", INS[1][0])
    dut._log.info("opernad1 is     %s", int(str(dut.operand1_pi.value),2))
    dut._log.info("immediate is     %s", int(str(dut.inter_imm.value),2))
    dut._log.info("reg_wdata is     %d", actual)
    dut._log.info("expected is     %d", expected)
    dut._log.info("INS is    %s", INS)
    assert actual == expected, f"S type result is incorrect: {actual} != {expected}"

# B type instruction test
@cocotb.test()
async def test_B(dut):
    # Test R-Type Instruction
    INS = utilities.ins_gen('B')  # Generate an R-type instruction using utility function
    dut.instruction.value = INS[ins_idx]  # Pass the instruction to the 'instruction' input port
    dut.rd_i.value = 0
    dut.rs1_i.value = 0
    dut.rs2_i.value = 0
    dut.operand1_pi.value = random.randint(0,2**30-1)
    dut.operand2_pi.value = random.randint(0,2**30-1)
    dut.Single_Instruction_i.value = 0
    dut.pc_i.value = 0
    dut.imm_i.value= 0
    await Timer(60, units="ns")

    # Start the 100MHz clk signal
    clock = Clock(dut.i_clk, 10, units="ns")
    cocotb.start_soon(clock.start())

    # Sys reset using i_en
    dut.i_en.value = 0  # De-assert enable to simulate reset
    await Timer(10, units="ns")
    dut.i_en.value = 1  # Assert enable to bring the module out of reset

    # Check if the decoded values are correct
    actual = dut.alu_result_1.value
    expected = utilities.result_gen("B", INS[1][0], int(str(dut.inter_imm.value),2), int(str(dut.operand2_pi.value),2), int(str(dut.operand1_pi.value),2), int(str(dut.pc_i.value),2))[1]
    dut._log.info("instruction is     %s", INS[1][0])
    dut._log.info("opernad1 is     %s", int(str(dut.operand1_pi.value),2))
    dut._log.info("immediate is     %s", int(str(dut.inter_imm.value),2))
    dut._log.info("reg_wdata is     %d", actual)
    dut._log.info("expected is     %d", expected)
    dut._log.info("INS is    %s", INS)
    assert actual == expected, f"B type result is incorrect: {actual} != {expected}"

# U type instruction test
@cocotb.test()
async def test_U(dut):
    # Test R-Type Instruction
    INS = utilities.ins_gen('U')  # Generate an R-type instruction using utility function
    dut.instruction.value = INS[ins_idx]  # Pass the instruction to the 'instruction' input port
    dut.rd_i.value = 0
    dut.rs1_i.value = 0
    dut.rs2_i.value = 0
    dut.operand1_pi.value = random.randint(0,2**30-1)
    dut.operand2_pi.value = random.randint(0,2**30-1)
    dut.Single_Instruction_i.value = 0
    dut.pc_i.value = 0
    dut.imm_i.value= 0
    await Timer(60, units="ns")

    # Start the 100MHz clk signal
    clock = Clock(dut.i_clk, 10, units="ns")
    cocotb.start_soon(clock.start())

    # Sys reset using i_en
    dut.i_en.value = 0  # De-assert enable to simulate reset
    await Timer(10, units="ns")
    dut.i_en.value = 1  # Assert enable to bring the module out of reset

    # Check if the decoded values are correct
    actual = dut.alu_result_1.value
    expected = utilities.result_gen("U", INS[1][0], int(str(dut.inter_imm.value),2), int(str(dut.operand2_pi.value),2), int(str(dut.operand1_pi.value),2), int(str(dut.pc_i.value),2))[1]
    dut._log.info("instruction is     %s", INS[1][0])
    dut._log.info("opernad1 is     %s", int(str(dut.operand1_pi.value),2))
    dut._log.info("immediate is     %s", int(str(dut.inter_imm.value),2))
    dut._log.info("reg_wdata is     %d", actual)
    dut._log.info("expected is     %d", expected)
    dut._log.info("INS is    %s", INS)
    assert actual == expected, f"U type result is incorrect: {actual} != {expected}"

# J type instruction test
@cocotb.test()
async def test_J(dut):
    # Test R-Type Instruction
    INS = utilities.ins_gen('J')  # Generate an R-type instruction using utility function
    dut.instruction.value = INS[ins_idx]  # Pass the instruction to the 'instruction' input port
    dut.rd_i.value = 0
    dut.rs1_i.value = 0
    dut.rs2_i.value = 0
    dut.operand1_pi.value = random.randint(0,2**30-1)
    dut.operand2_pi.value = random.randint(0,2**30-1)
    dut.Single_Instruction_i.value = 0
    dut.pc_i.value = 0
    dut.imm_i.value= 0
    await Timer(60, units="ns")

    # Start the 100MHz clk signal
    clock = Clock(dut.i_clk, 10, units="ns")
    cocotb.start_soon(clock.start())

    # Sys reset using i_en
    dut.i_en.value = 0  # De-assert enable to simulate reset
    await Timer(10, units="ns")
    dut.i_en.value = 1  # Assert enable to bring the module out of reset

    # Check if the decoded values are correct
    actual = dut.alu_result_1.value
    expected = utilities.result_gen("J", INS[1][0], int(str(dut.inter_imm.value),2), int(str(dut.operand2_pi.value),2), int(str(dut.operand1_pi.value),2), int(str(dut.pc_i.value),2))[1]
    dut._log.info("instruction is     %s", INS[1][0])
    dut._log.info("opernad1 is     %s", int(str(dut.operand1_pi.value),2))
    dut._log.info("immediate is     %s", int(str(dut.inter_imm.value),2))
    dut._log.info("reg_wdata is     %d", actual)
    dut._log.info("expected is     %d", expected)
    dut._log.info("INS is    %s", INS)
    assert actual == expected, f"J type result is incorrect: {actual} != {expected}"