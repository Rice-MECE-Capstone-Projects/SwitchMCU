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

def sign_extend_8_to_32(value):
    value &= 0xFF  # ensure it's 8-bit
    if value & 0x80:  # if the sign bit (bit 7) is set
        return value | ~0xFF  # extend with 1s
    else:
        return value  # no extension needed

def sign_extend_16_to_32(value):
    value &= 0xFFFF  # ensure it's 16-bit
    if value & 0x8000:  # if the sign bit (bit 15) is set
        return value | ~0xFFFF  # extend with 1s
    else:
        return value  # no extension needed

def twos_comp(val, bits):
    """compute the 2's complement of int value val"""
    if bits == 0:
        return 0
    if (val & (1 << (bits - 1))) != 0: # if sign bit is 1
        val = val - (1 << bits)        # compute negative value
    return val

# S type instruction test
@cocotb.test()
async def test_STORE(dut):
    dut.pc_i.value = 0

    # Start the 100MHz clk signal
    clock = Clock(dut.clk, 10, units="ns")
    cocotb.start_soon(clock.start())

    # Sys reset
    dut.en.value = 0  # De-assert enable to simulate reset
    dut.reset.value = 1
    await Timer(10, units="ns")
    dut.en.value = 1  # Assert enable to bring the module out of reset
    dut.reset.value = 0
    await Timer(60, units="ns")

    # Test S-Type Instruction
    INS = utilities.ins_gen('S')  # Generate an S-type instruction using utility function
    dut.instruction.value = INS[ins_idx]  # Pass the instruction to the 'instruction' input port
    dut.pc_i.value = 0
    await Timer(60, units="ns")

    # Calculate the BRAM word index from the ALU result (12-bit address range, word-aligned)
    dmem_word = f"DMEM[{(int(str(dut.alu_result_1.value), 2) & 0xFFF) >> 2}]"

    # Calculate the byte offset within the word (0 to 3)
    dmem_byte = int(str(dut.alu_result_1.value), 2) & 0x3

    # Handle byte store (SB instruction)
    if INS[1][0] == "SB":
        # Extract the relevant byte from inter_operand2 and shift it into the correct byte position
        if (dmem_byte == 0):
            expected = int(str(dut.inter_operand2.value),2) & 0xFF
            actual = int(getattr(dut.bram_inst, dmem_word).value) & 0xFF
        elif (dmem_byte == 1):
            expected = int(str(dut.inter_operand2.value),2) & 0xFF
            actual = (int(getattr(dut.bram_inst, dmem_word).value) & 0xFF00) >> 8
        elif (dmem_byte == 2):
            expected = int(str(dut.inter_operand2.value),2) & 0xFF
            actual = (int(getattr(dut.bram_inst, dmem_word).value) & 0xFF0000) >> 16
        elif (dmem_byte == 3):
            expected = int(str(dut.inter_operand2.value),2) & 0xFF
            actual = (int(getattr(dut.bram_inst, dmem_word).value) & 0xFF000000) >> 24

    # Handle halfword store (SH instruction)
    elif INS[1][0] == "SH":
        # Depending on offset, write to lower or upper half of the word
        if (dmem_byte == 0 or dmem_byte == 1):
            expected = int(str(dut.inter_operand2.value),2) & 0xFFFF
            actual = int(getattr(dut.bram_inst, dmem_word).value) & 0xFFFF
        elif (dmem_byte == 2 or dmem_byte == 3):
            expected = int(str(dut.inter_operand2.value),2) & 0xFFFF
            actual = (int(getattr(dut.bram_inst, dmem_word).value) & 0xFFFF0000) >> 16

    # Handle word store (SW instruction)
    elif INS[1][0] == "SW":
        # Store the full 32-bit word
        expected = int(str(dut.inter_operand2.value),2) & 0xFFFFFFFF
        actual = int(getattr(dut.bram_inst, dmem_word).value) & 0xFFFFFFFF


    dut._log.info("instruction is     %s", INS[1][0])
    dut._log.info("DMEM address is     %s", int(str(dut.data_mem_addrb.value),2))
    dut._log.info("DMEM byte is     %s", dmem_byte)
    dut._log.info("Store data is     %s", int(str(dut.data_mem_dinb.value),2))
    dut._log.info("WEB is     %s", int(str(dut.data_mem_web.value),2))
    dut._log.info("opernad1 is     %s", int(str(dut.inter_operand1.value),2))
    dut._log.info("operand2 is     %s", int(str(dut.inter_operand2.value),2))
    dut._log.info("immediate is     %s", int(str(dut.inter_imm.value),2))
    dut._log.info("write enable is     %s", int(str(dut.inter_write_reg_file.value),2))
    dut._log.info("write data is     %s", int(str(dut.writeRegData.value),2))
    dut._log.info("rs1  is    %s", int(str(dut.inter_rs1.value),2))
    dut._log.info("rs2  is    %s", int(str(dut.inter_rs2.value),2))
    dut._log.info("rd  is    %s", int(str(dut.inter_rd.value),2))
    dut._log.info("actual result is     %d", actual)
    dut._log.info("expected result is     %d", expected)

    print_registers(dut)

    # dut._log.info("INS is    %s", INS)
    assert actual == expected, f"S type result is incorrect: {actual} != {expected}"

# # LOAD type instruction test
@cocotb.test()
async def test_LOAD(dut):
    dut.pc_i.value = 0

    # Start the 100MHz clk signal
    clock = Clock(dut.clk, 10, units="ns")
    cocotb.start_soon(clock.start())

    # Sys reset
    dut.en.value = 0  # De-assert enable to simulate reset
    dut.reset.value = 1
    await Timer(10, units="ns")
    dut.en.value = 1  # Assert enable to bring the module out of reset
    dut.reset.value = 0
    await Timer(10, units="ns")

    # print_registers(dut)

    # Test LOAD-Type Instruction
    INS = utilities.ins_gen('LOAD')  # Generate an LOAD-type instruction using utility function
    dut.instruction.value = INS[ins_idx]  # Pass the instruction to the 'instruction' input port
    dut.pc_i.value = 0
    await Timer(60, units="ns")

    # Calculate the BRAM word index from the ALU result (12-bit address range, word-aligned)
    dmem_word = f"DMEM[{(int(str(dut.alu_result_1.value), 2) & 0xFFF) >> 2}]"

    # Calculate the byte offset within the word (0 to 3)
    dmem_byte = int(str(dut.alu_result_1.value), 2) & 0x3

    # Handle byte load (LB instruction)
    if INS[1][0] == "LB":
        # Extract the relevant byte from inter_operand2 and shift it into the correct byte position
        if (dmem_byte == 0):
            expected = int(getattr(dut.bram_inst, dmem_word).value) & 0xFF
            expected = sign_extend_8_to_32(expected)
        elif (dmem_byte == 1):
            expected = (int(getattr(dut.bram_inst, dmem_word).value) & 0xFF00) >> 8
            expected = sign_extend_8_to_32(expected)
        elif (dmem_byte == 2):
            expected = (int(getattr(dut.bram_inst, dmem_word).value) & 0xFF0000) >> 16
            expected = sign_extend_8_to_32(expected)
        elif (dmem_byte == 3):
            expected = (int(getattr(dut.bram_inst, dmem_word).value) & 0xFF000000) >> 24
            expected = sign_extend_8_to_32(expected)

    # Handle byte load (LBU instruction)
    if INS[1][0] == "LBU":
        # Extract the relevant byte from inter_operand2 and shift it into the correct byte position
        if (dmem_byte == 0):
            expected = int(getattr(dut.bram_inst, dmem_word).value) & 0xFF
        elif (dmem_byte == 1):
            expected = (int(getattr(dut.bram_inst, dmem_word).value) & 0xFF00) >> 8
        elif (dmem_byte == 2):
            expected = (int(getattr(dut.bram_inst, dmem_word).value) & 0xFF0000) >> 16
        elif (dmem_byte == 3):
            expected = (int(getattr(dut.bram_inst, dmem_word).value) & 0xFF000000) >> 24

    # Handle unsigned halfword load (LHU instruction)
    elif INS[1][0] == "LHU":
        # Depending on offset, write to lower or upper half of the word
        if (dmem_byte == 0):
            expected = int(getattr(dut.bram_inst, dmem_word).value) & 0xFFFF
        elif (dmem_byte == 1):
            expected = (int(getattr(dut.bram_inst, dmem_word).value) & 0xFFFF00) >> 8
        elif (dmem_byte == 2):
            expected = (int(getattr(dut.bram_inst, dmem_word).value) & 0xFFFF0000) >> 16
        elif (dmem_byte == 3):
            expected = 0

    # Handle signed halfword load (LH instruction)
    elif INS[1][0] == "LH":
        # Depending on offset, write to lower or upper half of the word
        if (dmem_byte == 0):
            expected = int(getattr(dut.bram_inst, dmem_word).value) & 0xFFFF
            expected = sign_extend_16_to_32(expected)
        elif (dmem_byte == 1):
            expected = (int(getattr(dut.bram_inst, dmem_word).value) & 0xFFFF00) >> 8
            expected = sign_extend_16_to_32(expected)
        elif (dmem_byte == 2):
            expected = (int(getattr(dut.bram_inst, dmem_word).value) & 0xFFFF0000) >> 16
            expected = sign_extend_16_to_32(expected)
        elif (dmem_byte == 3):
            expected = 0

    # Handle word load (LW instruction)
    elif INS[1][0] == "LW":
        expected = int(getattr(dut.bram_inst, dmem_word).value) & 0xFFFFFFFF

    reg_name = f"REG_FILE[{int(str(dut.inter_rd.value), 2)}]"  # Construct the register name
    print(reg_name)
    actual = twos_comp(int(getattr(dut.regfile_inst, reg_name).value),32)  # Access the register dynamically

    dut._log.info("instruction is     %s", INS[1][0])
    dut._log.info("single instruction is     %s", str(dut.inter_Single_Instruction.value))
    dut._log.info("reset is     %s", int(str(dut.reset.value),2))
    dut._log.info("DMEM address is     %s", dmem_word)
    dut._log.info("DMEM byte is     %s", dmem_byte)
    dut._log.info("Load flag is     %s", int(str(dut.load_into_reg.value),2))
    dut._log.info("Load data is     %s", int(str(dut.loadData_w.value),2))
    # dut._log.info("Load valid is     %s", int(str(dut.writeRegData.value),2))
    dut._log.info("Bram dout is     %s", int(str(dut.data_mem_doutb.value),2))
    dut._log.info("WEB is     %s", int(str(dut.data_mem_web.value),2))
    dut._log.info("opernad1 is     %s", int(str(dut.inter_operand1.value),2))
    dut._log.info("operand2 is     %s", int(str(dut.inter_operand2.value),2))
    dut._log.info("immediate is     %s", int(str(dut.inter_imm.value),2))
    dut._log.info("write enable is     %s", int(str(dut.inter_write_reg_file.value),2))
    dut._log.info("write data is     %s", int(str(dut.writeRegData.value),2))
    dut._log.info("rs1  is    %s", int(str(dut.inter_rs1.value),2))
    dut._log.info("rs2  is    %s", int(str(dut.inter_rs2.value),2))
    dut._log.info("rd  is    %s", int(str(dut.inter_rd.value),2))
    dut._log.info("actual result is     %d", actual)
    dut._log.info("expected result is     %d", expected)
    dut._log.info("LSU state is     %d", int(getattr(dut.dataMem_inst, "current_state").value))
    dut._log.info("data_rvalid_i     %d", int(str(dut.data_rvalid_i.value),2))
    dut._log.info("load data valid is     %d", int(getattr(dut.dataMem_inst, "load_data_valid").value))

    # print_registers(dut)

    # dut._log.info("INS is    %s", INS)
    assert actual == expected, f"LOAD type result is incorrect: {actual} != {expected}"
