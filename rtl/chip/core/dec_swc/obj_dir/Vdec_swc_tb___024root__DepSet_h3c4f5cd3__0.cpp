// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdec_swc_tb.h for the primary calling header

#include "Vdec_swc_tb__pch.h"
#include "Vdec_swc_tb__Syms.h"
#include "Vdec_swc_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vdec_swc_tb___024root___eval_initial__TOP__Vtiming__0(Vdec_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdec_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec_swc_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    vlSelf->dec_swc_tb__DOT__hrstn = 0U;
    vlSelf->dec_swc_tb__DOT__hclk = 0U;
    vlSelf->dec_swc_tb__DOT__inst_in = 0U;
    vlSelf->dec_swc_tb__DOT__ifu_dec_stall = 0U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "dec_swc_tb.v", 
                                       33);
    vlSelf->dec_swc_tb__DOT__hrstn = 1U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "dec_swc_tb.v", 
                                       35);
    vlSelf->dec_swc_tb__DOT__ifu_dec_stall = 1U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "dec_swc_tb.v", 
                                       37);
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x635f7462U;
    __Vtemp_1[2U] = 0x635f7377U;
    __Vtemp_1[3U] = 0x6465U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdec_swc_tb___024root___dump_triggers__act(Vdec_swc_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vdec_swc_tb___024root___eval_triggers__act(Vdec_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdec_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec_swc_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->dec_swc_tb__DOT__hclk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__dec_swc_tb__DOT__hclk__0))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->dec_swc_tb__DOT__hclk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__dec_swc_tb__DOT__hclk__0))) 
                                     | ((~ (IData)(vlSelf->dec_swc_tb__DOT__hrstn)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__dec_swc_tb__DOT__hrstn__0))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__dec_swc_tb__DOT__hclk__0 
        = vlSelf->dec_swc_tb__DOT__hclk;
    vlSelf->__Vtrigprevexpr___TOP__dec_swc_tb__DOT__hrstn__0 
        = vlSelf->dec_swc_tb__DOT__hrstn;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdec_swc_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
