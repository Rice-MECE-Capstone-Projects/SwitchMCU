// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vexu_jump_tb__Syms.h"


VL_ATTR_COLD void Vexu_jump_tb___024root__trace_init_sub__TOP__0(Vexu_jump_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_jump_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_jump_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("exu_jump_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+26,0,"hclk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"hrstn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"cycle_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+2,0,"dec_jump_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"dec_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"dec_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"dec_imm_type_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+6,0,"dec_imm_type_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+7,0,"dec_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+8,0,"dec_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+24,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+27,0,"pc_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"pc_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+12,0,"reg_waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+13,0,"reg_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"reg_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"reg_raddr_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+16,0,"reg_ren_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"reg_rdata_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("exu_jump_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+26,0,"hclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"hrstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"cycle_cnt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+2,0,"dec_jump_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"dec_jal",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"dec_jalr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"dec_imm_type_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+6,0,"dec_imm_type_j",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+7,0,"dec_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+8,0,"dec_rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+24,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+27,0,"pc_write",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"pc_wdata",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"flush",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+12,0,"reg_waddr",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+13,0,"reg_wen",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"reg_wdata",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"reg_raddr_1",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+16,0,"reg_ren_1",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"reg_rdata_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"mid_reg_waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+13,0,"mid_reg_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"mid_reg_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"mid_reg_raddr_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+16,0,"mid_reg_ren_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"mid_pc_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"mid_pc_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"sext_imm_type_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"sext_imm_type_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"pc_real",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"pc_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"FLUSH_DISABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"FLUSH_CYCLE_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"FLUSH_CYCLE_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"mid_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vexu_jump_tb___024root__trace_init_top(Vexu_jump_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_jump_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_jump_tb___024root__trace_init_top\n"); );
    // Body
    Vexu_jump_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vexu_jump_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vexu_jump_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vexu_jump_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vexu_jump_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vexu_jump_tb___024root__trace_register(Vexu_jump_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_jump_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_jump_tb___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vexu_jump_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vexu_jump_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vexu_jump_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vexu_jump_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vexu_jump_tb___024root__trace_const_0_sub_0(Vexu_jump_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vexu_jump_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_jump_tb___024root__trace_const_0\n"); );
    // Init
    Vexu_jump_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vexu_jump_tb___024root*>(voidSelf);
    Vexu_jump_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vexu_jump_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vexu_jump_tb___024root__trace_const_0_sub_0(Vexu_jump_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_jump_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_jump_tb___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+31,(0U),32);
    bufp->fullIData(oldp+32,(1U),32);
    bufp->fullIData(oldp+33,(2U),32);
}

VL_ATTR_COLD void Vexu_jump_tb___024root__trace_full_0_sub_0(Vexu_jump_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vexu_jump_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_jump_tb___024root__trace_full_0\n"); );
    // Init
    Vexu_jump_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vexu_jump_tb___024root*>(voidSelf);
    Vexu_jump_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vexu_jump_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vexu_jump_tb___024root__trace_full_0_sub_0(Vexu_jump_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_jump_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_jump_tb___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->exu_jump_tb__DOT__hrstn));
    bufp->fullBit(oldp+2,(vlSelf->exu_jump_tb__DOT__dec_jump_en));
    bufp->fullBit(oldp+3,(vlSelf->exu_jump_tb__DOT__dec_jal));
    bufp->fullBit(oldp+4,(vlSelf->exu_jump_tb__DOT__dec_jalr));
    bufp->fullSData(oldp+5,(vlSelf->exu_jump_tb__DOT__dec_imm_type_i),12);
    bufp->fullIData(oldp+6,(vlSelf->exu_jump_tb__DOT__dec_imm_type_j),21);
    bufp->fullCData(oldp+7,(vlSelf->exu_jump_tb__DOT__dec_rd),5);
    bufp->fullCData(oldp+8,(vlSelf->exu_jump_tb__DOT__dec_rs1),5);
    bufp->fullIData(oldp+9,(vlSelf->exu_jump_tb__DOT__reg_rdata_1),32);
    bufp->fullIData(oldp+10,((((- (IData)((1U & (vlSelf->exu_jump_tb__DOT__dec_imm_type_j 
                                                 >> 0x13U)))) 
                               << 0x15U) | vlSelf->exu_jump_tb__DOT__dec_imm_type_j)),32);
    bufp->fullIData(oldp+11,((((- (IData)((1U & ((IData)(vlSelf->exu_jump_tb__DOT__dec_imm_type_i) 
                                                 >> 0xbU)))) 
                               << 0xcU) | (IData)(vlSelf->exu_jump_tb__DOT__dec_imm_type_i))),32);
    bufp->fullCData(oldp+12,((((IData)(vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_wen)
                                ? 0x1fU : 0U) & (((IData)(vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_wen)
                                                   ? (IData)(vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_waddr)
                                                   : 0U) 
                                                 & ((IData)(vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_wen)
                                                     ? 0x1fU
                                                     : 0U)))),5);
    bufp->fullBit(oldp+13,(vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_wen));
    bufp->fullIData(oldp+14,((((IData)(vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_wen)
                                ? 0xffffffffU : 0U) 
                              & (((IData)(vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_wen)
                                   ? vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_wdata
                                   : 0U) & ((IData)(vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_wen)
                                             ? 0xffffffffU
                                             : 0U)))),32);
    bufp->fullCData(oldp+15,((((IData)(vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_ren_1)
                                ? 0x1fU : 0U) & (((IData)(vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_ren_1)
                                                   ? (IData)(vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_raddr_1)
                                                   : 0U) 
                                                 & ((IData)(vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_ren_1)
                                                     ? 0x1fU
                                                     : 0U)))),5);
    bufp->fullBit(oldp+16,(vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_ren_1));
    bufp->fullCData(oldp+17,(vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_waddr),5);
    bufp->fullIData(oldp+18,(vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_wdata),32);
    bufp->fullCData(oldp+19,(vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_raddr_1),5);
    bufp->fullBit(oldp+20,(vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_pc_write));
    bufp->fullIData(oldp+21,(vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_pc_wdata),32);
    bufp->fullCData(oldp+22,(vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_flush),2);
    bufp->fullCData(oldp+23,(vlSelf->exu_jump_tb__DOT__cycle_cnt),4);
    bufp->fullIData(oldp+24,(vlSelf->exu_jump_tb__DOT__pc),32);
    bufp->fullIData(oldp+25,((vlSelf->exu_jump_tb__DOT__pc 
                              - (IData)(8U))),32);
    bufp->fullBit(oldp+26,(vlSelf->exu_jump_tb__DOT__hclk));
    bufp->fullBit(oldp+27,(((IData)(vlSelf->exu_jump_tb__DOT__dec_jump_en) 
                            & (IData)(vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_pc_write))));
    bufp->fullIData(oldp+28,((((IData)(vlSelf->exu_jump_tb__DOT__dec_jump_en)
                                ? 0xffffffffU : 0U) 
                              & (((IData)(vlSelf->exu_jump_tb__DOT__dec_jump_en)
                                   ? vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_pc_wdata
                                   : 0U) & ((IData)(vlSelf->exu_jump_tb__DOT__dec_jump_en)
                                             ? 0xffffffffU
                                             : 0U)))),32);
    bufp->fullCData(oldp+29,((((IData)(vlSelf->exu_jump_tb__DOT__dec_jump_en)
                                ? 3U : 0U) & (((IData)(vlSelf->exu_jump_tb__DOT__dec_jump_en)
                                                ? (IData)(vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_flush)
                                                : 0U) 
                                              & ((IData)(vlSelf->exu_jump_tb__DOT__dec_jump_en)
                                                  ? 3U
                                                  : 0U)))),2);
    bufp->fullIData(oldp+30,(vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__pc_next),32);
}
