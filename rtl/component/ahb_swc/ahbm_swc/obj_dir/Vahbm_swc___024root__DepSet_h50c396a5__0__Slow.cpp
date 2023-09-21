// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vahbm_swc.h for the primary calling header

#include "verilated.h"

#include "Vahbm_swc__Syms.h"
#include "Vahbm_swc___024root.h"

VL_ATTR_COLD void Vahbm_swc___024root___eval_static(Vahbm_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahbm_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vahbm_swc___024root___eval_initial(Vahbm_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahbm_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__hclk__0 = vlSelf->hclk;
}

VL_ATTR_COLD void Vahbm_swc___024root___eval_final(Vahbm_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahbm_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vahbm_swc___024root___eval_triggers__stl(Vahbm_swc___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vahbm_swc___024root___dump_triggers__stl(Vahbm_swc___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vahbm_swc___024root___eval_stl(Vahbm_swc___024root* vlSelf);

VL_ATTR_COLD void Vahbm_swc___024root___eval_settle(Vahbm_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahbm_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vahbm_swc___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vahbm_swc___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("ahbm_swc.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vahbm_swc___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vahbm_swc___024root___dump_triggers__stl(Vahbm_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahbm_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vahbm_swc___024root___ico_sequent__TOP__0(Vahbm_swc___024root* vlSelf);

VL_ATTR_COLD void Vahbm_swc___024root___eval_stl(Vahbm_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahbm_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vahbm_swc___024root___ico_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vahbm_swc___024root___dump_triggers__ico(Vahbm_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahbm_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vahbm_swc___024root___dump_triggers__act(Vahbm_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahbm_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge hclk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vahbm_swc___024root___dump_triggers__nba(Vahbm_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahbm_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge hclk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vahbm_swc___024root___ctor_var_reset(Vahbm_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahbm_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->hclk = VL_RAND_RESET_I(1);
    vlSelf->hrstn = VL_RAND_RESET_I(1);
    vlSelf->haddr = VL_RAND_RESET_I(32);
    vlSelf->hmastlock = VL_RAND_RESET_I(1);
    vlSelf->hprot = VL_RAND_RESET_I(7);
    vlSelf->hsize = VL_RAND_RESET_I(3);
    vlSelf->htrans = VL_RAND_RESET_I(2);
    vlSelf->hwdata = VL_RAND_RESET_I(32);
    vlSelf->hwrite = VL_RAND_RESET_I(1);
    vlSelf->hready = VL_RAND_RESET_I(1);
    vlSelf->hresp = VL_RAND_RESET_I(1);
    vlSelf->wbuffread = VL_RAND_RESET_I(1);
    vlSelf->wreq = VL_RAND_RESET_I(1);
    vlSelf->wbuffdata = VL_RAND_RESET_I(32);
    vlSelf->wbuffaddr = VL_RAND_RESET_I(32);
    vlSelf->rbuffwrite = VL_RAND_RESET_I(1);
    vlSelf->rreq = VL_RAND_RESET_I(1);
    vlSelf->rbuffdata = VL_RAND_RESET_I(32);
    vlSelf->rbuffaddr = VL_RAND_RESET_I(32);
    vlSelf->done = VL_RAND_RESET_I(1);
    vlSelf->resp = VL_RAND_RESET_I(1);
    vlSelf->ahbm_swc__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->ahbm_swc__DOT__nextstate = VL_RAND_RESET_I(2);
    vlSelf->ahbm_swc__DOT__hwdatabuff = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__hclk__0 = VL_RAND_RESET_I(1);
}
