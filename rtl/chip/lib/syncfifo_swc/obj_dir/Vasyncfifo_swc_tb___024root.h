// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vasyncfifo_swc_tb.h for the primary calling header

#ifndef VERILATED_VASYNCFIFO_SWC_TB___024ROOT_H_
#define VERILATED_VASYNCFIFO_SWC_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vasyncfifo_swc_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vasyncfifo_swc_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ asyncfifo_swc_tb__DOT__rstn;
    CData/*0:0*/ asyncfifo_swc_tb__DOT__wclk;
    CData/*0:0*/ asyncfifo_swc_tb__DOT__rclk;
    CData/*0:0*/ asyncfifo_swc_tb__DOT__reg_wen;
    CData/*0:0*/ asyncfifo_swc_tb__DOT__full;
    CData/*0:0*/ asyncfifo_swc_tb__DOT__ren;
    CData/*0:0*/ asyncfifo_swc_tb__DOT__empty;
    CData/*0:0*/ __Vtrigprevexpr___TOP__asyncfifo_swc_tb__DOT__rstn__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__asyncfifo_swc_tb__DOT__wclk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__asyncfifo_swc_tb__DOT__rclk__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ asyncfifo_swc_tb__DOT__wdata;
    SData/*15:0*/ asyncfifo_swc_tb__DOT__rdata;
    SData/*8:0*/ asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr;
    SData/*8:0*/ asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr;
    SData/*8:0*/ asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr_gray_r;
    SData/*8:0*/ asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr_gray_rr;
    SData/*8:0*/ asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr_gray_r;
    SData/*8:0*/ asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr_gray_rr;
    SData/*8:0*/ asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr_restore;
    SData/*8:0*/ asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr_restore;
    SData/*15:0*/ __Vdly__asyncfifo_swc_tb__DOT__wdata;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<SData/*15:0*/, 256> asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__fifo_ram;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vasyncfifo_swc_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vasyncfifo_swc_tb___024root(Vasyncfifo_swc_tb__Syms* symsp, const char* v__name);
    ~Vasyncfifo_swc_tb___024root();
    VL_UNCOPYABLE(Vasyncfifo_swc_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
