// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vexu_jump_tb.h for the primary calling header

#ifndef VERILATED_VEXU_JUMP_TB___024ROOT_H_
#define VERILATED_VEXU_JUMP_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vexu_jump_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vexu_jump_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ exu_jump_tb__DOT__hclk;
    CData/*0:0*/ exu_jump_tb__DOT__hrstn;
    CData/*3:0*/ exu_jump_tb__DOT__cycle_cnt;
    CData/*0:0*/ exu_jump_tb__DOT__dec_jump_en;
    CData/*0:0*/ exu_jump_tb__DOT__dec_jal;
    CData/*0:0*/ exu_jump_tb__DOT__dec_jalr;
    CData/*4:0*/ exu_jump_tb__DOT__dec_rd;
    CData/*4:0*/ exu_jump_tb__DOT__dec_rs1;
    CData/*4:0*/ exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_waddr;
    CData/*0:0*/ exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_wen;
    CData/*4:0*/ exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_raddr_1;
    CData/*0:0*/ exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_ren_1;
    CData/*0:0*/ exu_jump_tb__DOT__exu_jump_inst__DOT__mid_pc_write;
    CData/*1:0*/ exu_jump_tb__DOT__exu_jump_inst__DOT__mid_flush;
    CData/*3:0*/ __Vdly__exu_jump_tb__DOT__cycle_cnt;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__exu_jump_tb__DOT__hclk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__exu_jump_tb__DOT__hrstn__0;
    CData/*0:0*/ __VactContinue;
    SData/*11:0*/ exu_jump_tb__DOT__dec_imm_type_i;
    IData/*20:0*/ exu_jump_tb__DOT__dec_imm_type_j;
    IData/*31:0*/ exu_jump_tb__DOT__pc;
    IData/*31:0*/ exu_jump_tb__DOT__reg_rdata_1;
    IData/*31:0*/ exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_wdata;
    IData/*31:0*/ exu_jump_tb__DOT__exu_jump_inst__DOT__mid_pc_wdata;
    IData/*31:0*/ exu_jump_tb__DOT__exu_jump_inst__DOT__pc_next;
    IData/*31:0*/ __Vdly__exu_jump_tb__DOT__pc;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vexu_jump_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vexu_jump_tb___024root(Vexu_jump_tb__Syms* symsp, const char* v__name);
    ~Vexu_jump_tb___024root();
    VL_UNCOPYABLE(Vexu_jump_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
