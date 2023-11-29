// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vahb2apb_ahbs_swc.h for the primary calling header

#include "verilated.h"

#include "Vahb2apb_ahbs_swc__Syms.h"
#include "Vahb2apb_ahbs_swc___024root.h"

VL_ATTR_COLD void Vahb2apb_ahbs_swc___024root___eval_static(Vahb2apb_ahbs_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_ahbs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_ahbs_swc___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vahb2apb_ahbs_swc___024root___eval_initial(Vahb2apb_ahbs_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_ahbs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_ahbs_swc___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__pclk__0 = vlSelf->pclk;
    vlSelf->__Vtrigprevexpr___TOP__hclk__0 = vlSelf->hclk;
}

VL_ATTR_COLD void Vahb2apb_ahbs_swc___024root___eval_final(Vahb2apb_ahbs_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_ahbs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_ahbs_swc___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vahb2apb_ahbs_swc___024root___eval_triggers__stl(Vahb2apb_ahbs_swc___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vahb2apb_ahbs_swc___024root___dump_triggers__stl(Vahb2apb_ahbs_swc___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vahb2apb_ahbs_swc___024root___eval_stl(Vahb2apb_ahbs_swc___024root* vlSelf);

VL_ATTR_COLD void Vahb2apb_ahbs_swc___024root___eval_settle(Vahb2apb_ahbs_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_ahbs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_ahbs_swc___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vahb2apb_ahbs_swc___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vahb2apb_ahbs_swc___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("ahb2apb_swc.v", 2, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vahb2apb_ahbs_swc___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vahb2apb_ahbs_swc___024root___dump_triggers__stl(Vahb2apb_ahbs_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_ahbs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_ahbs_swc___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*2:0*/, 128> Vahb2apb_ahbs_swc__ConstPool__TABLE_hfc601122_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vahb2apb_ahbs_swc__ConstPool__TABLE_h4a0e2aec_0;

VL_ATTR_COLD void Vahb2apb_ahbs_swc___024root___stl_sequent__TOP__0(Vahb2apb_ahbs_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_ahbs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_ahbs_swc___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*4:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->ahb2apb_swc__DOT__done) 
                     << 6U) | (((IData)(vlSelf->hwrite) 
                                << 5U) | (((IData)(vlSelf->htrans) 
                                           << 3U) | (IData)(vlSelf->ahb2apb_swc__DOT__ahb2apb_ahbs_swc_inst__DOT__state))));
    vlSelf->ahb2apb_swc__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate 
        = Vahb2apb_ahbs_swc__ConstPool__TABLE_hfc601122_0
        [__Vtableidx1];
    vlSelf->ahb2apb_swc__DOT__wreq_apbm = ((~ (IData)(vlSelf->ahb2apb_swc__DOT__wreq_rrr)) 
                                           & (IData)(vlSelf->ahb2apb_swc__DOT__wreq_rr));
    __Vtableidx2 = (((IData)(vlSelf->pready) << 4U) 
                    | (((IData)(vlSelf->ahb2apb_swc__DOT__rreq) 
                        << 3U) | (((IData)(vlSelf->ahb2apb_swc__DOT__wreq_apbm) 
                                   << 2U) | (IData)(vlSelf->ahb2apb_swc__DOT__ahb2apb_apbm_swc_inst__DOT__state))));
    vlSelf->ahb2apb_swc__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate 
        = Vahb2apb_ahbs_swc__ConstPool__TABLE_h4a0e2aec_0
        [__Vtableidx2];
}

VL_ATTR_COLD void Vahb2apb_ahbs_swc___024root___eval_stl(Vahb2apb_ahbs_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_ahbs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_ahbs_swc___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vahb2apb_ahbs_swc___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vahb2apb_ahbs_swc___024root___dump_triggers__ico(Vahb2apb_ahbs_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_ahbs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_ahbs_swc___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vahb2apb_ahbs_swc___024root___dump_triggers__act(Vahb2apb_ahbs_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_ahbs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_ahbs_swc___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge pclk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge hclk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vahb2apb_ahbs_swc___024root___dump_triggers__nba(Vahb2apb_ahbs_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_ahbs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_ahbs_swc___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge pclk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge hclk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vahb2apb_ahbs_swc___024root___ctor_var_reset(Vahb2apb_ahbs_swc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_ahbs_swc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_ahbs_swc___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->rstn = VL_RAND_RESET_I(1);
    vlSelf->hclk = VL_RAND_RESET_I(1);
    vlSelf->haddr = VL_RAND_RESET_I(32);
    vlSelf->hprot = VL_RAND_RESET_I(7);
    vlSelf->hsize = VL_RAND_RESET_I(3);
    vlSelf->htrans = VL_RAND_RESET_I(2);
    vlSelf->hwdata = VL_RAND_RESET_I(32);
    vlSelf->hrdata = VL_RAND_RESET_I(32);
    vlSelf->hwrite = VL_RAND_RESET_I(1);
    vlSelf->hready = VL_RAND_RESET_I(1);
    vlSelf->hresp = VL_RAND_RESET_I(1);
    vlSelf->pclk = VL_RAND_RESET_I(1);
    vlSelf->paddr = VL_RAND_RESET_I(32);
    vlSelf->pselx = VL_RAND_RESET_I(3);
    vlSelf->penable = VL_RAND_RESET_I(1);
    vlSelf->pwrite = VL_RAND_RESET_I(1);
    vlSelf->pwdata = VL_RAND_RESET_I(32);
    vlSelf->pready = VL_RAND_RESET_I(1);
    vlSelf->prdata = VL_RAND_RESET_I(32);
    vlSelf->pslverr = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc__DOT__wbuffread = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc__DOT__wreq_ahbs = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc__DOT__wreq_r = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc__DOT__wreq_rr = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc__DOT__wreq_rrr = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc__DOT__wreq_apbm = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc__DOT__wbuffdata = VL_RAND_RESET_I(32);
    vlSelf->ahb2apb_swc__DOT__wbuffaddr = VL_RAND_RESET_I(32);
    vlSelf->ahb2apb_swc__DOT__rbuffread = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc__DOT__rbuffwrite = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc__DOT__rreq = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc__DOT__rbuffdata = VL_RAND_RESET_I(32);
    vlSelf->ahb2apb_swc__DOT__rbuffaddr = VL_RAND_RESET_I(32);
    vlSelf->ahb2apb_swc__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc__DOT__resp = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc__DOT__ahb2apb_ahbs_swc_inst__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->ahb2apb_swc__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate = VL_RAND_RESET_I(3);
    vlSelf->ahb2apb_swc__DOT__ahb2apb_apbm_swc_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->ahb2apb_swc__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__ahb2apb_swc__DOT__wbuffdata = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__ahb2apb_swc__DOT__wbuffaddr = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__pclk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__hclk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
