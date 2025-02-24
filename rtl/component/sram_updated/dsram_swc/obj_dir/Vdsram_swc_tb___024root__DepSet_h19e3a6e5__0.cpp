// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdsram_swc_tb.h for the primary calling header

#include "Vdsram_swc_tb__pch.h"
#include "Vdsram_swc_tb___024root.h"

VlCoroutine Vdsram_swc_tb___024root___eval_initial__TOP__Vtiming__0(Vdsram_swc_tb___024root* vlSelf);
VlCoroutine Vdsram_swc_tb___024root___eval_initial__TOP__Vtiming__1(Vdsram_swc_tb___024root* vlSelf);
VlCoroutine Vdsram_swc_tb___024root___eval_initial__TOP__Vtiming__2(Vdsram_swc_tb___024root* vlSelf);

void Vdsram_swc_tb___024root___eval_initial(Vdsram_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdsram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdsram_swc_tb___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vdsram_swc_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vdsram_swc_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vdsram_swc_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__dsram_swc_tb__DOT__hclk__0 
        = vlSelf->dsram_swc_tb__DOT__hclk;
    vlSelf->__Vtrigprevexpr___TOP__dsram_swc_tb__DOT__hrstn__0 
        = vlSelf->dsram_swc_tb__DOT__hrstn;
}

VL_INLINE_OPT VlCoroutine Vdsram_swc_tb___024root___eval_initial__TOP__Vtiming__1(Vdsram_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdsram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdsram_swc_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    vlSelf->dsram_swc_tb__DOT__hclk = 0U;
    vlSelf->dsram_swc_tb__DOT__hmastlock = 0U;
    vlSelf->dsram_swc_tb__DOT__hprot = 0U;
    vlSelf->dsram_swc_tb__DOT__hsize = 0U;
    vlSelf->dsram_swc_tb__DOT__hrstn = 1U;
    vlSelf->dsram_swc_tb__DOT__haddr = 0x10U;
    vlSelf->dsram_swc_tb__DOT__hwdata = 0x12345678U;
    vlSelf->dsram_swc_tb__DOT__hwrite = 1U;
    vlSelf->dsram_swc_tb__DOT__htrans = 2U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "dsram_swc_tb.v", 
                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->dsram_swc_tb__DOT__hwrite = 0U;
    vlSelf->dsram_swc_tb__DOT__htrans = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "dsram_swc_tb.v", 
                                       80);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->dsram_swc_tb__DOT__haddr = 0x10U;
    vlSelf->dsram_swc_tb__DOT__hwrite = 0U;
    vlSelf->dsram_swc_tb__DOT__htrans = 2U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "dsram_swc_tb.v", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->dsram_swc_tb__DOT__htrans = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "dsram_swc_tb.v", 
                                       94);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("dsram_swc_tb.v", 97, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vdsram_swc_tb___024root___eval_initial__TOP__Vtiming__2(Vdsram_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdsram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdsram_swc_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "dsram_swc_tb.v", 
                                           36);
        vlSelf->dsram_swc_tb__DOT__hclk = (1U & (~ (IData)(vlSelf->dsram_swc_tb__DOT__hclk)));
    }
}

void Vdsram_swc_tb___024root___act_sequent__TOP__0(Vdsram_swc_tb___024root* vlSelf);

void Vdsram_swc_tb___024root___eval_act(Vdsram_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdsram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdsram_swc_tb___024root___eval_act\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        Vdsram_swc_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vdsram_swc_tb___024root___act_sequent__TOP__0(Vdsram_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdsram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdsram_swc_tb___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->dsram_swc_tb__DOT__dsram_inst__DOT__next_state 
        = ((0xcU == (((IData)(vlSelf->dsram_swc_tb__DOT__hresp) 
                      << 4U) | (((IData)(vlSelf->dsram_swc_tb__DOT__hrstn) 
                                 << 3U) | (((IData)(vlSelf->dsram_swc_tb__DOT__htrans) 
                                            << 1U) 
                                           | (IData)(vlSelf->dsram_swc_tb__DOT__hwrite)))))
            ? 1U : ((0xdU == (((IData)(vlSelf->dsram_swc_tb__DOT__hresp) 
                               << 4U) | (((IData)(vlSelf->dsram_swc_tb__DOT__hrstn) 
                                          << 3U) | 
                                         (((IData)(vlSelf->dsram_swc_tb__DOT__htrans) 
                                           << 1U) | (IData)(vlSelf->dsram_swc_tb__DOT__hwrite)))))
                     ? 2U : 0U));
}

void Vdsram_swc_tb___024root___nba_sequent__TOP__0(Vdsram_swc_tb___024root* vlSelf);
void Vdsram_swc_tb___024root___nba_sequent__TOP__1(Vdsram_swc_tb___024root* vlSelf);

void Vdsram_swc_tb___024root___eval_nba(Vdsram_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdsram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdsram_swc_tb___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vdsram_swc_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vdsram_swc_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vdsram_swc_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vdsram_swc_tb___024root___nba_sequent__TOP__0(Vdsram_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdsram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdsram_swc_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __VdlyVal__dsram_swc_tb__DOT__dsram_inst__DOT__data_sram__v0;
    __VdlyVal__dsram_swc_tb__DOT__dsram_inst__DOT__data_sram__v0 = 0;
    SData/*9:0*/ __VdlyDim0__dsram_swc_tb__DOT__dsram_inst__DOT__data_sram__v0;
    __VdlyDim0__dsram_swc_tb__DOT__dsram_inst__DOT__data_sram__v0 = 0;
    CData/*0:0*/ __VdlySet__dsram_swc_tb__DOT__dsram_inst__DOT__data_sram__v0;
    __VdlySet__dsram_swc_tb__DOT__dsram_inst__DOT__data_sram__v0 = 0;
    // Body
    __VdlySet__dsram_swc_tb__DOT__dsram_inst__DOT__data_sram__v0 = 0U;
    if ((1U & (~ ((~ (IData)(vlSelf->dsram_swc_tb__DOT__hrstn)) 
                  | (0U == (IData)(vlSelf->dsram_swc_tb__DOT__dsram_inst__DOT__next_state)))))) {
        if ((1U != (IData)(vlSelf->dsram_swc_tb__DOT__dsram_inst__DOT__next_state))) {
            if ((2U == (IData)(vlSelf->dsram_swc_tb__DOT__dsram_inst__DOT__next_state))) {
                __VdlyVal__dsram_swc_tb__DOT__dsram_inst__DOT__data_sram__v0 
                    = vlSelf->dsram_swc_tb__DOT__hwdata;
                __VdlyDim0__dsram_swc_tb__DOT__dsram_inst__DOT__data_sram__v0 
                    = (0x3ffU & vlSelf->dsram_swc_tb__DOT__haddr);
                __VdlySet__dsram_swc_tb__DOT__dsram_inst__DOT__data_sram__v0 = 1U;
            }
        }
    }
    if ((1U & ((~ (IData)(vlSelf->dsram_swc_tb__DOT__hrstn)) 
               | (0U == (IData)(vlSelf->dsram_swc_tb__DOT__dsram_inst__DOT__next_state))))) {
        vlSelf->dsram_swc_tb__DOT__hrdata = 0U;
    } else if ((1U == (IData)(vlSelf->dsram_swc_tb__DOT__dsram_inst__DOT__next_state))) {
        vlSelf->dsram_swc_tb__DOT__hrdata = vlSelf->dsram_swc_tb__DOT__dsram_inst__DOT__data_sram
            [(0x3ffU & vlSelf->dsram_swc_tb__DOT__haddr)];
    }
    if (__VdlySet__dsram_swc_tb__DOT__dsram_inst__DOT__data_sram__v0) {
        vlSelf->dsram_swc_tb__DOT__dsram_inst__DOT__data_sram[__VdlyDim0__dsram_swc_tb__DOT__dsram_inst__DOT__data_sram__v0] 
            = __VdlyVal__dsram_swc_tb__DOT__dsram_inst__DOT__data_sram__v0;
    }
}

VL_INLINE_OPT void Vdsram_swc_tb___024root___nba_sequent__TOP__1(Vdsram_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdsram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdsram_swc_tb___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->dsram_swc_tb__DOT__dsram_inst__DOT__state 
        = ((IData)(vlSelf->dsram_swc_tb__DOT__hrstn)
            ? (IData)(vlSelf->dsram_swc_tb__DOT__dsram_inst__DOT__next_state)
            : 0U);
}

void Vdsram_swc_tb___024root___timing_resume(Vdsram_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdsram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdsram_swc_tb___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vdsram_swc_tb___024root___eval_triggers__act(Vdsram_swc_tb___024root* vlSelf);

bool Vdsram_swc_tb___024root___eval_phase__act(Vdsram_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdsram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdsram_swc_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vdsram_swc_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vdsram_swc_tb___024root___timing_resume(vlSelf);
        Vdsram_swc_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vdsram_swc_tb___024root___eval_phase__nba(Vdsram_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdsram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdsram_swc_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vdsram_swc_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdsram_swc_tb___024root___dump_triggers__nba(Vdsram_swc_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdsram_swc_tb___024root___dump_triggers__act(Vdsram_swc_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vdsram_swc_tb___024root___eval(Vdsram_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdsram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdsram_swc_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vdsram_swc_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("dsram_swc_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vdsram_swc_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("dsram_swc_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vdsram_swc_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vdsram_swc_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vdsram_swc_tb___024root___eval_debug_assertions(Vdsram_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdsram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdsram_swc_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
