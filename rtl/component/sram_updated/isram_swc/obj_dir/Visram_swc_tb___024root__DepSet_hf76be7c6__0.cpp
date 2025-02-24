// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Visram_swc_tb.h for the primary calling header

#include "Visram_swc_tb__pch.h"
#include "Visram_swc_tb___024root.h"

VlCoroutine Visram_swc_tb___024root___eval_initial__TOP__Vtiming__0(Visram_swc_tb___024root* vlSelf);
VlCoroutine Visram_swc_tb___024root___eval_initial__TOP__Vtiming__1(Visram_swc_tb___024root* vlSelf);
VlCoroutine Visram_swc_tb___024root___eval_initial__TOP__Vtiming__2(Visram_swc_tb___024root* vlSelf);

void Visram_swc_tb___024root___eval_initial(Visram_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Visram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Visram_swc_tb___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Visram_swc_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Visram_swc_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Visram_swc_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__isram_swc_tb__DOT__hclk__0 
        = vlSelf->isram_swc_tb__DOT__hclk;
    vlSelf->__Vtrigprevexpr___TOP__isram_swc_tb__DOT__hrstn__0 
        = vlSelf->isram_swc_tb__DOT__hrstn;
}

VL_INLINE_OPT VlCoroutine Visram_swc_tb___024root___eval_initial__TOP__Vtiming__1(Visram_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Visram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Visram_swc_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    vlSelf->isram_swc_tb__DOT__hclk = 0U;
    vlSelf->isram_swc_tb__DOT__hmastlock = 0U;
    vlSelf->isram_swc_tb__DOT__hprot = 0U;
    vlSelf->isram_swc_tb__DOT__hsize = 0U;
    vlSelf->isram_swc_tb__DOT__hwdata = 0U;
    vlSelf->isram_swc_tb__DOT__hwrite = 0U;
    vlSelf->isram_swc_tb__DOT__hrstn = 1U;
    vlSelf->isram_swc_tb__DOT__haddr = 0x10U;
    vlSelf->isram_swc_tb__DOT__htrans = 2U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "isram_swc_tb.v", 
                                       69);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->isram_swc_tb__DOT__htrans = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "isram_swc_tb.v", 
                                       74);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("isram_swc_tb.v", 77, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Visram_swc_tb___024root___eval_initial__TOP__Vtiming__2(Visram_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Visram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Visram_swc_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "isram_swc_tb.v", 
                                           35);
        vlSelf->isram_swc_tb__DOT__hclk = (1U & (~ (IData)(vlSelf->isram_swc_tb__DOT__hclk)));
    }
}

void Visram_swc_tb___024root___act_sequent__TOP__0(Visram_swc_tb___024root* vlSelf);

void Visram_swc_tb___024root___eval_act(Visram_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Visram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Visram_swc_tb___024root___eval_act\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        Visram_swc_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Visram_swc_tb___024root___act_sequent__TOP__0(Visram_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Visram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Visram_swc_tb___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->isram_swc_tb__DOT__isram_inst__DOT__next_state 
        = ((0xcU == (((IData)(vlSelf->isram_swc_tb__DOT__isram_inst__DOT__hresp) 
                      << 4U) | (((IData)(vlSelf->isram_swc_tb__DOT__hrstn) 
                                 << 3U) | (((IData)(vlSelf->isram_swc_tb__DOT__htrans) 
                                            << 1U) 
                                           | (IData)(vlSelf->isram_swc_tb__DOT__hwrite)))))
            ? 1U : 0U);
}

void Visram_swc_tb___024root___nba_sequent__TOP__0(Visram_swc_tb___024root* vlSelf);
void Visram_swc_tb___024root___nba_sequent__TOP__1(Visram_swc_tb___024root* vlSelf);

void Visram_swc_tb___024root___eval_nba(Visram_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Visram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Visram_swc_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Visram_swc_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Visram_swc_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Visram_swc_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Visram_swc_tb___024root___nba_sequent__TOP__0(Visram_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Visram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Visram_swc_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->isram_swc_tb__DOT__isram_inst__DOT__state 
        = ((IData)(vlSelf->isram_swc_tb__DOT__hrstn)
            ? (IData)(vlSelf->isram_swc_tb__DOT__isram_inst__DOT__next_state)
            : 0U);
}

VL_INLINE_OPT void Visram_swc_tb___024root___nba_sequent__TOP__1(Visram_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Visram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Visram_swc_tb___024root___nba_sequent__TOP__1\n"); );
    // Body
    if ((1U & ((~ (IData)(vlSelf->isram_swc_tb__DOT__hrstn)) 
               | (0U == (IData)(vlSelf->isram_swc_tb__DOT__isram_inst__DOT__next_state))))) {
        vlSelf->isram_swc_tb__DOT__hrdata = 0U;
    } else if ((1U == (IData)(vlSelf->isram_swc_tb__DOT__isram_inst__DOT__next_state))) {
        vlSelf->isram_swc_tb__DOT__hrdata = vlSelf->isram_swc_tb__DOT__isram_inst__DOT__instruction_sram
            [(0x3ffU & vlSelf->isram_swc_tb__DOT__haddr)];
    }
}

void Visram_swc_tb___024root___timing_resume(Visram_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Visram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Visram_swc_tb___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Visram_swc_tb___024root___eval_triggers__act(Visram_swc_tb___024root* vlSelf);

bool Visram_swc_tb___024root___eval_phase__act(Visram_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Visram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Visram_swc_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Visram_swc_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Visram_swc_tb___024root___timing_resume(vlSelf);
        Visram_swc_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Visram_swc_tb___024root___eval_phase__nba(Visram_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Visram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Visram_swc_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Visram_swc_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Visram_swc_tb___024root___dump_triggers__nba(Visram_swc_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Visram_swc_tb___024root___dump_triggers__act(Visram_swc_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Visram_swc_tb___024root___eval(Visram_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Visram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Visram_swc_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Visram_swc_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("isram_swc_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Visram_swc_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("isram_swc_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Visram_swc_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Visram_swc_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Visram_swc_tb___024root___eval_debug_assertions(Visram_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Visram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Visram_swc_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
