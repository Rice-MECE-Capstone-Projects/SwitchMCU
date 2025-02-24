// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vexu_jump_tb.h for the primary calling header

#include "Vexu_jump_tb__pch.h"
#include "Vexu_jump_tb___024root.h"

VL_ATTR_COLD void Vexu_jump_tb___024root___eval_initial__TOP(Vexu_jump_tb___024root* vlSelf);
VlCoroutine Vexu_jump_tb___024root___eval_initial__TOP__Vtiming__0(Vexu_jump_tb___024root* vlSelf);
VlCoroutine Vexu_jump_tb___024root___eval_initial__TOP__Vtiming__1(Vexu_jump_tb___024root* vlSelf);

void Vexu_jump_tb___024root___eval_initial(Vexu_jump_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_jump_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_jump_tb___024root___eval_initial\n"); );
    // Body
    Vexu_jump_tb___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vexu_jump_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vexu_jump_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__exu_jump_tb__DOT__hclk__0 
        = vlSelf->exu_jump_tb__DOT__hclk;
    vlSelf->__Vtrigprevexpr___TOP__exu_jump_tb__DOT__hrstn__0 
        = vlSelf->exu_jump_tb__DOT__hrstn;
}

VL_INLINE_OPT VlCoroutine Vexu_jump_tb___024root___eval_initial__TOP__Vtiming__0(Vexu_jump_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_jump_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_jump_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->exu_jump_tb__DOT__dec_jump_en = 1U;
    vlSelf->exu_jump_tb__DOT__dec_jal = 1U;
    vlSelf->exu_jump_tb__DOT__dec_jalr = 0U;
    vlSelf->exu_jump_tb__DOT__dec_imm_type_i = 0xaU;
    vlSelf->exu_jump_tb__DOT__dec_imm_type_j = 0x78U;
    vlSelf->exu_jump_tb__DOT__dec_rd = 0U;
    vlSelf->exu_jump_tb__DOT__dec_rs1 = 2U;
    vlSelf->exu_jump_tb__DOT__reg_rdata_1 = 2U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "exu_jump_tb.v", 
                                       89);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->exu_jump_tb__DOT__hrstn = 1U;
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "exu_jump_tb.v", 
                                       91);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->exu_jump_tb__DOT__dec_jal = 0U;
    vlSelf->exu_jump_tb__DOT__dec_jalr = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "exu_jump_tb.v", 
                                       94);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("exu_jump_tb.v", 95, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vexu_jump_tb___024root___eval_initial__TOP__Vtiming__1(Vexu_jump_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_jump_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_jump_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "exu_jump_tb.v", 
                                           52);
        vlSelf->exu_jump_tb__DOT__hclk = (1U & (~ (IData)(vlSelf->exu_jump_tb__DOT__hclk)));
    }
}

void Vexu_jump_tb___024root___act_sequent__TOP__0(Vexu_jump_tb___024root* vlSelf);

void Vexu_jump_tb___024root___eval_act(Vexu_jump_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_jump_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_jump_tb___024root___eval_act\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        Vexu_jump_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vexu_jump_tb___024root___act_sequent__TOP__0(Vexu_jump_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_jump_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_jump_tb___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__pc_next 
        = ((IData)(vlSelf->exu_jump_tb__DOT__dec_jal)
            ? ((vlSelf->exu_jump_tb__DOT__pc - (IData)(8U)) 
               + (((- (IData)((1U & (vlSelf->exu_jump_tb__DOT__dec_imm_type_j 
                                     >> 0x13U)))) << 0x15U) 
                  | vlSelf->exu_jump_tb__DOT__dec_imm_type_j))
            : (0xfffffffeU & (vlSelf->exu_jump_tb__DOT__reg_rdata_1 
                              + (((- (IData)((1U & 
                                              ((IData)(vlSelf->exu_jump_tb__DOT__dec_imm_type_i) 
                                               >> 0xbU)))) 
                                  << 0xcU) | (IData)(vlSelf->exu_jump_tb__DOT__dec_imm_type_i)))));
}

void Vexu_jump_tb___024root___nba_sequent__TOP__0(Vexu_jump_tb___024root* vlSelf);
void Vexu_jump_tb___024root___nba_sequent__TOP__1(Vexu_jump_tb___024root* vlSelf);
void Vexu_jump_tb___024root___nba_sequent__TOP__2(Vexu_jump_tb___024root* vlSelf);

void Vexu_jump_tb___024root___eval_nba(Vexu_jump_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_jump_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_jump_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vexu_jump_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vexu_jump_tb___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vexu_jump_tb___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((5ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vexu_jump_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vexu_jump_tb___024root___nba_sequent__TOP__0(Vexu_jump_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_jump_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_jump_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdly__exu_jump_tb__DOT__cycle_cnt = vlSelf->exu_jump_tb__DOT__cycle_cnt;
    vlSelf->__Vdly__exu_jump_tb__DOT__pc = vlSelf->exu_jump_tb__DOT__pc;
    if (vlSelf->exu_jump_tb__DOT__hrstn) {
        if ((4U == (IData)(vlSelf->exu_jump_tb__DOT__cycle_cnt))) {
            vlSelf->__Vdly__exu_jump_tb__DOT__cycle_cnt = 1U;
            vlSelf->__Vdly__exu_jump_tb__DOT__pc = 
                (((IData)(vlSelf->exu_jump_tb__DOT__dec_jump_en) 
                  & (IData)(vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_pc_write))
                  ? (((IData)(vlSelf->exu_jump_tb__DOT__dec_jump_en)
                       ? 0xffffffffU : 0U) & (((IData)(vlSelf->exu_jump_tb__DOT__dec_jump_en)
                                                ? vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_pc_wdata
                                                : 0U) 
                                              & ((IData)(vlSelf->exu_jump_tb__DOT__dec_jump_en)
                                                  ? 0xffffffffU
                                                  : 0U)))
                  : ((IData)(4U) + vlSelf->exu_jump_tb__DOT__pc));
        } else {
            vlSelf->__Vdly__exu_jump_tb__DOT__cycle_cnt 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->exu_jump_tb__DOT__cycle_cnt)));
            vlSelf->__Vdly__exu_jump_tb__DOT__pc = vlSelf->exu_jump_tb__DOT__pc;
        }
    } else {
        vlSelf->__Vdly__exu_jump_tb__DOT__cycle_cnt = 0U;
        vlSelf->__Vdly__exu_jump_tb__DOT__pc = 0U;
    }
}

VL_INLINE_OPT void Vexu_jump_tb___024root___nba_sequent__TOP__1(Vexu_jump_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_jump_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_jump_tb___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->exu_jump_tb__DOT__hrstn) {
        if (vlSelf->exu_jump_tb__DOT__dec_jump_en) {
            if ((3U == (IData)(vlSelf->exu_jump_tb__DOT__cycle_cnt))) {
                vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_flush 
                    = ((vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__pc_next 
                        == ((IData)(4U) + (vlSelf->exu_jump_tb__DOT__pc 
                                           - (IData)(8U))))
                        ? 0U : ((vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__pc_next 
                                 == ((IData)(8U) + 
                                     (vlSelf->exu_jump_tb__DOT__pc 
                                      - (IData)(8U))))
                                 ? 1U : 2U));
                vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_pc_wdata 
                    = (((vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__pc_next 
                         != ((IData)(4U) + (vlSelf->exu_jump_tb__DOT__pc 
                                            - (IData)(8U)))) 
                        & (vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__pc_next 
                           != ((IData)(8U) + (vlSelf->exu_jump_tb__DOT__pc 
                                              - (IData)(8U)))))
                        ? vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__pc_next
                        : 0U);
            } else if ((4U == (IData)(vlSelf->exu_jump_tb__DOT__cycle_cnt))) {
                vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_flush 
                    = vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_flush;
                vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_pc_wdata 
                    = vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_pc_wdata;
            } else {
                vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_flush = 0U;
                vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_pc_wdata = 0U;
            }
            if ((1U == (IData)(vlSelf->exu_jump_tb__DOT__cycle_cnt))) {
                vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_waddr = 0U;
                vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_raddr_1 
                    = ((IData)(vlSelf->exu_jump_tb__DOT__dec_jalr)
                        ? (IData)(vlSelf->exu_jump_tb__DOT__dec_rs1)
                        : 0U);
                vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_wdata = 0U;
            } else {
                if ((2U == (IData)(vlSelf->exu_jump_tb__DOT__cycle_cnt))) {
                    vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_waddr 
                        = vlSelf->exu_jump_tb__DOT__dec_rd;
                    vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_wdata 
                        = ((IData)(4U) + (vlSelf->exu_jump_tb__DOT__pc 
                                          - (IData)(8U)));
                } else {
                    vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_waddr = 0U;
                    vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_wdata = 0U;
                }
                vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_raddr_1 = 0U;
            }
        } else {
            vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_flush = 0U;
            vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_pc_wdata = 0U;
            vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_waddr = 0U;
            vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_raddr_1 = 0U;
            vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_wdata = 0U;
        }
    } else {
        vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_flush = 0U;
        vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_pc_wdata = 0U;
        vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_waddr = 0U;
        vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_raddr_1 = 0U;
        vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_wdata = 0U;
    }
    vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_pc_write 
        = ((IData)(vlSelf->exu_jump_tb__DOT__hrstn) 
           && ((IData)(vlSelf->exu_jump_tb__DOT__dec_jump_en) 
               && ((3U == (IData)(vlSelf->exu_jump_tb__DOT__cycle_cnt))
                    ? ((vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__pc_next 
                        != ((IData)(4U) + (vlSelf->exu_jump_tb__DOT__pc 
                                           - (IData)(8U)))) 
                       & (vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__pc_next 
                          != ((IData)(8U) + (vlSelf->exu_jump_tb__DOT__pc 
                                             - (IData)(8U)))))
                    : ((4U == (IData)(vlSelf->exu_jump_tb__DOT__cycle_cnt)) 
                       && (IData)(vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_pc_write)))));
    vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_wen 
        = ((IData)(vlSelf->exu_jump_tb__DOT__hrstn) 
           && ((IData)(vlSelf->exu_jump_tb__DOT__dec_jump_en) 
               && ((1U != (IData)(vlSelf->exu_jump_tb__DOT__cycle_cnt)) 
                   && (2U == (IData)(vlSelf->exu_jump_tb__DOT__cycle_cnt)))));
    vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_ren_1 
        = ((IData)(vlSelf->exu_jump_tb__DOT__hrstn) 
           && ((IData)(vlSelf->exu_jump_tb__DOT__dec_jump_en) 
               && ((1U == (IData)(vlSelf->exu_jump_tb__DOT__cycle_cnt)) 
                   && (IData)(vlSelf->exu_jump_tb__DOT__dec_jalr))));
}

VL_INLINE_OPT void Vexu_jump_tb___024root___nba_sequent__TOP__2(Vexu_jump_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_jump_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_jump_tb___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->exu_jump_tb__DOT__cycle_cnt = vlSelf->__Vdly__exu_jump_tb__DOT__cycle_cnt;
    vlSelf->exu_jump_tb__DOT__pc = vlSelf->__Vdly__exu_jump_tb__DOT__pc;
}

void Vexu_jump_tb___024root___timing_resume(Vexu_jump_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_jump_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_jump_tb___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vexu_jump_tb___024root___eval_triggers__act(Vexu_jump_tb___024root* vlSelf);

bool Vexu_jump_tb___024root___eval_phase__act(Vexu_jump_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_jump_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_jump_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vexu_jump_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vexu_jump_tb___024root___timing_resume(vlSelf);
        Vexu_jump_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vexu_jump_tb___024root___eval_phase__nba(Vexu_jump_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_jump_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_jump_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vexu_jump_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vexu_jump_tb___024root___dump_triggers__nba(Vexu_jump_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vexu_jump_tb___024root___dump_triggers__act(Vexu_jump_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vexu_jump_tb___024root___eval(Vexu_jump_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_jump_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_jump_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vexu_jump_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("exu_jump_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vexu_jump_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("exu_jump_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vexu_jump_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vexu_jump_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vexu_jump_tb___024root___eval_debug_assertions(Vexu_jump_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_jump_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_jump_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
