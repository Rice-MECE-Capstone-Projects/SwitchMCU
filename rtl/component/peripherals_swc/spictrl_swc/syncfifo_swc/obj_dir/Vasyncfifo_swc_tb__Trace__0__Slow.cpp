// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vasyncfifo_swc_tb__Syms.h"


VL_ATTR_COLD void Vasyncfifo_swc_tb___024root__trace_init_sub__TOP__0(Vasyncfifo_swc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vasyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasyncfifo_swc_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("asyncfifo_swc_tb ");
    tracep->declBit(c+14,"rstn", false,-1);
    tracep->declBit(c+15,"wclk", false,-1);
    tracep->declBit(c+16,"wen", false,-1);
    tracep->declBus(c+17,"wdata", false,-1, 15,0);
    tracep->declBit(c+18,"full", false,-1);
    tracep->declBit(c+19,"rclk", false,-1);
    tracep->declBit(c+20,"ren", false,-1);
    tracep->declBus(c+1,"rdata", false,-1, 15,0);
    tracep->declBit(c+21,"empty", false,-1);
    tracep->pushNamePrefix("asyncfifo_swc_inst ");
    tracep->declBus(c+22,"data_width", false,-1, 31,0);
    tracep->declBus(c+23,"ram_size", false,-1, 31,0);
    tracep->declBus(c+24,"addr_width", false,-1, 31,0);
    tracep->declBit(c+14,"rstn", false,-1);
    tracep->declBit(c+15,"wclk", false,-1);
    tracep->declBit(c+16,"wen", false,-1);
    tracep->declBus(c+17,"wdata", false,-1, 15,0);
    tracep->declBit(c+18,"full", false,-1);
    tracep->declBit(c+19,"rclk", false,-1);
    tracep->declBit(c+20,"ren", false,-1);
    tracep->declBus(c+1,"rdata", false,-1, 15,0);
    tracep->declBit(c+21,"empty", false,-1);
    tracep->declBus(c+8,"waddr", false,-1, 7,0);
    tracep->declBus(c+2,"raddr", false,-1, 7,0);
    tracep->declBus(c+9,"waddr_ptr", false,-1, 8,0);
    tracep->declBus(c+3,"raddr_ptr", false,-1, 8,0);
    tracep->declBus(c+10,"waddr_ptr_gray", false,-1, 8,0);
    tracep->declBus(c+11,"waddr_ptr_gray_r", false,-1, 8,0);
    tracep->declBus(c+12,"waddr_ptr_gray_rr", false,-1, 8,0);
    tracep->declBus(c+4,"raddr_ptr_gray", false,-1, 8,0);
    tracep->declBus(c+5,"raddr_ptr_gray_r", false,-1, 8,0);
    tracep->declBus(c+6,"raddr_ptr_gray_rr", false,-1, 8,0);
    tracep->declBus(c+13,"waddr_ptr_restore", false,-1, 8,0);
    tracep->declBus(c+7,"raddr_ptr_restore", false,-1, 8,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+25,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+25,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vasyncfifo_swc_tb___024root__trace_init_top(Vasyncfifo_swc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vasyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasyncfifo_swc_tb___024root__trace_init_top\n"); );
    // Body
    Vasyncfifo_swc_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vasyncfifo_swc_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vasyncfifo_swc_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vasyncfifo_swc_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vasyncfifo_swc_tb___024root__trace_register(Vasyncfifo_swc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vasyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasyncfifo_swc_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vasyncfifo_swc_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vasyncfifo_swc_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vasyncfifo_swc_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vasyncfifo_swc_tb___024root__trace_full_sub_0(Vasyncfifo_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vasyncfifo_swc_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasyncfifo_swc_tb___024root__trace_full_top_0\n"); );
    // Init
    Vasyncfifo_swc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vasyncfifo_swc_tb___024root*>(voidSelf);
    Vasyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vasyncfifo_swc_tb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vasyncfifo_swc_tb___024root__trace_full_sub_0(Vasyncfifo_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vasyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasyncfifo_swc_tb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+1,(vlSelf->asyncfifo_swc_tb__DOT__rdata),16);
    bufp->fullCData(oldp+2,((0xffU & (IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr))),8);
    bufp->fullSData(oldp+3,(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr),9);
    bufp->fullSData(oldp+4,((0x1ffU & (((IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr) 
                                        >> 1U) ^ (IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr)))),9);
    bufp->fullSData(oldp+5,(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr_gray_r),9);
    bufp->fullSData(oldp+6,(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr_gray_rr),9);
    bufp->fullSData(oldp+7,(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr_restore),9);
    bufp->fullCData(oldp+8,((0xffU & (IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr))),8);
    bufp->fullSData(oldp+9,(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr),9);
    bufp->fullSData(oldp+10,((0x1ffU & (((IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr) 
                                         >> 1U) ^ (IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr)))),9);
    bufp->fullSData(oldp+11,(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr_gray_r),9);
    bufp->fullSData(oldp+12,(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr_gray_rr),9);
    bufp->fullSData(oldp+13,(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr_restore),9);
    bufp->fullBit(oldp+14,(vlSelf->asyncfifo_swc_tb__DOT__rstn));
    bufp->fullBit(oldp+15,(vlSelf->asyncfifo_swc_tb__DOT__wclk));
    bufp->fullBit(oldp+16,(vlSelf->asyncfifo_swc_tb__DOT__wen));
    bufp->fullSData(oldp+17,(vlSelf->asyncfifo_swc_tb__DOT__wdata),16);
    bufp->fullBit(oldp+18,(vlSelf->asyncfifo_swc_tb__DOT__full));
    bufp->fullBit(oldp+19,(vlSelf->asyncfifo_swc_tb__DOT__rclk));
    bufp->fullBit(oldp+20,(vlSelf->asyncfifo_swc_tb__DOT__ren));
    bufp->fullBit(oldp+21,(vlSelf->asyncfifo_swc_tb__DOT__empty));
    bufp->fullIData(oldp+22,(0x10U),32);
    bufp->fullIData(oldp+23,(0x100U),32);
    bufp->fullIData(oldp+24,(8U),32);
    bufp->fullIData(oldp+25,(0xffffffffU),32);
}
