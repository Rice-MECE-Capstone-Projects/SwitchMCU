// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vahbm_swc_tb.h for the primary calling header

#include "Vahbm_swc_tb__pch.h"
#include "Vahbm_swc_tb___024root.h"

VL_ATTR_COLD void Vahbm_swc_tb___024root___eval_static__TOP(Vahbm_swc_tb___024root* vlSelf);

VL_ATTR_COLD void Vahbm_swc_tb___024root___eval_static(Vahbm_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahbm_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc_tb___024root___eval_static\n"); );
    // Body
    Vahbm_swc_tb___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vahbm_swc_tb___024root___eval_static__TOP(Vahbm_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahbm_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->ahbm_swc_tb__DOT__hclk = 1U;
}

VL_ATTR_COLD void Vahbm_swc_tb___024root___eval_final(Vahbm_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahbm_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vahbm_swc_tb___024root___dump_triggers__stl(Vahbm_swc_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vahbm_swc_tb___024root___eval_phase__stl(Vahbm_swc_tb___024root* vlSelf);

VL_ATTR_COLD void Vahbm_swc_tb___024root___eval_settle(Vahbm_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahbm_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc_tb___024root___eval_settle\n"); );
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
            Vahbm_swc_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("ahbm_swc_tb.v", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vahbm_swc_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vahbm_swc_tb___024root___dump_triggers__stl(Vahbm_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahbm_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vahbm_swc_tb___024root___act_sequent__TOP__0(Vahbm_swc_tb___024root* vlSelf);

VL_ATTR_COLD void Vahbm_swc_tb___024root___eval_stl(Vahbm_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahbm_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vahbm_swc_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vahbm_swc_tb___024root___eval_triggers__stl(Vahbm_swc_tb___024root* vlSelf);

VL_ATTR_COLD bool Vahbm_swc_tb___024root___eval_phase__stl(Vahbm_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahbm_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vahbm_swc_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vahbm_swc_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vahbm_swc_tb___024root___dump_triggers__act(Vahbm_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahbm_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge ahbm_swc_tb.hclk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vahbm_swc_tb___024root___dump_triggers__nba(Vahbm_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahbm_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge ahbm_swc_tb.hclk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vahbm_swc_tb___024root___ctor_var_reset(Vahbm_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahbm_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->ahbm_swc_tb__DOT__hclk = VL_RAND_RESET_I(1);
    vlSelf->ahbm_swc_tb__DOT__hrstn = VL_RAND_RESET_I(1);
    vlSelf->ahbm_swc_tb__DOT__haddr = VL_RAND_RESET_I(32);
    vlSelf->ahbm_swc_tb__DOT__hmastlock = VL_RAND_RESET_I(1);
    vlSelf->ahbm_swc_tb__DOT__hprot = VL_RAND_RESET_I(7);
    vlSelf->ahbm_swc_tb__DOT__hsize = VL_RAND_RESET_I(3);
    vlSelf->ahbm_swc_tb__DOT__htrans = VL_RAND_RESET_I(2);
    vlSelf->ahbm_swc_tb__DOT__hwdata = VL_RAND_RESET_I(32);
    vlSelf->ahbm_swc_tb__DOT__hrdata = VL_RAND_RESET_I(32);
    vlSelf->ahbm_swc_tb__DOT__hwrite = VL_RAND_RESET_I(1);
    vlSelf->ahbm_swc_tb__DOT__hready = VL_RAND_RESET_I(1);
    vlSelf->ahbm_swc_tb__DOT__hresp = VL_RAND_RESET_I(1);
    vlSelf->ahbm_swc_tb__DOT__wbuffread = VL_RAND_RESET_I(1);
    vlSelf->ahbm_swc_tb__DOT__wreq = VL_RAND_RESET_I(1);
    vlSelf->ahbm_swc_tb__DOT__wbuffdata = VL_RAND_RESET_I(32);
    vlSelf->ahbm_swc_tb__DOT__wbuffaddr = VL_RAND_RESET_I(32);
    vlSelf->ahbm_swc_tb__DOT__rbuffwrite = VL_RAND_RESET_I(1);
    vlSelf->ahbm_swc_tb__DOT__rreq = VL_RAND_RESET_I(1);
    vlSelf->ahbm_swc_tb__DOT__rbuffdata = VL_RAND_RESET_I(32);
    vlSelf->ahbm_swc_tb__DOT__rbuffaddr = VL_RAND_RESET_I(32);
    vlSelf->ahbm_swc_tb__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->ahbm_swc_tb__DOT__resp = VL_RAND_RESET_I(1);
    vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__nextstate = VL_RAND_RESET_I(2);
    vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__hwdatabuff = VL_RAND_RESET_I(32);
    vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflag = VL_RAND_RESET_I(1);
    vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflagdly = VL_RAND_RESET_I(1);
    vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflag = VL_RAND_RESET_I(1);
    vlSelf->ahbm_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflagdly = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__ahbm_swc_tb__DOT__hclk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
