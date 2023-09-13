// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vregs_swc.h for the primary calling header

#ifndef VERILATED_VREGS_SWC___024ROOT_H_
#define VERILATED_VREGS_SWC___024ROOT_H_  // guard

#include "verilated.h"


class Vregs_swc__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vregs_swc___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rstn,0,0);
    VL_IN8(write,0,0);
    VL_IN8(waddr,6,0);
    VL_IN8(read,0,0);
    VL_IN8(raddr,6,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(wdata,31,0);
    VL_OUT(rdata,31,0);
    VlWide<10>/*319:0*/ regs_swc__DOT__regs;
    IData/*31:0*/ regs_swc__DOT____Vlvbound_hf174bc4f__0;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vregs_swc__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vregs_swc___024root(Vregs_swc__Syms* symsp, const char* v__name);
    ~Vregs_swc___024root();
    VL_UNCOPYABLE(Vregs_swc___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
