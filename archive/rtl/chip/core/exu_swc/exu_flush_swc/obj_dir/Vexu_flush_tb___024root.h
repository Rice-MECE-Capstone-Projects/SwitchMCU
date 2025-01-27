// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vexu_flush_tb.h for the primary calling header

#ifndef VERILATED_VEXU_FLUSH_TB___024ROOT_H_
#define VERILATED_VEXU_FLUSH_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vexu_flush_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vexu_flush_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ exu_flush_tb__DOT__hclk;
    CData/*0:0*/ exu_flush_tb__DOT__hrstn;
    CData/*3:0*/ exu_flush_tb__DOT__cycle_cnt;
    CData/*1:0*/ exu_flush_tb__DOT__flush;
    CData/*0:0*/ exu_flush_tb__DOT__flush_stall;
    CData/*1:0*/ exu_flush_tb__DOT__exu_flush_inst__DOT__state;
    CData/*1:0*/ exu_flush_tb__DOT__exu_flush_inst__DOT__nextstate;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__exu_flush_tb__DOT__hclk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vexu_flush_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vexu_flush_tb___024root(Vexu_flush_tb__Syms* symsp, const char* v__name);
    ~Vexu_flush_tb___024root();
    VL_UNCOPYABLE(Vexu_flush_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
