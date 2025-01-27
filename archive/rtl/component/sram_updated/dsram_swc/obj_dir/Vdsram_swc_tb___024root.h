// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdsram_swc_tb.h for the primary calling header

#ifndef VERILATED_VDSRAM_SWC_TB___024ROOT_H_
#define VERILATED_VDSRAM_SWC_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vdsram_swc_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdsram_swc_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ dsram_swc_tb__DOT__hclk;
    CData/*0:0*/ dsram_swc_tb__DOT__hrstn;
    CData/*0:0*/ dsram_swc_tb__DOT__hmastlock;
    CData/*6:0*/ dsram_swc_tb__DOT__hprot;
    CData/*2:0*/ dsram_swc_tb__DOT__hsize;
    CData/*1:0*/ dsram_swc_tb__DOT__htrans;
    CData/*0:0*/ dsram_swc_tb__DOT__hwrite;
    CData/*0:0*/ dsram_swc_tb__DOT__hready;
    CData/*0:0*/ dsram_swc_tb__DOT__hresp;
    CData/*3:0*/ dsram_swc_tb__DOT__dsram_inst__DOT__state;
    CData/*3:0*/ dsram_swc_tb__DOT__dsram_inst__DOT__next_state;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__dsram_swc_tb__DOT__hclk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__dsram_swc_tb__DOT__hrstn__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ dsram_swc_tb__DOT__haddr;
    IData/*31:0*/ dsram_swc_tb__DOT__hwdata;
    IData/*31:0*/ dsram_swc_tb__DOT__hrdata;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 1024> dsram_swc_tb__DOT__dsram_inst__DOT__data_sram;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdsram_swc_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdsram_swc_tb___024root(Vdsram_swc_tb__Syms* symsp, const char* v__name);
    ~Vdsram_swc_tb___024root();
    VL_UNCOPYABLE(Vdsram_swc_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
