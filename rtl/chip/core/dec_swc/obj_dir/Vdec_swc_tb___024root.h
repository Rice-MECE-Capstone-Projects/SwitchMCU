// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdec_swc_tb.h for the primary calling header

#ifndef VERILATED_VDEC_SWC_TB___024ROOT_H_
#define VERILATED_VDEC_SWC_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vdec_swc_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdec_swc_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ dec_swc_tb__DOT__hclk;
        CData/*0:0*/ dec_swc_tb__DOT__hrstn;
        CData/*3:0*/ dec_swc_tb__DOT__cycle_cnt;
        CData/*0:0*/ dec_swc_tb__DOT__ifu_dec_stall;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_lui;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_auipc;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_jal;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_jalr;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_beq;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_bne;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_blt;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_bge;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_bltu;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_bgeu;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_lb;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_lh;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_lw;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_lbu;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_lhu;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_sb;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_sh;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_sw;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_addi;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_slti;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_sltiu;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_xori;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_ori;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_andi;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_slli;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_srli;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_srai;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_add;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_sub;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_sll;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_slt;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_sltu;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_xor;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_srl;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_sra;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_or;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_and;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_fence;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_fence_i;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_ecall;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_ebreak;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_csrrw;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_csrrs;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_csrrc;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_csrrwi;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_csrrsi;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_csrrci;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_upper_en;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_imm_en;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_reg_en;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_jump_en;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_branch_en;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_load_en;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_store_en;
        CData/*4:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_rs2;
        CData/*4:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_rs1;
        CData/*4:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_rd;
        CData/*3:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_28;
        CData/*6:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_25;
        CData/*4:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__inst_19_15;
    };
    struct {
        CData/*2:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12;
        CData/*4:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__inst_11_7;
        CData/*6:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_28_equal_0000;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__inst_19_15_equal_00000;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__inst_11_7_equal_00000;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_25_equal_0000000;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_25_equal_0100000;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_000;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_001;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_010;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_011;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_100;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_101;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_110;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_111;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0000011;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0001111;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010011;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010111;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0100011;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110011;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110111;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100011;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100111;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1101111;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_20_equal_000000000000;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_20_equal_000000000001;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__mid_jalr;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__mid_beq;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__mid_bne;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__mid_blt;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__mid_bge;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__mid_bltu;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__mid_bgeu;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__mid_lb;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__mid_lh;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__mid_lw;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__mid_lbu;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__mid_lhu;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sb;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sh;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sw;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__mid_addi;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__mid_slti;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sltiu;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__mid_xori;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__mid_ori;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__mid_andi;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__mid_slli;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__mid_srli;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__mid_srai;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__mid_add;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sub;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sll;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__mid_slt;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sltu;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__mid_xor;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__mid_srl;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sra;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__mid_or;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__mid_and;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_0;
    };
    struct {
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_1;
        CData/*0:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_2;
        CData/*3:0*/ __Vdly__dec_swc_tb__DOT__cycle_cnt;
        CData/*3:0*/ __Vdly__dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_28;
        CData/*2:0*/ __Vdly__dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12;
        CData/*6:0*/ __Vdly__dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_25;
        CData/*4:0*/ __Vdly__dec_swc_tb__DOT__dec_swc_inst__DOT__inst_19_15;
        CData/*4:0*/ __Vdly__dec_swc_tb__DOT__dec_swc_inst__DOT__inst_11_7;
        CData/*6:0*/ __Vdly__dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__dec_swc_tb__DOT__hclk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__dec_swc_tb__DOT__hrstn__0;
        CData/*0:0*/ __VactContinue;
        SData/*11:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_imm_type_i;
        SData/*11:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_imm_type_s;
        SData/*12:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_imm_type_b;
        SData/*11:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_20;
        SData/*11:0*/ __Vdly__dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_20;
        IData/*31:0*/ dec_swc_tb__DOT__inst_in;
        IData/*31:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__inst_out;
        IData/*19:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_imm_type_u;
        IData/*20:0*/ dec_swc_tb__DOT__dec_swc_inst__DOT__dec_imm_type_j;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdec_swc_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdec_swc_tb___024root(Vdec_swc_tb__Syms* symsp, const char* v__name);
    ~Vdec_swc_tb___024root();
    VL_UNCOPYABLE(Vdec_swc_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
