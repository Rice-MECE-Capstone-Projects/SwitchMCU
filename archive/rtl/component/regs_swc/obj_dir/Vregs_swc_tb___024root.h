// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vregs_swc_tb.h for the primary calling header

#ifndef VERILATED_VREGS_SWC_TB___024ROOT_H_
#define VERILATED_VREGS_SWC_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vregs_swc_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vregs_swc_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ regs_swc_tb__DOT__clk;
    CData/*0:0*/ regs_swc_tb__DOT__rstn;
    CData/*0:0*/ regs_swc_tb__DOT__write;
    CData/*6:0*/ regs_swc_tb__DOT__waddr;
    CData/*0:0*/ regs_swc_tb__DOT__read;
    CData/*6:0*/ regs_swc_tb__DOT__raddr;
    CData/*0:0*/ __Vtrigprevexpr___TOP__regs_swc_tb__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ regs_swc_tb__DOT__wdata;
    IData/*31:0*/ regs_swc_tb__DOT__rdata;
    VlWide<10>/*319:0*/ regs_swc_tb__DOT__regs_swc_inst__DOT__regs;
    IData/*31:0*/ regs_swc_tb__DOT__regs_swc_inst__DOT____Vlvbound_hea5d4e64__0;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vregs_swc_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vregs_swc_tb___024root(Vregs_swc_tb__Syms* symsp, const char* v__name);
    ~Vregs_swc_tb___024root();
    VL_UNCOPYABLE(Vregs_swc_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
