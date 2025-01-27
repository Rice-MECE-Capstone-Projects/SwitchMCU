// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vchip_tb.h for the primary calling header

#include "Vchip_tb__pch.h"
#include "Vchip_tb__Syms.h"
#include "Vchip_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vchip_tb___024root___dump_triggers__act(Vchip_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vchip_tb___024root___eval_triggers__act(Vchip_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->chip_tb__DOT__hclk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__chip_tb__DOT__hclk__0))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->chip_tb__DOT__hclk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__chip_tb__DOT__hclk__0))) 
                                     | ((~ (IData)(vlSelf->chip_tb__DOT__hrstn)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__chip_tb__DOT__hrstn__0))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__chip_tb__DOT__hclk__0 
        = vlSelf->chip_tb__DOT__hclk;
    vlSelf->__Vtrigprevexpr___TOP__chip_tb__DOT__hrstn__0 
        = vlSelf->chip_tb__DOT__hrstn;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vchip_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
