// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vahbs_swc_tb.h for the primary calling header

#ifndef VERILATED_VAHBS_SWC_TB___024ROOT_H_
#define VERILATED_VAHBS_SWC_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vahbs_swc_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vahbs_swc_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ ahbs_swc_tb__DOT__hclk;
    CData/*0:0*/ ahbs_swc_tb__DOT__hrstn;
    CData/*0:0*/ ahbs_swc_tb__DOT__hmastlock;
    CData/*6:0*/ ahbs_swc_tb__DOT__hprot;
    CData/*2:0*/ ahbs_swc_tb__DOT__hsize;
    CData/*1:0*/ ahbs_swc_tb__DOT__htrans;
    CData/*0:0*/ ahbs_swc_tb__DOT__hwrite;
    CData/*0:0*/ ahbs_swc_tb__DOT__hready;
    CData/*0:0*/ ahbs_swc_tb__DOT__hresp;
    CData/*0:0*/ ahbs_swc_tb__DOT__wreq;
    CData/*0:0*/ ahbs_swc_tb__DOT__rreq;
    CData/*0:0*/ ahbs_swc_tb__DOT__done;
    CData/*0:0*/ ahbs_swc_tb__DOT__resp;
    CData/*3:0*/ ahbs_swc_tb__DOT__ahbs_swc_inst__DOT__state;
    CData/*3:0*/ ahbs_swc_tb__DOT__ahbs_swc_inst__DOT__next_state;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ahbs_swc_tb__DOT__hclk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ ahbs_swc_tb__DOT__haddr;
    IData/*31:0*/ ahbs_swc_tb__DOT__hwdata;
    IData/*31:0*/ ahbs_swc_tb__DOT__hrdata;
    IData/*31:0*/ ahbs_swc_tb__DOT__wbuffdata;
    IData/*31:0*/ ahbs_swc_tb__DOT__wbuffaddr;
    IData/*31:0*/ ahbs_swc_tb__DOT__rbuffdata;
    IData/*31:0*/ ahbs_swc_tb__DOT__rbuffaddr;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vahbs_swc_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vahbs_swc_tb___024root(Vahbs_swc_tb__Syms* symsp, const char* v__name);
    ~Vahbs_swc_tb___024root();
    VL_UNCOPYABLE(Vahbs_swc_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
