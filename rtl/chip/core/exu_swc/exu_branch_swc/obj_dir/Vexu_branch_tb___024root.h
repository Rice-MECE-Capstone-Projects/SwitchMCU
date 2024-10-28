// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vexu_branch_tb.h for the primary calling header

#ifndef VERILATED_VEXU_BRANCH_TB___024ROOT_H_
#define VERILATED_VEXU_BRANCH_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vexu_branch_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vexu_branch_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ exu_branch_tb__DOT__hclk;
    CData/*0:0*/ exu_branch_tb__DOT__hrstn;
    CData/*3:0*/ exu_branch_tb__DOT__cycle_cnt;
    CData/*0:0*/ exu_branch_tb__DOT__dec_branch_en;
    CData/*0:0*/ exu_branch_tb__DOT__dec_beq;
    CData/*0:0*/ exu_branch_tb__DOT__dec_bne;
    CData/*0:0*/ exu_branch_tb__DOT__dec_blt;
    CData/*0:0*/ exu_branch_tb__DOT__dec_bge;
    CData/*0:0*/ exu_branch_tb__DOT__dec_bltu;
    CData/*0:0*/ exu_branch_tb__DOT__dec_bgeu;
    CData/*4:0*/ exu_branch_tb__DOT__dec_rs1;
    CData/*4:0*/ exu_branch_tb__DOT__dec_rs2;
    CData/*4:0*/ exu_branch_tb__DOT__reg_raddr_1__strong__out11;
    CData/*0:0*/ exu_branch_tb__DOT__reg_ren_1__strong__out13;
    CData/*4:0*/ exu_branch_tb__DOT__reg_raddr_2__strong__out15;
    CData/*0:0*/ exu_branch_tb__DOT__reg_ren_2__strong__out17;
    CData/*4:0*/ exu_branch_tb__DOT__exu_branch_inst__DOT__mid_reg_raddr_1;
    CData/*0:0*/ exu_branch_tb__DOT__exu_branch_inst__DOT__mid_reg_ren_1;
    CData/*4:0*/ exu_branch_tb__DOT__exu_branch_inst__DOT__mid_reg_raddr_2;
    CData/*0:0*/ exu_branch_tb__DOT__exu_branch_inst__DOT__mid_reg_ren_2;
    CData/*0:0*/ exu_branch_tb__DOT__exu_branch_inst__DOT__mid_pc_write;
    CData/*0:0*/ exu_branch_tb__DOT__exu_branch_inst__DOT__branch;
    CData/*1:0*/ exu_branch_tb__DOT__exu_branch_inst__DOT__mid_flush;
    CData/*3:0*/ __Vdly__exu_branch_tb__DOT__cycle_cnt;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__exu_branch_tb__DOT__hclk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__exu_branch_tb__DOT__hrstn__0;
    CData/*0:0*/ __VactContinue;
    SData/*12:0*/ exu_branch_tb__DOT__dec_imm_type_b;
    IData/*31:0*/ exu_branch_tb__DOT__pc;
    IData/*31:0*/ exu_branch_tb__DOT__reg_rdata_1;
    IData/*31:0*/ exu_branch_tb__DOT__reg_rdata_2;
    IData/*31:0*/ exu_branch_tb__DOT__exu_branch_inst__DOT__mid_pc_wdata;
    IData/*31:0*/ exu_branch_tb__DOT__exu_branch_inst__DOT__pc_next;
    IData/*31:0*/ __Vdly__exu_branch_tb__DOT__pc;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vexu_branch_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vexu_branch_tb___024root(Vexu_branch_tb__Syms* symsp, const char* v__name);
    ~Vexu_branch_tb___024root();
    VL_UNCOPYABLE(Vexu_branch_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
