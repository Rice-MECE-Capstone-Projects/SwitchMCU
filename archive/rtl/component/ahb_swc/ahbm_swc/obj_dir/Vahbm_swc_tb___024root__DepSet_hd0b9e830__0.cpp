// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vahbm_swc_tb.h for the primary calling header

#include "Vahbm_swc_tb__pch.h"
#include "Vahbm_swc_tb__Syms.h"
#include "Vahbm_swc_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vahbm_swc_tb___024root___eval_initial__TOP__Vtiming__0(Vahbm_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahbm_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x635f7462U;
    __Vtemp_1[2U] = 0x6d5f7377U;
    __Vtemp_1[3U] = 0x616862U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    co_await vlSelf->__VdlySched.delay(0x1f4ULL, nullptr, 
                                       "ahbm_swc_tb.v", 
                                       57);
    VL_FINISH_MT("ahbm_swc_tb.v", 57, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vahbm_swc_tb___024root___dump_triggers__act(Vahbm_swc_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vahbm_swc_tb___024root___eval_triggers__act(Vahbm_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahbm_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->ahbm_swc_tb__DOT__hclk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__ahbm_swc_tb__DOT__hclk__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__ahbm_swc_tb__DOT__hclk__0 
        = vlSelf->ahbm_swc_tb__DOT__hclk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vahbm_swc_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
