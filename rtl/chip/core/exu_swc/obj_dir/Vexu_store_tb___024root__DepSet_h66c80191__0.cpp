// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vexu_store_tb.h for the primary calling header

#include "Vexu_store_tb__pch.h"
#include "Vexu_store_tb___024root.h"

VL_ATTR_COLD void Vexu_store_tb___024root___eval_initial__TOP(Vexu_store_tb___024root* vlSelf);
VlCoroutine Vexu_store_tb___024root___eval_initial__TOP__Vtiming__0(Vexu_store_tb___024root* vlSelf);
VlCoroutine Vexu_store_tb___024root___eval_initial__TOP__Vtiming__1(Vexu_store_tb___024root* vlSelf);

void Vexu_store_tb___024root___eval_initial(Vexu_store_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_store_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_store_tb___024root___eval_initial\n"); );
    // Body
    Vexu_store_tb___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vexu_store_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vexu_store_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__exu_store_tb__DOT__hclk__0 
        = vlSelf->exu_store_tb__DOT__hclk;
    vlSelf->__Vtrigprevexpr___TOP__exu_store_tb__DOT__hrstn__0 
        = vlSelf->exu_store_tb__DOT__hrstn;
}

VL_INLINE_OPT VlCoroutine Vexu_store_tb___024root___eval_initial__TOP__Vtiming__0(Vexu_store_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_store_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_store_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->exu_store_tb__DOT__hclk = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "exu_store_tb.v", 
                                           52);
        vlSelf->exu_store_tb__DOT__hclk = (1U & (~ (IData)(vlSelf->exu_store_tb__DOT__hclk)));
    }
}

VL_INLINE_OPT VlCoroutine Vexu_store_tb___024root___eval_initial__TOP__Vtiming__1(Vexu_store_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_store_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_store_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    vlSelf->exu_store_tb__DOT__hrstn = 0U;
    vlSelf->exu_store_tb__DOT__cycle_cnt = 0U;
    vlSelf->exu_store_tb__DOT__dec_store_en = 0U;
    vlSelf->exu_store_tb__DOT__dec_sb = 0U;
    vlSelf->exu_store_tb__DOT__dec_sh = 0U;
    vlSelf->exu_store_tb__DOT__dec_sw = 0U;
    vlSelf->exu_store_tb__DOT__dec_imm_type_s = 0U;
    vlSelf->exu_store_tb__DOT__dec_rs1 = 0U;
    vlSelf->exu_store_tb__DOT__dec_rs2 = 0U;
    vlSelf->exu_store_tb__DOT__reg_rdata_1 = 0U;
    vlSelf->exu_store_tb__DOT__reg_rdata_2 = 0U;
    vlSelf->exu_store_tb__DOT__exu_stall = 0U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "exu_store_tb.v", 
                                       72);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->exu_store_tb__DOT__hrstn = 1U;
    co_await vlSelf->__VtrigSched_hfff496ee__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge exu_store_tb.hclk)", 
                                                       "exu_store_tb.v", 
                                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->exu_store_tb__DOT__dec_store_en = 1U;
    vlSelf->exu_store_tb__DOT__dec_sw = 1U;
    vlSelf->exu_store_tb__DOT__dec_imm_type_s = 0xff0U;
    vlSelf->exu_store_tb__DOT__dec_rs1 = 1U;
    vlSelf->exu_store_tb__DOT__dec_rs2 = 2U;
    vlSelf->exu_store_tb__DOT__reg_rdata_1 = 0x1000U;
    vlSelf->exu_store_tb__DOT__reg_rdata_2 = 0x12345678U;
    vlSelf->exu_store_tb__DOT__cycle_cnt = 1U;
    co_await vlSelf->__VtrigSched_hfff496ee__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge exu_store_tb.hclk)", 
                                                       "exu_store_tb.v", 
                                                       86);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Cycle 1: reg_raddr_1 = %2#, reg_raddr_2 = %2#, reg_ren_1 = %b, reg_ren_2 = %b\n",0,
                 5,vlSelf->exu_store_tb__DOT__uut__DOT__mid_reg_raddr_1,
                 5,(IData)(vlSelf->exu_store_tb__DOT__uut__DOT__mid_reg_raddr_2),
                 1,vlSelf->exu_store_tb__DOT__uut__DOT__mid_reg_ren_1,
                 1,(IData)(vlSelf->exu_store_tb__DOT__uut__DOT__mid_reg_ren_2));
    vlSelf->exu_store_tb__DOT__cycle_cnt = 2U;
    co_await vlSelf->__VtrigSched_hfff496ee__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge exu_store_tb.hclk)", 
                                                       "exu_store_tb.v", 
                                                       92);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Cycle 2: Waiting... (No significant operation)\n",0);
    vlSelf->exu_store_tb__DOT__cycle_cnt = 3U;
    co_await vlSelf->__VtrigSched_hfff496ee__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge exu_store_tb.hclk)", 
                                                       "exu_store_tb.v", 
                                                       97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Cycle 3: Store Address (calculated) = %x, Store Data = %x\n",0,
                 32,vlSelf->exu_store_tb__DOT__uut__DOT__exu_store_addr_buff,
                 32,vlSelf->exu_store_tb__DOT__uut__DOT__exu_store_data_buff);
    vlSelf->exu_store_tb__DOT__cycle_cnt = 4U;
    co_await vlSelf->__VtrigSched_hfff496ee__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge exu_store_tb.hclk)", 
                                                       "exu_store_tb.v", 
                                                       103);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Cycle 4: Store Address = %x, Store Data = %x, Store Enable = %b, Store Size = %b\n",0,
                 32,vlSelf->exu_store_tb__DOT__exu_store_addr,
                 32,vlSelf->exu_store_tb__DOT__exu_store_data,
                 1,(IData)(vlSelf->exu_store_tb__DOT__exu_store_en),
                 2,vlSelf->exu_store_tb__DOT__exu_store_size);
    co_await vlSelf->__VdlySched.delay(0x32ULL, nullptr, 
                                       "exu_store_tb.v", 
                                       108);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("exu_store_tb.v", 108, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

void Vexu_store_tb___024root___eval_act(Vexu_store_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_store_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_store_tb___024root___eval_act\n"); );
}

void Vexu_store_tb___024root___nba_sequent__TOP__0(Vexu_store_tb___024root* vlSelf);

void Vexu_store_tb___024root___eval_nba(Vexu_store_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_store_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_store_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vexu_store_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vexu_store_tb___024root___nba_sequent__TOP__0(Vexu_store_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_store_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_store_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->exu_store_tb__DOT__uut__DOT__mid_reg_ren_1 
        = ((IData)(vlSelf->exu_store_tb__DOT__hrstn) 
           && (((IData)(vlSelf->exu_store_tb__DOT__dec_store_en) 
                & (~ (IData)(vlSelf->exu_store_tb__DOT__exu_stall))) 
               && (1U == (IData)(vlSelf->exu_store_tb__DOT__cycle_cnt))));
    vlSelf->exu_store_tb__DOT__uut__DOT__mid_reg_ren_2 
        = ((IData)(vlSelf->exu_store_tb__DOT__hrstn) 
           && (((IData)(vlSelf->exu_store_tb__DOT__dec_store_en) 
                & (~ (IData)(vlSelf->exu_store_tb__DOT__exu_stall))) 
               && (1U == (IData)(vlSelf->exu_store_tb__DOT__cycle_cnt))));
    if (vlSelf->exu_store_tb__DOT__hrstn) {
        if ((4U == (IData)(vlSelf->exu_store_tb__DOT__cycle_cnt))) {
            vlSelf->exu_store_tb__DOT__exu_store_en 
                = vlSelf->exu_store_tb__DOT__uut__DOT__exu_store_en_buff;
            vlSelf->exu_store_tb__DOT__exu_store_addr 
                = vlSelf->exu_store_tb__DOT__uut__DOT__exu_store_addr_buff;
            vlSelf->exu_store_tb__DOT__exu_store_size 
                = vlSelf->exu_store_tb__DOT__uut__DOT__exu_store_size_buff;
            vlSelf->exu_store_tb__DOT__exu_store_data 
                = vlSelf->exu_store_tb__DOT__uut__DOT__exu_store_data_buff;
        }
        if (((IData)(vlSelf->exu_store_tb__DOT__dec_store_en) 
             & (~ (IData)(vlSelf->exu_store_tb__DOT__exu_stall)))) {
            if ((1U == (IData)(vlSelf->exu_store_tb__DOT__cycle_cnt))) {
                vlSelf->exu_store_tb__DOT__uut__DOT__mid_reg_raddr_2 
                    = vlSelf->exu_store_tb__DOT__dec_rs2;
                vlSelf->exu_store_tb__DOT__uut__DOT__mid_reg_raddr_1 
                    = vlSelf->exu_store_tb__DOT__dec_rs1;
            } else {
                vlSelf->exu_store_tb__DOT__uut__DOT__mid_reg_raddr_2 = 0U;
                vlSelf->exu_store_tb__DOT__uut__DOT__mid_reg_raddr_1 = 0U;
            }
            if ((3U == (IData)(vlSelf->exu_store_tb__DOT__cycle_cnt))) {
                vlSelf->exu_store_tb__DOT__uut__DOT__exu_store_en_buff = 1U;
                vlSelf->exu_store_tb__DOT__uut__DOT__exu_store_addr_buff 
                    = (vlSelf->exu_store_tb__DOT__reg_rdata_1 
                       + (((- (IData)((1U & ((IData)(vlSelf->exu_store_tb__DOT__dec_imm_type_s) 
                                             >> 0xbU)))) 
                           << 0xcU) | (IData)(vlSelf->exu_store_tb__DOT__dec_imm_type_s)));
                if (vlSelf->exu_store_tb__DOT__dec_sb) {
                    vlSelf->exu_store_tb__DOT__uut__DOT__exu_store_size_buff = 0U;
                    vlSelf->exu_store_tb__DOT__uut__DOT__exu_store_data_buff 
                        = (0xffU & vlSelf->exu_store_tb__DOT__reg_rdata_2);
                } else if (vlSelf->exu_store_tb__DOT__dec_sh) {
                    vlSelf->exu_store_tb__DOT__uut__DOT__exu_store_size_buff = 1U;
                    vlSelf->exu_store_tb__DOT__uut__DOT__exu_store_data_buff 
                        = (0xffffU & vlSelf->exu_store_tb__DOT__reg_rdata_2);
                } else if (vlSelf->exu_store_tb__DOT__dec_sw) {
                    vlSelf->exu_store_tb__DOT__uut__DOT__exu_store_size_buff = 2U;
                    vlSelf->exu_store_tb__DOT__uut__DOT__exu_store_data_buff 
                        = vlSelf->exu_store_tb__DOT__reg_rdata_2;
                } else {
                    vlSelf->exu_store_tb__DOT__uut__DOT__exu_store_size_buff = 3U;
                    vlSelf->exu_store_tb__DOT__uut__DOT__exu_store_data_buff = 0U;
                }
            }
        } else {
            vlSelf->exu_store_tb__DOT__uut__DOT__mid_reg_raddr_2 = 0U;
            vlSelf->exu_store_tb__DOT__uut__DOT__mid_reg_raddr_1 = 0U;
        }
    } else {
        vlSelf->exu_store_tb__DOT__uut__DOT__mid_reg_raddr_2 = 0U;
        vlSelf->exu_store_tb__DOT__uut__DOT__mid_reg_raddr_1 = 0U;
        vlSelf->exu_store_tb__DOT__exu_store_en = 0U;
        vlSelf->exu_store_tb__DOT__exu_store_addr = 0U;
        vlSelf->exu_store_tb__DOT__exu_store_size = 3U;
        vlSelf->exu_store_tb__DOT__exu_store_data = 0U;
        vlSelf->exu_store_tb__DOT__uut__DOT__exu_store_en_buff = 0U;
        vlSelf->exu_store_tb__DOT__uut__DOT__exu_store_addr_buff = 0U;
        vlSelf->exu_store_tb__DOT__uut__DOT__exu_store_size_buff = 3U;
        vlSelf->exu_store_tb__DOT__uut__DOT__exu_store_data_buff = 0U;
    }
}

void Vexu_store_tb___024root___timing_resume(Vexu_store_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_store_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_store_tb___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hfff496ee__0.resume("@(posedge exu_store_tb.hclk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vexu_store_tb___024root___timing_commit(Vexu_store_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_store_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_store_tb___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hfff496ee__0.commit("@(posedge exu_store_tb.hclk)");
    }
}

void Vexu_store_tb___024root___eval_triggers__act(Vexu_store_tb___024root* vlSelf);

bool Vexu_store_tb___024root___eval_phase__act(Vexu_store_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_store_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_store_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vexu_store_tb___024root___eval_triggers__act(vlSelf);
    Vexu_store_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vexu_store_tb___024root___timing_resume(vlSelf);
        Vexu_store_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vexu_store_tb___024root___eval_phase__nba(Vexu_store_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_store_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_store_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vexu_store_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vexu_store_tb___024root___dump_triggers__nba(Vexu_store_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vexu_store_tb___024root___dump_triggers__act(Vexu_store_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vexu_store_tb___024root___eval(Vexu_store_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_store_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_store_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vexu_store_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("exu_store_tb.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vexu_store_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("exu_store_tb.v", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vexu_store_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vexu_store_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vexu_store_tb___024root___eval_debug_assertions(Vexu_store_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_store_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_store_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
