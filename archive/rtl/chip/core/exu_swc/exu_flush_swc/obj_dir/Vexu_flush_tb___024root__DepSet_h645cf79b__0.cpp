// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vexu_flush_tb.h for the primary calling header

#include "Vexu_flush_tb__pch.h"
#include "Vexu_flush_tb___024root.h"

VL_ATTR_COLD void Vexu_flush_tb___024root___eval_initial__TOP(Vexu_flush_tb___024root* vlSelf);
VlCoroutine Vexu_flush_tb___024root___eval_initial__TOP__Vtiming__0(Vexu_flush_tb___024root* vlSelf);
VlCoroutine Vexu_flush_tb___024root___eval_initial__TOP__Vtiming__1(Vexu_flush_tb___024root* vlSelf);

void Vexu_flush_tb___024root___eval_initial(Vexu_flush_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_flush_tb___024root___eval_initial\n"); );
    // Body
    Vexu_flush_tb___024root___eval_initial__TOP(vlSelf);
    Vexu_flush_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vexu_flush_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__exu_flush_tb__DOT__hclk__0 
        = vlSelf->exu_flush_tb__DOT__hclk;
}

VL_INLINE_OPT VlCoroutine Vexu_flush_tb___024root___eval_initial__TOP__Vtiming__0(Vexu_flush_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_flush_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->exu_flush_tb__DOT__hrstn = 0U;
    vlSelf->exu_flush_tb__DOT__flush = 0U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "exu_flush_tb.v", 
                                       38);
    vlSelf->exu_flush_tb__DOT__hrstn = 1U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "exu_flush_tb.v", 
                                       40);
    vlSelf->exu_flush_tb__DOT__flush = 2U;
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "exu_flush_tb.v", 
                                       42);
    vlSelf->exu_flush_tb__DOT__flush = 0U;
    co_await vlSelf->__VdlySched.delay(0x32ULL, nullptr, 
                                       "exu_flush_tb.v", 
                                       44);
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "exu_flush_tb.v", 
                                       45);
    vlSelf->exu_flush_tb__DOT__flush = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "exu_flush_tb.v", 
                                       47);
    VL_FINISH_MT("exu_flush_tb.v", 48, "");
}

VL_INLINE_OPT VlCoroutine Vexu_flush_tb___024root___eval_initial__TOP__Vtiming__1(Vexu_flush_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_flush_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "exu_flush_tb.v", 
                                           21);
        vlSelf->exu_flush_tb__DOT__hclk = (1U & (~ (IData)(vlSelf->exu_flush_tb__DOT__hclk)));
    }
}

void Vexu_flush_tb___024root___act_sequent__TOP__0(Vexu_flush_tb___024root* vlSelf);

void Vexu_flush_tb___024root___eval_act(Vexu_flush_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_flush_tb___024root___eval_act\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vexu_flush_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*0:0*/, 256> Vexu_flush_tb__ConstPool__TABLE_h73a4683d_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vexu_flush_tb__ConstPool__TABLE_hc8dcc04c_0;

VL_INLINE_OPT void Vexu_flush_tb___024root___act_sequent__TOP__0(Vexu_flush_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_flush_tb___024root___act_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->exu_flush_tb__DOT__flush) 
                     << 6U) | (((IData)(vlSelf->exu_flush_tb__DOT__cycle_cnt) 
                                << 2U) | (IData)(vlSelf->exu_flush_tb__DOT__exu_flush_inst__DOT__state)));
    if (Vexu_flush_tb__ConstPool__TABLE_h73a4683d_0
        [__Vtableidx1]) {
        vlSelf->exu_flush_tb__DOT__exu_flush_inst__DOT__nextstate 
            = Vexu_flush_tb__ConstPool__TABLE_hc8dcc04c_0
            [__Vtableidx1];
    }
}

void Vexu_flush_tb___024root___nba_sequent__TOP__0(Vexu_flush_tb___024root* vlSelf);

void Vexu_flush_tb___024root___eval_nba(Vexu_flush_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_flush_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vexu_flush_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vexu_flush_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vexu_flush_tb___024root___nba_sequent__TOP__0(Vexu_flush_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_flush_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->exu_flush_tb__DOT__hrstn) {
        vlSelf->exu_flush_tb__DOT__cycle_cnt = ((4U 
                                                 == (IData)(vlSelf->exu_flush_tb__DOT__cycle_cnt))
                                                 ? 1U
                                                 : 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->exu_flush_tb__DOT__cycle_cnt))));
        vlSelf->exu_flush_tb__DOT__exu_flush_inst__DOT__state 
            = vlSelf->exu_flush_tb__DOT__exu_flush_inst__DOT__nextstate;
    } else {
        vlSelf->exu_flush_tb__DOT__cycle_cnt = 0U;
        vlSelf->exu_flush_tb__DOT__exu_flush_inst__DOT__state = 0U;
    }
    vlSelf->exu_flush_tb__DOT__flush_stall = ((IData)(vlSelf->exu_flush_tb__DOT__hrstn) 
                                              && (0U 
                                                  != (IData)(vlSelf->exu_flush_tb__DOT__exu_flush_inst__DOT__nextstate)));
}

void Vexu_flush_tb___024root___timing_resume(Vexu_flush_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_flush_tb___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vexu_flush_tb___024root___eval_triggers__act(Vexu_flush_tb___024root* vlSelf);

bool Vexu_flush_tb___024root___eval_phase__act(Vexu_flush_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_flush_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vexu_flush_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vexu_flush_tb___024root___timing_resume(vlSelf);
        Vexu_flush_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vexu_flush_tb___024root___eval_phase__nba(Vexu_flush_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_flush_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vexu_flush_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vexu_flush_tb___024root___dump_triggers__nba(Vexu_flush_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vexu_flush_tb___024root___dump_triggers__act(Vexu_flush_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vexu_flush_tb___024root___eval(Vexu_flush_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_flush_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vexu_flush_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("exu_flush_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vexu_flush_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("exu_flush_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vexu_flush_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vexu_flush_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vexu_flush_tb___024root___eval_debug_assertions(Vexu_flush_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_flush_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_flush_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
