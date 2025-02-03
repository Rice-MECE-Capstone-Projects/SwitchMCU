import cocotb
import utilities
from parameters import *
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer

# regfile = 0

async def cycle_counter(dut):
    while True:
        await RisingEdge(dut.hclk)
        dut.cycle_cnt.value = (dut.cycle_cnt.value % 4) + 1

async def regfile_reader(dut):
    global regfile
    while True:
        await RisingEdge(dut.hclk)
        regfile = [hex(dut.regfile_interact.value[i:i+31]) for i in range(0, len(dut.regfile_interact.value), 32)]
        regfile = regfile[::-1]

@cocotb.coroutine
async def wait_for_signal_change(signal, clk):
    prev_val = signal.value
    while True:
        await RisingEdge(clk)
        current_val = signal.value
        if prev_val != current_val:
            break

    # input wire itcm_hready, // Just keep high????
    # input wire itcm_hresp, //USELESS
    # input wire [31:0] itcm_hrdata, //THIS IS THE INSTRUCTION
    # input wire itcm_ready, // Just keep low????
    # input wire dtcm_hready, // Just keep high????
    # input wire dtcm_hresp, // USELESS
    # input wire [31:0] dtcm_hrdata, // Actual info to load/store
    # input wire [3:0] cycle_cnt,


# # R type
# # CHECK rd AT THE END
# @cocotb.test()
# async def test_R(dut):
#     # global regfile
#     clock = Clock(dut.hclk, 10, units="ns") # 100MHz clk signal
#     cocotb.start_soon(clock.start())

#     # # sys reset
#     # dut.hrstn.value = 0
#     # await Timer(10, units="ns")
#     # dut.hrstn.value = 1

#     # # cycle_counter++
#     # dut.cycle_cnt.value = 0
#     # cocotb.start_soon(cycle_counter(dut))

#     # Reset the DUT
#     dut.hrstn.value = 0
#     await Timer(10, units="ns")
#     dut.hrstn.value = 1
#     cocotb.start_soon(regfile_reader(dut))

#     # Initialize signals
#     dut.cycle_cnt.value = 0
#     # Trash signals
#     dut.itcm_hresp.value = 0
#     dut.dtcm_hresp.value = 0

#     # Don't change signals
#     dut.itcm_ready.value = 0
#     dut.itcm_hready.value = 1
#     dut.dtcm_hready.value = 1

#     # Test R-Type Instruction
#     INS = utilities.ins_gen('R')
#     print(f"INS: {INS}")
#     dut.itcm_hrdata.value = INS[ins_idx]
#     dut.dtcm_hrdata.value = 0xDEADBEEF
#     # update cycle_counter
#     dut.cycle_cnt.value = 0
#     cocotb.start_soon(cycle_counter(dut))
#     # await Timer(60, units="ns")
#     output = INS[1]
#     ins_name = output[0]
#     await RisingEdge(dut.hclk)
#     await RisingEdge(dut.hclk)
#     # print(f"regfile: {regfile}")
#     rs1 = int(regfile[INS[r_rs1_idx]], 16)
#     rs2 = int(regfile[INS[r_rs2_idx]], 16)
#     print(f"rs1: {hex(rs1)}, rs2: {hex(rs2)}")
#     expected_res = 0
#     #WORKS
#     if ins_name == "ADD":
#         expected_res = [1, rs1 + rs2]
#     #WORKS!!!
#     if ins_name == "SLL":
#         expected_res = [1, (rs1 << (rs2&0x1f)) & 0xFFFFFFFF]
#     #WORKS!!!
#     if ins_name == "SLT":
#         rs1_s = utilities.twos_comp(rs1, 32)
#         rs2_s = utilities.twos_comp(rs2, 32)
#         expected_res = [1, 1] if rs1_s < rs2_s else [1, 0]
#     #WORKS!!!
#     if ins_name == "SLTU":
#         expected_res = [1, 1] if rs1 < rs2 else [1, 0]
#     #WORKS!!!
#     if ins_name == "XOR":
#         expected_res = [1, rs1 ^ rs2]
#     #WORKS!!!
#     if ins_name == "SRL":
#         expected_res = [1, utilities.logical_right(rs1, rs2&0x1f)]
#     #WORKS!!!
#     if ins_name == "OR":
#         expected_res = [1, rs1 | rs2]
#     #WORKS!!!
#     if ins_name == "AND":
#         expected_res = [1, rs1 & rs2]
#     #TODO: FIX to 2's complement representation
#     # Actual result is correct
#     if ins_name == "SUB":
#         expected_res = [1, rs1 + ~rs2 + 1]
#     #WORKS!!!
#     if ins_name == "SRA":
#         expected_res = [1, utilities.arithmetic_right(rs1, (rs2&0x1F))]
#     print(f"expected_res: {hex(expected_res[1])}")
#     print(f"rd index: {INS[r_rd_idx]}")
    
#     await wait_for_signal_change(dut.dec_rd, dut.hclk)
#     print(f"expected rd: {INS[r_rd_idx]}, actual rd: {dut.dec_rd.value}")
#     assert dut.dec_rd.value  == INS[r_rd_idx], "dec_rd  incorrect"
#     assert dut.dec_rs1.value == INS[r_rs1_idx], "dec_rs1 incorrect"
#     assert dut.dec_rs2.value == INS[r_rs2_idx], "dec_rs2 incorrect"
#     await wait_for_signal_change(dut.regfile_interact, dut.hclk)
#     print(f"regfile: {regfile}")
#     assert int(regfile[INS[r_rd_idx]], 16) == expected_res[1], "Register not loaded correctly"

# I type
# CHECK rd AT THE END
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

    # Reset the DUT
    dut.hrstn.value = 0
    await Timer(10, units="ns")
    dut.hrstn.value = 1
    cocotb.start_soon(regfile_reader(dut))

    # Initialize signals
    dut.cycle_cnt.value = 0
    # Trash signals
    dut.itcm_hresp.value = 0
    dut.dtcm_hresp.value = 0

    # Don't change signals
    dut.itcm_ready.value = 0
    dut.itcm_hready.value = 1
    dut.dtcm_hready.value = 1

    # Test I-Type Instruction
    INS = utilities.ins_gen('I')
    dut.itcm_hrdata.value = INS[ins_idx]
    dut.dtcm_hrdata.value = 0xDEADBEEF

    # update cycle_counter
    dut.cycle_cnt.value = 0
    cocotb.start_soon(cycle_counter(dut))

    output = INS[1]
    ins_name = output[0]
    await RisingEdge(dut.hclk)
    await RisingEdge(dut.hclk)
    print(f"i index: {i_imm_idx}")
    print(f"regfile: {regfile}")
    print(f"INS: {INS}")
    rs1 = int(regfile[INS[i_rs1_idx]], 16)
    rd = int(regfile[INS[i_rd_idx]], 16)
    imm = int(str(INS[i_imm_idx]))
    print(f"rs1: {hex(rs1)}, rd: {hex(rd)}")
    print(f"imm: {imm}")
    print(f"decoded rd: {hex(dut.dec_rd.value)}")
    
    output = INS[1]
    ins_name = output[0]
    expected_res = [1, 0]
    if ins_name == "ADDI":#yay
        expected_res = [1, (rs1 + utilities.sign_extend(dut, imm, 12, 32)) & 0xFFFFFFFF]
    if ins_name == "SLTI":
        expected_res = [1, utilities.twos_comp(rs1, 32) < utilities.twos_comp(imm,12)]
    if ins_name == "SLTIU":
        expected_res = [1, 1] if rs1 < utilities.sign_extend(dut, imm, 12, 32) else [1, 0]
    if ins_name == "XORI":#yay
        expected_res = [1, rs1 ^ utilities.sign_extend(dut, imm, 12, 32)]
    if ins_name == "ORI":#yay
        expected_res = [1, rs1 | utilities.sign_extend(dut, imm, 12, 32)]
    if ins_name == "ANDI":#yay
        expected_res = [1, rs1 & utilities.sign_extend(dut, imm, 12, 32)]
    if ins_name == "SLLI":#yay
        expected_res = [1, (rs1 << (imm&0x1f)) & 0xFFFFFFFF]
    if ins_name == "SRLI":
        expected_res = [1, utilities.logical_right(rs1, (imm & 0x1f))]
    if ins_name == "SRAI":#yay
        expected_res = [1, utilities.arithmetic_right(rs1, imm&0x1f)]
    if ins_name == "LB":
        #TODO: not done yet
        expected_res = [0, 0]
    if ins_name == "LH":
        #TODO: not done yet
        expected_res =  [0, 0]
    if ins_name == "LW":
        #TODO: not done yet
        expected_res = [0, 0]
    if ins_name == "LBU":
        #TODO: not done yet
        expected_res = [0, 0]
    if ins_name == "LHU":
        #TODO: not done yet
        expected_res = [0, 0]
    if ins_name == "JALR":
        #TODO: not done yet
        expected_res = [0, 0]
    print(f"instruction: {ins_name}")
    print(f"expected result: {expected_res}")
    await wait_for_signal_change(dut.reg_wdata, dut.hclk)
    assert dut.dec_rd.value  == INS[i_rd_idx],  "dec_rd  incorrect"
    assert dut.dec_rs1.value == INS[i_rs1_idx], "dec_rs1 incorrect"
    await wait_for_signal_change(dut.regfile_interact, dut.hclk)
    print(f"actual result: {int(regfile[INS[i_rd_idx]], 16)}")
    assert int(regfile[INS[i_rd_idx]], 16) == expected_res[1], "expected result incorrect"

# # S type
# # This stores to memory lol idk what to check
# @cocotb.test()
# async def test_S(dut):
#     # 100MHz clk signal
#     clock = Clock(dut.hclk, 10, units="ns")
#     cocotb.start_soon(clock.start())

#     # reset signal
#     dut.hrstn.value = 0
#     await Timer(10, units="ns")
#     dut.hrstn.value = 1

#     # update cycle_counter
#     dut.cycle_cnt.value = 0
#     cocotb.start_soon(cycle_counter(dut))

#     # Test S-Type Instruction
#     INS = utilities.ins_gen('S')
#     dut.inst_in.value = INS[ins_idx]
#     await Timer(60, units="ns")
#     assert dut.dec_rs1.value == INS[s_rs1_idx], "dec_rs1 incorrect"
#     assert dut.dec_rs2.value == INS[s_rs2_idx], "dec_rs2 incorrect"

# # B type
# # LOOK AT pc_write AND pc_wdata flag to check if branch is taken
# #
# @cocotb.test()
# async def test_B(dut):
#     # 100MHz clk signal
#     clock = Clock(dut.hclk, 10, units="ns")
#     cocotb.start_soon(clock.start())

#     # reset signal
#     dut.hrstn.value = 0
#     await Timer(10, units="ns")
#     dut.hrstn.value = 1

#     # update cycle_counter
#     dut.cycle_cnt.value = 0
#     cocotb.start_soon(cycle_counter(dut))

#     # Test B-Type Instruction
#     INS = utilities.ins_gen('B')
#     dut.inst_in.value = INS[ins_idx]
#     await Timer(60, units="ns")
#     assert dut.dec_rs1.value == INS[b_rs1_idx], "dec_rs1 incorrect"
#     assert dut.dec_rs2.value == INS[b_rs2_idx], "dec_rs2 incorrect"

# # U type
# # CHECK rd AT THE END FOR UPPER IMMEDIATE ADDING AND LOADING
# @cocotb.test()
# async def test_U(dut):
#     # 100MHz clk signal
#     clock = Clock(dut.hclk, 10, units="ns")
#     cocotb.start_soon(clock.start())

#     # reset signal
#     dut.hrstn.value = 0
#     await Timer(10, units="ns")
#     dut.hrstn.value = 1

#     # update cycle_counter
#     dut.cycle_cnt.value = 0
#     cocotb.start_soon(cycle_counter(dut))

#     # Test U-Type Instruction
#     INS = utilities.ins_gen('U')
#     dut.inst_in.value = INS[ins_idx]
#     await Timer(60, units="ns")
#     assert dut.dec_rd.value == INS[u_rd_idx], "dec_rd incorrect"

# # J type
# # CHECK rd AT THE END FOR RETURN ADDRESS

# @cocotb.test()
# async def test_J(dut):
#     # 100MHz clk signal
#     clock = Clock(dut.hclk, 10, units="ns")
#     cocotb.start_soon(clock.start())

#     # reset signal
#     dut.hrstn.value = 0
#     await Timer(10, units="ns")
#     dut.hrstn.value = 1

#     # update cycle_counter
#     dut.cycle_cnt.value = 0
#     cocotb.start_soon(cycle_counter(dut))

#     # Test J-Type Instruction
#     INS = utilities.ins_gen('J')
#     dut.inst_in.value = INS[ins_idx]
#     await Timer(60, units="ns")
#     assert dut.dec_rd.value == INS[j_rd_idx], "dec_rd incorrect"



# @cocotb.test()
# async def test_core_basic(dut):
#     """Test basic functionality of the core"""

#     # 100MHz clock signal
#     clock = Clock(dut.hclk, 10, units="ns")  # 10ns period (100MHz)
#     cocotb.start_soon(clock.start())

#     # Reset the DUT
#     dut.hrstn.value = 0
#     await Timer(10, units="ns")
#     dut.hrstn.value = 1
#     cocotb.start_soon(regfile_reader(dut))

#     # Initialize signals
#     dut.cycle_cnt.value = 0
#     # Trash signals
#     dut.itcm_hresp.value = 0
#     dut.dtcm_hresp.value = 0

#     # Don't change signals
#     dut.itcm_ready.value = 0
#     dut.itcm_hready.value = 1
#     dut.dtcm_hready.value = 1


#     dut.itcm_hrdata.value = 0b00000000000000001010000100000011
#     #Load operation
#     #offset: 000000000000, rs1: 00001, 010, rd: 00010, opcode:: 0000011
#     dut.dtcm_hrdata.value = 0xDEADBEEF
#     # update cycle_counter
#     dut.cycle_cnt.value = 0
#     cocotb.start_soon(cycle_counter(dut))

#     # Test: Reset should initialize pc to 0
#     await RisingEdge(dut.hclk)
#     assert dut.ifu_pc.value == 0, "PC not reset to 0"

#     # Test: Load instruction from memory
#     # await Timer(40, units="ns")
#     await Timer(130, units="ns")
    
#     dut.itcm_hrdata.value = 0b00000000000000010110001000110011
#     #ORI operation
#     #offset: 000000000000, rs1: 00010, 110, rd: 00100, opcode:: 0110011
#     # print("reg_wdata.value: {}".format(dut.mau_load_data.value))
#     # await wait_for_signal_change(dut.reg_rdata_1, dut.hclk)

#     await wait_for_signal_change(dut.mau_load_data, dut.hclk)
#     print(f"regfile values: {dut.dec_or.value})")
#     # await Timer(40, units="ns")
#     assert dut.mau_load_data.value == 0xDEADBEEF, "Instruction output is incorrect"

#     await wait_for_signal_change(dut.regfile_interact, dut.hclk)

#     assert int(regfile[2], 16) == 0xDEADBEEF, "Register 5 not loaded correctly"

#     await Timer(80, units="ns")
