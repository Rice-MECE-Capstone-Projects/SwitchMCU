// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vasyncfifo_swc_tb.h for the primary calling header

#include "Vasyncfifo_swc_tb__pch.h"
#include "Vasyncfifo_swc_tb___024root.h"

VL_ATTR_COLD void Vasyncfifo_swc_tb___024root___eval_static(Vasyncfifo_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vasyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasyncfifo_swc_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vasyncfifo_swc_tb___024root___eval_initial__TOP(Vasyncfifo_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vasyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasyncfifo_swc_tb___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->asyncfifo_swc_tb__DOT__wclk = 0U;
    vlSelf->asyncfifo_swc_tb__DOT__rclk = 0U;
}

VL_ATTR_COLD void Vasyncfifo_swc_tb___024root___eval_final(Vasyncfifo_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vasyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasyncfifo_swc_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vasyncfifo_swc_tb___024root___dump_triggers__stl(Vasyncfifo_swc_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vasyncfifo_swc_tb___024root___eval_phase__stl(Vasyncfifo_swc_tb___024root* vlSelf);

VL_ATTR_COLD void Vasyncfifo_swc_tb___024root___eval_settle(Vasyncfifo_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vasyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasyncfifo_swc_tb___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vasyncfifo_swc_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("asyncfifo_swc_tb.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vasyncfifo_swc_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vasyncfifo_swc_tb___024root___dump_triggers__stl(Vasyncfifo_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vasyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasyncfifo_swc_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vasyncfifo_swc_tb___024root___stl_sequent__TOP__0(Vasyncfifo_swc_tb___024root* vlSelf);

VL_ATTR_COLD void Vasyncfifo_swc_tb___024root___eval_stl(Vasyncfifo_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vasyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasyncfifo_swc_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vasyncfifo_swc_tb___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vasyncfifo_swc_tb___024root___stl_sequent__TOP__0(Vasyncfifo_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vasyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasyncfifo_swc_tb___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT____Vlvbound_hcdf7dfe9__0;
    asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT____Vlvbound_hcdf7dfe9__0 = 0;
    CData/*0:0*/ asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT____Vlvbound_h073210a3__0;
    asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT____Vlvbound_h073210a3__0 = 0;
    // Body
    vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr_restore 
        = ((0xffU & (IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr_restore)) 
           | (0x100U & (IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr_gray_rr)));
    asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT____Vlvbound_hcdf7dfe9__0 
        = (1U & (((IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr_restore) 
                  >> 8U) ^ ((IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr_gray_rr) 
                            >> 7U)));
    vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr_restore 
        = ((0x17fU & (IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr_restore)) 
           | ((IData)(asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT____Vlvbound_hcdf7dfe9__0) 
              << 7U));
    asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT____Vlvbound_hcdf7dfe9__0 
        = (1U & (((IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr_restore) 
                  >> 7U) ^ ((IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr_gray_rr) 
                            >> 6U)));
    vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr_restore 
        = ((0x1bfU & (IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr_restore)) 
           | ((IData)(asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT____Vlvbound_hcdf7dfe9__0) 
              << 6U));
    asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT____Vlvbound_hcdf7dfe9__0 
        = (1U & (((IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr_restore) 
                  >> 6U) ^ ((IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr_gray_rr) 
                            >> 5U)));
    vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr_restore 
        = ((0x1dfU & (IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr_restore)) 
           | ((IData)(asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT____Vlvbound_hcdf7dfe9__0) 
              << 5U));
    asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT____Vlvbound_hcdf7dfe9__0 
        = (1U & (((IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr_restore) 
                  >> 5U) ^ ((IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr_gray_rr) 
                            >> 4U)));
    vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr_restore 
        = ((0x1efU & (IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr_restore)) 
           | ((IData)(asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT____Vlvbound_hcdf7dfe9__0) 
              << 4U));
    asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT____Vlvbound_hcdf7dfe9__0 
        = (1U & (((IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr_restore) 
                  >> 4U) ^ ((IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr_gray_rr) 
                            >> 3U)));
    vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr_restore 
        = ((0x1f7U & (IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr_restore)) 
           | ((IData)(asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT____Vlvbound_hcdf7dfe9__0) 
              << 3U));
    asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT____Vlvbound_hcdf7dfe9__0 
        = (1U & (((IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr_restore) 
                  >> 3U) ^ ((IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr_gray_rr) 
                            >> 2U)));
    vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr_restore 
        = ((0x1fbU & (IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr_restore)) 
           | ((IData)(asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT____Vlvbound_hcdf7dfe9__0) 
              << 2U));
    asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT____Vlvbound_hcdf7dfe9__0 
        = (1U & (((IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr_restore) 
                  >> 2U) ^ ((IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr_gray_rr) 
                            >> 1U)));
    vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr_restore 
        = ((0x1fdU & (IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr_restore)) 
           | ((IData)(asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT____Vlvbound_hcdf7dfe9__0) 
              << 1U));
    asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT____Vlvbound_hcdf7dfe9__0 
        = (1U & (((IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr_restore) 
                  >> 1U) ^ (IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr_gray_rr)));
    vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr_restore 
        = ((0x1feU & (IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr_restore)) 
           | (IData)(asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT____Vlvbound_hcdf7dfe9__0));
    vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr_restore 
        = ((0xffU & (IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr_restore)) 
           | (0x100U & (IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr_gray_rr)));
    asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT____Vlvbound_h073210a3__0 
        = (1U & (((IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr_restore) 
                  >> 8U) ^ ((IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr_gray_rr) 
                            >> 7U)));
    vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr_restore 
        = ((0x17fU & (IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr_restore)) 
           | ((IData)(asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT____Vlvbound_h073210a3__0) 
              << 7U));
    asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT____Vlvbound_h073210a3__0 
        = (1U & (((IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr_restore) 
                  >> 7U) ^ ((IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr_gray_rr) 
                            >> 6U)));
    vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr_restore 
        = ((0x1bfU & (IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr_restore)) 
           | ((IData)(asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT____Vlvbound_h073210a3__0) 
              << 6U));
    asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT____Vlvbound_h073210a3__0 
        = (1U & (((IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr_restore) 
                  >> 6U) ^ ((IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr_gray_rr) 
                            >> 5U)));
    vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr_restore 
        = ((0x1dfU & (IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr_restore)) 
           | ((IData)(asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT____Vlvbound_h073210a3__0) 
              << 5U));
    asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT____Vlvbound_h073210a3__0 
        = (1U & (((IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr_restore) 
                  >> 5U) ^ ((IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr_gray_rr) 
                            >> 4U)));
    vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr_restore 
        = ((0x1efU & (IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr_restore)) 
           | ((IData)(asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT____Vlvbound_h073210a3__0) 
              << 4U));
    asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT____Vlvbound_h073210a3__0 
        = (1U & (((IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr_restore) 
                  >> 4U) ^ ((IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr_gray_rr) 
                            >> 3U)));
    vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr_restore 
        = ((0x1f7U & (IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr_restore)) 
           | ((IData)(asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT____Vlvbound_h073210a3__0) 
              << 3U));
    asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT____Vlvbound_h073210a3__0 
        = (1U & (((IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr_restore) 
                  >> 3U) ^ ((IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr_gray_rr) 
                            >> 2U)));
    vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr_restore 
        = ((0x1fbU & (IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr_restore)) 
           | ((IData)(asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT____Vlvbound_h073210a3__0) 
              << 2U));
    asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT____Vlvbound_h073210a3__0 
        = (1U & (((IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr_restore) 
                  >> 2U) ^ ((IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr_gray_rr) 
                            >> 1U)));
    vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr_restore 
        = ((0x1fdU & (IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr_restore)) 
           | ((IData)(asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT____Vlvbound_h073210a3__0) 
              << 1U));
    asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT____Vlvbound_h073210a3__0 
        = (1U & (((IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr_restore) 
                  >> 1U) ^ (IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr_gray_rr)));
    vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr_restore 
        = ((0x1feU & (IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr_restore)) 
           | (IData)(asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT____Vlvbound_h073210a3__0));
    vlSelf->asyncfifo_swc_tb__DOT__empty = ((IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr) 
                                            == (IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr_restore));
    vlSelf->asyncfifo_swc_tb__DOT__full = (((0xffU 
                                             & (IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr)) 
                                            == (0xffU 
                                                & (IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr_restore))) 
                                           & ((1U & 
                                               ((IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr) 
                                                >> 8U)) 
                                              != (1U 
                                                  & ((IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr_restore) 
                                                     >> 8U))));
}

VL_ATTR_COLD void Vasyncfifo_swc_tb___024root___eval_triggers__stl(Vasyncfifo_swc_tb___024root* vlSelf);

VL_ATTR_COLD bool Vasyncfifo_swc_tb___024root___eval_phase__stl(Vasyncfifo_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vasyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasyncfifo_swc_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vasyncfifo_swc_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vasyncfifo_swc_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vasyncfifo_swc_tb___024root___dump_triggers__act(Vasyncfifo_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vasyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasyncfifo_swc_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(negedge asyncfifo_swc_tb.rstn or posedge asyncfifo_swc_tb.wclk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge asyncfifo_swc_tb.wclk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge asyncfifo_swc_tb.rclk)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vasyncfifo_swc_tb___024root___dump_triggers__nba(Vasyncfifo_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vasyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasyncfifo_swc_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(negedge asyncfifo_swc_tb.rstn or posedge asyncfifo_swc_tb.wclk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge asyncfifo_swc_tb.wclk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge asyncfifo_swc_tb.rclk)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vasyncfifo_swc_tb___024root___ctor_var_reset(Vasyncfifo_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vasyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasyncfifo_swc_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->asyncfifo_swc_tb__DOT__rstn = VL_RAND_RESET_I(1);
    vlSelf->asyncfifo_swc_tb__DOT__wclk = VL_RAND_RESET_I(1);
    vlSelf->asyncfifo_swc_tb__DOT__wen = VL_RAND_RESET_I(1);
    vlSelf->asyncfifo_swc_tb__DOT__wdata = VL_RAND_RESET_I(16);
    vlSelf->asyncfifo_swc_tb__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->asyncfifo_swc_tb__DOT__rclk = VL_RAND_RESET_I(1);
    vlSelf->asyncfifo_swc_tb__DOT__ren = VL_RAND_RESET_I(1);
    vlSelf->asyncfifo_swc_tb__DOT__rdata = VL_RAND_RESET_I(16);
    vlSelf->asyncfifo_swc_tb__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr = VL_RAND_RESET_I(9);
    vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr = VL_RAND_RESET_I(9);
    vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr_gray_r = VL_RAND_RESET_I(9);
    vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr_gray_rr = VL_RAND_RESET_I(9);
    vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr_gray_r = VL_RAND_RESET_I(9);
    vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr_gray_rr = VL_RAND_RESET_I(9);
    vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr_restore = VL_RAND_RESET_I(9);
    vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr_restore = VL_RAND_RESET_I(9);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__fifo_ram[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->__Vdly__asyncfifo_swc_tb__DOT__wdata = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigprevexpr___TOP__asyncfifo_swc_tb__DOT__rstn__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__asyncfifo_swc_tb__DOT__wclk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__asyncfifo_swc_tb__DOT__rclk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
