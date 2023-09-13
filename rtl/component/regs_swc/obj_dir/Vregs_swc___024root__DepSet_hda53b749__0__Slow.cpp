// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregs_swc.h for the primary calling header

#include "verilated.h"

#include "Vregs_swc__Syms.h"
#include "Vregs_swc___024root.h"

VL_ATTR_COLD void Vregs_swc___024root___eval_static(Vregs_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregs_swc___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vregs_swc___024root___eval_initial(Vregs_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregs_swc___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void Vregs_swc___024root___eval_final(Vregs_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregs_swc___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vregs_swc___024root___eval_settle(Vregs_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregs_swc___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregs_swc___024root___dump_triggers__act(Vregs_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregs_swc___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregs_swc___024root___dump_triggers__nba(Vregs_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregs_swc___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vregs_swc___024root___ctor_var_reset(Vregs_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregs_swc___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rstn = VL_RAND_RESET_I(1);
    vlSelf->write = VL_RAND_RESET_I(1);
    vlSelf->waddr = VL_RAND_RESET_I(7);
    vlSelf->wdata = VL_RAND_RESET_I(32);
    vlSelf->read = VL_RAND_RESET_I(1);
    vlSelf->raddr = VL_RAND_RESET_I(7);
    vlSelf->rdata = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(320, vlSelf->regs_swc__DOT__regs);
    vlSelf->regs_swc__DOT____Vlvbound_hf174bc4f__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
