import cocotb
import utilities
from parameters import *
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer
import random
import math

def print_registers(dut):
    for i in range(32):
        reg_name = f"REG_FILE[{i}]"  # Construct the register name
        reg_value = int(getattr(dut.regfile_inst, reg_name).value)  # Access the register dynamically
        dut._log.info(f"{reg_name}: 0x{reg_value:X}")  # Print in uppercase hex format

# R type instruction test
@cocotb.test()
async def test_R(dut):
    dut.pc_i.value = 0

    # Start the 100MHz clk signal
    clock = Clock(dut.clk, 10, units="ns")
    cocotb.start_soon(clock.start())

    # Sys reset using i_en
    dut.en.value = 0  # De-assert enable to simulate reset
    dut.reset.value = 1
    await Timer(10, units="ns")
    dut.en.value = 1  # Assert enable to bring the module out of reset
    dut.reset.value = 0
    await Timer(60, units="ns")

    # Test R-Type Instruction
    INS = utilities.ins_gen('R')  # Generate an R-type instruction using utility function
    dut.instruction.value = INS[ins_idx]  # Pass the instruction to the 'instruction' input port
    dut.pc_i.value = 0
    await Timer(60, units="ns")

    # Check if the decoded values are correct
    reg_name = f"REG_FILE[{int(str(dut.inter_rd.value),2)}]"  # Construct the register name
    if (INS[1][0] == "SUB" or INS[1][0] == "SRA"):
        dut._log.info("is a signed operation")
        actual = utilities.twos_comp((getattr(dut.regfile_inst, reg_name).value),32)  # Access the register dynamically
    else:
        actual = int(getattr(dut.regfile_inst, reg_name).value)
    expected = utilities.result_gen("R", 
                                    INS[1][0], 
                                    int(str(dut.inter_imm.value),2), 
                                    int(str(dut.inter_operand2.value),2), 
                                    int(str(dut.inter_operand1.value),2), 
                                    int(str(dut.pc_i.value),2))[1]
    dut._log.info("instruction is     %s", INS[1][0])
    dut._log.info("opernad1 is     %s", int(str(dut.inter_operand1.value),2))
    dut._log.info("operand2 is     %s", int(str(dut.inter_operand2.value),2))
    dut._log.info("immediate is     %s", int(str(dut.inter_imm.value),2))
    dut._log.info("write data is     %s", int(str(dut.inter_write_reg_file.value),2))
    dut._log.info("rs1  is    %s", int(str(dut.inter_rs1.value),2))
    dut._log.info("rs2  is    %s", int(str(dut.inter_rs2.value),2))
    dut._log.info("rd  is    %s", int(str(dut.inter_rd.value),2))
    dut._log.info("actual result is     %d", actual)
    dut._log.info("expected result is     %d", expected)

    print_registers(dut)

    dut._log.info("INS is    %s", INS)
    assert actual == expected, f"R type result is incorrect: {actual} != {expected}"

# I type instruction test
@cocotb.test()
async def test_I(dut):
    dut.pc_i.value = 0

    # Start the 100MHz clk signal
    clock = Clock(dut.clk, 10, units="ns")
    cocotb.start_soon(clock.start())

    # Sys reset using i_en
    dut.en.value = 0  # De-assert enable to simulate reset
    dut.reset.value = 1
    await Timer(10, units="ns")
    dut.en.value = 1  # Assert enable to bring the module out of reset
    dut.reset.value = 0
    await Timer(60, units="ns")

    # Test R-Type Instruction
    INS = utilities.ins_gen('I')  # Generate an R-type instruction using utility function
    dut.instruction.value = INS[ins_idx]  # Pass the instruction to the 'instruction' input port
    dut.pc_i.value = 0
    await Timer(60, units="ns")

    # Check if the decoded values are correct
    reg_name = f"REG_FILE[{int(str(dut.inter_rd.value),2)}]"  # Construct the register name
    if (INS[1][0] == "SUBI" or INS[1][0] == "SRAI"):
        dut._log.info("is a signed operation")
        actual = utilities.twos_comp((getattr(dut.regfile_inst, reg_name).value),32)  # Access the register dynamically
    else:
        actual = int(getattr(dut.regfile_inst, reg_name).value)
    expected = utilities.result_gen("I", 
                                    INS[1][0], 
                                    int(str(dut.inter_imm.value),2), 
                                    int(str(dut.inter_operand2.value),2), 
                                    int(str(dut.inter_operand1.value),2), 
                                    int(str(dut.pc_i.value),2))[1]
    dut._log.info("instruction is     %s", INS[1][0])
    dut._log.info("opernad1 is     %s", int(str(dut.inter_operand1.value),2))
    dut._log.info("operand2 is     %s", int(str(dut.inter_operand2.value),2))
    dut._log.info("immediate is     %s", int(str(dut.inter_imm.value),2))
    dut._log.info("write data is     %s", int(str(dut.inter_write_reg_file.value),2))
    dut._log.info("rs1  is    %s", int(str(dut.inter_rs1.value),2))
    dut._log.info("rs2  is    %s", int(str(dut.inter_rs2.value),2))
    dut._log.info("rd  is    %s", int(str(dut.inter_rd.value),2))
    dut._log.info("actual result is     %d", actual)
    dut._log.info("expected result is     %d", expected)

    print_registers(dut)

    dut._log.info("INS is    %s", INS)
    assert actual == expected, f"I type result is incorrect: {actual} != {expected}"

# J type instruction test
@cocotb.test()
async def test_J(dut):
    dut.pc_i.value = random.randint(0, 2**32-1)

    # Start the 100MHz clk signal
    clock = Clock(dut.clk, 10, units="ns")
    cocotb.start_soon(clock.start())

    # Sys reset using i_en
    dut.en.value = 0  # De-assert enable to simulate reset
    dut.reset.value = 1
    await Timer(10, units="ns")
    dut.en.value = 1  # Assert enable to bring the module out of reset
    dut.reset.value = 0
    await Timer(60, units="ns")

    # Test R-Type Instruction
    INS = utilities.ins_gen('J')  # Generate an R-type instruction using utility function
    dut.instruction.value = INS[ins_idx]  # Pass the instruction to the 'instruction' input port
    dut.pc_i.value = 0
    await Timer(60, units="ns")

    # Check if the decoded values are correct
    reg_name = f"REG_FILE[{int(str(dut.inter_rd.value),2)}]"  # Construct the register name
    if (INS[1][0] == "SUBI" or INS[1][0] == "SRAI"):
        dut._log.info("is a signed operation")
        actual = utilities.twos_comp((getattr(dut.regfile_inst, reg_name).value),32)  # Access the register dynamically
    else:
        actual = int(getattr(dut.regfile_inst, reg_name).value)
    expected = utilities.result_gen("J", 
                                    INS[1][0], 
                                    int(str(dut.inter_imm.value),2), 
                                    int(str(dut.inter_operand2.value),2), 
                                    int(str(dut.inter_operand1.value),2), 
                                    int(str(dut.pc_i.value),2))[1]
    dut._log.info("instruction is     %s", INS[1][0])
    dut._log.info("pc is     %s", int(str(dut.pc_i.value),2))
    dut._log.info("opernad1 is     %s", int(str(dut.inter_operand1.value),2))
    dut._log.info("operand2 is     %s", int(str(dut.inter_operand2.value),2))
    dut._log.info("immediate is     %s", int(str(dut.inter_imm.value),2))
    dut._log.info("write data is     %s", int(str(dut.inter_write_reg_file.value),2))
    dut._log.info("rs1  is    %s", int(str(dut.inter_rs1.value),2))
    dut._log.info("rs2  is    %s", int(str(dut.inter_rs2.value),2))
    dut._log.info("rd  is    %s", int(str(dut.inter_rd.value),2))
    dut._log.info("actual result is     %d", actual)
    dut._log.info("expected result is     %d", expected)

    print_registers(dut)

    dut._log.info("INS is    %s", INS)
    assert actual == expected, f"J type result is incorrect: {actual} != {expected}"

# U type instruction test
@cocotb.test()
async def test_U(dut):
    dut.pc_i.value = random.randint(0, 2**32-1)

    # Start the 100MHz clk signal
    clock = Clock(dut.clk, 10, units="ns")
    cocotb.start_soon(clock.start())

    # Sys reset using i_en
    dut.en.value = 0  # De-assert enable to simulate reset
    dut.reset.value = 1
    await Timer(10, units="ns")
    dut.en.value = 1  # Assert enable to bring the module out of reset
    dut.reset.value = 0
    await Timer(60, units="ns")

    # Test R-Type Instruction
    INS = utilities.ins_gen('U')  # Generate an R-type instruction using utility function
    dut.instruction.value = INS[ins_idx]  # Pass the instruction to the 'instruction' input port
    dut.pc_i.value = 0
    await Timer(60, units="ns")

    # Check if the decoded values are correct
    reg_name = f"REG_FILE[{int(str(dut.inter_rd.value),2)}]"  # Construct the register name
    if (INS[1][0] == "SUBI" or INS[1][0] == "SRAI"):
        dut._log.info("is a signed operation")
        actual = utilities.twos_comp((getattr(dut.regfile_inst, reg_name).value),32)  # Access the register dynamically
    else:
        actual = int(getattr(dut.regfile_inst, reg_name).value)
    expected = utilities.result_gen("U", 
                                    INS[1][0], 
                                    int(str(dut.inter_imm.value),2), 
                                    int(str(dut.inter_operand2.value),2), 
                                    int(str(dut.inter_operand1.value),2), 
                                    int(str(dut.pc_i.value),2))[1]
    dut._log.info("instruction is     %s", INS[1][0])
    dut._log.info("pc is     %s", int(str(dut.pc_i.value),2))
    dut._log.info("opernad1 is     %s", int(str(dut.inter_operand1.value),2))
    dut._log.info("operand2 is     %s", int(str(dut.inter_operand2.value),2))
    dut._log.info("immediate is     %s", int(str(dut.inter_imm.value),2))
    dut._log.info("write data is     %s", int(str(dut.inter_write_reg_file.value),2))
    dut._log.info("rs1  is    %s", int(str(dut.inter_rs1.value),2))
    dut._log.info("rs2  is    %s", int(str(dut.inter_rs2.value),2))
    dut._log.info("rd  is    %s", int(str(dut.inter_rd.value),2))
    dut._log.info("actual result is     %d", actual)
    dut._log.info("expected result is     %d", expected)

    print_registers(dut)

    dut._log.info("INS is    %s", INS)
    assert actual == expected, f"U type result is incorrect: {actual} != {expected}"
