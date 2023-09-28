// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vahb2apb_swc_tb.h for the primary calling header

#ifndef VERILATED_VAHB2APB_SWC_TB___024ROOT_H_
#define VERILATED_VAHB2APB_SWC_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vahb2apb_swc_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vahb2apb_swc_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ ahb2apb_swc_tb__DOT__hclk;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__pclk;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__rstn;
        CData/*2:0*/ ahb2apb_swc_tb__DOT__pselx;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__penable;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__pwrite;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__pready;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__hmastlock;
        CData/*6:0*/ ahb2apb_swc_tb__DOT__hprot;
        CData/*2:0*/ ahb2apb_swc_tb__DOT__hsize;
        CData/*1:0*/ ahb2apb_swc_tb__DOT__htrans;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__hwrite;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__hready;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__hresp;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__wbuffread;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__rbuffread;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__wreq;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__rbuffwrite;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__rreq;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__done;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__resp;
        CData/*1:0*/ ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__state;
        CData/*1:0*/ ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__nextstate;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflag;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflagdly;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflag;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflagdly;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffread;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_ahbs;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_r;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_rr;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_rrr;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_apbm;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffread;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffwrite;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_ahbs;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_r;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_rr;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_rrr;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_apbm;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_apbm;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_r;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_rr;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_rrr;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__resp;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_ahbs_edge;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_ahbs_edge;
        CData/*2:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__state;
        CData/*2:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate;
        CData/*1:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__state;
        CData/*1:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wen;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__full;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__ren;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__empty;
        CData/*2:0*/ ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__state;
        CData/*2:0*/ ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__nextstate;
        CData/*4:0*/ ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr;
        CData/*4:0*/ ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ahb2apb_swc_tb__DOT__hclk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ahb2apb_swc_tb__DOT__pclk__0;
        CData/*0:0*/ __VactContinue;
        SData/*10:0*/ ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__counter;
        IData/*31:0*/ ahb2apb_swc_tb__DOT__paddr;
    };
    struct {
        IData/*31:0*/ ahb2apb_swc_tb__DOT__pwdata;
        IData/*31:0*/ ahb2apb_swc_tb__DOT__prdata;
        IData/*31:0*/ ahb2apb_swc_tb__DOT__haddr;
        IData/*31:0*/ ahb2apb_swc_tb__DOT__hwdata;
        IData/*31:0*/ ahb2apb_swc_tb__DOT__hrdata;
        IData/*31:0*/ ahb2apb_swc_tb__DOT__wbuffdata;
        IData/*31:0*/ ahb2apb_swc_tb__DOT__wbuffaddr;
        IData/*31:0*/ ahb2apb_swc_tb__DOT__rbuffdata;
        IData/*31:0*/ ahb2apb_swc_tb__DOT__rbuffaddr;
        IData/*31:0*/ ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__hwdatabuff;
        IData/*31:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffdata;
        IData/*31:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffaddr;
        IData/*31:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffdata;
        IData/*31:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffaddr;
        IData/*31:0*/ ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR;
        IData/*31:0*/ ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_SR;
        IData/*31:0*/ ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_WDR;
        IData/*31:0*/ ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_RDR;
        IData/*31:0*/ ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdata;
        IData/*31:0*/ ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdata;
        IData/*31:0*/ ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_wdata;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 16> ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vahb2apb_swc_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vahb2apb_swc_tb___024root(Vahb2apb_swc_tb__Syms* symsp, const char* v__name);
    ~Vahb2apb_swc_tb___024root();
    VL_UNCOPYABLE(Vahb2apb_swc_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
