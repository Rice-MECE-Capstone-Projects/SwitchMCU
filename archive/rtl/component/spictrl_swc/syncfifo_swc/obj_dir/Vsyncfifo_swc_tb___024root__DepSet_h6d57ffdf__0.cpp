// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsyncfifo_swc_tb.h for the primary calling header

#include "Vsyncfifo_swc_tb__pch.h"
#include "Vsyncfifo_swc_tb__Syms.h"
#include "Vsyncfifo_swc_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vsyncfifo_swc_tb___024root___eval_initial__TOP__Vtiming__1(Vsyncfifo_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyncfifo_swc_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x635f7462U;
    __Vtemp_1[2U] = 0x6f5f7377U;
    __Vtemp_1[3U] = 0x63666966U;
    __Vtemp_1[4U] = 0x73796eU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(5, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "syncfifo_swc_tb.v", 
                                       56);
    VL_FINISH_MT("syncfifo_swc_tb.v", 56, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsyncfifo_swc_tb___024root___dump_triggers__act(Vsyncfifo_swc_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vsyncfifo_swc_tb___024root___eval_triggers__act(Vsyncfifo_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyncfifo_swc_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->syncfifo_swc_tb__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__syncfifo_swc_tb__DOT__clk__0))) 
                                     | ((~ (IData)(vlSelf->syncfifo_swc_tb__DOT__rstn)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__syncfifo_swc_tb__DOT__rstn__0))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->syncfifo_swc_tb__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__syncfifo_swc_tb__DOT__clk__0))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__syncfifo_swc_tb__DOT__clk__0 
        = vlSelf->syncfifo_swc_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__syncfifo_swc_tb__DOT__rstn__0 
        = vlSelf->syncfifo_swc_tb__DOT__rstn;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsyncfifo_swc_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
