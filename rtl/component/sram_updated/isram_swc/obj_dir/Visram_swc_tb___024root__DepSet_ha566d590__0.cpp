// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Visram_swc_tb.h for the primary calling header

#include "Visram_swc_tb__pch.h"
#include "Visram_swc_tb__Syms.h"
#include "Visram_swc_tb___024root.h"

VL_INLINE_OPT VlCoroutine Visram_swc_tb___024root___eval_initial__TOP__Vtiming__0(Visram_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Visram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Visram_swc_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x635f7462U;
    __Vtemp_1[2U] = 0x6d5f7377U;
    __Vtemp_1[3U] = 0x737261U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    co_await vlSelf->__VdlySched.delay(0x3a98ULL, nullptr, 
                                       "isram_swc_tb.v", 
                                       44);
    VL_FINISH_MT("isram_swc_tb.v", 44, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Visram_swc_tb___024root___dump_triggers__act(Visram_swc_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Visram_swc_tb___024root___eval_triggers__act(Visram_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Visram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Visram_swc_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->isram_swc_tb__DOT__hclk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__isram_swc_tb__DOT__hclk__0))) 
                                     | ((~ (IData)(vlSelf->isram_swc_tb__DOT__hrstn)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__isram_swc_tb__DOT__hrstn__0))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->isram_swc_tb__DOT__hclk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__isram_swc_tb__DOT__hclk__0))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__isram_swc_tb__DOT__hclk__0 
        = vlSelf->isram_swc_tb__DOT__hclk;
    vlSelf->__Vtrigprevexpr___TOP__isram_swc_tb__DOT__hrstn__0 
        = vlSelf->isram_swc_tb__DOT__hrstn;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Visram_swc_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
