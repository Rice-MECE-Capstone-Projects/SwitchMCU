// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vasyncfifo_swc_tb__Syms.h"


VL_ATTR_COLD void Vasyncfifo_swc_tb___024root__trace_init_sub__TOP__0(Vasyncfifo_swc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vasyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasyncfifo_swc_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("asyncfifo_swc_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+14,0,"rstn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"wclk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+18,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"rclk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"ren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+21,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("asyncfifo_swc_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+22,0,"data_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"ram_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"addr_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+14,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"wclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+18,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"rclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+21,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2,0,"raddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+9,0,"waddr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+3,0,"raddr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+10,0,"waddr_ptr_gray",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+11,0,"waddr_ptr_gray_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+12,0,"waddr_ptr_gray_rr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+4,0,"raddr_ptr_gray",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+5,0,"raddr_ptr_gray_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+6,0,"raddr_ptr_gray_rr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+13,0,"waddr_ptr_restore",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+7,0,"raddr_ptr_restore",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+25,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+25,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vasyncfifo_swc_tb___024root__trace_init_top(Vasyncfifo_swc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vasyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasyncfifo_swc_tb___024root__trace_init_top\n"); );
    // Body
    Vasyncfifo_swc_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vasyncfifo_swc_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vasyncfifo_swc_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vasyncfifo_swc_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vasyncfifo_swc_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vasyncfifo_swc_tb___024root__trace_register(Vasyncfifo_swc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vasyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasyncfifo_swc_tb___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vasyncfifo_swc_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vasyncfifo_swc_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vasyncfifo_swc_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vasyncfifo_swc_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vasyncfifo_swc_tb___024root__trace_const_0_sub_0(Vasyncfifo_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vasyncfifo_swc_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasyncfifo_swc_tb___024root__trace_const_0\n"); );
    // Init
    Vasyncfifo_swc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vasyncfifo_swc_tb___024root*>(voidSelf);
    Vasyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vasyncfifo_swc_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vasyncfifo_swc_tb___024root__trace_const_0_sub_0(Vasyncfifo_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vasyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasyncfifo_swc_tb___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+22,(0x10U),32);
    bufp->fullIData(oldp+23,(0x100U),32);
    bufp->fullIData(oldp+24,(8U),32);
    bufp->fullIData(oldp+25,(0xffffffffU),32);
}

VL_ATTR_COLD void Vasyncfifo_swc_tb___024root__trace_full_0_sub_0(Vasyncfifo_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vasyncfifo_swc_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasyncfifo_swc_tb___024root__trace_full_0\n"); );
    // Init
    Vasyncfifo_swc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vasyncfifo_swc_tb___024root*>(voidSelf);
    Vasyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vasyncfifo_swc_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vasyncfifo_swc_tb___024root__trace_full_0_sub_0(Vasyncfifo_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vasyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasyncfifo_swc_tb___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+1,(vlSelf->asyncfifo_swc_tb__DOT__rdata),16);
    bufp->fullCData(oldp+2,((0xffU & (IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr))),8);
    bufp->fullSData(oldp+3,(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr),9);
    bufp->fullSData(oldp+4,((0x1ffU & (VL_SHIFTR_III(9,9,32, (IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr), 1U) 
                                       ^ (IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr)))),9);
    bufp->fullSData(oldp+5,(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr_gray_r),9);
    bufp->fullSData(oldp+6,(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr_gray_rr),9);
    bufp->fullSData(oldp+7,(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__raddr_ptr_restore),9);
    bufp->fullCData(oldp+8,((0xffU & (IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr))),8);
    bufp->fullSData(oldp+9,(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr),9);
    bufp->fullSData(oldp+10,((0x1ffU & (VL_SHIFTR_III(9,9,32, (IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr), 1U) 
                                        ^ (IData)(vlSelf->asyncfifo_swc_tb__DOT__asyncfifo_swc_inst__DOT__waddr_ptr)))),9);
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
}
