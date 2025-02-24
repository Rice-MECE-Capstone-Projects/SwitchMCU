// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vahb2apb_swc_tb.h for the primary calling header

#include "Vahb2apb_swc_tb__pch.h"
#include "Vahb2apb_swc_tb__Syms.h"
#include "Vahb2apb_swc_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vahb2apb_swc_tb___024root___dump_triggers__act(Vahb2apb_swc_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vahb2apb_swc_tb___024root___eval_triggers__act(Vahb2apb_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->ahb2apb_swc_tb__DOT__hclk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__ahb2apb_swc_tb__DOT__hclk__0))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->ahb2apb_swc_tb__DOT__pclk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__ahb2apb_swc_tb__DOT__pclk__0))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__ahb2apb_swc_tb__DOT__hclk__0 
        = vlSelf->ahb2apb_swc_tb__DOT__hclk;
    vlSelf->__Vtrigprevexpr___TOP__ahb2apb_swc_tb__DOT__pclk__0 
        = vlSelf->ahb2apb_swc_tb__DOT__pclk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vahb2apb_swc_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
