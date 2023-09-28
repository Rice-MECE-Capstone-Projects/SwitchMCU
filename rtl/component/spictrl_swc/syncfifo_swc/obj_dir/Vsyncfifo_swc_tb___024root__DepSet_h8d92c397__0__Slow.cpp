// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsyncfifo_swc_tb.h for the primary calling header

#include "verilated.h"

#include "Vsyncfifo_swc_tb__Syms.h"
#include "Vsyncfifo_swc_tb___024root.h"

VL_ATTR_COLD void Vsyncfifo_swc_tb___024root___eval_static(Vsyncfifo_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyncfifo_swc_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vsyncfifo_swc_tb___024root___eval_initial__TOP(Vsyncfifo_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyncfifo_swc_tb___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->syncfifo_swc_tb__DOT__clk = 0U;
}

VL_ATTR_COLD void Vsyncfifo_swc_tb___024root___eval_final(Vsyncfifo_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyncfifo_swc_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vsyncfifo_swc_tb___024root___eval_triggers__stl(Vsyncfifo_swc_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsyncfifo_swc_tb___024root___dump_triggers__stl(Vsyncfifo_swc_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vsyncfifo_swc_tb___024root___eval_stl(Vsyncfifo_swc_tb___024root* vlSelf);

VL_ATTR_COLD void Vsyncfifo_swc_tb___024root___eval_settle(Vsyncfifo_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyncfifo_swc_tb___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vsyncfifo_swc_tb___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vsyncfifo_swc_tb___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("syncfifo_swc_tb.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vsyncfifo_swc_tb___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsyncfifo_swc_tb___024root___dump_triggers__stl(Vsyncfifo_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyncfifo_swc_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsyncfifo_swc_tb___024root___stl_sequent__TOP__0(Vsyncfifo_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyncfifo_swc_tb___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->syncfifo_swc_tb__DOT__full = (((0xffU & (IData)(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__waddr_ptr)) 
                                           == (0xffU 
                                               & (IData)(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__raddr_ptr))) 
                                          & ((1U & 
                                              ((IData)(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__waddr_ptr) 
                                               >> 8U)) 
                                             != (1U 
                                                 & ((IData)(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__raddr_ptr) 
                                                    >> 8U))));
    vlSelf->syncfifo_swc_tb__DOT__empty = ((IData)(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__raddr_ptr) 
                                           == (IData)(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__waddr_ptr));
}

VL_ATTR_COLD void Vsyncfifo_swc_tb___024root___eval_stl(Vsyncfifo_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyncfifo_swc_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vsyncfifo_swc_tb___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsyncfifo_swc_tb___024root___dump_triggers__act(Vsyncfifo_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyncfifo_swc_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge syncfifo_swc_tb.clk or negedge syncfifo_swc_tb.rstn)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge syncfifo_swc_tb.clk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsyncfifo_swc_tb___024root___dump_triggers__nba(Vsyncfifo_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyncfifo_swc_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge syncfifo_swc_tb.clk or negedge syncfifo_swc_tb.rstn)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge syncfifo_swc_tb.clk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsyncfifo_swc_tb___024root___ctor_var_reset(Vsyncfifo_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyncfifo_swc_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->syncfifo_swc_tb__DOT__rstn = VL_RAND_RESET_I(1);
    vlSelf->syncfifo_swc_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->syncfifo_swc_tb__DOT__wen = VL_RAND_RESET_I(1);
    vlSelf->syncfifo_swc_tb__DOT__wdata = VL_RAND_RESET_I(16);
    vlSelf->syncfifo_swc_tb__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->syncfifo_swc_tb__DOT__ren = VL_RAND_RESET_I(1);
    vlSelf->syncfifo_swc_tb__DOT__rdata = VL_RAND_RESET_I(16);
    vlSelf->syncfifo_swc_tb__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__waddr_ptr = VL_RAND_RESET_I(9);
    vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__raddr_ptr = VL_RAND_RESET_I(9);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->__Vtrigprevexpr___TOP__syncfifo_swc_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__syncfifo_swc_tb__DOT__rstn__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
