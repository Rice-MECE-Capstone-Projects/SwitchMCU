// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vexu_upper_tb__Syms.h"


VL_ATTR_COLD void Vexu_upper_tb___024root__trace_init_sub__TOP__0(Vexu_upper_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_upper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_upper_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("exu_upper_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+15,0,"hclk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"hrstn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"cycle_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+3,0,"dec_upper_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"dec_lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"dec_auipc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"dec_imm_type_u",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+7,0,"dec_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+8,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"reg_waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+11,0,"reg_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"reg_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+9,0,"exu_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("uut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+15,0,"hclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"hrstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"cycle_cnt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+3,0,"dec_upper_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"dec_lui",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"dec_auipc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"dec_imm_type_u",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+7,0,"dec_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+8,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"reg_waddr",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+11,0,"reg_wen",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"reg_wdata",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+9,0,"exu_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"mid_reg_waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+11,0,"mid_reg_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"mid_reg_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vexu_upper_tb___024root__trace_init_top(Vexu_upper_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_upper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_upper_tb___024root__trace_init_top\n"); );
    // Body
    Vexu_upper_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vexu_upper_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vexu_upper_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vexu_upper_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vexu_upper_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vexu_upper_tb___024root__trace_register(Vexu_upper_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_upper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_upper_tb___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vexu_upper_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vexu_upper_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vexu_upper_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vexu_upper_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vexu_upper_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_upper_tb___024root__trace_const_0\n"); );
    // Init
    Vexu_upper_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vexu_upper_tb___024root*>(voidSelf);
    Vexu_upper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vexu_upper_tb___024root__trace_full_0_sub_0(Vexu_upper_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vexu_upper_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_upper_tb___024root__trace_full_0\n"); );
    // Init
    Vexu_upper_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vexu_upper_tb___024root*>(voidSelf);
    Vexu_upper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vexu_upper_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vexu_upper_tb___024root__trace_full_0_sub_0(Vexu_upper_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_upper_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_upper_tb___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->exu_upper_tb__DOT__hrstn));
    bufp->fullCData(oldp+2,(vlSelf->exu_upper_tb__DOT__cycle_cnt),4);
    bufp->fullBit(oldp+3,(vlSelf->exu_upper_tb__DOT__dec_upper_en));
    bufp->fullBit(oldp+4,(vlSelf->exu_upper_tb__DOT__dec_lui));
    bufp->fullBit(oldp+5,(vlSelf->exu_upper_tb__DOT__dec_auipc));
    bufp->fullIData(oldp+6,(vlSelf->exu_upper_tb__DOT__dec_imm_type_u),20);
    bufp->fullCData(oldp+7,(vlSelf->exu_upper_tb__DOT__dec_rd),5);
    bufp->fullIData(oldp+8,(vlSelf->exu_upper_tb__DOT__pc),32);
    bufp->fullBit(oldp+9,(vlSelf->exu_upper_tb__DOT__exu_stall));
    bufp->fullCData(oldp+10,((((IData)(vlSelf->exu_upper_tb__DOT__uut__DOT__mid_reg_wen)
                                ? 0x1fU : 0U) & (((IData)(vlSelf->exu_upper_tb__DOT__uut__DOT__mid_reg_wen)
                                                   ? (IData)(vlSelf->exu_upper_tb__DOT__uut__DOT__mid_reg_waddr)
                                                   : 0U) 
                                                 & ((IData)(vlSelf->exu_upper_tb__DOT__uut__DOT__mid_reg_wen)
                                                     ? 0x1fU
                                                     : 0U)))),5);
    bufp->fullBit(oldp+11,(vlSelf->exu_upper_tb__DOT__uut__DOT__mid_reg_wen));
    bufp->fullIData(oldp+12,((((IData)(vlSelf->exu_upper_tb__DOT__uut__DOT__mid_reg_wen)
                                ? 0xffffffffU : 0U) 
                              & (((IData)(vlSelf->exu_upper_tb__DOT__uut__DOT__mid_reg_wen)
                                   ? vlSelf->exu_upper_tb__DOT__uut__DOT__mid_reg_wdata
                                   : 0U) & ((IData)(vlSelf->exu_upper_tb__DOT__uut__DOT__mid_reg_wen)
                                             ? 0xffffffffU
                                             : 0U)))),32);
    bufp->fullCData(oldp+13,(vlSelf->exu_upper_tb__DOT__uut__DOT__mid_reg_waddr),5);
    bufp->fullIData(oldp+14,(vlSelf->exu_upper_tb__DOT__uut__DOT__mid_reg_wdata),32);
    bufp->fullBit(oldp+15,(vlSelf->exu_upper_tb__DOT__hclk));
}
