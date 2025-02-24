// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbranch_prediction_tb.h for the primary calling header

#include "Vbranch_prediction_tb__pch.h"
#include "Vbranch_prediction_tb__Syms.h"
#include "Vbranch_prediction_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbranch_prediction_tb___024root___dump_triggers__act(Vbranch_prediction_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vbranch_prediction_tb___024root___eval_triggers__act(Vbranch_prediction_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbranch_prediction_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_prediction_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->branch_prediction_tb__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__branch_prediction_tb__DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(2U, ((~ (IData)(vlSelf->branch_prediction_tb__DOT__clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__branch_prediction_tb__DOT__clk__0)));
    vlSelf->__Vtrigprevexpr___TOP__branch_prediction_tb__DOT__clk__0 
        = vlSelf->branch_prediction_tb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbranch_prediction_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
