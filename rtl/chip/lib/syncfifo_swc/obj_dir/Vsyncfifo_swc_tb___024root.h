// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsyncfifo_swc_tb.h for the primary calling header

#ifndef VERILATED_VSYNCFIFO_SWC_TB___024ROOT_H_
#define VERILATED_VSYNCFIFO_SWC_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsyncfifo_swc_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsyncfifo_swc_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ syncfifo_swc_tb__DOT__rstn;
    CData/*0:0*/ syncfifo_swc_tb__DOT__clk;
    CData/*0:0*/ syncfifo_swc_tb__DOT__wen;
    CData/*0:0*/ syncfifo_swc_tb__DOT__full;
    CData/*0:0*/ syncfifo_swc_tb__DOT__ren;
    CData/*0:0*/ syncfifo_swc_tb__DOT__empty;
    CData/*4:0*/ syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__waddr_ptr;
    CData/*4:0*/ syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__raddr_ptr;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__syncfifo_swc_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__syncfifo_swc_tb__DOT__rstn__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ syncfifo_swc_tb__DOT__wdata;
    IData/*31:0*/ syncfifo_swc_tb__DOT__rdata;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 16> syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vsyncfifo_swc_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsyncfifo_swc_tb___024root(Vsyncfifo_swc_tb__Syms* symsp, const char* v__name);
    ~Vsyncfifo_swc_tb___024root();
    VL_UNCOPYABLE(Vsyncfifo_swc_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
