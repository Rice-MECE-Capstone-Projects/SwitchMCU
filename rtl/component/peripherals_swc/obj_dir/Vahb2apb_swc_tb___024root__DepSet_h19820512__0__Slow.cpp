// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vahb2apb_swc_tb.h for the primary calling header

#include "verilated.h"

#include "Vahb2apb_swc_tb__Syms.h"
#include "Vahb2apb_swc_tb___024root.h"

VL_ATTR_COLD void Vahb2apb_swc_tb___024root___eval_static__TOP(Vahb2apb_swc_tb___024root* vlSelf);

VL_ATTR_COLD void Vahb2apb_swc_tb___024root___eval_static(Vahb2apb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root___eval_static\n"); );
    // Body
    Vahb2apb_swc_tb___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vahb2apb_swc_tb___024root___eval_static__TOP(Vahb2apb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->ahb2apb_swc_tb__DOT__hclk = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__pclk = 1U;
}

VL_ATTR_COLD void Vahb2apb_swc_tb___024root___eval_final(Vahb2apb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vahb2apb_swc_tb___024root___eval_triggers__stl(Vahb2apb_swc_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vahb2apb_swc_tb___024root___dump_triggers__stl(Vahb2apb_swc_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vahb2apb_swc_tb___024root___eval_stl(Vahb2apb_swc_tb___024root* vlSelf);

VL_ATTR_COLD void Vahb2apb_swc_tb___024root___eval_settle(Vahb2apb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vahb2apb_swc_tb___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vahb2apb_swc_tb___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("ahb2apb_swc_tb.v", 2, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vahb2apb_swc_tb___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vahb2apb_swc_tb___024root___dump_triggers__stl(Vahb2apb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*1:0*/, 64> Vahb2apb_swc_tb__ConstPool__TABLE_h7b6f35a3_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vahb2apb_swc_tb__ConstPool__TABLE_h2dc6e503_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vahb2apb_swc_tb__ConstPool__TABLE_hf61d7ca7_0;

VL_ATTR_COLD void Vahb2apb_swc_tb___024root___stl_sequent__TOP__0(Vahb2apb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*4:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__full 
        = (((0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr)) 
            == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr))) 
           & ((1U & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr) 
                     >> 4U)) != (1U & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr) 
                                       >> 4U))));
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__empty 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr) 
           == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr));
    __Vtableidx1 = (((IData)(vlSelf->ahb2apb_swc_tb__DOT__hready) 
                     << 5U) | (((IData)(vlSelf->ahb2apb_swc_tb__DOT__rreq) 
                                << 4U) | (((IData)(vlSelf->ahb2apb_swc_tb__DOT__wreq) 
                                           << 3U) | 
                                          (((IData)(vlSelf->ahb2apb_swc_tb__DOT__hresp) 
                                            << 2U) 
                                           | (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__state)))));
    vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__nextstate 
        = Vahb2apb_swc_tb__ConstPool__TABLE_h7b6f35a3_0
        [__Vtableidx1];
    __Vtableidx2 = ((((~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_rrr)) 
                      & (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_rr)) 
                     << 6U) | (((IData)(vlSelf->ahb2apb_swc_tb__DOT__hwrite) 
                                << 5U) | (((IData)(vlSelf->ahb2apb_swc_tb__DOT__htrans) 
                                           << 3U) | (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__state))));
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate 
        = Vahb2apb_swc_tb__ConstPool__TABLE_h2dc6e503_0
        [__Vtableidx2];
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_apbm 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_rr) 
           ^ (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_rrr));
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_apbm 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_rr) 
           ^ (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_rrr));
    if ((0U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__state))) {
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__nextstate 
            = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__empty)
                ? 0U : 1U);
    } else if ((1U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__state))) {
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__nextstate = 2U;
    } else if ((2U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__state))) {
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__nextstate = 3U;
    } else if ((3U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__state))) {
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__nextstate = 4U;
    } else if ((4U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__state))) {
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__nextstate 
            = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__empty)
                ? ((0xfU == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__counter))
                    ? 0U : 4U) : 1U);
    }
    __Vtableidx3 = (((IData)(vlSelf->ahb2apb_swc_tb__DOT__pready) 
                     << 4U) | (((IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_apbm) 
                                << 3U) | (((IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_apbm) 
                                           << 2U) | (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__state))));
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate 
        = Vahb2apb_swc_tb__ConstPool__TABLE_hf61d7ca7_0
        [__Vtableidx3];
}

VL_ATTR_COLD void Vahb2apb_swc_tb___024root___eval_stl(Vahb2apb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vahb2apb_swc_tb___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vahb2apb_swc_tb___024root___dump_triggers__act(Vahb2apb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge ahb2apb_swc_tb.hclk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge ahb2apb_swc_tb.pclk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vahb2apb_swc_tb___024root___dump_triggers__nba(Vahb2apb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge ahb2apb_swc_tb.hclk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge ahb2apb_swc_tb.pclk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vahb2apb_swc_tb___024root___ctor_var_reset(Vahb2apb_swc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->ahb2apb_swc_tb__DOT__rstn = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__hclk = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__pclk = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__paddr = VL_RAND_RESET_I(32);
    vlSelf->ahb2apb_swc_tb__DOT__pselx = VL_RAND_RESET_I(3);
    vlSelf->ahb2apb_swc_tb__DOT__penable = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__pwrite = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__pwdata = VL_RAND_RESET_I(32);
    vlSelf->ahb2apb_swc_tb__DOT__pready = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__prdata = VL_RAND_RESET_I(32);
    vlSelf->ahb2apb_swc_tb__DOT__haddr = VL_RAND_RESET_I(32);
    vlSelf->ahb2apb_swc_tb__DOT__hmastlock = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__hprot = VL_RAND_RESET_I(7);
    vlSelf->ahb2apb_swc_tb__DOT__hsize = VL_RAND_RESET_I(3);
    vlSelf->ahb2apb_swc_tb__DOT__htrans = VL_RAND_RESET_I(2);
    vlSelf->ahb2apb_swc_tb__DOT__hwdata = VL_RAND_RESET_I(32);
    vlSelf->ahb2apb_swc_tb__DOT__hrdata = VL_RAND_RESET_I(32);
    vlSelf->ahb2apb_swc_tb__DOT__hwrite = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__hready = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__hresp = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__wbuffread = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__rbuffread = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__wreq = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__wbuffdata = VL_RAND_RESET_I(32);
    vlSelf->ahb2apb_swc_tb__DOT__wbuffaddr = VL_RAND_RESET_I(32);
    vlSelf->ahb2apb_swc_tb__DOT__rbuffwrite = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__rreq = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__rbuffdata = VL_RAND_RESET_I(32);
    vlSelf->ahb2apb_swc_tb__DOT__rbuffaddr = VL_RAND_RESET_I(32);
    vlSelf->ahb2apb_swc_tb__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__resp = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__nextstate = VL_RAND_RESET_I(2);
    vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__hwdatabuff = VL_RAND_RESET_I(32);
    vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflag = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflagdly = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflag = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflagdly = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffread = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_ahbs = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_r = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_rr = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_rrr = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_apbm = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffdata = VL_RAND_RESET_I(32);
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffaddr = VL_RAND_RESET_I(32);
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffread = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffwrite = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_ahbs = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_r = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_rr = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_rrr = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_apbm = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffdata = VL_RAND_RESET_I(32);
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffaddr = VL_RAND_RESET_I(32);
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_apbm = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_r = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_rr = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_rrr = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__resp = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_ahbs_edge = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_ahbs_edge = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate = VL_RAND_RESET_I(3);
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate = VL_RAND_RESET_I(2);
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR = VL_RAND_RESET_I(32);
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_SR = VL_RAND_RESET_I(32);
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_WDR = VL_RAND_RESET_I(32);
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_RDR = VL_RAND_RESET_I(32);
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wen = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdata = VL_RAND_RESET_I(32);
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__ren = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdata = VL_RAND_RESET_I(32);
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__counter = VL_RAND_RESET_I(11);
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__nextstate = VL_RAND_RESET_I(3);
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_wdata = VL_RAND_RESET_I(32);
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr = VL_RAND_RESET_I(5);
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigprevexpr___TOP__ahb2apb_swc_tb__DOT__hclk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__ahb2apb_swc_tb__DOT__pclk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
