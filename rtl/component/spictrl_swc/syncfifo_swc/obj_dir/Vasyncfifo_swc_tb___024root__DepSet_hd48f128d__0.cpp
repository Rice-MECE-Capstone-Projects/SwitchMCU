// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vasyncfifo_swc_tb.h for the primary calling header

#include "verilated.h"

#include "Vasyncfifo_swc_tb__Syms.h"
#include "Vasyncfifo_swc_tb__Syms.h"
#include "Vasyncfifo_swc_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vasyncfifo_swc_tb___024root___eval_initial__TOP__1(Vasyncfifo_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vasyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasyncfifo_swc_tb___024root___eval_initial__TOP__1\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_hac073cc1__0;
    // Body
    __Vtemp_hac073cc1__0[0U] = 0x2e766364U;
    __Vtemp_hac073cc1__0[1U] = 0x635f7462U;
    __Vtemp_hac073cc1__0[2U] = 0x6f5f7377U;
    __Vtemp_hac073cc1__0[3U] = 0x63666966U;
    __Vtemp_hac073cc1__0[4U] = 0x6173796eU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(5, __Vtemp_hac073cc1__0));
    vlSymsp->_traceDumpOpen();
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "asyncfifo_swc_tb.v", 
                                       63);
    VL_FINISH_MT("asyncfifo_swc_tb.v", 63, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vasyncfifo_swc_tb___024root___dump_triggers__act(Vasyncfifo_swc_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vasyncfifo_swc_tb___024root___eval_triggers__act(Vasyncfifo_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vasyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasyncfifo_swc_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((~ (IData)(vlSelf->asyncfifo_swc_tb__DOT__rstn)) 
                                      & (IData)(vlSelf->__Vtrigprevexpr___TOP__asyncfifo_swc_tb__DOT__rstn__0)) 
                                     | ((IData)(vlSelf->asyncfifo_swc_tb__DOT__wclk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__asyncfifo_swc_tb__DOT__wclk__0)))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->asyncfifo_swc_tb__DOT__wclk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__asyncfifo_swc_tb__DOT__wclk__0))));
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->asyncfifo_swc_tb__DOT__rclk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__asyncfifo_swc_tb__DOT__rclk__0))));
    vlSelf->__VactTriggered.set(3U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__asyncfifo_swc_tb__DOT__rstn__0 
        = vlSelf->asyncfifo_swc_tb__DOT__rstn;
    vlSelf->__Vtrigprevexpr___TOP__asyncfifo_swc_tb__DOT__wclk__0 
        = vlSelf->asyncfifo_swc_tb__DOT__wclk;
    vlSelf->__Vtrigprevexpr___TOP__asyncfifo_swc_tb__DOT__rclk__0 
        = vlSelf->asyncfifo_swc_tb__DOT__rclk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vasyncfifo_swc_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
