// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vahb2apb_ahbs_swc.h for the primary calling header

#include "verilated.h"

#include "Vahb2apb_ahbs_swc__Syms.h"
#include "Vahb2apb_ahbs_swc__Syms.h"
#include "Vahb2apb_ahbs_swc___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vahb2apb_ahbs_swc___024root___dump_triggers__ico(Vahb2apb_ahbs_swc___024root* vlSelf);
#endif  // VL_DEBUG

void Vahb2apb_ahbs_swc___024root___eval_triggers__ico(Vahb2apb_ahbs_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_ahbs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_ahbs_swc___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (0U == vlSelf->__VicoIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vahb2apb_ahbs_swc___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vahb2apb_ahbs_swc___024root___dump_triggers__act(Vahb2apb_ahbs_swc___024root* vlSelf);
#endif  // VL_DEBUG

void Vahb2apb_ahbs_swc___024root___eval_triggers__act(Vahb2apb_ahbs_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_ahbs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_ahbs_swc___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->pclk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__pclk__0))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->hclk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__hclk__0))));
    vlSelf->__Vtrigprevexpr___TOP__pclk__0 = vlSelf->pclk;
    vlSelf->__Vtrigprevexpr___TOP__hclk__0 = vlSelf->hclk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vahb2apb_ahbs_swc___024root___dump_triggers__act(vlSelf);
    }
#endif
}
