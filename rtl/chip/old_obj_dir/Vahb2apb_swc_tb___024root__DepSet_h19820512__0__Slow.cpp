// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vahb2apb_swc_tb.h for the primary calling header

#include "Vahb2apb_swc_tb__pch.h"
#include "Vahb2apb_swc_tb___024root.h"

VL_ATTR_COLD void Vahb2apb_swc_tb___024root___eval_static__TOP(Vahb2apb_swc_tb___024root* vlSelf);

VL_ATTR_COLD void Vahb2apb_swc_tb___024root___eval_static(Vahb2apb_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root___eval_static\n"); );
    // Body
    Vahb2apb_swc_tb___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vahb2apb_swc_tb___024root___eval_static__TOP(Vahb2apb_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->ahb2apb_swc_tb__DOT__hclk = 1U;
    vlSelf->ahb2apb_swc_tb__DOT__pclk = 1U;
}

VL_ATTR_COLD void Vahb2apb_swc_tb___024root___eval_final(Vahb2apb_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vahb2apb_swc_tb___024root___dump_triggers__stl(Vahb2apb_swc_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vahb2apb_swc_tb___024root___eval_phase__stl(Vahb2apb_swc_tb___024root* vlSelf);

VL_ATTR_COLD void Vahb2apb_swc_tb___024root___eval_settle(Vahb2apb_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root___eval_settle\n"); );
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
            Vahb2apb_swc_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("lib/peripherals_swc/ahb2apb_swc_tb.v", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vahb2apb_swc_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vahb2apb_swc_tb___024root___dump_triggers__stl(Vahb2apb_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vahb2apb_swc_tb___024root___stl_sequent__TOP__0(Vahb2apb_swc_tb___024root* vlSelf);

VL_ATTR_COLD void Vahb2apb_swc_tb___024root___eval_stl(Vahb2apb_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vahb2apb_swc_tb___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

extern const VlUnpacked<CData/*1:0*/, 64> Vahb2apb_swc_tb__ConstPool__TABLE_h679089d1_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vahb2apb_swc_tb__ConstPool__TABLE_he2ce0227_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vahb2apb_swc_tb__ConstPool__TABLE_hb770ac03_0;

VL_ATTR_COLD void Vahb2apb_swc_tb___024root___stl_sequent__TOP__0(Vahb2apb_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*4:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT____VdfgRegularize_h5899cdc5_1_1 
        = ((2U & (vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR1 
                  >> 0xbU)) | (1U & (vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR1 
                                     >> 0xaU)));
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__sck_source 
        = (1U & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__cnt) 
                 >> (7U & (vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR 
                           >> 3U))));
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__exindex 
        = (0xfffU & VL_SHIFTR_III(12,12,32, (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__cnt), 
                                  ((IData)(1U) + (7U 
                                                  & (vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR 
                                                     >> 3U)))));
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_full 
        = (((0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr)) 
            == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr))) 
           & ((1U & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr) 
                     >> 4U)) != (1U & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr) 
                                       >> 4U))));
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_full 
        = (((0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr)) 
            == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr))) 
           & ((1U & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr) 
                     >> 4U)) != (1U & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr) 
                                       >> 4U))));
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_empty 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr) 
           == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr));
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_parity_bit 
        = (1U & ((0x200U & vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR1)
                  ? VL_REDXOR_16(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_rdata)
                  : (~ VL_REDXOR_16(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_rdata))));
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_full 
        = (((0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr)) 
            == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr))) 
           & ((1U & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr) 
                     >> 4U)) != (1U & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr) 
                                       >> 4U))));
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_full 
        = (((0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr)) 
            == (0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr))) 
           & ((1U & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr) 
                     >> 4U)) != (1U & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr) 
                                       >> 4U))));
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_empty 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr) 
           == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr));
    if ((0U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__apb_state))) {
        vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__apb_nextstate 
            = (((((IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx) 
                  >> 1U) & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__pwrite))) 
                & (0x100108U == vlSelf->ahb2apb_swc_tb__DOT__paddr))
                ? 2U : ((2U & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx))
                         ? 1U : 0U));
    } else if ((1U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__apb_state))) {
        vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__apb_nextstate = 0U;
    } else if ((2U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__apb_state))) {
        vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__apb_nextstate = 3U;
    } else if ((3U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__apb_state))) {
        vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__apb_nextstate = 1U;
    }
    if ((0U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_state))) {
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_nextstate 
            = ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx) 
                 & (~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__pwrite))) 
                & (0x10000cU == vlSelf->ahb2apb_swc_tb__DOT__paddr))
                ? 2U : ((1U & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx))
                         ? 1U : 0U));
    } else if ((1U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_state))) {
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_nextstate 
            = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__penable)
                ? 0U : 1U);
    } else if ((2U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_state))) {
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_nextstate = 3U;
    } else if ((3U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_state))) {
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_nextstate = 1U;
    }
    __Vtableidx1 = (((IData)(vlSelf->ahb2apb_swc_tb__DOT__hready) 
                     << 5U) | (((IData)(vlSelf->ahb2apb_swc_tb__DOT__rreq) 
                                << 4U) | (((IData)(vlSelf->ahb2apb_swc_tb__DOT__wreq) 
                                           << 3U) | 
                                          (((IData)(vlSelf->ahb2apb_swc_tb__DOT__hresp) 
                                            << 2U) 
                                           | (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__state)))));
    vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__nextstate 
        = Vahb2apb_swc_tb__ConstPool__TABLE_h679089d1_0
        [__Vtableidx1];
    __Vtableidx3 = ((((~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_rrr)) 
                      & (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_rr)) 
                     << 6U) | (((IData)(vlSelf->ahb2apb_swc_tb__DOT__hwrite) 
                                << 5U) | (((IData)(vlSelf->ahb2apb_swc_tb__DOT__htrans) 
                                           << 3U) | (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__state))));
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate 
        = Vahb2apb_swc_tb__ConstPool__TABLE_he2ce0227_0
        [__Vtableidx3];
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__max_cnt 
        = (0xfffU & ((((IData)(0x10U) << (7U & (vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR 
                                                >> 3U))) 
                      << (1U & (vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR 
                                >> 0xbU))) - (IData)(1U)));
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_empty 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr) 
           == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr));
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_apbm 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_rr) 
           ^ (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_rrr));
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_apbm 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_rr) 
           ^ (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_rrr));
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_empty 
        = ((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr) 
           == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr));
    vlSelf->ahb2apb_swc_tb__DOT__pready = (((IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx) 
                                            & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__pready_buff)) 
                                           | (IData)(
                                                     (((IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx) 
                                                       >> 1U) 
                                                      & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__pready_buff))));
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__data_start 
        = (0xfU & (((2U == (3U & (vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR2 
                                  >> 0xcU))) ? 2U : 1U) 
                   + ((0x400U & vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR1)
                       ? 1U : 0U)));
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_nextstate 
        = ((0U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_state))
            ? ((1U & ((~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_empty)) 
                      & (vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR 
                         >> 6U))) ? 1U : 0U) : ((1U 
                                                 == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_state))
                                                 ? 2U
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_state))
                                                  ? 3U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_state))
                                                   ? 4U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_state))
                                                    ? 
                                                   (((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__cnt) 
                                                     == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__max_cnt))
                                                     ? 5U
                                                     : 4U)
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_state))
                                                     ? 
                                                    ((IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_empty)
                                                      ? 0U
                                                      : 1U)
                                                     : 0U))))));
    __Vtableidx4 = (((IData)(vlSelf->ahb2apb_swc_tb__DOT__pready) 
                     << 4U) | (((IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_apbm) 
                                << 3U) | (((IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_apbm) 
                                           << 2U) | (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__state))));
    vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate 
        = Vahb2apb_swc_tb__ConstPool__TABLE_hb770ac03_0
        [__Vtableidx4];
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_wdata 
        = (0xffffU & ((0xffffU & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uartrdata_full) 
                                  << (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__data_start))) 
                      >> ((0x1000U & vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR1)
                           ? 7U : 8U)));
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__total_bits 
        = (0xfU & ((IData)(1U) + (((0x1000U & vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR1)
                                    ? 9U : 8U) + (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__data_start))));
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uart_tx_nextstate 
        = ((0U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uart_tx_state))
            ? ((1U & ((~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_empty)) 
                      & (vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR1 
                         >> 0xdU))) ? 1U : 0U) : ((1U 
                                                   == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uart_tx_state))
                                                   ? 2U
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uart_tx_state))
                                                    ? 3U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uart_tx_state))
                                                     ? 4U
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uart_tx_state))
                                                      ? 
                                                     ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_byte_cnt) 
                                                        == 
                                                        ((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__total_bits) 
                                                         - (IData)(1U))) 
                                                       & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_bit_cnt) 
                                                          == 
                                                          ((0xffffU 
                                                            & vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_BRR) 
                                                           - (IData)(1U))))
                                                       ? 0U
                                                       : 4U)
                                                      : 0U)))));
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uart_rx_nextstate 
        = ((0U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uart_rx_state))
            ? ((((~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__tx)) 
                 & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rx_dly)) 
                & (vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR1 
                   >> 0xdU)) ? 1U : 0U) : ((1U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uart_rx_state))
                                            ? ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rx_byte_cnt) 
                                                 == 
                                                 ((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__total_bits) 
                                                  - (IData)(1U))) 
                                                & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rx_bit_cnt) 
                                                   == 
                                                   ((0xffffU 
                                                     & vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_BRR) 
                                                    - (IData)(1U))))
                                                ? 2U
                                                : 1U)
                                            : 0U));
}

VL_ATTR_COLD void Vahb2apb_swc_tb___024root___eval_triggers__stl(Vahb2apb_swc_tb___024root* vlSelf);

VL_ATTR_COLD bool Vahb2apb_swc_tb___024root___eval_phase__stl(Vahb2apb_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vahb2apb_swc_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vahb2apb_swc_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vahb2apb_swc_tb___024root___dump_triggers__act(Vahb2apb_swc_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
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
    (void)vlSelf;  // Prevent unused variable warning
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
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
    (void)vlSelf;  // Prevent unused variable warning
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
    vlSelf->ahb2apb_swc_tb__DOT__sck = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__mosi = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__tx = VL_RAND_RESET_I(1);
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
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__pready_buff = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__prdata_buff = VL_RAND_RESET_I(32);
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__pslverr_buff = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR = VL_RAND_RESET_I(32);
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_SR = VL_RAND_RESET_I(32);
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_RDR = VL_RAND_RESET_I(32);
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_state = VL_RAND_RESET_I(3);
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_nextstate = VL_RAND_RESET_I(3);
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wen = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wdata = VL_RAND_RESET_I(16);
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_full = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_ren = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_rdata = VL_RAND_RESET_I(16);
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_empty = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spiwdata = VL_RAND_RESET_I(16);
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__cnt = VL_RAND_RESET_I(12);
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__max_cnt = VL_RAND_RESET_I(12);
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_state = VL_RAND_RESET_I(3);
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_nextstate = VL_RAND_RESET_I(3);
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__sck_source = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__exindex = VL_RAND_RESET_I(12);
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_wen = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_full = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_ren = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_rdata = VL_RAND_RESET_I(16);
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_empty = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__sck_source_dly = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spirdata = VL_RAND_RESET_I(16);
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr = VL_RAND_RESET_I(5);
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr = VL_RAND_RESET_I(5);
    vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__pready_buff = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__prdata_buff = VL_RAND_RESET_I(32);
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__pslverr_buff = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_SR = VL_RAND_RESET_I(32);
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_WDR = VL_RAND_RESET_I(32);
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_RDR = VL_RAND_RESET_I(32);
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_BRR = VL_RAND_RESET_I(32);
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR1 = VL_RAND_RESET_I(32);
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR2 = VL_RAND_RESET_I(32);
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR3 = VL_RAND_RESET_I(32);
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__apb_state = VL_RAND_RESET_I(3);
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__apb_nextstate = VL_RAND_RESET_I(3);
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_wen = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_wdata = VL_RAND_RESET_I(16);
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_full = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_ren = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_rdata = VL_RAND_RESET_I(16);
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_empty = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__total_bits = VL_RAND_RESET_I(4);
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_uartwdata_full_buff = VL_RAND_RESET_I(16);
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_byte_cnt = VL_RAND_RESET_I(4);
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_bit_cnt = VL_RAND_RESET_I(16);
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uart_tx_state = VL_RAND_RESET_I(3);
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uart_tx_nextstate = VL_RAND_RESET_I(3);
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_parity_bit = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rx_byte_cnt = VL_RAND_RESET_I(4);
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rx_bit_cnt = VL_RAND_RESET_I(16);
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rx_dly = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uart_rx_state = VL_RAND_RESET_I(3);
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uart_rx_nextstate = VL_RAND_RESET_I(3);
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uartrdata_full = VL_RAND_RESET_I(16);
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__data_start = VL_RAND_RESET_I(4);
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_wen = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_wdata = VL_RAND_RESET_I(16);
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_full = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_ren = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_rdata = VL_RAND_RESET_I(16);
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_empty = VL_RAND_RESET_I(1);
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT____VdfgRegularize_h5899cdc5_1_1 = VL_RAND_RESET_I(2);
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr = VL_RAND_RESET_I(5);
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr = VL_RAND_RESET_I(5);
    vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->__Vdly__ahb2apb_swc_tb__DOT__haddr = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_ahbs_edge = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_ahbs_edge = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffdata = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffaddr = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__ahb2apb_swc_tb__DOT__hclk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__ahb2apb_swc_tb__DOT__pclk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
