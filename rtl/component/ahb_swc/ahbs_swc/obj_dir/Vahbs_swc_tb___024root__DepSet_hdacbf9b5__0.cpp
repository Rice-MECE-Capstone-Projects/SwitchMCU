// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vahbs_swc_tb.h for the primary calling header

#include "verilated.h"

#include "Vahbs_swc_tb__Syms.h"
#include "Vahbs_swc_tb__Syms.h"
#include "Vahbs_swc_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vahbs_swc_tb___024root___eval_initial__TOP__0(Vahbs_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahbs_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbs_swc_tb___024root___eval_initial__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x635f7462U;
    __Vtemp_1[2U] = 0x735f7377U;
    __Vtemp_1[3U] = 0x616862U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    co_await vlSelf->__VdlySched.delay(0x1f4ULL, nullptr, 
                                       "ahbs_swc_tb.v", 
                                       54);
    VL_FINISH_MT("ahbs_swc_tb.v", 54, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vahbs_swc_tb___024root___dump_triggers__act(Vahbs_swc_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vahbs_swc_tb___024root___eval_triggers__act(Vahbs_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahbs_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbs_swc_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->ahbs_swc_tb__DOT__hclk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__ahbs_swc_tb__DOT__hclk__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__ahbs_swc_tb__DOT__hclk__0 
        = vlSelf->ahbs_swc_tb__DOT__hclk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vahbs_swc_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
