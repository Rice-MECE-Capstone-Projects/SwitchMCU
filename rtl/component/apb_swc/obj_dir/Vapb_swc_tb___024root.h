// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vapb_swc_tb.h for the primary calling header

#ifndef VERILATED_VAPB_SWC_TB___024ROOT_H_
#define VERILATED_VAPB_SWC_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vapb_swc_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vapb_swc_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ apb_swc_tb__DOT__pclk;
    CData/*0:0*/ apb_swc_tb__DOT__prstn;
    CData/*2:0*/ apb_swc_tb__DOT__pselx;
    CData/*0:0*/ apb_swc_tb__DOT__penable;
    CData/*0:0*/ apb_swc_tb__DOT__pwrite;
    CData/*0:0*/ apb_swc_tb__DOT__pready;
    CData/*0:0*/ apb_swc_tb__DOT__wbuffread;
    CData/*0:0*/ apb_swc_tb__DOT__wreq;
    CData/*0:0*/ apb_swc_tb__DOT__rbuffwrite;
    CData/*0:0*/ apb_swc_tb__DOT__rreq;
    CData/*0:0*/ apb_swc_tb__DOT__done;
    CData/*0:0*/ apb_swc_tb__DOT__resp;
    CData/*7:0*/ apb_swc_tb__DOT__cnt;
    CData/*1:0*/ apb_swc_tb__DOT__apbm_swc_inst__DOT__state;
    CData/*1:0*/ apb_swc_tb__DOT__apbm_swc_inst__DOT__nextstate;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__apb_swc_tb__DOT__pclk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ apb_swc_tb__DOT__paddr;
    IData/*31:0*/ apb_swc_tb__DOT__pwdata;
    IData/*31:0*/ apb_swc_tb__DOT__prdata;
    IData/*31:0*/ apb_swc_tb__DOT__wbuffdata;
    IData/*31:0*/ apb_swc_tb__DOT__wbuffaddr;
    IData/*31:0*/ apb_swc_tb__DOT__rbuffdata;
    IData/*31:0*/ apb_swc_tb__DOT__rbuffaddr;
    IData/*31:0*/ apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_CR;
    IData/*31:0*/ apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_SR;
    IData/*31:0*/ apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_WDR;
    IData/*31:0*/ apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_RDR;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vapb_swc_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vapb_swc_tb___024root(Vapb_swc_tb__Syms* symsp, const char* v__name);
    ~Vapb_swc_tb___024root();
    VL_UNCOPYABLE(Vapb_swc_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
