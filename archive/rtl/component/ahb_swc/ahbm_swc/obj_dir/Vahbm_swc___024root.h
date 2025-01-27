// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vahbm_swc.h for the primary calling header

#ifndef VERILATED_VAHBM_SWC___024ROOT_H_
#define VERILATED_VAHBM_SWC___024ROOT_H_  // guard

#include "verilated.h"


class Vahbm_swc__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vahbm_swc___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(hclk,0,0);
    VL_IN8(hrstn,0,0);
    VL_OUT8(hmastlock,0,0);
    VL_OUT8(hprot,6,0);
    VL_OUT8(hsize,2,0);
    VL_OUT8(htrans,1,0);
    VL_OUT8(hwrite,0,0);
    VL_IN8(hready,0,0);
    VL_IN8(hresp,0,0);
    VL_OUT8(wbuffread,0,0);
    VL_IN8(wreq,0,0);
    VL_OUT8(rbuffwrite,0,0);
    VL_IN8(rreq,0,0);
    VL_OUT8(done,0,0);
    VL_OUT8(resp,0,0);
    CData/*1:0*/ ahbm_swc__DOT__state;
    CData/*1:0*/ ahbm_swc__DOT__nextstate;
    CData/*0:0*/ __Vtrigprevexpr___TOP__hclk__0;
    CData/*0:0*/ __VactContinue;
    VL_OUT(haddr,31,0);
    VL_OUT(hwdata,31,0);
    VL_IN(wbuffdata,31,0);
    VL_IN(wbuffaddr,31,0);
    VL_OUT(rbuffdata,31,0);
    VL_IN(rbuffaddr,31,0);
    IData/*31:0*/ ahbm_swc__DOT__hwdatabuff;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vahbm_swc__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vahbm_swc___024root(Vahbm_swc__Syms* symsp, const char* v__name);
    ~Vahbm_swc___024root();
    VL_UNCOPYABLE(Vahbm_swc___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
