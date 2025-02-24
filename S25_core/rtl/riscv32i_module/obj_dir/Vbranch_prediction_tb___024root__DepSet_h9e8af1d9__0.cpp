// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbranch_prediction_tb.h for the primary calling header

#include "Vbranch_prediction_tb__pch.h"
#include "Vbranch_prediction_tb___024root.h"

VL_ATTR_COLD void Vbranch_prediction_tb___024root___eval_initial__TOP(Vbranch_prediction_tb___024root* vlSelf);
VlCoroutine Vbranch_prediction_tb___024root___eval_initial__TOP__Vtiming__0(Vbranch_prediction_tb___024root* vlSelf);
VlCoroutine Vbranch_prediction_tb___024root___eval_initial__TOP__Vtiming__1(Vbranch_prediction_tb___024root* vlSelf);
VlCoroutine Vbranch_prediction_tb___024root___eval_initial__TOP__Vtiming__2(Vbranch_prediction_tb___024root* vlSelf);
VlCoroutine Vbranch_prediction_tb___024root___eval_initial__TOP__Vtiming__3(Vbranch_prediction_tb___024root* vlSelf);

void Vbranch_prediction_tb___024root___eval_initial(Vbranch_prediction_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbranch_prediction_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_prediction_tb___024root___eval_initial\n"); );
    // Body
    Vbranch_prediction_tb___024root___eval_initial__TOP(vlSelf);
    Vbranch_prediction_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vbranch_prediction_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vbranch_prediction_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vbranch_prediction_tb___024root___eval_initial__TOP__Vtiming__3(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__branch_prediction_tb__DOT__clk__0 
        = vlSelf->branch_prediction_tb__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vbranch_prediction_tb___024root___eval_initial__TOP__Vtiming__0(Vbranch_prediction_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbranch_prediction_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_prediction_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->branch_prediction_tb__DOT__clk = 1U;
    vlSelf->branch_prediction_tb__DOT__predict_trigger = 0U;
    vlSelf->branch_prediction_tb__DOT__prediction_type = 0U;
    vlSelf->branch_prediction_tb__DOT__temp_pc = 0x3f8U;
    vlSelf->branch_prediction_tb__DOT__temp_imm = 1U;
    vlSelf->branch_prediction_tb__DOT__actual_branch = 1U;
    co_await vlSelf->__VdlySched.delay(0xfULL, nullptr, 
                                       "branch_prediction_tb.v", 
                                       46);
    vlSelf->branch_prediction_tb__DOT__actual_branch = 0U;
    co_await vlSelf->__VdlySched.delay(0xfULL, nullptr, 
                                       "branch_prediction_tb.v", 
                                       48);
    vlSelf->branch_prediction_tb__DOT__prediction_type = 1U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "branch_prediction_tb.v", 
                                       50);
    vlSelf->branch_prediction_tb__DOT__actual_branch = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "branch_prediction_tb.v", 
                                       52);
    vlSelf->branch_prediction_tb__DOT__actual_branch = 0U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "branch_prediction_tb.v", 
                                       54);
    vlSelf->branch_prediction_tb__DOT__actual_branch = 1U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "branch_prediction_tb.v", 
                                       56);
    vlSelf->branch_prediction_tb__DOT__prediction_type = 2U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "branch_prediction_tb.v", 
                                       58);
    vlSelf->branch_prediction_tb__DOT__actual_branch = 1U;
    co_await vlSelf->__VdlySched.delay(0x32ULL, nullptr, 
                                       "branch_prediction_tb.v", 
                                       60);
    vlSelf->branch_prediction_tb__DOT__actual_branch = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "branch_prediction_tb.v", 
                                       62);
    vlSelf->branch_prediction_tb__DOT__actual_branch = 1U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "branch_prediction_tb.v", 
                                       64);
    vlSelf->branch_prediction_tb__DOT__actual_branch = 0U;
    co_await vlSelf->__VdlySched.delay(0x32ULL, nullptr, 
                                       "branch_prediction_tb.v", 
                                       66);
    VL_FINISH_MT("branch_prediction_tb.v", 68, "");
}

VL_INLINE_OPT VlCoroutine Vbranch_prediction_tb___024root___eval_initial__TOP__Vtiming__1(Vbranch_prediction_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbranch_prediction_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_prediction_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "branch_prediction_tb.v", 
                                           34);
        vlSelf->branch_prediction_tb__DOT__predict_trigger 
            = (1U & (~ (IData)(vlSelf->branch_prediction_tb__DOT__predict_trigger)));
    }
}

VL_INLINE_OPT VlCoroutine Vbranch_prediction_tb___024root___eval_initial__TOP__Vtiming__2(Vbranch_prediction_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbranch_prediction_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_prediction_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "branch_prediction_tb.v", 
                                           33);
        vlSelf->branch_prediction_tb__DOT__clk = (1U 
                                                  & (~ (IData)(vlSelf->branch_prediction_tb__DOT__clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vbranch_prediction_tb___024root___eval_initial__TOP__Vtiming__3(Vbranch_prediction_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbranch_prediction_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_prediction_tb___024root___eval_initial__TOP__Vtiming__3\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h04699f84__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge branch_prediction_tb.clk)", 
                                                           "branch_prediction.v", 
                                                           58);
        co_await vlSelf->__VdlySched.delay(0x6eULL, 
                                           nullptr, 
                                           "branch_prediction.v", 
                                           59);
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->branch_prediction_tb__DOT__prediction))))) {
            VL_WRITEF_NX("\nBranch predicted! branching to %8x based on imm: %8x and temp: %8x",0,
                         32,(((IData)(vlSelf->branch_prediction_tb__DOT__prediction)
                               ? (vlSelf->branch_prediction_tb__DOT__branch_inst__DOT__pc_temp 
                                  + vlSelf->branch_prediction_tb__DOT__temp_imm)
                               : vlSelf->branch_prediction_tb__DOT__branch_inst__DOT__pc_temp) 
                             | vlSelf->branch_prediction_tb__DOT__temp_pc),
                         32,vlSelf->branch_prediction_tb__DOT__temp_imm,
                         32,vlSelf->branch_prediction_tb__DOT__branch_inst__DOT__pc_temp);
        }
    }
}

void Vbranch_prediction_tb___024root___act_sequent__TOP__0(Vbranch_prediction_tb___024root* vlSelf);

void Vbranch_prediction_tb___024root___eval_act(Vbranch_prediction_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbranch_prediction_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_prediction_tb___024root___eval_act\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vbranch_prediction_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vbranch_prediction_tb___024root___act_sequent__TOP__0(Vbranch_prediction_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbranch_prediction_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_prediction_tb___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->branch_prediction_tb__DOT__pc__strong__out1 
        = ((IData)(vlSelf->branch_prediction_tb__DOT__prediction)
            ? (vlSelf->branch_prediction_tb__DOT__branch_inst__DOT__pc_temp 
               + vlSelf->branch_prediction_tb__DOT__temp_imm)
            : vlSelf->branch_prediction_tb__DOT__branch_inst__DOT__pc_temp);
}

void Vbranch_prediction_tb___024root___nba_sequent__TOP__0(Vbranch_prediction_tb___024root* vlSelf);

void Vbranch_prediction_tb___024root___eval_nba(Vbranch_prediction_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbranch_prediction_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_prediction_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbranch_prediction_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbranch_prediction_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vbranch_prediction_tb___024root___nba_sequent__TOP__0(Vbranch_prediction_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbranch_prediction_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_prediction_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->branch_prediction_tb__DOT__branch_inst__DOT__pc_temp 
        = (vlSelf->branch_prediction_tb__DOT__pc__strong__out1 
           | vlSelf->branch_prediction_tb__DOT__temp_pc);
    if (vlSelf->branch_prediction_tb__DOT__reset) {
        vlSelf->branch_prediction_tb__DOT__prediction = 1U;
    } else if (vlSelf->branch_prediction_tb__DOT__predict_trigger) {
        if ((0U == (IData)(vlSelf->branch_prediction_tb__DOT__prediction_type))) {
            vlSelf->branch_prediction_tb__DOT__prediction = 0U;
        } else if ((1U == (IData)(vlSelf->branch_prediction_tb__DOT__prediction_type))) {
            if (((IData)(vlSelf->branch_prediction_tb__DOT__branch_inst__DOT__prev_prediction) 
                 != (IData)(vlSelf->branch_prediction_tb__DOT__actual_branch))) {
                vlSelf->branch_prediction_tb__DOT__prediction 
                    = (1U & (~ (IData)(vlSelf->branch_prediction_tb__DOT__branch_inst__DOT__prev_prediction)));
            }
        } else if ((2U == (IData)(vlSelf->branch_prediction_tb__DOT__prediction_type))) {
            if ((((IData)(vlSelf->branch_prediction_tb__DOT__branch_inst__DOT__old_branch) 
                  == (IData)(vlSelf->branch_prediction_tb__DOT__actual_branch)) 
                 & ((IData)(vlSelf->branch_prediction_tb__DOT__actual_branch) 
                    != (IData)(vlSelf->branch_prediction_tb__DOT__branch_inst__DOT__prev_prediction)))) {
                vlSelf->branch_prediction_tb__DOT__prediction 
                    = (1U & (~ (IData)(vlSelf->branch_prediction_tb__DOT__branch_inst__DOT__prev_prediction)));
            }
        } else {
            vlSelf->branch_prediction_tb__DOT__prediction 
                = vlSelf->branch_prediction_tb__DOT__branch_inst__DOT__prev_prediction;
        }
    } else {
        vlSelf->branch_prediction_tb__DOT__prediction = 1U;
    }
    if ((1U & (~ (IData)(vlSelf->branch_prediction_tb__DOT__reset)))) {
        if (vlSelf->branch_prediction_tb__DOT__predict_trigger) {
            vlSelf->branch_prediction_tb__DOT__branch_inst__DOT__old_branch 
                = vlSelf->branch_prediction_tb__DOT__actual_branch;
        }
    }
}

void Vbranch_prediction_tb___024root___timing_resume(Vbranch_prediction_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbranch_prediction_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_prediction_tb___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h04699f84__0.resume("@(negedge branch_prediction_tb.clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vbranch_prediction_tb___024root___timing_commit(Vbranch_prediction_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbranch_prediction_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_prediction_tb___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h04699f84__0.commit("@(negedge branch_prediction_tb.clk)");
    }
}

void Vbranch_prediction_tb___024root___eval_triggers__act(Vbranch_prediction_tb___024root* vlSelf);

bool Vbranch_prediction_tb___024root___eval_phase__act(Vbranch_prediction_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbranch_prediction_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_prediction_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vbranch_prediction_tb___024root___eval_triggers__act(vlSelf);
    Vbranch_prediction_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vbranch_prediction_tb___024root___timing_resume(vlSelf);
        Vbranch_prediction_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vbranch_prediction_tb___024root___eval_phase__nba(Vbranch_prediction_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbranch_prediction_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_prediction_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vbranch_prediction_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbranch_prediction_tb___024root___dump_triggers__nba(Vbranch_prediction_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbranch_prediction_tb___024root___dump_triggers__act(Vbranch_prediction_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vbranch_prediction_tb___024root___eval(Vbranch_prediction_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbranch_prediction_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_prediction_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vbranch_prediction_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("branch_prediction_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vbranch_prediction_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("branch_prediction_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vbranch_prediction_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vbranch_prediction_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vbranch_prediction_tb___024root___eval_debug_assertions(Vbranch_prediction_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbranch_prediction_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_prediction_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
