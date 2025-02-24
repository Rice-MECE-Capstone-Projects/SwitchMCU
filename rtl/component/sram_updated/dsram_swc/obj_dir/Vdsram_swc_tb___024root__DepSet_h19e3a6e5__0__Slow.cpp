// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdsram_swc_tb.h for the primary calling header

#include "Vdsram_swc_tb__pch.h"
#include "Vdsram_swc_tb___024root.h"

VL_ATTR_COLD void Vdsram_swc_tb___024root___eval_static(Vdsram_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdsram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdsram_swc_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vdsram_swc_tb___024root___eval_final(Vdsram_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdsram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdsram_swc_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdsram_swc_tb___024root___dump_triggers__stl(Vdsram_swc_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vdsram_swc_tb___024root___eval_phase__stl(Vdsram_swc_tb___024root* vlSelf);

VL_ATTR_COLD void Vdsram_swc_tb___024root___eval_settle(Vdsram_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdsram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdsram_swc_tb___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vdsram_swc_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("dsram_swc_tb.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vdsram_swc_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdsram_swc_tb___024root___dump_triggers__stl(Vdsram_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdsram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdsram_swc_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vdsram_swc_tb___024root___act_sequent__TOP__0(Vdsram_swc_tb___024root* vlSelf);

VL_ATTR_COLD void Vdsram_swc_tb___024root___eval_stl(Vdsram_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdsram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdsram_swc_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vdsram_swc_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vdsram_swc_tb___024root___eval_triggers__stl(Vdsram_swc_tb___024root* vlSelf);

VL_ATTR_COLD bool Vdsram_swc_tb___024root___eval_phase__stl(Vdsram_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdsram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdsram_swc_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vdsram_swc_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vdsram_swc_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdsram_swc_tb___024root___dump_triggers__act(Vdsram_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdsram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdsram_swc_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge dsram_swc_tb.hclk or negedge dsram_swc_tb.hrstn)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge dsram_swc_tb.hclk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdsram_swc_tb___024root___dump_triggers__nba(Vdsram_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdsram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdsram_swc_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge dsram_swc_tb.hclk or negedge dsram_swc_tb.hrstn)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge dsram_swc_tb.hclk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdsram_swc_tb___024root___ctor_var_reset(Vdsram_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdsram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdsram_swc_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->dsram_swc_tb__DOT__hclk = VL_RAND_RESET_I(1);
    vlSelf->dsram_swc_tb__DOT__hrstn = VL_RAND_RESET_I(1);
    vlSelf->dsram_swc_tb__DOT__haddr = VL_RAND_RESET_I(32);
    vlSelf->dsram_swc_tb__DOT__hmastlock = VL_RAND_RESET_I(1);
    vlSelf->dsram_swc_tb__DOT__hprot = VL_RAND_RESET_I(7);
    vlSelf->dsram_swc_tb__DOT__hsize = VL_RAND_RESET_I(3);
    vlSelf->dsram_swc_tb__DOT__htrans = VL_RAND_RESET_I(2);
    vlSelf->dsram_swc_tb__DOT__hwdata = VL_RAND_RESET_I(32);
    vlSelf->dsram_swc_tb__DOT__hwrite = VL_RAND_RESET_I(1);
    vlSelf->dsram_swc_tb__DOT__hready = VL_RAND_RESET_I(1);
    vlSelf->dsram_swc_tb__DOT__hrdata = VL_RAND_RESET_I(32);
    vlSelf->dsram_swc_tb__DOT__hresp = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->dsram_swc_tb__DOT__dsram_inst__DOT__data_sram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->dsram_swc_tb__DOT__dsram_inst__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->dsram_swc_tb__DOT__dsram_inst__DOT__next_state = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__dsram_swc_tb__DOT__hclk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__dsram_swc_tb__DOT__hrstn__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
