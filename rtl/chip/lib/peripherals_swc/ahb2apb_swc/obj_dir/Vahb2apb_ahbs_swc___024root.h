// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vahb2apb_ahbs_swc.h for the primary calling header

#ifndef VERILATED_VAHB2APB_AHBS_SWC___024ROOT_H_
#define VERILATED_VAHB2APB_AHBS_SWC___024ROOT_H_  // guard

#include "verilated.h"


class Vahb2apb_ahbs_swc__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vahb2apb_ahbs_swc___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(hclk,0,0);
    VL_IN8(pclk,0,0);
    VL_IN8(rstn,0,0);
    VL_IN8(hprot,6,0);
    VL_IN8(hsize,2,0);
    VL_IN8(htrans,1,0);
    VL_IN8(hwrite,0,0);
    VL_OUT8(hready,0,0);
    VL_OUT8(hresp,0,0);
    VL_OUT8(pselx,2,0);
    VL_OUT8(penable,0,0);
    VL_OUT8(pwrite,0,0);
    VL_IN8(pready,0,0);
    VL_IN8(pslverr,0,0);
    CData/*0:0*/ ahb2apb_swc__DOT__wbuffread;
    CData/*0:0*/ ahb2apb_swc__DOT__wreq_ahbs;
    CData/*0:0*/ ahb2apb_swc__DOT__wreq_r;
    CData/*0:0*/ ahb2apb_swc__DOT__wreq_rr;
    CData/*0:0*/ ahb2apb_swc__DOT__wreq_rrr;
    CData/*0:0*/ ahb2apb_swc__DOT__wreq_apbm;
    CData/*0:0*/ ahb2apb_swc__DOT__rbuffread;
    CData/*0:0*/ ahb2apb_swc__DOT__rbuffwrite;
    CData/*0:0*/ ahb2apb_swc__DOT__rreq;
    CData/*0:0*/ ahb2apb_swc__DOT__done;
    CData/*0:0*/ ahb2apb_swc__DOT__resp;
    CData/*2:0*/ ahb2apb_swc__DOT__ahb2apb_ahbs_swc_inst__DOT__state;
    CData/*2:0*/ ahb2apb_swc__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate;
    CData/*1:0*/ ahb2apb_swc__DOT__ahb2apb_apbm_swc_inst__DOT__state;
    CData/*1:0*/ ahb2apb_swc__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate;
    CData/*0:0*/ __Vtrigprevexpr___TOP__pclk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__hclk__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(haddr,31,0);
    VL_IN(hwdata,31,0);
    VL_OUT(hrdata,31,0);
    VL_OUT(paddr,31,0);
    VL_OUT(pwdata,31,0);
    VL_IN(prdata,31,0);
    IData/*31:0*/ ahb2apb_swc__DOT__wbuffdata;
    IData/*31:0*/ ahb2apb_swc__DOT__wbuffaddr;
    IData/*31:0*/ ahb2apb_swc__DOT__rbuffdata;
    IData/*31:0*/ ahb2apb_swc__DOT__rbuffaddr;
    IData/*31:0*/ __Vdly__ahb2apb_swc__DOT__wbuffdata;
    IData/*31:0*/ __Vdly__ahb2apb_swc__DOT__wbuffaddr;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vahb2apb_ahbs_swc__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vahb2apb_ahbs_swc___024root(Vahb2apb_ahbs_swc__Syms* symsp, const char* v__name);
    ~Vahb2apb_ahbs_swc___024root();
    VL_UNCOPYABLE(Vahb2apb_ahbs_swc___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
