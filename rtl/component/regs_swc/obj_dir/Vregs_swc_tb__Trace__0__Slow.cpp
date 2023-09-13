// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vregs_swc_tb__Syms.h"


VL_ATTR_COLD void Vregs_swc_tb___024root__trace_init_sub__TOP__0(Vregs_swc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vregs_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregs_swc_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("regs_swc_tb ");
    tracep->declBus(c+19,"REGS_SIZE", false,-1, 31,0);
    tracep->declBit(c+18,"clk", false,-1);
    tracep->declBit(c+1,"rstn", false,-1);
    tracep->declBit(c+2,"write", false,-1);
    tracep->declBus(c+3,"waddr", false,-1, 6,0);
    tracep->declBus(c+4,"wdata", false,-1, 31,0);
    tracep->declBit(c+5,"read", false,-1);
    tracep->declBus(c+6,"raddr", false,-1, 6,0);
    tracep->declBus(c+7,"rdata", false,-1, 31,0);
    tracep->pushNamePrefix("regs_swc_inst ");
    tracep->declBus(c+19,"REGS_SIZE", false,-1, 31,0);
    tracep->declBit(c+18,"clk", false,-1);
    tracep->declBit(c+1,"rstn", false,-1);
    tracep->declBit(c+2,"write", false,-1);
    tracep->declBus(c+3,"waddr", false,-1, 6,0);
    tracep->declBus(c+4,"wdata", false,-1, 31,0);
    tracep->declBit(c+5,"read", false,-1);
    tracep->declBus(c+6,"raddr", false,-1, 6,0);
    tracep->declBus(c+7,"rdata", false,-1, 31,0);
    tracep->declArray(c+8,"regs", false,-1, 319,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vregs_swc_tb___024root__trace_init_top(Vregs_swc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vregs_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregs_swc_tb___024root__trace_init_top\n"); );
    // Body
    Vregs_swc_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vregs_swc_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vregs_swc_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vregs_swc_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vregs_swc_tb___024root__trace_register(Vregs_swc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vregs_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregs_swc_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vregs_swc_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vregs_swc_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vregs_swc_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vregs_swc_tb___024root__trace_full_sub_0(Vregs_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vregs_swc_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregs_swc_tb___024root__trace_full_top_0\n"); );
    // Init
    Vregs_swc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vregs_swc_tb___024root*>(voidSelf);
    Vregs_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vregs_swc_tb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vregs_swc_tb___024root__trace_full_sub_0(Vregs_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vregs_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregs_swc_tb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->regs_swc_tb__DOT__rstn));
    bufp->fullBit(oldp+2,(vlSelf->regs_swc_tb__DOT__write));
    bufp->fullCData(oldp+3,(vlSelf->regs_swc_tb__DOT__waddr),7);
    bufp->fullIData(oldp+4,(vlSelf->regs_swc_tb__DOT__wdata),32);
    bufp->fullBit(oldp+5,(vlSelf->regs_swc_tb__DOT__read));
    bufp->fullCData(oldp+6,(vlSelf->regs_swc_tb__DOT__raddr),7);
    bufp->fullIData(oldp+7,(vlSelf->regs_swc_tb__DOT__rdata),32);
    bufp->fullWData(oldp+8,(vlSelf->regs_swc_tb__DOT__regs_swc_inst__DOT__regs),320);
    bufp->fullBit(oldp+18,(vlSelf->regs_swc_tb__DOT__clk));
    bufp->fullIData(oldp+19,(0xaU),32);
}
