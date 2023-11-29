// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsyncfifo_swc_tb__Syms.h"


VL_ATTR_COLD void Vsyncfifo_swc_tb___024root__trace_init_sub__TOP__0(Vsyncfifo_swc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyncfifo_swc_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("syncfifo_swc_tb ");
    tracep->declBit(c+7,"rstn", false,-1);
    tracep->declBit(c+8,"clk", false,-1);
    tracep->declBit(c+9,"reg_wen", false,-1);
    tracep->declBus(c+10,"wdata", false,-1, 15,0);
    tracep->declBit(c+11,"full", false,-1);
    tracep->declBit(c+12,"ren", false,-1);
    tracep->declBus(c+1,"rdata", false,-1, 15,0);
    tracep->declBit(c+2,"empty", false,-1);
    tracep->pushNamePrefix("syncfifo_swc_inst ");
    tracep->declBus(c+13,"data_width", false,-1, 31,0);
    tracep->declBus(c+14,"ram_size", false,-1, 31,0);
    tracep->declBus(c+15,"addr_width", false,-1, 31,0);
    tracep->declBit(c+7,"rstn", false,-1);
    tracep->declBit(c+8,"clk", false,-1);
    tracep->declBit(c+9,"reg_wen", false,-1);
    tracep->declBus(c+10,"wdata", false,-1, 15,0);
    tracep->declBit(c+11,"full", false,-1);
    tracep->declBit(c+12,"ren", false,-1);
    tracep->declBus(c+1,"rdata", false,-1, 15,0);
    tracep->declBit(c+2,"empty", false,-1);
    tracep->declBus(c+3,"waddr", false,-1, 7,0);
    tracep->declBus(c+4,"raddr", false,-1, 7,0);
    tracep->declBus(c+5,"waddr_ptr", false,-1, 8,0);
    tracep->declBus(c+6,"raddr_ptr", false,-1, 8,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vsyncfifo_swc_tb___024root__trace_init_top(Vsyncfifo_swc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyncfifo_swc_tb___024root__trace_init_top\n"); );
    // Body
    Vsyncfifo_swc_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsyncfifo_swc_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsyncfifo_swc_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsyncfifo_swc_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vsyncfifo_swc_tb___024root__trace_register(Vsyncfifo_swc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyncfifo_swc_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vsyncfifo_swc_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vsyncfifo_swc_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vsyncfifo_swc_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsyncfifo_swc_tb___024root__trace_full_sub_0(Vsyncfifo_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsyncfifo_swc_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyncfifo_swc_tb___024root__trace_full_top_0\n"); );
    // Init
    Vsyncfifo_swc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsyncfifo_swc_tb___024root*>(voidSelf);
    Vsyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsyncfifo_swc_tb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsyncfifo_swc_tb___024root__trace_full_sub_0(Vsyncfifo_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyncfifo_swc_tb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+1,(vlSelf->syncfifo_swc_tb__DOT__rdata),16);
    bufp->fullBit(oldp+2,(vlSelf->syncfifo_swc_tb__DOT__empty));
    bufp->fullCData(oldp+3,((0xffU & (IData)(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__waddr_ptr))),8);
    bufp->fullCData(oldp+4,((0xffU & (IData)(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__raddr_ptr))),8);
    bufp->fullSData(oldp+5,(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__waddr_ptr),9);
    bufp->fullSData(oldp+6,(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__raddr_ptr),9);
    bufp->fullBit(oldp+7,(vlSelf->syncfifo_swc_tb__DOT__rstn));
    bufp->fullBit(oldp+8,(vlSelf->syncfifo_swc_tb__DOT__clk));
    bufp->fullBit(oldp+9,(vlSelf->syncfifo_swc_tb__DOT__reg_wen));
    bufp->fullSData(oldp+10,(vlSelf->syncfifo_swc_tb__DOT__wdata),16);
    bufp->fullBit(oldp+11,(vlSelf->syncfifo_swc_tb__DOT__full));
    bufp->fullBit(oldp+12,(vlSelf->syncfifo_swc_tb__DOT__ren));
    bufp->fullIData(oldp+13,(0x10U),32);
    bufp->fullIData(oldp+14,(0x100U),32);
    bufp->fullIData(oldp+15,(8U),32);
}
