// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdec_swc_tb__Syms.h"


VL_ATTR_COLD void Vdec_swc_tb___024root__trace_init_sub__TOP__0(Vdec_swc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdec_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec_swc_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("dec_swc_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+142,0,"hclk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"hrstn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+134,0,"cycle_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+144,0,"inst_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+145,0,"ifu_dec_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dec_swc_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+142,0,"hclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"hrstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+134,0,"cycle_cnt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+145,0,"ifu_dec_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+144,0,"inst_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"inst_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17,0,"dec_lui",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"dec_auipc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"dec_jal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"dec_jalr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"dec_beq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"dec_bne",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"dec_blt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"dec_bge",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"dec_bltu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"dec_bgeu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"dec_lb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"dec_lh",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"dec_lw",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"dec_lbu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"dec_lhu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"dec_sb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"dec_sh",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"dec_sw",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"dec_addi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"dec_slti",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"dec_sltiu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"dec_xori",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"dec_ori",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"dec_andi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"dec_slli",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"dec_srli",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"dec_srai",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"dec_add",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"dec_sub",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"dec_sll",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"dec_slt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"dec_sltu",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"dec_xor",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"dec_srl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"dec_sra",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"dec_or",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"dec_and",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"dec_fence",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"dec_fence_i",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"dec_ecall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"dec_ebreak",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"dec_csrrw",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"dec_csrrs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"dec_csrrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"dec_csrrwi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"dec_csrrsi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"dec_csrrci",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"dec_upper_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"dec_imm_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"dec_reg_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"dec_jump_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"dec_branch_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"dec_load_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"dec_store_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"dec_rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+9,0,"dec_rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+10,0,"dec_rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+11,0,"dec_imm_type_i",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+12,0,"dec_imm_type_s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+13,0,"dec_imm_type_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+14,0,"dec_imm_type_u",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+15,0,"dec_imm_type_j",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+135,0,"inst_31_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+136,0,"inst_31_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+137,0,"inst_31_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+138,0,"inst_19_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+139,0,"inst_14_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+140,0,"inst_11_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+141,0,"inst_6_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+64,0,"inst_31_28_equal_0000",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"inst_19_15_equal_00000",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"inst_11_7_equal_00000",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"inst_31_25_equal_0000000",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"inst_31_25_equal_0100000",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"inst_14_12_equal_000",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"inst_14_12_equal_001",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"inst_14_12_equal_010",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"inst_14_12_equal_011",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"inst_14_12_equal_100",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"inst_14_12_equal_101",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"inst_14_12_equal_110",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"inst_14_12_equal_111",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"inst_6_0_equal_0000011",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"inst_6_0_equal_0001111",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"inst_6_0_equal_0010011",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"inst_6_0_equal_0010111",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"inst_6_0_equal_0100011",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"inst_6_0_equal_0110011",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"inst_6_0_equal_0110111",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"inst_6_0_equal_1100011",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"inst_6_0_equal_1100111",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"inst_6_0_equal_1101111",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"inst_6_0_equal_1110011",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"inst_31_20_equal_000000000000",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"inst_31_20_equal_000000000001",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"mid_lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"mid_auipc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"mid_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"mid_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"mid_beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"mid_bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"mid_blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"mid_bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"mid_bltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"mid_bgeu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"mid_lb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"mid_lh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"mid_lw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"mid_lbu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"mid_lhu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"mid_sb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"mid_sh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"mid_sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"mid_addi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"mid_slti",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"mid_sltiu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"mid_xori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"mid_ori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"mid_andi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"mid_csrrw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"mid_csrrs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"mid_csrrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"mid_csrrwi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"mid_csrrsi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"mid_csrrci",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"mid_slli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"mid_srli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"mid_srai",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"mid_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"mid_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"mid_sll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"mid_slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"mid_sltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"mid_xor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"mid_srl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"mid_sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"mid_or",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"mid_and",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"mid_fence",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"mid_fence_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"mid_ecall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"mid_ebreak",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdec_swc_tb___024root__trace_init_top(Vdec_swc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdec_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec_swc_tb___024root__trace_init_top\n"); );
    // Body
    Vdec_swc_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vdec_swc_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vdec_swc_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdec_swc_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdec_swc_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vdec_swc_tb___024root__trace_register(Vdec_swc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdec_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec_swc_tb___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vdec_swc_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vdec_swc_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vdec_swc_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vdec_swc_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vdec_swc_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec_swc_tb___024root__trace_const_0\n"); );
    // Init
    Vdec_swc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdec_swc_tb___024root*>(voidSelf);
    Vdec_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vdec_swc_tb___024root__trace_full_0_sub_0(Vdec_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdec_swc_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec_swc_tb___024root__trace_full_0\n"); );
    // Init
    Vdec_swc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdec_swc_tb___024root*>(voidSelf);
    Vdec_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdec_swc_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdec_swc_tb___024root__trace_full_0_sub_0(Vdec_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdec_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec_swc_tb___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_upper_en));
    bufp->fullBit(oldp+2,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_imm_en));
    bufp->fullBit(oldp+3,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_reg_en));
    bufp->fullBit(oldp+4,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_jump_en));
    bufp->fullBit(oldp+5,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_branch_en));
    bufp->fullBit(oldp+6,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_load_en));
    bufp->fullBit(oldp+7,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_store_en));
    bufp->fullCData(oldp+8,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_rs2),5);
    bufp->fullCData(oldp+9,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_rs1),5);
    bufp->fullCData(oldp+10,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_rd),5);
    bufp->fullSData(oldp+11,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_imm_type_i),12);
    bufp->fullSData(oldp+12,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_imm_type_s),12);
    bufp->fullSData(oldp+13,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_imm_type_b),13);
    bufp->fullIData(oldp+14,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_imm_type_u),20);
    bufp->fullIData(oldp+15,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_imm_type_j),21);
    bufp->fullIData(oldp+16,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_out),32);
    bufp->fullBit(oldp+17,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_lui));
    bufp->fullBit(oldp+18,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_auipc));
    bufp->fullBit(oldp+19,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_jal));
    bufp->fullBit(oldp+20,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_jalr));
    bufp->fullBit(oldp+21,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_beq));
    bufp->fullBit(oldp+22,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_bne));
    bufp->fullBit(oldp+23,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_blt));
    bufp->fullBit(oldp+24,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_bge));
    bufp->fullBit(oldp+25,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_bltu));
    bufp->fullBit(oldp+26,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_bgeu));
    bufp->fullBit(oldp+27,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_lb));
    bufp->fullBit(oldp+28,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_lh));
    bufp->fullBit(oldp+29,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_lw));
    bufp->fullBit(oldp+30,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_lbu));
    bufp->fullBit(oldp+31,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_lhu));
    bufp->fullBit(oldp+32,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_sb));
    bufp->fullBit(oldp+33,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_sh));
    bufp->fullBit(oldp+34,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_sw));
    bufp->fullBit(oldp+35,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_addi));
    bufp->fullBit(oldp+36,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_slti));
    bufp->fullBit(oldp+37,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_sltiu));
    bufp->fullBit(oldp+38,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_xori));
    bufp->fullBit(oldp+39,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_ori));
    bufp->fullBit(oldp+40,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_andi));
    bufp->fullBit(oldp+41,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_slli));
    bufp->fullBit(oldp+42,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_srli));
    bufp->fullBit(oldp+43,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_srai));
    bufp->fullBit(oldp+44,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_add));
    bufp->fullBit(oldp+45,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_sub));
    bufp->fullBit(oldp+46,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_sll));
    bufp->fullBit(oldp+47,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_slt));
    bufp->fullBit(oldp+48,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_sltu));
    bufp->fullBit(oldp+49,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_xor));
    bufp->fullBit(oldp+50,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_srl));
    bufp->fullBit(oldp+51,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_sra));
    bufp->fullBit(oldp+52,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_or));
    bufp->fullBit(oldp+53,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_and));
    bufp->fullBit(oldp+54,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_fence));
    bufp->fullBit(oldp+55,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_fence_i));
    bufp->fullBit(oldp+56,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_ecall));
    bufp->fullBit(oldp+57,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_ebreak));
    bufp->fullBit(oldp+58,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_csrrw));
    bufp->fullBit(oldp+59,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_csrrs));
    bufp->fullBit(oldp+60,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_csrrc));
    bufp->fullBit(oldp+61,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_csrrwi));
    bufp->fullBit(oldp+62,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_csrrsi));
    bufp->fullBit(oldp+63,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_csrrci));
    bufp->fullBit(oldp+64,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_28_equal_0000));
    bufp->fullBit(oldp+65,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_19_15_equal_00000));
    bufp->fullBit(oldp+66,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_11_7_equal_00000));
    bufp->fullBit(oldp+67,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_25_equal_0000000));
    bufp->fullBit(oldp+68,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_25_equal_0100000));
    bufp->fullBit(oldp+69,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_000));
    bufp->fullBit(oldp+70,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_001));
    bufp->fullBit(oldp+71,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_010));
    bufp->fullBit(oldp+72,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_011));
    bufp->fullBit(oldp+73,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_100));
    bufp->fullBit(oldp+74,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_101));
    bufp->fullBit(oldp+75,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_110));
    bufp->fullBit(oldp+76,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_111));
    bufp->fullBit(oldp+77,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0000011));
    bufp->fullBit(oldp+78,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0001111));
    bufp->fullBit(oldp+79,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010011));
    bufp->fullBit(oldp+80,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010111));
    bufp->fullBit(oldp+81,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0100011));
    bufp->fullBit(oldp+82,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110011));
    bufp->fullBit(oldp+83,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110111));
    bufp->fullBit(oldp+84,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100011));
    bufp->fullBit(oldp+85,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100111));
    bufp->fullBit(oldp+86,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1101111));
    bufp->fullBit(oldp+87,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011));
    bufp->fullBit(oldp+88,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_20_equal_000000000000));
    bufp->fullBit(oldp+89,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_20_equal_000000000001));
    bufp->fullBit(oldp+90,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_jalr));
    bufp->fullBit(oldp+91,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_beq));
    bufp->fullBit(oldp+92,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_bne));
    bufp->fullBit(oldp+93,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_blt));
    bufp->fullBit(oldp+94,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_bge));
    bufp->fullBit(oldp+95,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_bltu));
    bufp->fullBit(oldp+96,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_bgeu));
    bufp->fullBit(oldp+97,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_lb));
    bufp->fullBit(oldp+98,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_lh));
    bufp->fullBit(oldp+99,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_lw));
    bufp->fullBit(oldp+100,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_lbu));
    bufp->fullBit(oldp+101,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_lhu));
    bufp->fullBit(oldp+102,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sb));
    bufp->fullBit(oldp+103,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sh));
    bufp->fullBit(oldp+104,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sw));
    bufp->fullBit(oldp+105,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_addi));
    bufp->fullBit(oldp+106,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_slti));
    bufp->fullBit(oldp+107,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sltiu));
    bufp->fullBit(oldp+108,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_xori));
    bufp->fullBit(oldp+109,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_ori));
    bufp->fullBit(oldp+110,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_andi));
    bufp->fullBit(oldp+111,(((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_001) 
                             & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011))));
    bufp->fullBit(oldp+112,(((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_010) 
                             & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011))));
    bufp->fullBit(oldp+113,(((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_011) 
                             & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011))));
    bufp->fullBit(oldp+114,(((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_101) 
                             & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011))));
    bufp->fullBit(oldp+115,(((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_110) 
                             & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011))));
    bufp->fullBit(oldp+116,(((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_111) 
                             & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011))));
    bufp->fullBit(oldp+117,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_slli));
    bufp->fullBit(oldp+118,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_srli));
    bufp->fullBit(oldp+119,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_srai));
    bufp->fullBit(oldp+120,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_add));
    bufp->fullBit(oldp+121,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sub));
    bufp->fullBit(oldp+122,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sll));
    bufp->fullBit(oldp+123,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_slt));
    bufp->fullBit(oldp+124,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sltu));
    bufp->fullBit(oldp+125,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_xor));
    bufp->fullBit(oldp+126,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_srl));
    bufp->fullBit(oldp+127,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sra));
    bufp->fullBit(oldp+128,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_or));
    bufp->fullBit(oldp+129,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_and));
    bufp->fullBit(oldp+130,(((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_28_equal_0000) 
                             & ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_000) 
                                & ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_19_15_equal_00000) 
                                   & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_1))))));
    bufp->fullBit(oldp+131,(((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_2) 
                             & ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_001) 
                                & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_1)))));
    bufp->fullBit(oldp+132,(((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_2) 
                             & ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_000) 
                                & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_0)))));
    bufp->fullBit(oldp+133,(((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_20_equal_000000000001) 
                             & ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_000) 
                                & ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_19_15_equal_00000) 
                                   & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_0))))));
    bufp->fullCData(oldp+134,(vlSelf->dec_swc_tb__DOT__cycle_cnt),4);
    bufp->fullCData(oldp+135,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_28),4);
    bufp->fullCData(oldp+136,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_25),7);
    bufp->fullSData(oldp+137,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_20),12);
    bufp->fullCData(oldp+138,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_19_15),5);
    bufp->fullCData(oldp+139,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12),3);
    bufp->fullCData(oldp+140,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_11_7),5);
    bufp->fullCData(oldp+141,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0),7);
    bufp->fullBit(oldp+142,(vlSelf->dec_swc_tb__DOT__hclk));
    bufp->fullBit(oldp+143,(vlSelf->dec_swc_tb__DOT__hrstn));
    bufp->fullIData(oldp+144,(vlSelf->dec_swc_tb__DOT__inst_in),32);
    bufp->fullBit(oldp+145,(vlSelf->dec_swc_tb__DOT__ifu_dec_stall));
}
