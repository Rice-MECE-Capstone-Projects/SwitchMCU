// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vexu_branch_tb.h for the primary calling header

#include "Vexu_branch_tb__pch.h"
#include "Vexu_branch_tb___024root.h"

VL_ATTR_COLD void Vexu_branch_tb___024root___eval_initial__TOP(Vexu_branch_tb___024root* vlSelf);
VlCoroutine Vexu_branch_tb___024root___eval_initial__TOP__Vtiming__0(Vexu_branch_tb___024root* vlSelf);
VlCoroutine Vexu_branch_tb___024root___eval_initial__TOP__Vtiming__1(Vexu_branch_tb___024root* vlSelf);

void Vexu_branch_tb___024root___eval_initial(Vexu_branch_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_branch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_branch_tb___024root___eval_initial\n"); );
    // Body
    Vexu_branch_tb___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vexu_branch_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vexu_branch_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__exu_branch_tb__DOT__hclk__0 
        = vlSelf->exu_branch_tb__DOT__hclk;
    vlSelf->__Vtrigprevexpr___TOP__exu_branch_tb__DOT__hrstn__0 
        = vlSelf->exu_branch_tb__DOT__hrstn;
}

VL_INLINE_OPT VlCoroutine Vexu_branch_tb___024root___eval_initial__TOP__Vtiming__0(Vexu_branch_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_branch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_branch_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->exu_branch_tb__DOT__dec_branch_en = 1U;
    vlSelf->exu_branch_tb__DOT__dec_bne = 0U;
    vlSelf->exu_branch_tb__DOT__dec_beq = 0U;
    vlSelf->exu_branch_tb__DOT__dec_blt = 1U;
    vlSelf->exu_branch_tb__DOT__dec_bltu = 0U;
    vlSelf->exu_branch_tb__DOT__dec_bgeu = 0U;
    vlSelf->exu_branch_tb__DOT__dec_bge = 0U;
    vlSelf->exu_branch_tb__DOT__dec_rs1 = 0U;
    vlSelf->exu_branch_tb__DOT__dec_rs2 = 0U;
    vlSelf->exu_branch_tb__DOT__reg_rdata_1 = 0U;
    vlSelf->exu_branch_tb__DOT__reg_rdata_2 = 0x4444U;
    vlSelf->exu_branch_tb__DOT__reg_raddr_1__strong__out11 = 0U;
    vlSelf->exu_branch_tb__DOT__reg_raddr_2__strong__out15 = 0U;
    vlSelf->exu_branch_tb__DOT__reg_ren_1__strong__out13 = 1U;
    vlSelf->exu_branch_tb__DOT__reg_ren_2__strong__out17 = 1U;
    vlSelf->exu_branch_tb__DOT__pc = 0x20U;
    vlSelf->exu_branch_tb__DOT__hrstn = 0U;
    vlSelf->exu_branch_tb__DOT__dec_imm_type_b = 5U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "exu_branch_tb.v", 
                                       105);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->exu_branch_tb__DOT__hrstn = 1U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "exu_branch_tb.v", 
                                       107);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "exu_branch_tb.v", 
                                       109);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("exu_branch_tb.v", 110, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vexu_branch_tb___024root___eval_initial__TOP__Vtiming__1(Vexu_branch_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_branch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_branch_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "exu_branch_tb.v", 
                                           58);
        vlSelf->exu_branch_tb__DOT__hclk = (1U & (~ (IData)(vlSelf->exu_branch_tb__DOT__hclk)));
    }
}

void Vexu_branch_tb___024root___act_sequent__TOP__0(Vexu_branch_tb___024root* vlSelf);

void Vexu_branch_tb___024root___eval_act(Vexu_branch_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_branch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_branch_tb___024root___eval_act\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        Vexu_branch_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vexu_branch_tb___024root___act_sequent__TOP__0(Vexu_branch_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_branch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_branch_tb___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__pc_next 
        = ((vlSelf->exu_branch_tb__DOT__pc - (IData)(8U)) 
           + (((- (IData)((1U & ((IData)(vlSelf->exu_branch_tb__DOT__dec_imm_type_b) 
                                 >> 0xbU)))) << 0xdU) 
              | (IData)(vlSelf->exu_branch_tb__DOT__dec_imm_type_b)));
    vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__branch 
        = (1U & ((IData)(vlSelf->exu_branch_tb__DOT__dec_beq)
                  ? (vlSelf->exu_branch_tb__DOT__reg_rdata_1 
                     == vlSelf->exu_branch_tb__DOT__reg_rdata_2)
                  : ((IData)(vlSelf->exu_branch_tb__DOT__dec_bne)
                      ? (vlSelf->exu_branch_tb__DOT__reg_rdata_1 
                         != vlSelf->exu_branch_tb__DOT__reg_rdata_2)
                      : ((IData)(vlSelf->exu_branch_tb__DOT__dec_blt)
                          ? VL_LTS_III(32, vlSelf->exu_branch_tb__DOT__reg_rdata_1, vlSelf->exu_branch_tb__DOT__reg_rdata_2)
                          : ((IData)(vlSelf->exu_branch_tb__DOT__dec_bge)
                              ? VL_GTES_III(32, vlSelf->exu_branch_tb__DOT__reg_rdata_1, vlSelf->exu_branch_tb__DOT__reg_rdata_2)
                              : ((IData)(vlSelf->exu_branch_tb__DOT__dec_bltu)
                                  ? (vlSelf->exu_branch_tb__DOT__reg_rdata_1 
                                     < vlSelf->exu_branch_tb__DOT__reg_rdata_2)
                                  : ((IData)(vlSelf->exu_branch_tb__DOT__dec_bgeu)
                                      ? (vlSelf->exu_branch_tb__DOT__reg_rdata_1 
                                         >= vlSelf->exu_branch_tb__DOT__reg_rdata_2)
                                      : 0U)))))));
}

void Vexu_branch_tb___024root___nba_sequent__TOP__0(Vexu_branch_tb___024root* vlSelf);
void Vexu_branch_tb___024root___nba_sequent__TOP__1(Vexu_branch_tb___024root* vlSelf);
void Vexu_branch_tb___024root___nba_sequent__TOP__2(Vexu_branch_tb___024root* vlSelf);
void Vexu_branch_tb___024root___nba_sequent__TOP__3(Vexu_branch_tb___024root* vlSelf);
void Vexu_branch_tb___024root___nba_comb__TOP__0(Vexu_branch_tb___024root* vlSelf);

void Vexu_branch_tb___024root___eval_nba(Vexu_branch_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_branch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_branch_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vexu_branch_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vexu_branch_tb___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vexu_branch_tb___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vexu_branch_tb___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((5ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vexu_branch_tb___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vexu_branch_tb___024root___nba_sequent__TOP__0(Vexu_branch_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_branch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_branch_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdly__exu_branch_tb__DOT__cycle_cnt = vlSelf->exu_branch_tb__DOT__cycle_cnt;
    vlSelf->__Vdly__exu_branch_tb__DOT__pc = vlSelf->exu_branch_tb__DOT__pc;
    if (vlSelf->exu_branch_tb__DOT__hrstn) {
        if ((4U == (IData)(vlSelf->exu_branch_tb__DOT__cycle_cnt))) {
            vlSelf->__Vdly__exu_branch_tb__DOT__cycle_cnt = 1U;
            vlSelf->__Vdly__exu_branch_tb__DOT__pc 
                = (((IData)(vlSelf->exu_branch_tb__DOT__dec_branch_en) 
                    & (IData)(vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_pc_write))
                    ? (((IData)(vlSelf->exu_branch_tb__DOT__dec_branch_en)
                         ? 0xffffffffU : 0U) & (((IData)(vlSelf->exu_branch_tb__DOT__dec_branch_en)
                                                  ? vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_pc_wdata
                                                  : 0U) 
                                                & ((IData)(vlSelf->exu_branch_tb__DOT__dec_branch_en)
                                                    ? 0xffffffffU
                                                    : 0U)))
                    : ((IData)(4U) + vlSelf->exu_branch_tb__DOT__pc));
        } else {
            vlSelf->__Vdly__exu_branch_tb__DOT__cycle_cnt 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->exu_branch_tb__DOT__cycle_cnt)));
            vlSelf->__Vdly__exu_branch_tb__DOT__pc 
                = vlSelf->exu_branch_tb__DOT__pc;
        }
    } else {
        vlSelf->__Vdly__exu_branch_tb__DOT__cycle_cnt = 0U;
        vlSelf->__Vdly__exu_branch_tb__DOT__pc = 0U;
    }
}

VL_INLINE_OPT void Vexu_branch_tb___024root___nba_sequent__TOP__1(Vexu_branch_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_branch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_branch_tb___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->exu_branch_tb__DOT__hrstn) {
        if (vlSelf->exu_branch_tb__DOT__dec_branch_en) {
            if ((3U == (IData)(vlSelf->exu_branch_tb__DOT__cycle_cnt))) {
                if (vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__branch) {
                    vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_flush 
                        = ((vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__pc_next 
                            == ((IData)(4U) + (vlSelf->exu_branch_tb__DOT__pc 
                                               - (IData)(8U))))
                            ? 0U : ((vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__pc_next 
                                     == ((IData)(8U) 
                                         + (vlSelf->exu_branch_tb__DOT__pc 
                                            - (IData)(8U))))
                                     ? 1U : 2U));
                    vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_pc_wdata 
                        = (((vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__pc_next 
                             != ((IData)(4U) + (vlSelf->exu_branch_tb__DOT__pc 
                                                - (IData)(8U)))) 
                            & (vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__pc_next 
                               != ((IData)(8U) + (vlSelf->exu_branch_tb__DOT__pc 
                                                  - (IData)(8U)))))
                            ? vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__pc_next
                            : 0U);
                } else {
                    vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_flush = 0U;
                    vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_pc_wdata = 0U;
                }
            } else if ((4U == (IData)(vlSelf->exu_branch_tb__DOT__cycle_cnt))) {
                vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_flush 
                    = vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_flush;
                vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_pc_wdata 
                    = vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_pc_wdata;
            } else {
                vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_flush = 0U;
                vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_pc_wdata = 0U;
            }
            if ((1U == (IData)(vlSelf->exu_branch_tb__DOT__cycle_cnt))) {
                vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_reg_raddr_1 
                    = vlSelf->exu_branch_tb__DOT__dec_rs1;
                vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_reg_raddr_2 
                    = vlSelf->exu_branch_tb__DOT__dec_rs2;
            } else {
                vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_reg_raddr_1 = 0U;
                vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_reg_raddr_2 = 0U;
            }
        } else {
            vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_flush = 0U;
            vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_pc_wdata = 0U;
            vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_reg_raddr_1 = 0U;
            vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_reg_raddr_2 = 0U;
        }
    } else {
        vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_flush = 0U;
        vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_pc_wdata = 0U;
        vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_reg_raddr_1 = 0U;
        vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_reg_raddr_2 = 0U;
    }
    vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_pc_write 
        = ((IData)(vlSelf->exu_branch_tb__DOT__hrstn) 
           && ((IData)(vlSelf->exu_branch_tb__DOT__dec_branch_en) 
               && ((3U == (IData)(vlSelf->exu_branch_tb__DOT__cycle_cnt))
                    ? ((IData)(vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__branch) 
                       && ((vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__pc_next 
                            != ((IData)(4U) + (vlSelf->exu_branch_tb__DOT__pc 
                                               - (IData)(8U)))) 
                           & (vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__pc_next 
                              != ((IData)(8U) + (vlSelf->exu_branch_tb__DOT__pc 
                                                 - (IData)(8U))))))
                    : ((4U == (IData)(vlSelf->exu_branch_tb__DOT__cycle_cnt)) 
                       && (IData)(vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_pc_write)))));
    vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_reg_ren_1 
        = ((IData)(vlSelf->exu_branch_tb__DOT__hrstn) 
           && ((IData)(vlSelf->exu_branch_tb__DOT__dec_branch_en) 
               && (1U == (IData)(vlSelf->exu_branch_tb__DOT__cycle_cnt))));
    vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_reg_ren_2 
        = ((IData)(vlSelf->exu_branch_tb__DOT__hrstn) 
           && ((IData)(vlSelf->exu_branch_tb__DOT__dec_branch_en) 
               && (1U == (IData)(vlSelf->exu_branch_tb__DOT__cycle_cnt))));
}

VL_INLINE_OPT void Vexu_branch_tb___024root___nba_sequent__TOP__2(Vexu_branch_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_branch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_branch_tb___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->exu_branch_tb__DOT__pc = vlSelf->__Vdly__exu_branch_tb__DOT__pc;
    vlSelf->exu_branch_tb__DOT__cycle_cnt = vlSelf->__Vdly__exu_branch_tb__DOT__cycle_cnt;
}

VL_INLINE_OPT void Vexu_branch_tb___024root___nba_sequent__TOP__3(Vexu_branch_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_branch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_branch_tb___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__branch 
        = (1U & ((IData)(vlSelf->exu_branch_tb__DOT__dec_beq)
                  ? (vlSelf->exu_branch_tb__DOT__reg_rdata_1 
                     == vlSelf->exu_branch_tb__DOT__reg_rdata_2)
                  : ((IData)(vlSelf->exu_branch_tb__DOT__dec_bne)
                      ? (vlSelf->exu_branch_tb__DOT__reg_rdata_1 
                         != vlSelf->exu_branch_tb__DOT__reg_rdata_2)
                      : ((IData)(vlSelf->exu_branch_tb__DOT__dec_blt)
                          ? VL_LTS_III(32, vlSelf->exu_branch_tb__DOT__reg_rdata_1, vlSelf->exu_branch_tb__DOT__reg_rdata_2)
                          : ((IData)(vlSelf->exu_branch_tb__DOT__dec_bge)
                              ? VL_GTES_III(32, vlSelf->exu_branch_tb__DOT__reg_rdata_1, vlSelf->exu_branch_tb__DOT__reg_rdata_2)
                              : ((IData)(vlSelf->exu_branch_tb__DOT__dec_bltu)
                                  ? (vlSelf->exu_branch_tb__DOT__reg_rdata_1 
                                     < vlSelf->exu_branch_tb__DOT__reg_rdata_2)
                                  : ((IData)(vlSelf->exu_branch_tb__DOT__dec_bgeu)
                                      ? (vlSelf->exu_branch_tb__DOT__reg_rdata_1 
                                         >= vlSelf->exu_branch_tb__DOT__reg_rdata_2)
                                      : 0U)))))));
}

VL_INLINE_OPT void Vexu_branch_tb___024root___nba_comb__TOP__0(Vexu_branch_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_branch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_branch_tb___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__pc_next 
        = ((vlSelf->exu_branch_tb__DOT__pc - (IData)(8U)) 
           + (((- (IData)((1U & ((IData)(vlSelf->exu_branch_tb__DOT__dec_imm_type_b) 
                                 >> 0xbU)))) << 0xdU) 
              | (IData)(vlSelf->exu_branch_tb__DOT__dec_imm_type_b)));
}

void Vexu_branch_tb___024root___timing_resume(Vexu_branch_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_branch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_branch_tb___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vexu_branch_tb___024root___eval_triggers__act(Vexu_branch_tb___024root* vlSelf);

bool Vexu_branch_tb___024root___eval_phase__act(Vexu_branch_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_branch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_branch_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vexu_branch_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vexu_branch_tb___024root___timing_resume(vlSelf);
        Vexu_branch_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vexu_branch_tb___024root___eval_phase__nba(Vexu_branch_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_branch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_branch_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vexu_branch_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vexu_branch_tb___024root___dump_triggers__nba(Vexu_branch_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vexu_branch_tb___024root___dump_triggers__act(Vexu_branch_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vexu_branch_tb___024root___eval(Vexu_branch_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_branch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_branch_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vexu_branch_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("exu_branch_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vexu_branch_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("exu_branch_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vexu_branch_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vexu_branch_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vexu_branch_tb___024root___eval_debug_assertions(Vexu_branch_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_branch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_branch_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
