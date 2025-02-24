// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vexu_jump_tb.h for the primary calling header

#include "Vexu_jump_tb__pch.h"
#include "Vexu_jump_tb__Syms.h"
#include "Vexu_jump_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vexu_jump_tb___024root___dump_triggers__act(Vexu_jump_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vexu_jump_tb___024root___eval_triggers__act(Vexu_jump_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_jump_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_jump_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->exu_jump_tb__DOT__hclk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__exu_jump_tb__DOT__hclk__0))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->exu_jump_tb__DOT__hclk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__exu_jump_tb__DOT__hclk__0))) 
                                     | ((~ (IData)(vlSelf->exu_jump_tb__DOT__hrstn)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__exu_jump_tb__DOT__hrstn__0))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__exu_jump_tb__DOT__hclk__0 
        = vlSelf->exu_jump_tb__DOT__hclk;
    vlSelf->__Vtrigprevexpr___TOP__exu_jump_tb__DOT__hrstn__0 
        = vlSelf->exu_jump_tb__DOT__hrstn;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vexu_jump_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
