// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vexu_reg_wbu_top_tb__Syms.h"


VL_ATTR_COLD void Vexu_reg_wbu_top_tb___024root__trace_init_sub__TOP__0(Vexu_reg_wbu_top_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_reg_wbu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_reg_wbu_top_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("exu_reg_wbu_top_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+126,0,"hclk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"hrstn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+133,0,"inst_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"inst_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+134,0,"dec_lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"dec_auipc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"dec_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"dec_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"dec_beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"dec_bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"dec_blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"dec_bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"dec_bltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"dec_bgeu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"dec_lb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"dec_lh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"dec_lw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"dec_lbu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"dec_lhu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"dec_sb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"dec_sh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"dec_sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"dec_addi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"dec_slti",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"dec_sltiu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"dec_xori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"dec_ori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"dec_andi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"dec_slli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"dec_srli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"dec_srai",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"dec_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"dec_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"dec_sll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"dec_slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"dec_sltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"dec_xor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"dec_srl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"dec_sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"dec_or",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"dec_and",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"dec_fence",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"dec_fence_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"dec_ecall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"dec_ebreak",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"dec_csrrw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"dec_csrrs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"dec_csrrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"dec_csrrwi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"dec_csrrsi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"dec_csrrci",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"dec_upper_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"dec_imm_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"dec_reg_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"dec_jump_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"dec_branch_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"dec_load_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"dec_store_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"dec_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+7,0,"dec_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+8,0,"dec_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+184,0,"dec_imm_type_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+185,0,"dec_imm_type_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+186,0,"dec_imm_type_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+187,0,"dec_imm_type_u",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+188,0,"dec_imm_type_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+110,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+127,0,"pc_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+128,0,"pc_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"exu_load_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+14,0,"exu_load_base_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"exu_load_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+16,0,"exu_load_sext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"exu_load_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+116,0,"exu_load_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"exu_store_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"exu_store_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"exu_store_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+21,0,"exu_store_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"reg_waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+23,0,"reg_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+24,0,"reg_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"reg_raddr_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+26,0,"reg_rdata_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+27,0,"reg_ren_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"reg_raddr_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+29,0,"reg_rdata_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+30,0,"reg_ren_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"cycle_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+116,0,"ifu_dec_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"mau_load_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+10,0,"mau_load_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"mau_load_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("exu_reb_wbu_top_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+126,0,"hclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"hrstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+133,0,"inst_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"inst_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+134,0,"dec_lui",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"dec_auipc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"dec_jal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"dec_jalr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"dec_beq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"dec_bne",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"dec_blt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"dec_bge",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"dec_bltu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"dec_bgeu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"dec_lb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"dec_lh",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"dec_lw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"dec_lbu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"dec_lhu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"dec_sb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"dec_sh",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"dec_sw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"dec_addi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"dec_slti",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"dec_sltiu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"dec_xori",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"dec_ori",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"dec_andi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"dec_slli",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"dec_srli",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"dec_srai",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"dec_add",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"dec_sub",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"dec_sll",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"dec_slt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"dec_sltu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"dec_xor",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"dec_srl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"dec_sra",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"dec_or",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"dec_and",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"dec_fence",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"dec_fence_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"dec_ecall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"dec_ebreak",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"dec_csrrw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"dec_csrrs",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"dec_csrrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"dec_csrrwi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"dec_csrrsi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"dec_csrrci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"dec_upper_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"dec_imm_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"dec_reg_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"dec_jump_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"dec_branch_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"dec_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"dec_store_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"dec_rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+7,0,"dec_rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+8,0,"dec_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+184,0,"dec_imm_type_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+185,0,"dec_imm_type_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+186,0,"dec_imm_type_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+187,0,"dec_imm_type_u",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+188,0,"dec_imm_type_j",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+110,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+127,0,"pc_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+128,0,"pc_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"exu_load_rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+14,0,"exu_load_base_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"exu_load_offset",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+16,0,"exu_load_sext",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"exu_load_size",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+116,0,"exu_load_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"exu_store_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"exu_store_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"exu_store_size",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+21,0,"exu_store_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"reg_waddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+23,0,"reg_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+24,0,"reg_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"reg_raddr_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+26,0,"reg_rdata_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+27,0,"reg_ren_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"reg_raddr_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+29,0,"reg_rdata_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+30,0,"reg_ren_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"cycle_cnt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+116,0,"ifu_dec_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"mau_load_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+10,0,"mau_load_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"mau_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("exu_top_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+126,0,"hclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"hrstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+133,0,"inst_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"inst_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+134,0,"dec_lui",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"dec_auipc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"dec_jal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"dec_jalr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"dec_beq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"dec_bne",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"dec_blt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"dec_bge",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"dec_bltu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"dec_bgeu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"dec_lb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"dec_lh",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"dec_lw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"dec_lbu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"dec_lhu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"dec_sb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"dec_sh",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"dec_sw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"dec_addi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"dec_slti",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"dec_sltiu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"dec_xori",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"dec_ori",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"dec_andi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"dec_slli",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"dec_srli",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"dec_srai",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"dec_add",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"dec_sub",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"dec_sll",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"dec_slt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"dec_sltu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"dec_xor",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"dec_srl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"dec_sra",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"dec_or",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"dec_and",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"dec_fence",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"dec_fence_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"dec_ecall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"dec_ebreak",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"dec_csrrw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"dec_csrrs",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"dec_csrrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"dec_csrrwi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"dec_csrrsi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"dec_csrrci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"dec_upper_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"dec_imm_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"dec_reg_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"dec_jump_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"dec_branch_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"dec_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"dec_store_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"dec_rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+7,0,"dec_rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+8,0,"dec_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+184,0,"dec_imm_type_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+185,0,"dec_imm_type_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+186,0,"dec_imm_type_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+187,0,"dec_imm_type_u",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+188,0,"dec_imm_type_j",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+110,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+127,0,"pc_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+128,0,"pc_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"exu_load_rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+14,0,"exu_load_base_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"exu_load_offset",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+16,0,"exu_load_sext",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"exu_load_size",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+116,0,"exu_load_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"exu_store_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"exu_store_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"exu_store_size",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+21,0,"exu_store_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"reg_waddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+23,0,"reg_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+24,0,"reg_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"reg_raddr_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+26,0,"reg_rdata_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+27,0,"reg_ren_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"reg_raddr_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+29,0,"reg_rdata_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+30,0,"reg_ren_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"cycle_cnt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+116,0,"ifu_dec_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+129,0,"flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+112,0,"flush_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"exu_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ex_flush_swc_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+126,0,"hclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"hrstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"cycle_cnt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+129,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+112,0,"flush_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+189,0,"FLUSH_DISABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"FLUSH_CYCLE_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"FLUSH_CYCLE_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+189,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"STATE_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"STATE_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+130,0,"nextstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("ex_imm_en_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+126,0,"hclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"hrstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"cycle_cnt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+122,0,"dec_branch_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"dec_addi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"dec_slti",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"dec_sltiu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"dec_xori",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"dec_ori",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"dec_andi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"dec_slli",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"dec_srli",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"dec_srai",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+184,0,"dec_imm_type_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+8,0,"dec_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+7,0,"dec_rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+110,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"reg_waddr",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+24,0,"reg_wen",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"reg_wdata",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"reg_raddr_1",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+27,0,"reg_ren_1",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"reg_rdata_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"mid_reg_waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+32,0,"mid_reg_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"mid_reg_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"mid_reg_raddr_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+35,0,"mid_reg_ren_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("exu_branch_swc_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+126,0,"hclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"hrstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"cycle_cnt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+129,0,"flush",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+123,0,"dec_branch_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"dec_beq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"dec_bne",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"dec_blt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"dec_bge",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"dec_bltu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"dec_bgeu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+186,0,"dec_imm_type_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+7,0,"dec_rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+6,0,"dec_rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+110,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+127,0,"pc_write",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+128,0,"pc_wdata",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"reg_rdata_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"reg_raddr_1",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+27,0,"reg_ren_1",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"reg_rdata_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"reg_raddr_2",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+30,0,"reg_ren_2",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"mid_reg_raddr_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+37,0,"mid_reg_ren_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"mid_reg_raddr_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+39,0,"mid_reg_ren_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"mid_pc_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+118,0,"mid_pc_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+192,0,"sext_imm_type_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"pc_real",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"pc_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+40,0,"branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+189,0,"FLUSH_DISABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"FLUSH_CYCLE_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"FLUSH_CYCLE_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"mid_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("exu_jump_swc_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+126,0,"hclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"hrstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"cycle_cnt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+131,0,"dec_jump_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"dec_jal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"dec_jalr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+184,0,"dec_imm_type_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+188,0,"dec_imm_type_j",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+8,0,"dec_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+7,0,"dec_rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+110,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+127,0,"pc_write",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+128,0,"pc_wdata",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"flush",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+22,0,"reg_waddr",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+24,0,"reg_wen",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"reg_wdata",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"reg_raddr_1",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+27,0,"reg_ren_1",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"reg_rdata_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"mid_reg_waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+43,0,"mid_reg_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"mid_reg_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"mid_reg_raddr_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+46,0,"mid_reg_ren_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"mid_pc_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+120,0,"mid_pc_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+193,0,"sext_imm_type_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+194,0,"sext_imm_type_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"pc_real",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+132,0,"pc_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+189,0,"FLUSH_DISABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"FLUSH_CYCLE_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"FLUSH_CYCLE_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"mid_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("exu_load_swc_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+126,0,"hclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"hrstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"cycle_cnt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+116,0,"ifu_dec_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"dec_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"dec_lb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"dec_lh",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"dec_lw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"dec_lbu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"dec_lhu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+184,0,"dec_imm_type_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+8,0,"dec_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+7,0,"dec_rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+13,0,"exu_load_rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+14,0,"exu_load_base_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"exu_load_offset",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+16,0,"exu_load_sext",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"exu_load_size",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+116,0,"exu_load_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"reg_raddr_1",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+27,0,"reg_ren_1",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"reg_rdata_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"mid_reg_raddr_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+49,0,"mid_reg_ren_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+50,0,"exu_load_rd_buff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+51,0,"exu_load_base_addr_buff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"exu_load_offset_buff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+53,0,"exu_load_sext_buff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"exu_load_size_buff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+55,0,"exu_load_en_buff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+189,0,"LOAD_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"LOAD_BTYE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"LOAD_HALFWORD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"LOAD_WORD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("exu_reg_swc_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+126,0,"hclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"hrstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"cycle_cnt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+4,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"dec_add",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"dec_sub",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"dec_sll",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"dec_slt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"dec_sltu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"dec_xor",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"dec_srl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"dec_sra",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"dec_or",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"dec_and",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"dec_rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+6,0,"dec_rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+8,0,"dec_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+110,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"reg_waddr",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+24,0,"reg_wen",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"reg_wdata",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"reg_rdata_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"reg_raddr_1",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+27,0,"reg_ren_1",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"reg_rdata_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"reg_raddr_2",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+30,0,"reg_ren_2",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"exu_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"mid_reg_waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+57,0,"mid_reg_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"mid_reg_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"mid_reg_raddr_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+60,0,"mid_reg_ren_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"mid_reg_raddr_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+62,0,"mid_reg_ren_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("exu_store_swc_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+126,0,"hclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"hrstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"cycle_cnt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+183,0,"dec_store_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"dec_sb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"dec_sh",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"dec_sw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+185,0,"dec_imm_type_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+7,0,"dec_rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+6,0,"dec_rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+18,0,"exu_store_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"exu_store_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+21,0,"exu_store_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"exu_store_size",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+25,0,"reg_raddr_1",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+27,0,"reg_ren_1",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"reg_rdata_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"reg_raddr_2",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+30,0,"reg_ren_2",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"reg_rdata_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+121,0,"exu_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"mid_reg_raddr_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+64,0,"mid_reg_ren_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"mid_reg_raddr_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+66,0,"mid_reg_ren_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"exu_store_addr_buff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"exu_store_data_buff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+69,0,"exu_store_en_buff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+70,0,"exu_store_size_buff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+189,0,"STORE_BTYE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"STORE_HALFWORD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"STORE_WORD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"STORE_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("exu_upper_en_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+126,0,"hclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"hrstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"cycle_cnt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+125,0,"dec_upper_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"dec_lui",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"dec_auipc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+187,0,"dec_imm_type_u",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+8,0,"dec_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+110,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"reg_waddr",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+24,0,"reg_wen",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"reg_wdata",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+121,0,"exu_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+71,0,"mid_reg_waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+72,0,"mid_reg_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+73,0,"mid_reg_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("regfile_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+126,0,"hclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"hrstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"reg_waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+23,0,"reg_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+24,0,"reg_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"reg_raddr_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+26,0,"reg_rdata_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+27,0,"reg_ren_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"reg_raddr_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+29,0,"reg_rdata_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+30,0,"reg_ren_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("regfile", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+74+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+106,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("wbu_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+126,0,"hclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"hrstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"cycle_cnt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+9,0,"mau_load_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+10,0,"mau_load_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"mau_load_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"reg_waddr",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+24,0,"reg_wen",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"reg_wdata",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"mid_reg_waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+108,0,"mid_reg_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+109,0,"mid_reg_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vexu_reg_wbu_top_tb___024root__trace_init_top(Vexu_reg_wbu_top_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_reg_wbu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_reg_wbu_top_tb___024root__trace_init_top\n"); );
    // Body
    Vexu_reg_wbu_top_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vexu_reg_wbu_top_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vexu_reg_wbu_top_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vexu_reg_wbu_top_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vexu_reg_wbu_top_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vexu_reg_wbu_top_tb___024root__trace_register(Vexu_reg_wbu_top_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_reg_wbu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_reg_wbu_top_tb___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vexu_reg_wbu_top_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vexu_reg_wbu_top_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vexu_reg_wbu_top_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vexu_reg_wbu_top_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vexu_reg_wbu_top_tb___024root__trace_const_0_sub_0(Vexu_reg_wbu_top_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vexu_reg_wbu_top_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_reg_wbu_top_tb___024root__trace_const_0\n"); );
    // Init
    Vexu_reg_wbu_top_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vexu_reg_wbu_top_tb___024root*>(voidSelf);
    Vexu_reg_wbu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vexu_reg_wbu_top_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vexu_reg_wbu_top_tb___024root__trace_const_0_sub_0(Vexu_reg_wbu_top_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_reg_wbu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_reg_wbu_top_tb___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+133,(vlSelf->exu_reg_wbu_top_tb__DOT__inst_in),32);
    bufp->fullBit(oldp+134,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_lui));
    bufp->fullBit(oldp+135,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_auipc));
    bufp->fullBit(oldp+136,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_jalr));
    bufp->fullBit(oldp+137,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_beq));
    bufp->fullBit(oldp+138,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_bne));
    bufp->fullBit(oldp+139,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_blt));
    bufp->fullBit(oldp+140,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_bge));
    bufp->fullBit(oldp+141,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_bltu));
    bufp->fullBit(oldp+142,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_bgeu));
    bufp->fullBit(oldp+143,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_lb));
    bufp->fullBit(oldp+144,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_lh));
    bufp->fullBit(oldp+145,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_lw));
    bufp->fullBit(oldp+146,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_lbu));
    bufp->fullBit(oldp+147,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_lhu));
    bufp->fullBit(oldp+148,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_sb));
    bufp->fullBit(oldp+149,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_sh));
    bufp->fullBit(oldp+150,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_sw));
    bufp->fullBit(oldp+151,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_addi));
    bufp->fullBit(oldp+152,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_slti));
    bufp->fullBit(oldp+153,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_sltiu));
    bufp->fullBit(oldp+154,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_xori));
    bufp->fullBit(oldp+155,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_ori));
    bufp->fullBit(oldp+156,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_andi));
    bufp->fullBit(oldp+157,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_slli));
    bufp->fullBit(oldp+158,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_srli));
    bufp->fullBit(oldp+159,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_srai));
    bufp->fullBit(oldp+160,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_sub));
    bufp->fullBit(oldp+161,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_sll));
    bufp->fullBit(oldp+162,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_slt));
    bufp->fullBit(oldp+163,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_sltu));
    bufp->fullBit(oldp+164,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_xor));
    bufp->fullBit(oldp+165,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_srl));
    bufp->fullBit(oldp+166,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_sra));
    bufp->fullBit(oldp+167,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_or));
    bufp->fullBit(oldp+168,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_and));
    bufp->fullBit(oldp+169,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_fence));
    bufp->fullBit(oldp+170,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_fence_i));
    bufp->fullBit(oldp+171,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_ecall));
    bufp->fullBit(oldp+172,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_ebreak));
    bufp->fullBit(oldp+173,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_csrrw));
    bufp->fullBit(oldp+174,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_csrrs));
    bufp->fullBit(oldp+175,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_csrrc));
    bufp->fullBit(oldp+176,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_csrrwi));
    bufp->fullBit(oldp+177,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_csrrsi));
    bufp->fullBit(oldp+178,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_csrrci));
    bufp->fullBit(oldp+179,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_upper_en));
    bufp->fullBit(oldp+180,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_imm_en));
    bufp->fullBit(oldp+181,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_branch_en));
    bufp->fullBit(oldp+182,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_load_en));
    bufp->fullBit(oldp+183,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_store_en));
    bufp->fullSData(oldp+184,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_imm_type_i),12);
    bufp->fullSData(oldp+185,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_imm_type_s),12);
    bufp->fullSData(oldp+186,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_imm_type_b),13);
    bufp->fullIData(oldp+187,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_imm_type_u),20);
    bufp->fullIData(oldp+188,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_imm_type_j),21);
    bufp->fullIData(oldp+189,(0U),32);
    bufp->fullIData(oldp+190,(1U),32);
    bufp->fullIData(oldp+191,(2U),32);
    bufp->fullIData(oldp+192,((((- (IData)((1U & ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_imm_type_b) 
                                                  >> 0xbU)))) 
                                << 0xdU) | (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_imm_type_b))),32);
    bufp->fullIData(oldp+193,((((- (IData)((1U & (vlSelf->exu_reg_wbu_top_tb__DOT__dec_imm_type_j 
                                                  >> 0x13U)))) 
                                << 0x15U) | vlSelf->exu_reg_wbu_top_tb__DOT__dec_imm_type_j)),32);
    bufp->fullIData(oldp+194,((((- (IData)((1U & ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_imm_type_i) 
                                                  >> 0xbU)))) 
                                << 0xcU) | (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__dec_imm_type_i))),32);
    bufp->fullIData(oldp+195,(3U),32);
}

VL_ATTR_COLD void Vexu_reg_wbu_top_tb___024root__trace_full_0_sub_0(Vexu_reg_wbu_top_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vexu_reg_wbu_top_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_reg_wbu_top_tb___024root__trace_full_0\n"); );
    // Init
    Vexu_reg_wbu_top_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vexu_reg_wbu_top_tb___024root*>(voidSelf);
    Vexu_reg_wbu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vexu_reg_wbu_top_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vexu_reg_wbu_top_tb___024root__trace_full_0_sub_0(Vexu_reg_wbu_top_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_reg_wbu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_reg_wbu_top_tb___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->exu_reg_wbu_top_tb__DOT__hrstn));
    bufp->fullBit(oldp+2,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_jal));
    bufp->fullBit(oldp+3,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_add));
    bufp->fullBit(oldp+4,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_reg_en));
    bufp->fullBit(oldp+5,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_jump_en));
    bufp->fullCData(oldp+6,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_rs2),5);
    bufp->fullCData(oldp+7,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_rs1),5);
    bufp->fullCData(oldp+8,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_rd),5);
    bufp->fullCData(oldp+9,(vlSelf->exu_reg_wbu_top_tb__DOT__mau_load_rd),5);
    bufp->fullIData(oldp+10,(vlSelf->exu_reg_wbu_top_tb__DOT__mau_load_data),32);
    bufp->fullBit(oldp+11,(vlSelf->exu_reg_wbu_top_tb__DOT__mau_load_en));
    bufp->fullIData(oldp+12,(vlSelf->exu_reg_wbu_top_tb__DOT__inst_out),32);
    bufp->fullCData(oldp+13,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_load_rd),5);
    bufp->fullIData(oldp+14,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_load_base_addr),32);
    bufp->fullIData(oldp+15,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_load_offset),32);
    bufp->fullBit(oldp+16,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_load_sext));
    bufp->fullCData(oldp+17,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_load_size),2);
    bufp->fullIData(oldp+18,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_store_addr),32);
    bufp->fullIData(oldp+19,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_store_data),32);
    bufp->fullCData(oldp+20,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_store_size),2);
    bufp->fullBit(oldp+21,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_store_en));
    bufp->fullCData(oldp+22,(vlSelf->exu_reg_wbu_top_tb__DOT__reg_waddr),5);
    bufp->fullIData(oldp+23,(vlSelf->exu_reg_wbu_top_tb__DOT__reg_wdata),32);
    bufp->fullBit(oldp+24,(vlSelf->exu_reg_wbu_top_tb__DOT__reg_wen));
    bufp->fullCData(oldp+25,(vlSelf->exu_reg_wbu_top_tb__DOT__reg_raddr_1),5);
    bufp->fullIData(oldp+26,(vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_1),32);
    bufp->fullBit(oldp+27,(((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_ren_1) 
                            | ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_1) 
                               | ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_ren_1) 
                                  | ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_1) 
                                     | ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__mid_reg_ren_1) 
                                        | (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_1))))))));
    bufp->fullCData(oldp+28,(vlSelf->exu_reg_wbu_top_tb__DOT__reg_raddr_2),5);
    bufp->fullIData(oldp+29,(vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_2),32);
    bufp->fullBit(oldp+30,(((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_2) 
                            | ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_2) 
                               | (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_2)))));
    bufp->fullCData(oldp+31,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_waddr),5);
    bufp->fullBit(oldp+32,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wen));
    bufp->fullIData(oldp+33,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wdata),32);
    bufp->fullCData(oldp+34,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_raddr_1),5);
    bufp->fullBit(oldp+35,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_ren_1));
    bufp->fullCData(oldp+36,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_raddr_1),5);
    bufp->fullBit(oldp+37,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_1));
    bufp->fullCData(oldp+38,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_raddr_2),5);
    bufp->fullBit(oldp+39,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_2));
    bufp->fullBit(oldp+40,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__branch));
    bufp->fullCData(oldp+41,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_flush),2);
    bufp->fullCData(oldp+42,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_waddr),5);
    bufp->fullBit(oldp+43,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wen));
    bufp->fullIData(oldp+44,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wdata),32);
    bufp->fullCData(oldp+45,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_raddr_1),5);
    bufp->fullBit(oldp+46,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_ren_1));
    bufp->fullCData(oldp+47,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_flush),2);
    bufp->fullCData(oldp+48,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__mid_reg_raddr_1),5);
    bufp->fullBit(oldp+49,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__mid_reg_ren_1));
    bufp->fullCData(oldp+50,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_rd_buff),5);
    bufp->fullIData(oldp+51,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_base_addr_buff),32);
    bufp->fullIData(oldp+52,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_offset_buff),32);
    bufp->fullBit(oldp+53,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_sext_buff));
    bufp->fullCData(oldp+54,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_size_buff),2);
    bufp->fullBit(oldp+55,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_en_buff));
    bufp->fullCData(oldp+56,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_waddr),5);
    bufp->fullBit(oldp+57,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wen));
    bufp->fullIData(oldp+58,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wdata),32);
    bufp->fullCData(oldp+59,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_raddr_1),5);
    bufp->fullBit(oldp+60,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_1));
    bufp->fullCData(oldp+61,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_raddr_2),5);
    bufp->fullBit(oldp+62,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_2));
    bufp->fullCData(oldp+63,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__mid_reg_raddr_1),5);
    bufp->fullBit(oldp+64,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_1));
    bufp->fullCData(oldp+65,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__mid_reg_raddr_2),5);
    bufp->fullBit(oldp+66,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_2));
    bufp->fullIData(oldp+67,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__exu_store_addr_buff),32);
    bufp->fullIData(oldp+68,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__exu_store_data_buff),32);
    bufp->fullBit(oldp+69,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__exu_store_en_buff));
    bufp->fullCData(oldp+70,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__exu_store_size_buff),2);
    bufp->fullCData(oldp+71,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_upper_en_inst__DOT__mid_reg_waddr),5);
    bufp->fullBit(oldp+72,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wen));
    bufp->fullIData(oldp+73,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wdata),32);
    bufp->fullIData(oldp+74,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[0]),32);
    bufp->fullIData(oldp+75,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[1]),32);
    bufp->fullIData(oldp+76,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[2]),32);
    bufp->fullIData(oldp+77,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[3]),32);
    bufp->fullIData(oldp+78,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[4]),32);
    bufp->fullIData(oldp+79,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[5]),32);
    bufp->fullIData(oldp+80,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[6]),32);
    bufp->fullIData(oldp+81,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[7]),32);
    bufp->fullIData(oldp+82,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[8]),32);
    bufp->fullIData(oldp+83,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[9]),32);
    bufp->fullIData(oldp+84,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[10]),32);
    bufp->fullIData(oldp+85,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[11]),32);
    bufp->fullIData(oldp+86,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[12]),32);
    bufp->fullIData(oldp+87,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[13]),32);
    bufp->fullIData(oldp+88,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[14]),32);
    bufp->fullIData(oldp+89,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[15]),32);
    bufp->fullIData(oldp+90,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[16]),32);
    bufp->fullIData(oldp+91,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[17]),32);
    bufp->fullIData(oldp+92,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[18]),32);
    bufp->fullIData(oldp+93,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[19]),32);
    bufp->fullIData(oldp+94,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[20]),32);
    bufp->fullIData(oldp+95,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[21]),32);
    bufp->fullIData(oldp+96,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[22]),32);
    bufp->fullIData(oldp+97,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[23]),32);
    bufp->fullIData(oldp+98,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[24]),32);
    bufp->fullIData(oldp+99,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[25]),32);
    bufp->fullIData(oldp+100,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[26]),32);
    bufp->fullIData(oldp+101,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[27]),32);
    bufp->fullIData(oldp+102,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[28]),32);
    bufp->fullIData(oldp+103,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[29]),32);
    bufp->fullIData(oldp+104,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[30]),32);
    bufp->fullIData(oldp+105,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[31]),32);
    bufp->fullIData(oldp+106,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__i),32);
    bufp->fullCData(oldp+107,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__wbu_inst__DOT__mid_reg_waddr),5);
    bufp->fullBit(oldp+108,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__wbu_inst__DOT__mid_reg_wen));
    bufp->fullIData(oldp+109,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__wbu_inst__DOT__mid_reg_wdata),32);
    bufp->fullIData(oldp+110,(vlSelf->exu_reg_wbu_top_tb__DOT__pc),32);
    bufp->fullCData(oldp+111,(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt),4);
    bufp->fullBit(oldp+112,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__flush_stall));
    bufp->fullCData(oldp+113,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_flush_swc_inst__DOT__state),2);
    bufp->fullIData(oldp+114,((vlSelf->exu_reg_wbu_top_tb__DOT__pc 
                               - (IData)(8U))),32);
    bufp->fullIData(oldp+115,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__pc_next),32);
    bufp->fullBit(oldp+116,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_load_en));
    bufp->fullBit(oldp+117,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_write));
    bufp->fullIData(oldp+118,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata),32);
    bufp->fullBit(oldp+119,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_write));
    bufp->fullIData(oldp+120,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_wdata),32);
    bufp->fullBit(oldp+121,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_stall));
    bufp->fullBit(oldp+122,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT____Vcellinp__ex_imm_en_inst__dec_branch_en));
    bufp->fullBit(oldp+123,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en23));
    bufp->fullBit(oldp+124,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT____Vcellinp__exu_load_swc_inst__dec_load_en));
    bufp->fullBit(oldp+125,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT____Vcellinp__exu_upper_en_inst__dec_upper_en));
    bufp->fullBit(oldp+126,(vlSelf->exu_reg_wbu_top_tb__DOT__hclk));
    bufp->fullBit(oldp+127,(((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__pc_write__en0) 
                             & (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en15) 
                                 & (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_write)) 
                                | ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en23) 
                                   & (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_write))))));
    bufp->fullIData(oldp+128,((vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__pc_wdata__en1 
                               & ((((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en15)
                                     ? 0xffffffffU : 0U) 
                                   & (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en15)
                                        ? vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_wdata
                                        : 0U) & ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en15)
                                                  ? 0xffffffffU
                                                  : 0U))) 
                                  | (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en23)
                                       ? 0xffffffffU
                                       : 0U) & (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en23)
                                                  ? vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata
                                                  : 0U) 
                                                & ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en23)
                                                    ? 0xffffffffU
                                                    : 0U)))))),32);
    bufp->fullCData(oldp+129,(((((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en15)
                                  ? 3U : 0U) & (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en15)
                                                  ? (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_flush)
                                                  : 0U) 
                                                & ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en15)
                                                    ? 3U
                                                    : 0U))) 
                               | (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en23)
                                    ? 3U : 0U) & (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en23)
                                                    ? (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_flush)
                                                    : 0U) 
                                                  & ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en23)
                                                      ? 3U
                                                      : 0U))))),2);
    bufp->fullCData(oldp+130,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_flush_swc_inst__DOT__nextstate),2);
    bufp->fullBit(oldp+131,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en15));
    bufp->fullIData(oldp+132,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__pc_next),32);
}
