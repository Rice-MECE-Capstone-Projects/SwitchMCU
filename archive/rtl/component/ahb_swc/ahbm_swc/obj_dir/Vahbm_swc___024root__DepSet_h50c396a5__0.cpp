// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vahbm_swc.h for the primary calling header

#include "verilated.h"

#include "Vahbm_swc__Syms.h"
#include "Vahbm_swc___024root.h"

extern const VlUnpacked<CData/*1:0*/, 32> Vahbm_swc__ConstPool__TABLE_h9e30e577_0;

VL_INLINE_OPT void Vahbm_swc___024root___ico_sequent__TOP__0(Vahbm_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahbm_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->hready) << 4U) 
                    | (((IData)(vlSelf->rreq) << 3U) 
                       | (((IData)(vlSelf->wreq) << 2U) 
                          | (IData)(vlSelf->ahbm_swc__DOT__state))));
    vlSelf->ahbm_swc__DOT__nextstate = Vahbm_swc__ConstPool__TABLE_h9e30e577_0
        [__Vtableidx1];
}

void Vahbm_swc___024root___eval_ico(Vahbm_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahbm_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vahbm_swc___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vahbm_swc___024root___eval_act(Vahbm_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahbm_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vahbm_swc___024root___nba_sequent__TOP__0(Vahbm_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahbm_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    IData/*31:0*/ __Vdly__ahbm_swc__DOT__hwdatabuff;
    __Vdly__ahbm_swc__DOT__hwdatabuff = 0;
    // Body
    __Vdly__ahbm_swc__DOT__hwdatabuff = vlSelf->ahbm_swc__DOT__hwdatabuff;
    if (vlSelf->hrstn) {
        if ((0U == (IData)(vlSelf->ahbm_swc__DOT__nextstate))) {
            vlSelf->htrans = 0U;
            vlSelf->haddr = 0U;
            __Vdly__ahbm_swc__DOT__hwdatabuff = 0U;
            vlSelf->hwdata = 0U;
        } else if ((1U == (IData)(vlSelf->ahbm_swc__DOT__nextstate))) {
            vlSelf->htrans = 2U;
            vlSelf->haddr = vlSelf->wbuffaddr;
            if (vlSelf->wreq) {
                __Vdly__ahbm_swc__DOT__hwdatabuff = vlSelf->wbuffdata;
                vlSelf->hwdata = vlSelf->ahbm_swc__DOT__hwdatabuff;
            } else {
                __Vdly__ahbm_swc__DOT__hwdatabuff = 0U;
                vlSelf->hwdata = 0U;
            }
        } else if ((2U == (IData)(vlSelf->ahbm_swc__DOT__nextstate))) {
            vlSelf->htrans = vlSelf->htrans;
            vlSelf->haddr = vlSelf->haddr;
            __Vdly__ahbm_swc__DOT__hwdatabuff = vlSelf->ahbm_swc__DOT__hwdatabuff;
            vlSelf->hwdata = vlSelf->hwdata;
        } else {
            vlSelf->htrans = 0U;
            vlSelf->haddr = 0U;
            __Vdly__ahbm_swc__DOT__hwdatabuff = 0U;
            vlSelf->hwdata = 0U;
        }
        if ((0U == (IData)(vlSelf->ahbm_swc__DOT__state))) {
            if (((IData)(vlSelf->hready) & (IData)(vlSelf->hresp))) {
                vlSelf->resp = 1U;
                vlSelf->done = 1U;
            }
        } else {
            vlSelf->resp = 0U;
            vlSelf->done = 0U;
        }
        vlSelf->ahbm_swc__DOT__state = vlSelf->ahbm_swc__DOT__nextstate;
        vlSelf->hwrite = ((0U != (IData)(vlSelf->ahbm_swc__DOT__nextstate)) 
                          & ((1U == (IData)(vlSelf->ahbm_swc__DOT__nextstate))
                              ? (IData)(vlSelf->wreq)
                              : ((2U == (IData)(vlSelf->ahbm_swc__DOT__nextstate)) 
                                 & (IData)(vlSelf->hwrite))));
    } else {
        vlSelf->htrans = 0U;
        vlSelf->haddr = 0U;
        __Vdly__ahbm_swc__DOT__hwdatabuff = 0U;
        vlSelf->hwdata = 0U;
        vlSelf->resp = 0U;
        vlSelf->done = 0U;
        vlSelf->ahbm_swc__DOT__state = 0U;
        vlSelf->hwrite = 0U;
    }
    vlSelf->ahbm_swc__DOT__hwdatabuff = __Vdly__ahbm_swc__DOT__hwdatabuff;
    __Vtableidx1 = (((IData)(vlSelf->hready) << 4U) 
                    | (((IData)(vlSelf->rreq) << 3U) 
                       | (((IData)(vlSelf->wreq) << 2U) 
                          | (IData)(vlSelf->ahbm_swc__DOT__state))));
    vlSelf->ahbm_swc__DOT__nextstate = Vahbm_swc__ConstPool__TABLE_h9e30e577_0
        [__Vtableidx1];
}

void Vahbm_swc___024root___eval_nba(Vahbm_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahbm_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vahbm_swc___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vahbm_swc___024root___eval_triggers__ico(Vahbm_swc___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vahbm_swc___024root___dump_triggers__ico(Vahbm_swc___024root* vlSelf);
#endif  // VL_DEBUG
void Vahbm_swc___024root___eval_triggers__act(Vahbm_swc___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vahbm_swc___024root___dump_triggers__act(Vahbm_swc___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vahbm_swc___024root___dump_triggers__nba(Vahbm_swc___024root* vlSelf);
#endif  // VL_DEBUG

void Vahbm_swc___024root___eval(Vahbm_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahbm_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vahbm_swc___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vahbm_swc___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("ahbm_swc.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vahbm_swc___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vahbm_swc___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vahbm_swc___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("ahbm_swc.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vahbm_swc___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vahbm_swc___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("ahbm_swc.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vahbm_swc___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vahbm_swc___024root___eval_debug_assertions(Vahbm_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahbm_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbm_swc___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->hclk & 0xfeU))) {
        Verilated::overWidthError("hclk");}
    if (VL_UNLIKELY((vlSelf->hrstn & 0xfeU))) {
        Verilated::overWidthError("hrstn");}
    if (VL_UNLIKELY((vlSelf->hready & 0xfeU))) {
        Verilated::overWidthError("hready");}
    if (VL_UNLIKELY((vlSelf->hresp & 0xfeU))) {
        Verilated::overWidthError("hresp");}
    if (VL_UNLIKELY((vlSelf->wreq & 0xfeU))) {
        Verilated::overWidthError("wreq");}
    if (VL_UNLIKELY((vlSelf->rreq & 0xfeU))) {
        Verilated::overWidthError("rreq");}
}
#endif  // VL_DEBUG
