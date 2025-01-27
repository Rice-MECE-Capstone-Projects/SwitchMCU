// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsyncfifo_swc_tb__Syms.h"


void Vsyncfifo_swc_tb___024root__trace_chg_0_sub_0(Vsyncfifo_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsyncfifo_swc_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyncfifo_swc_tb___024root__trace_chg_0\n"); );
    // Init
    Vsyncfifo_swc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsyncfifo_swc_tb___024root*>(voidSelf);
    Vsyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsyncfifo_swc_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vsyncfifo_swc_tb___024root__trace_chg_0_sub_0(Vsyncfifo_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyncfifo_swc_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->syncfifo_swc_tb__DOT__rdata),32);
        bufp->chgBit(oldp+1,(vlSelf->syncfifo_swc_tb__DOT__empty));
        bufp->chgCData(oldp+2,((0xfU & (IData)(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__waddr_ptr))),4);
        bufp->chgCData(oldp+3,((0xfU & (IData)(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__raddr_ptr))),4);
        bufp->chgCData(oldp+4,(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__waddr_ptr),5);
        bufp->chgCData(oldp+5,(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__raddr_ptr),5);
        bufp->chgIData(oldp+6,(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram[0]),32);
        bufp->chgIData(oldp+7,(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram[1]),32);
        bufp->chgIData(oldp+8,(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram[2]),32);
        bufp->chgIData(oldp+9,(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram[3]),32);
        bufp->chgIData(oldp+10,(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram[4]),32);
        bufp->chgIData(oldp+11,(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram[5]),32);
        bufp->chgIData(oldp+12,(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram[6]),32);
        bufp->chgIData(oldp+13,(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram[7]),32);
        bufp->chgIData(oldp+14,(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram[8]),32);
        bufp->chgIData(oldp+15,(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram[9]),32);
        bufp->chgIData(oldp+16,(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram[10]),32);
        bufp->chgIData(oldp+17,(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram[11]),32);
        bufp->chgIData(oldp+18,(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram[12]),32);
        bufp->chgIData(oldp+19,(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram[13]),32);
        bufp->chgIData(oldp+20,(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram[14]),32);
        bufp->chgIData(oldp+21,(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram[15]),32);
    }
    bufp->chgBit(oldp+22,(vlSelf->syncfifo_swc_tb__DOT__rstn));
    bufp->chgBit(oldp+23,(vlSelf->syncfifo_swc_tb__DOT__clk));
    bufp->chgBit(oldp+24,(vlSelf->syncfifo_swc_tb__DOT__wen));
    bufp->chgIData(oldp+25,(vlSelf->syncfifo_swc_tb__DOT__wdata),32);
    bufp->chgBit(oldp+26,(vlSelf->syncfifo_swc_tb__DOT__full));
    bufp->chgBit(oldp+27,(vlSelf->syncfifo_swc_tb__DOT__ren));
}

void Vsyncfifo_swc_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyncfifo_swc_tb___024root__trace_cleanup\n"); );
    // Init
    Vsyncfifo_swc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsyncfifo_swc_tb___024root*>(voidSelf);
    Vsyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
