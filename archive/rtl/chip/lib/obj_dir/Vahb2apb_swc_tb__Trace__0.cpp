// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vahb2apb_swc_tb__Syms.h"


void Vahb2apb_swc_tb___024root__trace_chg_sub_0(Vahb2apb_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vahb2apb_swc_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root__trace_chg_top_0\n"); );
    // Init
    Vahb2apb_swc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vahb2apb_swc_tb___024root*>(voidSelf);
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vahb2apb_swc_tb___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vahb2apb_swc_tb___024root__trace_chg_sub_0(Vahb2apb_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root__trace_chg_sub_0\n"); );
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
        bufp->chgIData(oldp+36,(vlSelf->ahb2apb_swc_tb__DOT__prdata),32);
        bufp->chgBit(oldp+37,(vlSelf->ahb2apb_swc_tb__DOT__pslverr));
        bufp->chgBit(oldp+38,(vlSelf->ahb2apb_swc_tb__DOT__sck));
        bufp->chgBit(oldp+39,(vlSelf->ahb2apb_swc_tb__DOT__mosi));
        bufp->chgBit(oldp+40,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffread));
        bufp->chgBit(oldp+41,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_r));
        bufp->chgBit(oldp+42,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_rr));
        bufp->chgBit(oldp+43,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_rrr));
        bufp->chgBit(oldp+44,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_apbm));
        bufp->chgBit(oldp+45,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffread));
        bufp->chgBit(oldp+46,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffwrite));
        bufp->chgBit(oldp+47,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_r));
        bufp->chgBit(oldp+48,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_rr));
        bufp->chgBit(oldp+49,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_rrr));
        bufp->chgBit(oldp+50,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_apbm));
        bufp->chgIData(oldp+51,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffdata),32);
        bufp->chgBit(oldp+52,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_apbm));
        bufp->chgBit(oldp+53,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__resp));
        bufp->chgCData(oldp+54,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__state),2);
        bufp->chgCData(oldp+55,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate),2);
        bufp->chgBit(oldp+56,((1U & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx))));
        bufp->chgIData(oldp+57,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR),32);
        bufp->chgIData(oldp+58,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_SR),32);
        bufp->chgCData(oldp+59,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_state),3);
        bufp->chgCData(oldp+60,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_nextstate),3);
        bufp->chgBit(oldp+61,((1U & ((~ ((0x100000U 
                                          == vlSelf->ahb2apb_swc_tb__DOT__paddr) 
                                         | ((0x100004U 
                                             == vlSelf->ahb2apb_swc_tb__DOT__paddr) 
                                            | ((0x100008U 
                                                == vlSelf->ahb2apb_swc_tb__DOT__paddr) 
                                               | (0x10000cU 
                                                  == vlSelf->ahb2apb_swc_tb__DOT__paddr))))) 
                                     & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx)))));
        bufp->chgBit(oldp+62,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wen));
        bufp->chgSData(oldp+63,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wdata),16);
        bufp->chgBit(oldp+64,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_full));
        bufp->chgBit(oldp+65,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_ren));
        bufp->chgSData(oldp+66,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_rdata),16);
        bufp->chgBit(oldp+67,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_empty));
        bufp->chgCData(oldp+68,((7U & (vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR 
                                       >> 3U))),3);
        bufp->chgBit(oldp+69,((1U & (vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR 
                                     >> 1U))));
        bufp->chgBit(oldp+70,((1U & vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR)));
        bufp->chgBit(oldp+71,((1U & (vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR 
                                     >> 0xbU))));
        bufp->chgBit(oldp+72,((1U & (vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR 
                                     >> 7U))));
        bufp->chgBit(oldp+73,((1U & (vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR 
                                     >> 6U))));
        bufp->chgSData(oldp+74,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__cnt),12);
        bufp->chgSData(oldp+75,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spiwdata),16);
        bufp->chgSData(oldp+76,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__maxcnt),12);
        bufp->chgCData(oldp+77,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_state),3);
        bufp->chgCData(oldp+78,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_nextstate),3);
        bufp->chgBit(oldp+79,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__sck_source));
        bufp->chgSData(oldp+80,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__exindex),12);
        bufp->chgCData(oldp+81,((0xfU & ((0x80U & vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR)
                                          ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__exindex)
                                          : ((0x800U 
                                              & vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR)
                                              ? ((IData)(0xfU) 
                                                 - (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__exindex))
                                              : ((IData)(7U) 
                                                 - (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__exindex)))))),4);
        bufp->chgBit(oldp+82,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_wen));
        bufp->chgSData(oldp+83,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spirdata),16);
        bufp->chgBit(oldp+84,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_full));
        bufp->chgBit(oldp+85,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_ren));
        bufp->chgSData(oldp+86,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_rdata),16);
        bufp->chgBit(oldp+87,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_empty));
        bufp->chgBit(oldp+88,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__sck_source_r));
        bufp->chgBit(oldp+89,(((~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__sck_source_r)) 
                               & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__sck_source))));
        bufp->chgBit(oldp+90,((1U & (vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_SR 
                                     >> 7U))));
        bufp->chgBit(oldp+91,((1U & (vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_SR 
                                     >> 6U))));
        bufp->chgBit(oldp+92,((1U & (vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_SR 
                                     >> 1U))));
        bufp->chgBit(oldp+93,((1U & vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_SR)));
        bufp->chgCData(oldp+94,((0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr))),4);
        bufp->chgCData(oldp+95,((0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr))),4);
        bufp->chgCData(oldp+96,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr),5);
        bufp->chgCData(oldp+97,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr),5);
        bufp->chgSData(oldp+98,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[0]),16);
        bufp->chgSData(oldp+99,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[1]),16);
        bufp->chgSData(oldp+100,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[2]),16);
        bufp->chgSData(oldp+101,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[3]),16);
        bufp->chgSData(oldp+102,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[4]),16);
        bufp->chgSData(oldp+103,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[5]),16);
        bufp->chgSData(oldp+104,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[6]),16);
        bufp->chgSData(oldp+105,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[7]),16);
        bufp->chgSData(oldp+106,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[8]),16);
        bufp->chgSData(oldp+107,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[9]),16);
        bufp->chgSData(oldp+108,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[10]),16);
        bufp->chgSData(oldp+109,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[11]),16);
        bufp->chgSData(oldp+110,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[12]),16);
        bufp->chgSData(oldp+111,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[13]),16);
        bufp->chgSData(oldp+112,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[14]),16);
        bufp->chgSData(oldp+113,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[15]),16);
        bufp->chgCData(oldp+114,((0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))),4);
        bufp->chgCData(oldp+115,((0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr))),4);
        bufp->chgCData(oldp+116,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr),5);
        bufp->chgCData(oldp+117,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr),5);
        bufp->chgSData(oldp+118,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[0]),16);
        bufp->chgSData(oldp+119,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[1]),16);
        bufp->chgSData(oldp+120,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[2]),16);
        bufp->chgSData(oldp+121,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[3]),16);
        bufp->chgSData(oldp+122,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[4]),16);
        bufp->chgSData(oldp+123,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[5]),16);
        bufp->chgSData(oldp+124,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[6]),16);
        bufp->chgSData(oldp+125,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[7]),16);
        bufp->chgSData(oldp+126,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[8]),16);
        bufp->chgSData(oldp+127,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[9]),16);
        bufp->chgSData(oldp+128,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[10]),16);
        bufp->chgSData(oldp+129,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[11]),16);
        bufp->chgSData(oldp+130,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[12]),16);
        bufp->chgSData(oldp+131,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[13]),16);
        bufp->chgSData(oldp+132,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[14]),16);
        bufp->chgSData(oldp+133,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[15]),16);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgIData(oldp+134,(vlSelf->ahb2apb_swc_tb__DOT__haddr),32);
        bufp->chgIData(oldp+135,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffdata),32);
        bufp->chgIData(oldp+136,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffaddr),32);
        bufp->chgIData(oldp+137,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffaddr),32);
        bufp->chgBit(oldp+138,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_ahbs_edge));
        bufp->chgBit(oldp+139,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_ahbs_edge));
        bufp->chgCData(oldp+140,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate),3);
    }
    bufp->chgBit(oldp+141,(vlSelf->ahb2apb_swc_tb__DOT__hclk));
    bufp->chgBit(oldp+142,(vlSelf->ahb2apb_swc_tb__DOT__pclk));
    bufp->chgCData(oldp+143,(((((IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_apbm) 
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
    bufp->chgCData(oldp+144,(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__nextstate),2);
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
