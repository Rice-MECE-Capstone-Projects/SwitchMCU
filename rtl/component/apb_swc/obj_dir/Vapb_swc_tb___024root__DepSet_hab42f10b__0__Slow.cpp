// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vapb_swc_tb.h for the primary calling header

#include "verilated.h"

#include "Vapb_swc_tb__Syms.h"
#include "Vapb_swc_tb___024root.h"

VL_ATTR_COLD void Vapb_swc_tb___024root___eval_static__TOP(Vapb_swc_tb___024root* vlSelf);

VL_ATTR_COLD void Vapb_swc_tb___024root___eval_static(Vapb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_swc_tb___024root___eval_static\n"); );
    // Body
    Vapb_swc_tb___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vapb_swc_tb___024root___eval_static__TOP(Vapb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_swc_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->apb_swc_tb__DOT__pclk = 1U;
    vlSelf->apb_swc_tb__DOT__prstn = 0U;
}

VL_ATTR_COLD void Vapb_swc_tb___024root___eval_final(Vapb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_swc_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vapb_swc_tb___024root___eval_triggers__stl(Vapb_swc_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vapb_swc_tb___024root___dump_triggers__stl(Vapb_swc_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vapb_swc_tb___024root___eval_stl(Vapb_swc_tb___024root* vlSelf);

VL_ATTR_COLD void Vapb_swc_tb___024root___eval_settle(Vapb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_swc_tb___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vapb_swc_tb___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vapb_swc_tb___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("apb_swc_tb.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vapb_swc_tb___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vapb_swc_tb___024root___dump_triggers__stl(Vapb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_swc_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vapb_swc_tb___024root___act_sequent__TOP__0(Vapb_swc_tb___024root* vlSelf);

VL_ATTR_COLD void Vapb_swc_tb___024root___eval_stl(Vapb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_swc_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vapb_swc_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vapb_swc_tb___024root___dump_triggers__act(Vapb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_swc_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge apb_swc_tb.pclk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vapb_swc_tb___024root___dump_triggers__nba(Vapb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_swc_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge apb_swc_tb.pclk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vapb_swc_tb___024root___ctor_var_reset(Vapb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_swc_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->apb_swc_tb__DOT__pclk = VL_RAND_RESET_I(1);
    vlSelf->apb_swc_tb__DOT__prstn = VL_RAND_RESET_I(1);
    vlSelf->apb_swc_tb__DOT__paddr = VL_RAND_RESET_I(32);
    vlSelf->apb_swc_tb__DOT__pselx = VL_RAND_RESET_I(3);
    vlSelf->apb_swc_tb__DOT__penable = VL_RAND_RESET_I(1);
    vlSelf->apb_swc_tb__DOT__pwrite = VL_RAND_RESET_I(1);
    vlSelf->apb_swc_tb__DOT__pwdata = VL_RAND_RESET_I(32);
    vlSelf->apb_swc_tb__DOT__pready = VL_RAND_RESET_I(1);
    vlSelf->apb_swc_tb__DOT__prdata = VL_RAND_RESET_I(32);
    vlSelf->apb_swc_tb__DOT__wbuffread = VL_RAND_RESET_I(1);
    vlSelf->apb_swc_tb__DOT__wreq = VL_RAND_RESET_I(1);
    vlSelf->apb_swc_tb__DOT__wbuffdata = VL_RAND_RESET_I(32);
    vlSelf->apb_swc_tb__DOT__wbuffaddr = VL_RAND_RESET_I(32);
    vlSelf->apb_swc_tb__DOT__rbuffwrite = VL_RAND_RESET_I(1);
    vlSelf->apb_swc_tb__DOT__rreq = VL_RAND_RESET_I(1);
    vlSelf->apb_swc_tb__DOT__rbuffdata = VL_RAND_RESET_I(32);
    vlSelf->apb_swc_tb__DOT__rbuffaddr = VL_RAND_RESET_I(32);
    vlSelf->apb_swc_tb__DOT__cnt = VL_RAND_RESET_I(8);
    vlSelf->apb_swc_tb__DOT__apbm_swc_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->apb_swc_tb__DOT__apbm_swc_inst__DOT__nextstate = VL_RAND_RESET_I(2);
    vlSelf->apb_swc_tb__DOT__apbs_swc_inst__DOT__SPI_CR = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__apb_swc_tb__DOT__pclk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
