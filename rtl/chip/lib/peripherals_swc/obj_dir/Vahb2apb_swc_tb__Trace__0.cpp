// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vahb2apb_swc_tb__Syms.h"


void Vahb2apb_swc_tb___024root__trace_chg_0_sub_0(Vahb2apb_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vahb2apb_swc_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root__trace_chg_0\n"); );
    // Init
    Vahb2apb_swc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vahb2apb_swc_tb___024root*>(voidSelf);
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vahb2apb_swc_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vahb2apb_swc_tb___024root__trace_chg_0_sub_0(Vahb2apb_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->ahb2apb_swc_tb__DOT__rstn));
        bufp->chgBit(oldp+1,(vlSelf->ahb2apb_swc_tb__DOT__wreq));
        bufp->chgIData(oldp+2,(vlSelf->ahb2apb_swc_tb__DOT__wbuffdata),32);
        bufp->chgIData(oldp+3,(vlSelf->ahb2apb_swc_tb__DOT__wbuffaddr),32);
        bufp->chgBit(oldp+4,(vlSelf->ahb2apb_swc_tb__DOT__rreq));
        bufp->chgIData(oldp+5,(vlSelf->ahb2apb_swc_tb__DOT__rbuffaddr),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+6,(vlSelf->ahb2apb_swc_tb__DOT__htrans),2);
        bufp->chgIData(oldp+7,(vlSelf->ahb2apb_swc_tb__DOT__hwdata),32);
        bufp->chgIData(oldp+8,(vlSelf->ahb2apb_swc_tb__DOT__hrdata),32);
        bufp->chgBit(oldp+9,(vlSelf->ahb2apb_swc_tb__DOT__hwrite));
        bufp->chgBit(oldp+10,(vlSelf->ahb2apb_swc_tb__DOT__hready));
        bufp->chgBit(oldp+11,(vlSelf->ahb2apb_swc_tb__DOT__wbuffread));
        bufp->chgBit(oldp+12,(vlSelf->ahb2apb_swc_tb__DOT__rbuffread));
        bufp->chgBit(oldp+13,(vlSelf->ahb2apb_swc_tb__DOT__rbuffwrite));
        bufp->chgIData(oldp+14,(vlSelf->ahb2apb_swc_tb__DOT__rbuffdata),32);
        bufp->chgBit(oldp+15,(vlSelf->ahb2apb_swc_tb__DOT__done));
        bufp->chgBit(oldp+16,(vlSelf->ahb2apb_swc_tb__DOT__resp));
        bufp->chgBit(oldp+17,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_ahbs));
        bufp->chgBit(oldp+18,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_ahbs));
        bufp->chgBit(oldp+19,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_r));
        bufp->chgBit(oldp+20,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_rr));
        bufp->chgBit(oldp+21,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_rrr));
        bufp->chgBit(oldp+22,(((~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_rrr)) 
                               & (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_rr))));
        bufp->chgCData(oldp+23,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__state),3);
        bufp->chgCData(oldp+24,(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__state),2);
        bufp->chgIData(oldp+25,(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__hwdatabuff),32);
        bufp->chgBit(oldp+26,(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflag));
        bufp->chgBit(oldp+27,(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflagdly));
        bufp->chgBit(oldp+28,(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflag));
        bufp->chgBit(oldp+29,(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflagdly));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+30,(vlSelf->ahb2apb_swc_tb__DOT__paddr),32);
        bufp->chgCData(oldp+31,(vlSelf->ahb2apb_swc_tb__DOT__pselx),3);
        bufp->chgBit(oldp+32,(vlSelf->ahb2apb_swc_tb__DOT__penable));
        bufp->chgBit(oldp+33,(vlSelf->ahb2apb_swc_tb__DOT__pwrite));
        bufp->chgIData(oldp+34,(vlSelf->ahb2apb_swc_tb__DOT__pwdata),32);
        bufp->chgBit(oldp+35,(vlSelf->ahb2apb_swc_tb__DOT__pready));
        bufp->chgIData(oldp+36,(((((1U & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx))
                                    ? 0xffffffffU : 0U) 
                                  & (((1U & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx))
                                       ? vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__prdata_buff
                                       : 0U) & ((1U 
                                                 & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx))
                                                 ? 0xffffffffU
                                                 : 0U))) 
                                 | (((2U & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx))
                                      ? 0xffffffffU
                                      : 0U) & (((2U 
                                                 & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx))
                                                 ? vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__prdata_buff
                                                 : 0U) 
                                               & ((2U 
                                                   & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx))
                                                   ? 0xffffffffU
                                                   : 0U))))),32);
        bufp->chgBit(oldp+37,((((IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx) 
                                & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__pslverr_buff)) 
                               | (IData)((((IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx) 
                                           >> 1U) & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__pslverr_buff))))));
        bufp->chgBit(oldp+38,(vlSelf->ahb2apb_swc_tb__DOT__sck));
        bufp->chgBit(oldp+39,(vlSelf->ahb2apb_swc_tb__DOT__mosi));
        bufp->chgBit(oldp+40,(vlSelf->ahb2apb_swc_tb__DOT__tx));
        bufp->chgBit(oldp+41,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffread));
        bufp->chgBit(oldp+42,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_r));
        bufp->chgBit(oldp+43,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_rr));
        bufp->chgBit(oldp+44,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_rrr));
        bufp->chgBit(oldp+45,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_apbm));
        bufp->chgBit(oldp+46,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffread));
        bufp->chgBit(oldp+47,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffwrite));
        bufp->chgBit(oldp+48,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_r));
        bufp->chgBit(oldp+49,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_rr));
        bufp->chgBit(oldp+50,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_rrr));
        bufp->chgBit(oldp+51,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_apbm));
        bufp->chgIData(oldp+52,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffdata),32);
        bufp->chgBit(oldp+53,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_apbm));
        bufp->chgBit(oldp+54,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__resp));
        bufp->chgCData(oldp+55,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__state),2);
        bufp->chgCData(oldp+56,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate),2);
        bufp->chgBit(oldp+57,((1U & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx))));
        bufp->chgBit(oldp+58,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__pready_buff));
        bufp->chgIData(oldp+59,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__prdata_buff),32);
        bufp->chgBit(oldp+60,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__pslverr_buff));
        bufp->chgIData(oldp+61,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR),32);
        bufp->chgIData(oldp+62,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_SR),32);
        bufp->chgCData(oldp+63,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_state),3);
        bufp->chgCData(oldp+64,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_nextstate),3);
        bufp->chgBit(oldp+65,((1U & ((~ ((0x100000U 
                                          == vlSelf->ahb2apb_swc_tb__DOT__paddr) 
                                         | ((0x100004U 
                                             == vlSelf->ahb2apb_swc_tb__DOT__paddr) 
                                            | ((0x100008U 
                                                == vlSelf->ahb2apb_swc_tb__DOT__paddr) 
                                               | (0x10000cU 
                                                  == vlSelf->ahb2apb_swc_tb__DOT__paddr))))) 
                                     & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx)))));
        bufp->chgBit(oldp+66,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wen));
        bufp->chgSData(oldp+67,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wdata),16);
        bufp->chgBit(oldp+68,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_full));
        bufp->chgBit(oldp+69,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_ren));
        bufp->chgSData(oldp+70,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_rdata),16);
        bufp->chgBit(oldp+71,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_empty));
        bufp->chgCData(oldp+72,((7U & (vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR 
                                       >> 3U))),3);
        bufp->chgBit(oldp+73,((1U & (vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR 
                                     >> 1U))));
        bufp->chgBit(oldp+74,((1U & vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR)));
        bufp->chgBit(oldp+75,((1U & (vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR 
                                     >> 0xbU))));
        bufp->chgBit(oldp+76,((1U & (vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR 
                                     >> 7U))));
        bufp->chgBit(oldp+77,((1U & (vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR 
                                     >> 6U))));
        bufp->chgSData(oldp+78,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spiwdata),16);
        bufp->chgSData(oldp+79,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__cnt),12);
        bufp->chgSData(oldp+80,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__max_cnt),12);
        bufp->chgCData(oldp+81,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_state),3);
        bufp->chgCData(oldp+82,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_nextstate),3);
        bufp->chgBit(oldp+83,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__sck_source));
        bufp->chgSData(oldp+84,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__exindex),12);
        bufp->chgCData(oldp+85,((0xfU & ((0x80U & vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR)
                                          ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__exindex)
                                          : ((0x800U 
                                              & vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR)
                                              ? ((IData)(0xfU) 
                                                 - (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__exindex))
                                              : ((IData)(7U) 
                                                 - (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__exindex)))))),4);
        bufp->chgBit(oldp+86,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_wen));
        bufp->chgSData(oldp+87,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spirdata),16);
        bufp->chgBit(oldp+88,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_full));
        bufp->chgBit(oldp+89,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_ren));
        bufp->chgSData(oldp+90,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_rdata),16);
        bufp->chgBit(oldp+91,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_empty));
        bufp->chgBit(oldp+92,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__sck_source_dly));
        bufp->chgBit(oldp+93,(((~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__sck_source_dly)) 
                               & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__sck_source))));
        bufp->chgBit(oldp+94,((1U & (vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_SR 
                                     >> 7U))));
        bufp->chgBit(oldp+95,((1U & (vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_SR 
                                     >> 6U))));
        bufp->chgBit(oldp+96,((1U & (vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_SR 
                                     >> 1U))));
        bufp->chgBit(oldp+97,((1U & vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_SR)));
        bufp->chgCData(oldp+98,((0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr))),4);
        bufp->chgCData(oldp+99,((0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr))),4);
        bufp->chgCData(oldp+100,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr),5);
        bufp->chgCData(oldp+101,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr),5);
        bufp->chgSData(oldp+102,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[0]),16);
        bufp->chgSData(oldp+103,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[1]),16);
        bufp->chgSData(oldp+104,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[2]),16);
        bufp->chgSData(oldp+105,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[3]),16);
        bufp->chgSData(oldp+106,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[4]),16);
        bufp->chgSData(oldp+107,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[5]),16);
        bufp->chgSData(oldp+108,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[6]),16);
        bufp->chgSData(oldp+109,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[7]),16);
        bufp->chgSData(oldp+110,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[8]),16);
        bufp->chgSData(oldp+111,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[9]),16);
        bufp->chgSData(oldp+112,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[10]),16);
        bufp->chgSData(oldp+113,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[11]),16);
        bufp->chgSData(oldp+114,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[12]),16);
        bufp->chgSData(oldp+115,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[13]),16);
        bufp->chgSData(oldp+116,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[14]),16);
        bufp->chgSData(oldp+117,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[15]),16);
        bufp->chgCData(oldp+118,((0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))),4);
        bufp->chgCData(oldp+119,((0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr))),4);
        bufp->chgCData(oldp+120,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr),5);
        bufp->chgCData(oldp+121,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr),5);
        bufp->chgSData(oldp+122,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[0]),16);
        bufp->chgSData(oldp+123,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[1]),16);
        bufp->chgSData(oldp+124,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[2]),16);
        bufp->chgSData(oldp+125,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[3]),16);
        bufp->chgSData(oldp+126,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[4]),16);
        bufp->chgSData(oldp+127,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[5]),16);
        bufp->chgSData(oldp+128,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[6]),16);
        bufp->chgSData(oldp+129,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[7]),16);
        bufp->chgSData(oldp+130,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[8]),16);
        bufp->chgSData(oldp+131,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[9]),16);
        bufp->chgSData(oldp+132,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[10]),16);
        bufp->chgSData(oldp+133,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[11]),16);
        bufp->chgSData(oldp+134,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[12]),16);
        bufp->chgSData(oldp+135,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[13]),16);
        bufp->chgSData(oldp+136,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[14]),16);
        bufp->chgSData(oldp+137,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[15]),16);
        bufp->chgBit(oldp+138,((1U & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx) 
                                      >> 1U))));
        bufp->chgBit(oldp+139,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__pready_buff));
        bufp->chgIData(oldp+140,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__prdata_buff),32);
        bufp->chgBit(oldp+141,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__pslverr_buff));
        bufp->chgIData(oldp+142,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_BRR),32);
        bufp->chgIData(oldp+143,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR1),32);
        bufp->chgIData(oldp+144,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR2),32);
        bufp->chgIData(oldp+145,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR3),32);
        bufp->chgCData(oldp+146,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__apb_state),3);
        bufp->chgCData(oldp+147,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__apb_nextstate),3);
        bufp->chgBit(oldp+148,((1U & ((~ ((0x100100U 
                                           == vlSelf->ahb2apb_swc_tb__DOT__paddr) 
                                          | ((0x100104U 
                                              == vlSelf->ahb2apb_swc_tb__DOT__paddr) 
                                             | ((0x100108U 
                                                 == vlSelf->ahb2apb_swc_tb__DOT__paddr) 
                                                | ((0x10010cU 
                                                    == vlSelf->ahb2apb_swc_tb__DOT__paddr) 
                                                   | ((0x100110U 
                                                       == vlSelf->ahb2apb_swc_tb__DOT__paddr) 
                                                      | ((0x100114U 
                                                          == vlSelf->ahb2apb_swc_tb__DOT__paddr) 
                                                         | (0x100118U 
                                                            == vlSelf->ahb2apb_swc_tb__DOT__paddr)))))))) 
                                      & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx) 
                                         >> 1U)))));
        bufp->chgBit(oldp+149,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_wen));
        bufp->chgSData(oldp+150,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_wdata),16);
        bufp->chgBit(oldp+151,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_full));
        bufp->chgBit(oldp+152,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_ren));
        bufp->chgSData(oldp+153,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_rdata),16);
        bufp->chgBit(oldp+154,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_empty));
        bufp->chgBit(oldp+155,((1U & (vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR1 
                                      >> 0xdU))));
        bufp->chgBit(oldp+156,((1U & (vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR1 
                                      >> 0xcU))));
        bufp->chgBit(oldp+157,((1U & (vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR1 
                                      >> 0xaU))));
        bufp->chgBit(oldp+158,((1U & (vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR1 
                                      >> 9U))));
        bufp->chgCData(oldp+159,((3U & (vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR2 
                                        >> 0xcU))),2);
        bufp->chgCData(oldp+160,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__total_bits),4);
        bufp->chgSData(oldp+161,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_uartwdata_full_buff),16);
        bufp->chgCData(oldp+162,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_byte_cnt),4);
        bufp->chgSData(oldp+163,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_bit_cnt),16);
        bufp->chgCData(oldp+164,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uart_tx_state),3);
        bufp->chgCData(oldp+165,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uart_tx_nextstate),3);
        bufp->chgBit(oldp+166,((1U & VL_REDXOR_16(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_rdata))));
        bufp->chgBit(oldp+167,((1U & (~ VL_REDXOR_16(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_rdata)))));
        bufp->chgBit(oldp+168,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_parity_bit));
        bufp->chgSData(oldp+169,((0xffffU & VL_SHIFTL_III(16,16,32, (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_rdata), 1U))),16);
        bufp->chgSData(oldp+170,(((2U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT____VdfgTmp_h61eca0c6__0))
                                   ? (0xfc00U | (0x3ffU 
                                                 & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_rdata), 1U)))
                                   : ((3U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT____VdfgTmp_h61eca0c6__0))
                                       ? (0xf800U | 
                                          (((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_parity_bit) 
                                            << 0xaU) 
                                           | (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_rdata), 1U))))
                                       : ((0U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT____VdfgTmp_h61eca0c6__0))
                                           ? (0xfe00U 
                                              | (0x1ffU 
                                                 & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_rdata), 1U)))
                                           : (0xfc00U 
                                              | (((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_parity_bit) 
                                                  << 9U) 
                                                 | (0x1ffU 
                                                    & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_rdata), 1U)))))))),16);
        bufp->chgCData(oldp+171,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rx_byte_cnt),4);
        bufp->chgSData(oldp+172,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rx_bit_cnt),16);
        bufp->chgBit(oldp+173,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rx_dly));
        bufp->chgBit(oldp+174,(((~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__tx)) 
                                & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rx_dly))));
        bufp->chgCData(oldp+175,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uart_rx_state),3);
        bufp->chgCData(oldp+176,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uart_rx_nextstate),3);
        bufp->chgSData(oldp+177,((0xffffU & VL_SHIFTR_III(16,16,32, 
                                                          (0xffffU 
                                                           & vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_BRR), 1U))),16);
        bufp->chgSData(oldp+178,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uartrdata_full),16);
        bufp->chgSData(oldp+179,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uartrdata),16);
        bufp->chgCData(oldp+180,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__data_start),4);
        bufp->chgCData(oldp+181,(((0x1000U & vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR1)
                                   ? 7U : 8U)),4);
        bufp->chgBit(oldp+182,((1U & ((~ (vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR1 
                                          >> 0xaU)) 
                                      | ((0x200U & vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR1)
                                          ? (1U & VL_REDXOR_16(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uartrdata))
                                          : (~ (1U 
                                                & VL_REDXOR_16(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uartrdata))))))));
        bufp->chgBit(oldp+183,((1U & ((2U == (3U & 
                                              (vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR2 
                                               >> 0xcU)))
                                       ? (3U == (3U 
                                                 & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uartrdata_full) 
                                                    >> 0xeU)))
                                       : ((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uartrdata_full) 
                                          >> 0xfU)))));
        bufp->chgBit(oldp+184,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_wen));
        bufp->chgBit(oldp+185,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_full));
        bufp->chgBit(oldp+186,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_ren));
        bufp->chgSData(oldp+187,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_rdata),16);
        bufp->chgBit(oldp+188,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_empty));
        bufp->chgCData(oldp+189,((0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr))),4);
        bufp->chgCData(oldp+190,((0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr))),4);
        bufp->chgCData(oldp+191,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr),5);
        bufp->chgCData(oldp+192,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr),5);
        bufp->chgSData(oldp+193,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[0]),16);
        bufp->chgSData(oldp+194,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[1]),16);
        bufp->chgSData(oldp+195,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[2]),16);
        bufp->chgSData(oldp+196,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[3]),16);
        bufp->chgSData(oldp+197,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[4]),16);
        bufp->chgSData(oldp+198,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[5]),16);
        bufp->chgSData(oldp+199,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[6]),16);
        bufp->chgSData(oldp+200,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[7]),16);
        bufp->chgSData(oldp+201,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[8]),16);
        bufp->chgSData(oldp+202,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[9]),16);
        bufp->chgSData(oldp+203,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[10]),16);
        bufp->chgSData(oldp+204,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[11]),16);
        bufp->chgSData(oldp+205,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[12]),16);
        bufp->chgSData(oldp+206,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[13]),16);
        bufp->chgSData(oldp+207,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[14]),16);
        bufp->chgSData(oldp+208,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[15]),16);
        bufp->chgCData(oldp+209,((0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))),4);
        bufp->chgCData(oldp+210,((0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr))),4);
        bufp->chgCData(oldp+211,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr),5);
        bufp->chgCData(oldp+212,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr),5);
        bufp->chgSData(oldp+213,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[0]),16);
        bufp->chgSData(oldp+214,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[1]),16);
        bufp->chgSData(oldp+215,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[2]),16);
        bufp->chgSData(oldp+216,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[3]),16);
        bufp->chgSData(oldp+217,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[4]),16);
        bufp->chgSData(oldp+218,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[5]),16);
        bufp->chgSData(oldp+219,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[6]),16);
        bufp->chgSData(oldp+220,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[7]),16);
        bufp->chgSData(oldp+221,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[8]),16);
        bufp->chgSData(oldp+222,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[9]),16);
        bufp->chgSData(oldp+223,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[10]),16);
        bufp->chgSData(oldp+224,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[11]),16);
        bufp->chgSData(oldp+225,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[12]),16);
        bufp->chgSData(oldp+226,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[13]),16);
        bufp->chgSData(oldp+227,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[14]),16);
        bufp->chgSData(oldp+228,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[15]),16);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgIData(oldp+229,(vlSelf->ahb2apb_swc_tb__DOT__haddr),32);
        bufp->chgIData(oldp+230,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffdata),32);
        bufp->chgIData(oldp+231,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffaddr),32);
        bufp->chgIData(oldp+232,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffaddr),32);
        bufp->chgBit(oldp+233,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_ahbs_edge));
        bufp->chgBit(oldp+234,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_ahbs_edge));
        bufp->chgCData(oldp+235,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate),3);
    }
    bufp->chgBit(oldp+236,(vlSelf->ahb2apb_swc_tb__DOT__hclk));
    bufp->chgBit(oldp+237,(vlSelf->ahb2apb_swc_tb__DOT__pclk));
    bufp->chgCData(oldp+238,(((((IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_apbm) 
                                & ((0x100000U <= vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffaddr) 
                                   & (0x1000ffU >= vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffaddr))) 
                               | ((IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_apbm) 
                                  & ((0x100000U <= vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffaddr) 
                                     & (0x1000ffU >= vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffaddr))))
                               ? 1U : ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_apbm) 
                                         & ((0x100100U 
                                             <= vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffaddr) 
                                            & (0x1001ffU 
                                               >= vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffaddr))) 
                                        | ((IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_apbm) 
                                           & ((0x100100U 
                                               <= vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffaddr) 
                                              & (0x1001ffU 
                                                 >= vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffaddr))))
                                        ? 2U : 0U))),3);
    bufp->chgCData(oldp+239,(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__nextstate),2);
}

void Vahb2apb_swc_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root__trace_cleanup\n"); );
    // Init
    Vahb2apb_swc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vahb2apb_swc_tb___024root*>(voidSelf);
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
