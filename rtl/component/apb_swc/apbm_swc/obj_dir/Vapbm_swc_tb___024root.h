// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vapbm_swc_tb.h for the primary calling header

#ifndef VERILATED_VAPBM_SWC_TB___024ROOT_H_
#define VERILATED_VAPBM_SWC_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vapbm_swc_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vapbm_swc_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ apbm_swc_tb__DOT__pclk;
    CData/*0:0*/ apbm_swc_tb__DOT__prstn;
    CData/*2:0*/ apbm_swc_tb__DOT__pselx;
    CData/*0:0*/ apbm_swc_tb__DOT__penable;
    CData/*0:0*/ apbm_swc_tb__DOT__pwrite;
    CData/*0:0*/ apbm_swc_tb__DOT__pready;
    CData/*0:0*/ apbm_swc_tb__DOT__pslverr;
    CData/*0:0*/ apbm_swc_tb__DOT__wbuffread;
    CData/*0:0*/ apbm_swc_tb__DOT__wreq;
    CData/*0:0*/ apbm_swc_tb__DOT__rbuffwrite;
    CData/*0:0*/ apbm_swc_tb__DOT__rreq;
    CData/*7:0*/ apbm_swc_tb__DOT__cnt;
    CData/*1:0*/ apbm_swc_tb__DOT__apbm_swc_inst__DOT__state;
    CData/*1:0*/ apbm_swc_tb__DOT__apbm_swc_inst__DOT__nextstate;
    CData/*0:0*/ __Vtrigprevexpr___TOP__apbm_swc_tb__DOT__pclk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ apbm_swc_tb__DOT__paddr;
    IData/*31:0*/ apbm_swc_tb__DOT__pwdata;
    IData/*31:0*/ apbm_swc_tb__DOT__prdata;
    IData/*31:0*/ apbm_swc_tb__DOT__wbuffdata;
    IData/*31:0*/ apbm_swc_tb__DOT__wbuffaddr;
    IData/*31:0*/ apbm_swc_tb__DOT__rbuffdata;
    IData/*31:0*/ apbm_swc_tb__DOT__rbuffaddr;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vapbm_swc_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vapbm_swc_tb___024root(Vapbm_swc_tb__Syms* symsp, const char* v__name);
    ~Vapbm_swc_tb___024root();
    VL_UNCOPYABLE(Vapbm_swc_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
