// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vexu_upper_tb.h for the primary calling header

#include "Vexu_upper_tb__pch.h"
#include "Vexu_upper_tb___024root.h"

VL_ATTR_COLD void Vexu_upper_tb___024root___eval_initial__TOP(Vexu_upper_tb___024root* vlSelf);
VlCoroutine Vexu_upper_tb___024root___eval_initial__TOP__Vtiming__0(Vexu_upper_tb___024root* vlSelf);
VlCoroutine Vexu_upper_tb___024root___eval_initial__TOP__Vtiming__1(Vexu_upper_tb___024root* vlSelf);

void Vexu_upper_tb___024root___eval_initial(Vexu_upper_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_upper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_upper_tb___024root___eval_initial\n"); );
    // Body
    Vexu_upper_tb___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vexu_upper_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vexu_upper_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__exu_upper_tb__DOT__hclk__0 
        = vlSelf->exu_upper_tb__DOT__hclk;
    vlSelf->__Vtrigprevexpr___TOP__exu_upper_tb__DOT__hrstn__0 
        = vlSelf->exu_upper_tb__DOT__hrstn;
}

VL_INLINE_OPT VlCoroutine Vexu_upper_tb___024root___eval_initial__TOP__Vtiming__0(Vexu_upper_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_upper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_upper_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->exu_upper_tb__DOT__hrstn = 0U;
    vlSelf->exu_upper_tb__DOT__cycle_cnt = 0U;
    vlSelf->exu_upper_tb__DOT__dec_upper_en = 0U;
    vlSelf->exu_upper_tb__DOT__dec_lui = 0U;
    vlSelf->exu_upper_tb__DOT__dec_auipc = 0U;
    vlSelf->exu_upper_tb__DOT__dec_imm_type_u = 0U;
    vlSelf->exu_upper_tb__DOT__dec_rd = 0U;
    vlSelf->exu_upper_tb__DOT__pc = 0U;
    vlSelf->exu_upper_tb__DOT__exu_stall = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "exu_upper_tb.v", 
                                       52);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->exu_upper_tb__DOT__hrstn = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "exu_upper_tb.v", 
                                       53);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->exu_upper_tb__DOT__dec_upper_en = 1U;
    vlSelf->exu_upper_tb__DOT__dec_lui = 1U;
    vlSelf->exu_upper_tb__DOT__dec_auipc = 0U;
    vlSelf->exu_upper_tb__DOT__dec_imm_type_u = 0xabcdeU;
    vlSelf->exu_upper_tb__DOT__dec_rd = 0xaU;
    vlSelf->exu_upper_tb__DOT__cycle_cnt = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "exu_upper_tb.v", 
                                       60);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->exu_upper_tb__DOT__cycle_cnt = 2U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "exu_upper_tb.v", 
                                       62);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->exu_upper_tb__DOT__dec_upper_en = 0U;
    vlSelf->exu_upper_tb__DOT__dec_lui = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "exu_upper_tb.v", 
                                       66);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->exu_upper_tb__DOT__dec_upper_en = 1U;
    vlSelf->exu_upper_tb__DOT__dec_lui = 0U;
    vlSelf->exu_upper_tb__DOT__dec_auipc = 1U;
    vlSelf->exu_upper_tb__DOT__dec_imm_type_u = 0x12345U;
    vlSelf->exu_upper_tb__DOT__dec_rd = 0xfU;
    vlSelf->exu_upper_tb__DOT__pc = 0x1000U;
    vlSelf->exu_upper_tb__DOT__cycle_cnt = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "exu_upper_tb.v", 
                                       74);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->exu_upper_tb__DOT__cycle_cnt = 2U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "exu_upper_tb.v", 
                                       76);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->exu_upper_tb__DOT__dec_upper_en = 0U;
    vlSelf->exu_upper_tb__DOT__dec_auipc = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "exu_upper_tb.v", 
                                       80);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->exu_upper_tb__DOT__dec_upper_en = 0U;
    vlSelf->exu_upper_tb__DOT__cycle_cnt = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "exu_upper_tb.v", 
                                       84);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->exu_upper_tb__DOT__exu_stall = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "exu_upper_tb.v", 
                                       86);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->exu_upper_tb__DOT__exu_stall = 0U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "exu_upper_tb.v", 
                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("exu_upper_tb.v", 88, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vexu_upper_tb___024root___eval_initial__TOP__Vtiming__1(Vexu_upper_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_upper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_upper_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "exu_upper_tb.v", 
                                           39);
        vlSelf->exu_upper_tb__DOT__hclk = (1U & (~ (IData)(vlSelf->exu_upper_tb__DOT__hclk)));
    }
}

void Vexu_upper_tb___024root___eval_act(Vexu_upper_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_upper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_upper_tb___024root___eval_act\n"); );
}

void Vexu_upper_tb___024root___nba_sequent__TOP__0(Vexu_upper_tb___024root* vlSelf);

void Vexu_upper_tb___024root___eval_nba(Vexu_upper_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_upper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_upper_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vexu_upper_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vexu_upper_tb___024root___nba_sequent__TOP__0(Vexu_upper_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_upper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_upper_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->exu_upper_tb__DOT__uut__DOT__mid_reg_wen 
        = ((IData)(vlSelf->exu_upper_tb__DOT__hrstn) 
           && ((IData)(vlSelf->exu_upper_tb__DOT__dec_upper_en) 
               && (1U == (IData)(vlSelf->exu_upper_tb__DOT__cycle_cnt))));
    if (vlSelf->exu_upper_tb__DOT__hrstn) {
        if (vlSelf->exu_upper_tb__DOT__dec_upper_en) {
            if ((1U == (IData)(vlSelf->exu_upper_tb__DOT__cycle_cnt))) {
                vlSelf->exu_upper_tb__DOT__uut__DOT__mid_reg_waddr 
                    = vlSelf->exu_upper_tb__DOT__dec_rd;
                vlSelf->exu_upper_tb__DOT__uut__DOT__mid_reg_wdata 
                    = ((IData)(vlSelf->exu_upper_tb__DOT__dec_lui)
                        ? (vlSelf->exu_upper_tb__DOT__dec_imm_type_u 
                           << 0xcU) : ((IData)(vlSelf->exu_upper_tb__DOT__dec_auipc)
                                        ? ((vlSelf->exu_upper_tb__DOT__dec_imm_type_u 
                                            << 0xcU) 
                                           + (vlSelf->exu_upper_tb__DOT__pc 
                                              - (IData)(8U)))
                                        : 0U));
            } else {
                vlSelf->exu_upper_tb__DOT__uut__DOT__mid_reg_waddr = 0U;
                vlSelf->exu_upper_tb__DOT__uut__DOT__mid_reg_wdata = 0U;
            }
        } else {
            vlSelf->exu_upper_tb__DOT__uut__DOT__mid_reg_waddr = 0U;
            vlSelf->exu_upper_tb__DOT__uut__DOT__mid_reg_wdata = 0U;
        }
    } else {
        vlSelf->exu_upper_tb__DOT__uut__DOT__mid_reg_waddr = 0U;
        vlSelf->exu_upper_tb__DOT__uut__DOT__mid_reg_wdata = 0U;
    }
}

void Vexu_upper_tb___024root___timing_resume(Vexu_upper_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_upper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_upper_tb___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vexu_upper_tb___024root___eval_triggers__act(Vexu_upper_tb___024root* vlSelf);

bool Vexu_upper_tb___024root___eval_phase__act(Vexu_upper_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_upper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_upper_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vexu_upper_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vexu_upper_tb___024root___timing_resume(vlSelf);
        Vexu_upper_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vexu_upper_tb___024root___eval_phase__nba(Vexu_upper_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_upper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_upper_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vexu_upper_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vexu_upper_tb___024root___dump_triggers__nba(Vexu_upper_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vexu_upper_tb___024root___dump_triggers__act(Vexu_upper_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vexu_upper_tb___024root___eval(Vexu_upper_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_upper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_upper_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vexu_upper_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("exu_upper_tb.v", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vexu_upper_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("exu_upper_tb.v", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vexu_upper_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vexu_upper_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vexu_upper_tb___024root___eval_debug_assertions(Vexu_upper_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_upper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_upper_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
