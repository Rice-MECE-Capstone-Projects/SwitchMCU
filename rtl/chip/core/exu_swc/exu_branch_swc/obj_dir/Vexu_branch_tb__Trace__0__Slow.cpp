// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vexu_branch_tb__Syms.h"


VL_ATTR_COLD void Vexu_branch_tb___024root__trace_init_sub__TOP__0(Vexu_branch_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_branch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_branch_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("exu_branch_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+29,0,"hclk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"hrstn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"cycle_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+15,0,"flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+2,0,"dec_branch_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"dec_beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"dec_bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"dec_blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"dec_bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"dec_bltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"dec_bgeu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"dec_imm_type_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+10,0,"dec_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+11,0,"dec_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+31,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+16,0,"pc_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"pc_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"reg_rdata_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"reg_raddr_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+19,0,"reg_ren_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"reg_rdata_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"reg_raddr_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+21,0,"reg_ren_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("exu_branch_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+29,0,"hclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"hrstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"cycle_cnt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+15,0,"flush",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+2,0,"dec_branch_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"dec_beq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"dec_bne",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"dec_blt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"dec_bge",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"dec_bltu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"dec_bgeu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"dec_imm_type_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+10,0,"dec_rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+11,0,"dec_rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+31,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+16,0,"pc_write",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"pc_wdata",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"reg_rdata_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"reg_raddr_1",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+19,0,"reg_ren_1",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"reg_rdata_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"reg_raddr_2",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+21,0,"reg_ren_2",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"mid_reg_raddr_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+23,0,"mid_reg_ren_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"mid_reg_raddr_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+25,0,"mid_reg_ren_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"mid_pc_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"mid_pc_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"sext_imm_type_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"pc_real",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"pc_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+34,0,"branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"FLUSH_DISABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"FLUSH_CYCLE_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"FLUSH_CYCLE_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"mid_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vexu_branch_tb___024root__trace_init_top(Vexu_branch_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_branch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_branch_tb___024root__trace_init_top\n"); );
    // Body
    Vexu_branch_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vexu_branch_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vexu_branch_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vexu_branch_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vexu_branch_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vexu_branch_tb___024root__trace_register(Vexu_branch_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_branch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_branch_tb___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vexu_branch_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vexu_branch_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vexu_branch_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vexu_branch_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vexu_branch_tb___024root__trace_const_0_sub_0(Vexu_branch_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vexu_branch_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_branch_tb___024root__trace_const_0\n"); );
    // Init
    Vexu_branch_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vexu_branch_tb___024root*>(voidSelf);
    Vexu_branch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vexu_branch_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vexu_branch_tb___024root__trace_const_0_sub_0(Vexu_branch_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_branch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_branch_tb___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+35,(0U),32);
    bufp->fullIData(oldp+36,(1U),32);
    bufp->fullIData(oldp+37,(2U),32);
}

VL_ATTR_COLD void Vexu_branch_tb___024root__trace_full_0_sub_0(Vexu_branch_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vexu_branch_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_branch_tb___024root__trace_full_0\n"); );
    // Init
    Vexu_branch_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vexu_branch_tb___024root*>(voidSelf);
    Vexu_branch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vexu_branch_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vexu_branch_tb___024root__trace_full_0_sub_0(Vexu_branch_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_branch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_branch_tb___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->exu_branch_tb__DOT__hrstn));
    bufp->fullBit(oldp+2,(vlSelf->exu_branch_tb__DOT__dec_branch_en));
    bufp->fullBit(oldp+3,(vlSelf->exu_branch_tb__DOT__dec_beq));
    bufp->fullBit(oldp+4,(vlSelf->exu_branch_tb__DOT__dec_bne));
    bufp->fullBit(oldp+5,(vlSelf->exu_branch_tb__DOT__dec_blt));
    bufp->fullBit(oldp+6,(vlSelf->exu_branch_tb__DOT__dec_bge));
    bufp->fullBit(oldp+7,(vlSelf->exu_branch_tb__DOT__dec_bltu));
    bufp->fullBit(oldp+8,(vlSelf->exu_branch_tb__DOT__dec_bgeu));
    bufp->fullSData(oldp+9,(vlSelf->exu_branch_tb__DOT__dec_imm_type_b),13);
    bufp->fullCData(oldp+10,(vlSelf->exu_branch_tb__DOT__dec_rs1),5);
    bufp->fullCData(oldp+11,(vlSelf->exu_branch_tb__DOT__dec_rs2),5);
    bufp->fullIData(oldp+12,(vlSelf->exu_branch_tb__DOT__reg_rdata_1),32);
    bufp->fullIData(oldp+13,(vlSelf->exu_branch_tb__DOT__reg_rdata_2),32);
    bufp->fullIData(oldp+14,((((- (IData)((1U & ((IData)(vlSelf->exu_branch_tb__DOT__dec_imm_type_b) 
                                                 >> 0xbU)))) 
                               << 0xdU) | (IData)(vlSelf->exu_branch_tb__DOT__dec_imm_type_b))),32);
    bufp->fullCData(oldp+15,((((IData)(vlSelf->exu_branch_tb__DOT__dec_branch_en)
                                ? 3U : 0U) & (((IData)(vlSelf->exu_branch_tb__DOT__dec_branch_en)
                                                ? (IData)(vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_flush)
                                                : 0U) 
                                              & ((IData)(vlSelf->exu_branch_tb__DOT__dec_branch_en)
                                                  ? 3U
                                                  : 0U)))),2);
    bufp->fullBit(oldp+16,(((IData)(vlSelf->exu_branch_tb__DOT__dec_branch_en) 
                            & (IData)(vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_pc_write))));
    bufp->fullIData(oldp+17,((((IData)(vlSelf->exu_branch_tb__DOT__dec_branch_en)
                                ? 0xffffffffU : 0U) 
                              & (((IData)(vlSelf->exu_branch_tb__DOT__dec_branch_en)
                                   ? vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_pc_wdata
                                   : 0U) & ((IData)(vlSelf->exu_branch_tb__DOT__dec_branch_en)
                                             ? 0xffffffffU
                                             : 0U)))),32);
    bufp->fullCData(oldp+18,(((((IData)(vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_reg_ren_1)
                                 ? 0x1fU : 0U) & (((IData)(vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_reg_ren_1)
                                                    ? (IData)(vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_reg_raddr_1)
                                                    : 0U) 
                                                  & ((IData)(vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_reg_ren_1)
                                                      ? 0x1fU
                                                      : 0U))) 
                              | (IData)(vlSelf->exu_branch_tb__DOT__reg_raddr_1__strong__out11))),5);
    bufp->fullBit(oldp+19,(((IData)(vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_reg_ren_1) 
                            | (IData)(vlSelf->exu_branch_tb__DOT__reg_ren_1__strong__out13))));
    bufp->fullCData(oldp+20,(((((IData)(vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_reg_ren_2)
                                 ? 0x1fU : 0U) & (((IData)(vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_reg_ren_2)
                                                    ? (IData)(vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_reg_raddr_2)
                                                    : 0U) 
                                                  & ((IData)(vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_reg_ren_2)
                                                      ? 0x1fU
                                                      : 0U))) 
                              | (IData)(vlSelf->exu_branch_tb__DOT__reg_raddr_2__strong__out15))),5);
    bufp->fullBit(oldp+21,(((IData)(vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_reg_ren_2) 
                            | (IData)(vlSelf->exu_branch_tb__DOT__reg_ren_2__strong__out17))));
    bufp->fullCData(oldp+22,(vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_reg_raddr_1),5);
    bufp->fullBit(oldp+23,(vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_reg_ren_1));
    bufp->fullCData(oldp+24,(vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_reg_raddr_2),5);
    bufp->fullBit(oldp+25,(vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_reg_ren_2));
    bufp->fullBit(oldp+26,(vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_pc_write));
    bufp->fullIData(oldp+27,(vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_pc_wdata),32);
    bufp->fullCData(oldp+28,(vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_flush),2);
    bufp->fullBit(oldp+29,(vlSelf->exu_branch_tb__DOT__hclk));
    bufp->fullCData(oldp+30,(vlSelf->exu_branch_tb__DOT__cycle_cnt),4);
    bufp->fullIData(oldp+31,(vlSelf->exu_branch_tb__DOT__pc),32);
    bufp->fullIData(oldp+32,((vlSelf->exu_branch_tb__DOT__pc 
                              - (IData)(8U))),32);
    bufp->fullIData(oldp+33,(vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__pc_next),32);
    bufp->fullBit(oldp+34,(vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__branch));
}
