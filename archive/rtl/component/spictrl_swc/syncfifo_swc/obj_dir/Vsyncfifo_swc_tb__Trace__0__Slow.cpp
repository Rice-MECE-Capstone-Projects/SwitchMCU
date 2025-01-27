// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsyncfifo_swc_tb__Syms.h"


VL_ATTR_COLD void Vsyncfifo_swc_tb___024root__trace_init_sub__TOP__0(Vsyncfifo_swc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyncfifo_swc_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("syncfifo_swc_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+24,0,"rstn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+28,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"ren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("syncfifo_swc_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+31,0,"data_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"ram_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"addr_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+24,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+28,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+5,0,"raddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+6,0,"waddr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+7,0,"raddr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("fifo_ram", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+8+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsyncfifo_swc_tb___024root__trace_init_top(Vsyncfifo_swc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyncfifo_swc_tb___024root__trace_init_top\n"); );
    // Body
    Vsyncfifo_swc_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsyncfifo_swc_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vsyncfifo_swc_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsyncfifo_swc_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsyncfifo_swc_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vsyncfifo_swc_tb___024root__trace_register(Vsyncfifo_swc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyncfifo_swc_tb___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vsyncfifo_swc_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vsyncfifo_swc_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vsyncfifo_swc_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vsyncfifo_swc_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsyncfifo_swc_tb___024root__trace_const_0_sub_0(Vsyncfifo_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsyncfifo_swc_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyncfifo_swc_tb___024root__trace_const_0\n"); );
    // Init
    Vsyncfifo_swc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsyncfifo_swc_tb___024root*>(voidSelf);
    Vsyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsyncfifo_swc_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsyncfifo_swc_tb___024root__trace_const_0_sub_0(Vsyncfifo_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyncfifo_swc_tb___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+31,(0x20U),32);
    bufp->fullIData(oldp+32,(0x10U),32);
    bufp->fullIData(oldp+33,(4U),32);
}

VL_ATTR_COLD void Vsyncfifo_swc_tb___024root__trace_full_0_sub_0(Vsyncfifo_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsyncfifo_swc_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyncfifo_swc_tb___024root__trace_full_0\n"); );
    // Init
    Vsyncfifo_swc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsyncfifo_swc_tb___024root*>(voidSelf);
    Vsyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsyncfifo_swc_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsyncfifo_swc_tb___024root__trace_full_0_sub_0(Vsyncfifo_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsyncfifo_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsyncfifo_swc_tb___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+1,((0xffffU & vlSelf->syncfifo_swc_tb__DOT____Vcellout__syncfifo_swc_inst__rdata)),16);
    bufp->fullBit(oldp+2,(vlSelf->syncfifo_swc_tb__DOT__empty));
    bufp->fullIData(oldp+3,(vlSelf->syncfifo_swc_tb__DOT____Vcellout__syncfifo_swc_inst__rdata),32);
    bufp->fullCData(oldp+4,((0xfU & (IData)(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__waddr_ptr))),4);
    bufp->fullCData(oldp+5,((0xfU & (IData)(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__raddr_ptr))),4);
    bufp->fullCData(oldp+6,(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__waddr_ptr),5);
    bufp->fullCData(oldp+7,(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__raddr_ptr),5);
    bufp->fullIData(oldp+8,(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram[0]),32);
    bufp->fullIData(oldp+9,(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram[1]),32);
    bufp->fullIData(oldp+10,(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram[2]),32);
    bufp->fullIData(oldp+11,(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram[3]),32);
    bufp->fullIData(oldp+12,(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram[4]),32);
    bufp->fullIData(oldp+13,(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram[5]),32);
    bufp->fullIData(oldp+14,(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram[6]),32);
    bufp->fullIData(oldp+15,(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram[7]),32);
    bufp->fullIData(oldp+16,(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram[8]),32);
    bufp->fullIData(oldp+17,(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram[9]),32);
    bufp->fullIData(oldp+18,(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram[10]),32);
    bufp->fullIData(oldp+19,(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram[11]),32);
    bufp->fullIData(oldp+20,(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram[12]),32);
    bufp->fullIData(oldp+21,(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram[13]),32);
    bufp->fullIData(oldp+22,(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram[14]),32);
    bufp->fullIData(oldp+23,(vlSelf->syncfifo_swc_tb__DOT__syncfifo_swc_inst__DOT__fifo_ram[15]),32);
    bufp->fullBit(oldp+24,(vlSelf->syncfifo_swc_tb__DOT__rstn));
    bufp->fullBit(oldp+25,(vlSelf->syncfifo_swc_tb__DOT__clk));
    bufp->fullBit(oldp+26,(vlSelf->syncfifo_swc_tb__DOT__wen));
    bufp->fullSData(oldp+27,(vlSelf->syncfifo_swc_tb__DOT__wdata),16);
    bufp->fullBit(oldp+28,(vlSelf->syncfifo_swc_tb__DOT__full));
    bufp->fullBit(oldp+29,(vlSelf->syncfifo_swc_tb__DOT__ren));
    bufp->fullIData(oldp+30,(vlSelf->syncfifo_swc_tb__DOT__wdata),32);
}
