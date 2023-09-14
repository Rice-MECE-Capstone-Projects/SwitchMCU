// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vapbm_swc_tb.h for the primary calling header

#include "verilated.h"

#include "Vapbm_swc_tb__Syms.h"
#include "Vapbm_swc_tb___024root.h"

VlCoroutine Vapbm_swc_tb___024root___eval_initial__TOP__0(Vapbm_swc_tb___024root* vlSelf);
VlCoroutine Vapbm_swc_tb___024root___eval_initial__TOP__1(Vapbm_swc_tb___024root* vlSelf);
VlCoroutine Vapbm_swc_tb___024root___eval_initial__TOP__2(Vapbm_swc_tb___024root* vlSelf);

void Vapbm_swc_tb___024root___eval_initial(Vapbm_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapbm_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapbm_swc_tb___024root___eval_initial\n"); );
    // Body
    Vapbm_swc_tb___024root___eval_initial__TOP__0(vlSelf);
    Vapbm_swc_tb___024root___eval_initial__TOP__1(vlSelf);
    Vapbm_swc_tb___024root___eval_initial__TOP__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__apbm_swc_tb__DOT__pclk__0 
        = vlSelf->apbm_swc_tb__DOT__pclk;
}

VL_INLINE_OPT VlCoroutine Vapbm_swc_tb___024root___eval_initial__TOP__1(Vapbm_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapbm_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapbm_swc_tb___024root___eval_initial__TOP__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "apbm_swc_tb.v", 
                                       90);
    vlSelf->apbm_swc_tb__DOT__prstn = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "apbm_swc_tb.v", 
                                       92);
    vlSelf->apbm_swc_tb__DOT__wreq = 1U;
}

VL_INLINE_OPT VlCoroutine Vapbm_swc_tb___024root___eval_initial__TOP__2(Vapbm_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapbm_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapbm_swc_tb___024root___eval_initial__TOP__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "apbm_swc_tb.v", 
                                           61);
        vlSelf->apbm_swc_tb__DOT__pclk = (1U & (~ (IData)(vlSelf->apbm_swc_tb__DOT__pclk)));
    }
}

extern const VlUnpacked<CData/*1:0*/, 16> Vapbm_swc_tb__ConstPool__TABLE_ha496ae19_0;

VL_INLINE_OPT void Vapbm_swc_tb___024root___act_sequent__TOP__0(Vapbm_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapbm_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapbm_swc_tb___024root___act_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->apbm_swc_tb__DOT__pready) 
                     << 3U) | (((IData)(vlSelf->apbm_swc_tb__DOT__wreq) 
                                << 2U) | (IData)(vlSelf->apbm_swc_tb__DOT__apbm_swc_inst__DOT__state)));
    vlSelf->apbm_swc_tb__DOT__apbm_swc_inst__DOT__nextstate 
        = Vapbm_swc_tb__ConstPool__TABLE_ha496ae19_0
        [__Vtableidx1];
}

void Vapbm_swc_tb___024root___eval_act(Vapbm_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapbm_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapbm_swc_tb___024root___eval_act\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vapbm_swc_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vapbm_swc_tb___024root___nba_sequent__TOP__0(Vapbm_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapbm_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapbm_swc_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdly__apbm_swc_tb__DOT__cnt;
    __Vdly__apbm_swc_tb__DOT__cnt = 0;
    // Body
    __Vdly__apbm_swc_tb__DOT__cnt = vlSelf->apbm_swc_tb__DOT__cnt;
    if (vlSelf->apbm_swc_tb__DOT__prstn) {
        if (vlSelf->apbm_swc_tb__DOT__wbuffread) {
            vlSelf->apbm_swc_tb__DOT__wbuffdata = ((IData)(1U) 
                                                   + vlSelf->apbm_swc_tb__DOT__wbuffdata);
            vlSelf->apbm_swc_tb__DOT__wbuffaddr = ((IData)(4U) 
                                                   + vlSelf->apbm_swc_tb__DOT__wbuffaddr);
        }
        if ((0xaU == (IData)(vlSelf->apbm_swc_tb__DOT__cnt))) {
            __Vdly__apbm_swc_tb__DOT__cnt = 0U;
            vlSelf->apbm_swc_tb__DOT__pready = (1U 
                                                & (~ (IData)(vlSelf->apbm_swc_tb__DOT__pready)));
        } else {
            __Vdly__apbm_swc_tb__DOT__cnt = (0xffU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->apbm_swc_tb__DOT__cnt)));
        }
        if ((0U == (IData)(vlSelf->apbm_swc_tb__DOT__apbm_swc_inst__DOT__nextstate))) {
            vlSelf->apbm_swc_tb__DOT__pwdata = 0U;
            vlSelf->apbm_swc_tb__DOT__paddr = 0U;
            vlSelf->apbm_swc_tb__DOT__pselx = 0U;
        } else if ((1U == (IData)(vlSelf->apbm_swc_tb__DOT__apbm_swc_inst__DOT__nextstate))) {
            if (vlSelf->apbm_swc_tb__DOT__wreq) {
                vlSelf->apbm_swc_tb__DOT__pwdata = vlSelf->apbm_swc_tb__DOT__wbuffdata;
                vlSelf->apbm_swc_tb__DOT__paddr = vlSelf->apbm_swc_tb__DOT__wbuffaddr;
            } else {
                vlSelf->apbm_swc_tb__DOT__pwdata = 0U;
                vlSelf->apbm_swc_tb__DOT__paddr = ((IData)(vlSelf->apbm_swc_tb__DOT__rreq)
                                                    ? vlSelf->apbm_swc_tb__DOT__rbuffaddr
                                                    : 0U);
            }
            vlSelf->apbm_swc_tb__DOT__pselx = 1U;
        } else if ((2U == (IData)(vlSelf->apbm_swc_tb__DOT__apbm_swc_inst__DOT__nextstate))) {
            vlSelf->apbm_swc_tb__DOT__pwdata = vlSelf->apbm_swc_tb__DOT__pwdata;
            vlSelf->apbm_swc_tb__DOT__paddr = vlSelf->apbm_swc_tb__DOT__paddr;
            vlSelf->apbm_swc_tb__DOT__pselx = 1U;
        } else {
            vlSelf->apbm_swc_tb__DOT__pwdata = 0U;
            vlSelf->apbm_swc_tb__DOT__paddr = 0U;
            vlSelf->apbm_swc_tb__DOT__pselx = 0U;
        }
        vlSelf->apbm_swc_tb__DOT__apbm_swc_inst__DOT__state 
            = vlSelf->apbm_swc_tb__DOT__apbm_swc_inst__DOT__nextstate;
        vlSelf->apbm_swc_tb__DOT__penable = ((0U != (IData)(vlSelf->apbm_swc_tb__DOT__apbm_swc_inst__DOT__nextstate)) 
                                             & ((1U 
                                                 != (IData)(vlSelf->apbm_swc_tb__DOT__apbm_swc_inst__DOT__nextstate)) 
                                                & (2U 
                                                   == (IData)(vlSelf->apbm_swc_tb__DOT__apbm_swc_inst__DOT__nextstate))));
        vlSelf->apbm_swc_tb__DOT__cnt = __Vdly__apbm_swc_tb__DOT__cnt;
        vlSelf->apbm_swc_tb__DOT__wbuffread = ((0U 
                                                != (IData)(vlSelf->apbm_swc_tb__DOT__apbm_swc_inst__DOT__nextstate)) 
                                               & (1U 
                                                  == (IData)(vlSelf->apbm_swc_tb__DOT__apbm_swc_inst__DOT__nextstate)));
    } else {
        vlSelf->apbm_swc_tb__DOT__wbuffdata = 0x20U;
        vlSelf->apbm_swc_tb__DOT__wbuffaddr = 0x100U;
        __Vdly__apbm_swc_tb__DOT__cnt = 0U;
        vlSelf->apbm_swc_tb__DOT__pwdata = 0U;
        vlSelf->apbm_swc_tb__DOT__pready = 0U;
        vlSelf->apbm_swc_tb__DOT__paddr = 0U;
        vlSelf->apbm_swc_tb__DOT__pselx = 0U;
        vlSelf->apbm_swc_tb__DOT__apbm_swc_inst__DOT__state = 0U;
        vlSelf->apbm_swc_tb__DOT__penable = 0U;
        vlSelf->apbm_swc_tb__DOT__cnt = __Vdly__apbm_swc_tb__DOT__cnt;
        vlSelf->apbm_swc_tb__DOT__wbuffread = 0U;
    }
}

void Vapbm_swc_tb___024root___eval_nba(Vapbm_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapbm_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapbm_swc_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vapbm_swc_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vapbm_swc_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vapbm_swc_tb___024root___eval_triggers__act(Vapbm_swc_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vapbm_swc_tb___024root___dump_triggers__act(Vapbm_swc_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vapbm_swc_tb___024root___timing_resume(Vapbm_swc_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vapbm_swc_tb___024root___dump_triggers__nba(Vapbm_swc_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vapbm_swc_tb___024root___eval(Vapbm_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapbm_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapbm_swc_tb___024root___eval\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vapbm_swc_tb___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vapbm_swc_tb___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("apbm_swc_tb.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vapbm_swc_tb___024root___timing_resume(vlSelf);
                Vapbm_swc_tb___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vapbm_swc_tb___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("apbm_swc_tb.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vapbm_swc_tb___024root___eval_nba(vlSelf);
        }
    }
}

void Vapbm_swc_tb___024root___timing_resume(Vapbm_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapbm_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapbm_swc_tb___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vapbm_swc_tb___024root___eval_debug_assertions(Vapbm_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vapbm_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapbm_swc_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
