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
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->ahb2apb_swc_tb__DOT__paddr),32);
        bufp->chgBit(oldp+1,(vlSelf->ahb2apb_swc_tb__DOT__penable));
        bufp->chgBit(oldp+2,(vlSelf->ahb2apb_swc_tb__DOT__pwrite));
        bufp->chgIData(oldp+3,(vlSelf->ahb2apb_swc_tb__DOT__pwdata),32);
        bufp->chgIData(oldp+4,(vlSelf->ahb2apb_swc_tb__DOT__prdata),32);
        bufp->chgBit(oldp+5,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffread));
        bufp->chgBit(oldp+6,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_r));
        bufp->chgBit(oldp+7,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_rr));
        bufp->chgBit(oldp+8,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_rrr));
        bufp->chgBit(oldp+9,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_apbm));
        bufp->chgBit(oldp+10,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffread));
        bufp->chgBit(oldp+11,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffwrite));
        bufp->chgBit(oldp+12,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_r));
        bufp->chgBit(oldp+13,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_rr));
        bufp->chgBit(oldp+14,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_rrr));
        bufp->chgBit(oldp+15,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_apbm));
        bufp->chgIData(oldp+16,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffdata),32);
        bufp->chgBit(oldp+17,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__resp));
        bufp->chgIData(oldp+18,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR),32);
        bufp->chgIData(oldp+19,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_SR),32);
        bufp->chgIData(oldp+20,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_WDR),32);
        bufp->chgBit(oldp+21,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wen));
        bufp->chgIData(oldp+22,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdata),32);
        bufp->chgBit(oldp+23,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__full));
        bufp->chgBit(oldp+24,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__ren));
        bufp->chgIData(oldp+25,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdata),32);
        bufp->chgBit(oldp+26,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__empty));
        bufp->chgSData(oldp+27,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__counter),11);
        bufp->chgCData(oldp+28,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__state),3);
        bufp->chgCData(oldp+29,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__nextstate),3);
        bufp->chgIData(oldp+30,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_wdata),32);
        bufp->chgCData(oldp+31,((0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))),4);
        bufp->chgCData(oldp+32,((0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr))),4);
        bufp->chgCData(oldp+33,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr),5);
        bufp->chgCData(oldp+34,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr),5);
        bufp->chgIData(oldp+35,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[0]),32);
        bufp->chgIData(oldp+36,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[1]),32);
        bufp->chgIData(oldp+37,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[2]),32);
        bufp->chgIData(oldp+38,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[3]),32);
        bufp->chgIData(oldp+39,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[4]),32);
        bufp->chgIData(oldp+40,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[5]),32);
        bufp->chgIData(oldp+41,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[6]),32);
        bufp->chgIData(oldp+42,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[7]),32);
        bufp->chgIData(oldp+43,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[8]),32);
        bufp->chgIData(oldp+44,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[9]),32);
        bufp->chgIData(oldp+45,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[10]),32);
        bufp->chgIData(oldp+46,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[11]),32);
        bufp->chgIData(oldp+47,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[12]),32);
        bufp->chgIData(oldp+48,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[13]),32);
        bufp->chgIData(oldp+49,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[14]),32);
        bufp->chgIData(oldp+50,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[15]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+51,(vlSelf->ahb2apb_swc_tb__DOT__haddr),32);
        bufp->chgCData(oldp+52,(vlSelf->ahb2apb_swc_tb__DOT__htrans),2);
        bufp->chgIData(oldp+53,(vlSelf->ahb2apb_swc_tb__DOT__hwdata),32);
        bufp->chgIData(oldp+54,(vlSelf->ahb2apb_swc_tb__DOT__hrdata),32);
        bufp->chgBit(oldp+55,(vlSelf->ahb2apb_swc_tb__DOT__hwrite));
        bufp->chgBit(oldp+56,(vlSelf->ahb2apb_swc_tb__DOT__hready));
        bufp->chgBit(oldp+57,(vlSelf->ahb2apb_swc_tb__DOT__wbuffread));
        bufp->chgBit(oldp+58,(vlSelf->ahb2apb_swc_tb__DOT__rbuffread));
        bufp->chgBit(oldp+59,(vlSelf->ahb2apb_swc_tb__DOT__rbuffwrite));
        bufp->chgIData(oldp+60,(vlSelf->ahb2apb_swc_tb__DOT__rbuffdata),32);
        bufp->chgBit(oldp+61,(vlSelf->ahb2apb_swc_tb__DOT__done));
        bufp->chgBit(oldp+62,(vlSelf->ahb2apb_swc_tb__DOT__resp));
        bufp->chgBit(oldp+63,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_ahbs));
        bufp->chgIData(oldp+64,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffdata),32);
        bufp->chgIData(oldp+65,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffaddr),32);
        bufp->chgBit(oldp+66,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_ahbs));
        bufp->chgIData(oldp+67,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffaddr),32);
        bufp->chgBit(oldp+68,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_r));
        bufp->chgBit(oldp+69,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_rr));
        bufp->chgBit(oldp+70,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_rrr));
        bufp->chgBit(oldp+71,(((~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_rrr)) 
                               & (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_rr))));
        bufp->chgBit(oldp+72,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_ahbs_edge));
        bufp->chgBit(oldp+73,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_ahbs_edge));
        bufp->chgCData(oldp+74,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__state),3);
        bufp->chgCData(oldp+75,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate),3);
        bufp->chgCData(oldp+76,(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__state),2);
        bufp->chgIData(oldp+77,(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__hwdatabuff),32);
        bufp->chgBit(oldp+78,(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflag));
        bufp->chgBit(oldp+79,(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflagdly));
        bufp->chgBit(oldp+80,(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflag));
        bufp->chgBit(oldp+81,(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflagdly));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+82,(vlSelf->ahb2apb_swc_tb__DOT__pselx),3);
        bufp->chgBit(oldp+83,(vlSelf->ahb2apb_swc_tb__DOT__pready));
        bufp->chgBit(oldp+84,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_apbm));
        bufp->chgCData(oldp+85,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__state),2);
        bufp->chgCData(oldp+86,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate),2);
        bufp->chgBit(oldp+87,((1U & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx))));
    }
    bufp->chgBit(oldp+88,(vlSelf->ahb2apb_swc_tb__DOT__rstn));
    bufp->chgBit(oldp+89,(vlSelf->ahb2apb_swc_tb__DOT__hclk));
    bufp->chgBit(oldp+90,(vlSelf->ahb2apb_swc_tb__DOT__pclk));
    bufp->chgBit(oldp+91,(vlSelf->ahb2apb_swc_tb__DOT__wreq));
    bufp->chgIData(oldp+92,(vlSelf->ahb2apb_swc_tb__DOT__wbuffdata),32);
    bufp->chgIData(oldp+93,(vlSelf->ahb2apb_swc_tb__DOT__wbuffaddr),32);
    bufp->chgCData(oldp+94,(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__nextstate),2);
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
}
