// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsram_swc_tb.h for the primary calling header

#ifndef VERILATED_VSRAM_SWC_TB___024ROOT_H_
#define VERILATED_VSRAM_SWC_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsram_swc_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsram_swc_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ sram_swc_tb__DOT__clk;
    CData/*0:0*/ sram_swc_tb__DOT__we;
    CData/*0:0*/ __Vtrigprevexpr___TOP__sram_swc_tb__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ sram_swc_tb__DOT__addr;
    IData/*31:0*/ sram_swc_tb__DOT__data_in;
    IData/*31:0*/ sram_swc_tb__DOT__data_out;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 1024> sram_swc_tb__DOT__sram_instance__DOT__mem_array;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vsram_swc_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsram_swc_tb___024root(Vsram_swc_tb__Syms* symsp, const char* v__name);
    ~Vsram_swc_tb___024root();
    VL_UNCOPYABLE(Vsram_swc_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
