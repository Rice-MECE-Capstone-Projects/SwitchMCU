// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vahbs_swc.h for the primary calling header

#include "verilated.h"

#include "Vahbs_swc__Syms.h"
#include "Vahbs_swc___024root.h"

VlCoroutine Vahbs_swc___024root___eval_initial__TOP__0(Vahbs_swc___024root* vlSelf);
VlCoroutine Vahbs_swc___024root___eval_initial__TOP__1(Vahbs_swc___024root* vlSelf);
VlCoroutine Vahbs_swc___024root___eval_initial__TOP__2(Vahbs_swc___024root* vlSelf);

void Vahbs_swc___024root___eval_initial(Vahbs_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahbs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbs_swc___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vahbs_swc___024root___eval_initial__TOP__0(vlSelf);
    Vahbs_swc___024root___eval_initial__TOP__1(vlSelf);
    Vahbs_swc___024root___eval_initial__TOP__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__ahbs_swc_tb__DOT__hclk__0 
        = vlSelf->ahbs_swc_tb__DOT__hclk;
}

VL_INLINE_OPT VlCoroutine Vahbs_swc___024root___eval_initial__TOP__1(Vahbs_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahbs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbs_swc___024root___eval_initial__TOP__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "ahbs_swc_tb.v", 
                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbs_swc_tb__DOT__hrstn = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbs_swc_tb.v", 
                                       61);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbs_swc_tb__DOT__hrstn = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbs_swc_tb.v", 
                                       65);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbs_swc_tb__DOT__haddr = 0x11010100U;
    vlSelf->ahbs_swc_tb__DOT__hmastlock = 0U;
    vlSelf->ahbs_swc_tb__DOT__hprot = 0U;
    vlSelf->ahbs_swc_tb__DOT__hsize = 2U;
    vlSelf->ahbs_swc_tb__DOT__htrans = 2U;
    vlSelf->ahbs_swc_tb__DOT__hwdata = 0xdeadbeefU;
    vlSelf->ahbs_swc_tb__DOT__hwrite = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbs_swc_tb.v", 
                                       73);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbs_swc_tb__DOT__haddr = 0x11010100U;
    vlSelf->ahbs_swc_tb__DOT__hsize = 2U;
    vlSelf->ahbs_swc_tb__DOT__htrans = 2U;
    vlSelf->ahbs_swc_tb__DOT__hwrite = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbs_swc_tb.v", 
                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbs_swc_tb__DOT__htrans = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbs_swc_tb.v", 
                                       82);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbs_swc_tb__DOT__haddr = 0U;
    vlSelf->ahbs_swc_tb__DOT__htrans = 2U;
    vlSelf->ahbs_swc_tb__DOT__hwrite = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ahbs_swc_tb.v", 
                                       86);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->ahbs_swc_tb__DOT__htrans = 0U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vahbs_swc___024root___eval_initial__TOP__2(Vahbs_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahbs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbs_swc___024root___eval_initial__TOP__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "ahbs_swc_tb.v", 
                                           49);
        vlSelf->ahbs_swc_tb__DOT__hclk = (1U & (~ (IData)(vlSelf->ahbs_swc_tb__DOT__hclk)));
    }
}

extern const VlUnpacked<CData/*3:0*/, 512> Vahbs_swc__ConstPool__TABLE_h911c20df_0;

VL_INLINE_OPT void Vahbs_swc___024root___act_sequent__TOP__0(Vahbs_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahbs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbs_swc___024root___act_sequent__TOP__0\n"); );
    // Init
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->ahbs_swc_tb__DOT__hwrite) 
                     << 8U) | (((IData)(vlSelf->ahbs_swc_tb__DOT__htrans) 
                                << 6U) | (((IData)(vlSelf->ahbs_swc_tb__DOT__hrstn) 
                                           << 5U) | 
                                          (((IData)(vlSelf->ahbs_swc_tb__DOT__hresp) 
                                            << 4U) 
                                           | (IData)(vlSelf->ahbs_swc_tb__DOT__ahbs_swc_inst__DOT__state)))));
    vlSelf->ahbs_swc_tb__DOT__ahbs_swc_inst__DOT__next_state 
        = Vahbs_swc__ConstPool__TABLE_h911c20df_0[__Vtableidx1];
}

void Vahbs_swc___024root___eval_act(Vahbs_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahbs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbs_swc___024root___eval_act\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vahbs_swc___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vahbs_swc___024root___nba_sequent__TOP__0(Vahbs_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahbs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbs_swc___024root___nba_sequent__TOP__0\n"); );
    // Body
    if ((1U & ((~ (IData)(vlSelf->ahbs_swc_tb__DOT__hrstn)) 
               | (0U == (IData)(vlSelf->ahbs_swc_tb__DOT__ahbs_swc_inst__DOT__next_state))))) {
        vlSelf->ahbs_swc_tb__DOT__rreq = 0U;
        vlSelf->ahbs_swc_tb__DOT__wreq = 0U;
        vlSelf->ahbs_swc_tb__DOT__wbuffdata = 0U;
        vlSelf->ahbs_swc_tb__DOT__rbuffaddr = 0U;
        vlSelf->ahbs_swc_tb__DOT__wbuffaddr = 0U;
    } else if ((1U == (IData)(vlSelf->ahbs_swc_tb__DOT__ahbs_swc_inst__DOT__next_state))) {
        vlSelf->ahbs_swc_tb__DOT__rreq = 1U;
        vlSelf->ahbs_swc_tb__DOT__wreq = 0U;
        vlSelf->ahbs_swc_tb__DOT__wbuffdata = 0U;
        vlSelf->ahbs_swc_tb__DOT__rbuffaddr = vlSelf->ahbs_swc_tb__DOT__haddr;
        vlSelf->ahbs_swc_tb__DOT__wbuffaddr = 0U;
    } else if ((2U == (IData)(vlSelf->ahbs_swc_tb__DOT__ahbs_swc_inst__DOT__next_state))) {
        vlSelf->ahbs_swc_tb__DOT__rreq = 0U;
        vlSelf->ahbs_swc_tb__DOT__wreq = 1U;
        vlSelf->ahbs_swc_tb__DOT__wbuffdata = vlSelf->ahbs_swc_tb__DOT__hwdata;
        vlSelf->ahbs_swc_tb__DOT__rbuffaddr = 0U;
        vlSelf->ahbs_swc_tb__DOT__wbuffaddr = vlSelf->ahbs_swc_tb__DOT__haddr;
    }
    if ((1U & (~ ((~ (IData)(vlSelf->ahbs_swc_tb__DOT__hrstn)) 
                  | (0U == (IData)(vlSelf->ahbs_swc_tb__DOT__ahbs_swc_inst__DOT__next_state)))))) {
        if ((1U == (IData)(vlSelf->ahbs_swc_tb__DOT__ahbs_swc_inst__DOT__next_state))) {
            vlSelf->ahbs_swc_tb__DOT__hrdata = vlSelf->ahbs_swc_tb__DOT__rbuffdata;
        }
    }
    vlSelf->ahbs_swc_tb__DOT__ahbs_swc_inst__DOT__state 
        = ((IData)(vlSelf->ahbs_swc_tb__DOT__hrstn)
            ? (IData)(vlSelf->ahbs_swc_tb__DOT__ahbs_swc_inst__DOT__next_state)
            : 0U);
}

void Vahbs_swc___024root___eval_nba(Vahbs_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahbs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbs_swc___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vahbs_swc___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vahbs_swc___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vahbs_swc___024root___eval_triggers__act(Vahbs_swc___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vahbs_swc___024root___dump_triggers__act(Vahbs_swc___024root* vlSelf);
#endif  // VL_DEBUG
void Vahbs_swc___024root___timing_resume(Vahbs_swc___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vahbs_swc___024root___dump_triggers__nba(Vahbs_swc___024root* vlSelf);
#endif  // VL_DEBUG

void Vahbs_swc___024root___eval(Vahbs_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahbs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbs_swc___024root___eval\n"); );
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
            Vahbs_swc___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vahbs_swc___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("ahbs_swc_tb.v", 3, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vahbs_swc___024root___timing_resume(vlSelf);
                Vahbs_swc___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vahbs_swc___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("ahbs_swc_tb.v", 3, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vahbs_swc___024root___eval_nba(vlSelf);
        }
    }
}

void Vahbs_swc___024root___timing_resume(Vahbs_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahbs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbs_swc___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vahbs_swc___024root___eval_debug_assertions(Vahbs_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahbs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahbs_swc___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
