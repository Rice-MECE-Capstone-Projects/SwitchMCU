// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregs_swc_tb.h for the primary calling header

#include "verilated.h"

#include "Vregs_swc_tb__Syms.h"
#include "Vregs_swc_tb___024root.h"

VL_ATTR_COLD void Vregs_swc_tb___024root___eval_static__TOP(Vregs_swc_tb___024root* vlSelf);

VL_ATTR_COLD void Vregs_swc_tb___024root___eval_static(Vregs_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregs_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregs_swc_tb___024root___eval_static\n"); );
    // Body
    Vregs_swc_tb___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vregs_swc_tb___024root___eval_static__TOP(Vregs_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregs_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregs_swc_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->regs_swc_tb__DOT__clk = 1U;
    vlSelf->regs_swc_tb__DOT__rstn = 0U;
    vlSelf->regs_swc_tb__DOT__write = 0U;
    vlSelf->regs_swc_tb__DOT__waddr = 0U;
    vlSelf->regs_swc_tb__DOT__wdata = 0U;
    vlSelf->regs_swc_tb__DOT__read = 0U;
    vlSelf->regs_swc_tb__DOT__raddr = 0U;
}

VL_ATTR_COLD void Vregs_swc_tb___024root___eval_final(Vregs_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregs_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregs_swc_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vregs_swc_tb___024root___eval_settle(Vregs_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregs_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregs_swc_tb___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregs_swc_tb___024root___dump_triggers__act(Vregs_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregs_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregs_swc_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge regs_swc_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregs_swc_tb___024root___dump_triggers__nba(Vregs_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregs_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregs_swc_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge regs_swc_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vregs_swc_tb___024root___ctor_var_reset(Vregs_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregs_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregs_swc_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->regs_swc_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->regs_swc_tb__DOT__rstn = VL_RAND_RESET_I(1);
    vlSelf->regs_swc_tb__DOT__write = VL_RAND_RESET_I(1);
    vlSelf->regs_swc_tb__DOT__waddr = VL_RAND_RESET_I(7);
    vlSelf->regs_swc_tb__DOT__wdata = VL_RAND_RESET_I(32);
    vlSelf->regs_swc_tb__DOT__read = VL_RAND_RESET_I(1);
    vlSelf->regs_swc_tb__DOT__raddr = VL_RAND_RESET_I(7);
    vlSelf->regs_swc_tb__DOT__rdata = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(320, vlSelf->regs_swc_tb__DOT__regs_swc_inst__DOT__regs);
    vlSelf->regs_swc_tb__DOT__regs_swc_inst__DOT____Vlvbound_hb0973023__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__regs_swc_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
