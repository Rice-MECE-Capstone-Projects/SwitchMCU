// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsram_swc_tb.h for the primary calling header

#include "verilated.h"

#include "Vsram_swc_tb__Syms.h"
#include "Vsram_swc_tb___024root.h"

VL_ATTR_COLD void Vsram_swc_tb___024root___eval_static(Vsram_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsram_swc_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vsram_swc_tb___024root___eval_final(Vsram_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsram_swc_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vsram_swc_tb___024root___eval_settle(Vsram_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsram_swc_tb___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsram_swc_tb___024root___dump_triggers__act(Vsram_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsram_swc_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge sram_swc_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsram_swc_tb___024root___dump_triggers__nba(Vsram_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsram_swc_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge sram_swc_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsram_swc_tb___024root___ctor_var_reset(Vsram_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsram_swc_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->sram_swc_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->sram_swc_tb__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->sram_swc_tb__DOT__addr = VL_RAND_RESET_I(10);
    vlSelf->sram_swc_tb__DOT__data_in = VL_RAND_RESET_I(32);
    vlSelf->sram_swc_tb__DOT__data_out = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->sram_swc_tb__DOT__sram_instance__DOT__mem_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigprevexpr___TOP__sram_swc_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
}
