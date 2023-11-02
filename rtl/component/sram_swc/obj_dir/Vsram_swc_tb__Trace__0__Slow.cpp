// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsram_swc_tb__Syms.h"


VL_ATTR_COLD void Vsram_swc_tb___024root__trace_init_sub__TOP__0(Vsram_swc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsram_swc_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("sram_swc_tb ");
    tracep->declBus(c+6,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+7,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+8,"MEM_DEPTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"we", false,-1);
    tracep->declBus(c+3,"addr", false,-1, 9,0);
    tracep->declBus(c+4,"data_in", false,-1, 31,0);
    tracep->declBus(c+5,"data_out", false,-1, 31,0);
    tracep->pushNamePrefix("sram_instance ");
    tracep->declBus(c+6,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+7,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"we", false,-1);
    tracep->declBus(c+3,"addr", false,-1, 9,0);
    tracep->declBus(c+4,"wdata", false,-1, 31,0);
    tracep->declBus(c+5,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vsram_swc_tb___024root__trace_init_top(Vsram_swc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsram_swc_tb___024root__trace_init_top\n"); );
    // Body
    Vsram_swc_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsram_swc_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsram_swc_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsram_swc_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vsram_swc_tb___024root__trace_register(Vsram_swc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsram_swc_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vsram_swc_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vsram_swc_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vsram_swc_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsram_swc_tb___024root__trace_full_sub_0(Vsram_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsram_swc_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsram_swc_tb___024root__trace_full_top_0\n"); );
    // Init
    Vsram_swc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsram_swc_tb___024root*>(voidSelf);
    Vsram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsram_swc_tb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsram_swc_tb___024root__trace_full_sub_0(Vsram_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsram_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsram_swc_tb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->sram_swc_tb__DOT__clk));
    bufp->fullBit(oldp+2,(vlSelf->sram_swc_tb__DOT__we));
    bufp->fullSData(oldp+3,(vlSelf->sram_swc_tb__DOT__addr),10);
    bufp->fullIData(oldp+4,(vlSelf->sram_swc_tb__DOT__data_in),32);
    bufp->fullIData(oldp+5,(vlSelf->sram_swc_tb__DOT__data_out),32);
    bufp->fullIData(oldp+6,(0x20U),32);
    bufp->fullIData(oldp+7,(0xaU),32);
    bufp->fullIData(oldp+8,(0x400U),32);
}
