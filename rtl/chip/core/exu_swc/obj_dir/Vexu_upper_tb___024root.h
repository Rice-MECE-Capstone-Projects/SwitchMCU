// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vexu_upper_tb.h for the primary calling header

#ifndef VERILATED_VEXU_UPPER_TB___024ROOT_H_
#define VERILATED_VEXU_UPPER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vexu_upper_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vexu_upper_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ exu_upper_tb__DOT__hclk;
    CData/*0:0*/ exu_upper_tb__DOT__hrstn;
    CData/*3:0*/ exu_upper_tb__DOT__cycle_cnt;
    CData/*0:0*/ exu_upper_tb__DOT__dec_upper_en;
    CData/*0:0*/ exu_upper_tb__DOT__dec_lui;
    CData/*0:0*/ exu_upper_tb__DOT__dec_auipc;
    CData/*4:0*/ exu_upper_tb__DOT__dec_rd;
    CData/*0:0*/ exu_upper_tb__DOT__exu_stall;
    CData/*4:0*/ exu_upper_tb__DOT__uut__DOT__mid_reg_waddr;
    CData/*0:0*/ exu_upper_tb__DOT__uut__DOT__mid_reg_wen;
    CData/*0:0*/ __Vtrigprevexpr___TOP__exu_upper_tb__DOT__hclk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__exu_upper_tb__DOT__hrstn__0;
    CData/*0:0*/ __VactContinue;
    IData/*19:0*/ exu_upper_tb__DOT__dec_imm_type_u;
    IData/*31:0*/ exu_upper_tb__DOT__pc;
    IData/*31:0*/ exu_upper_tb__DOT__uut__DOT__mid_reg_wdata;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vexu_upper_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vexu_upper_tb___024root(Vexu_upper_tb__Syms* symsp, const char* v__name);
    ~Vexu_upper_tb___024root();
    VL_UNCOPYABLE(Vexu_upper_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
