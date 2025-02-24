// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbranch_prediction_tb__Syms.h"


VL_ATTR_COLD void Vbranch_prediction_tb___024root__trace_init_sub__TOP__0(Vbranch_prediction_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbranch_prediction_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_prediction_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("branch_prediction_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+4,0,"predict_trigger",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"prediction_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+7,0,"actual_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"temp_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"temp_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"prediction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("branch_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+4,0,"predict_trigger",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"prediction_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+7,0,"actual_branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"pc",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"prediction",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"STATIC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+13,0,"ONE_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+14,0,"TWO_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+15,0,"TAKEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+16,0,"NOT_TAKEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+2,0,"old_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"pc_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17,0,"prev_prediction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vbranch_prediction_tb___024root__trace_init_top(Vbranch_prediction_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbranch_prediction_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_prediction_tb___024root__trace_init_top\n"); );
    // Body
    Vbranch_prediction_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vbranch_prediction_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vbranch_prediction_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vbranch_prediction_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vbranch_prediction_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vbranch_prediction_tb___024root__trace_register(Vbranch_prediction_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbranch_prediction_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_prediction_tb___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vbranch_prediction_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vbranch_prediction_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vbranch_prediction_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vbranch_prediction_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vbranch_prediction_tb___024root__trace_const_0_sub_0(Vbranch_prediction_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vbranch_prediction_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_prediction_tb___024root__trace_const_0\n"); );
    // Init
    Vbranch_prediction_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbranch_prediction_tb___024root*>(voidSelf);
    Vbranch_prediction_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vbranch_prediction_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vbranch_prediction_tb___024root__trace_const_0_sub_0(Vbranch_prediction_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbranch_prediction_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_prediction_tb___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+11,(vlSelf->branch_prediction_tb__DOT__reset));
    bufp->fullCData(oldp+12,(0U),2);
    bufp->fullCData(oldp+13,(1U),2);
    bufp->fullCData(oldp+14,(2U),2);
    bufp->fullBit(oldp+15,(0U));
    bufp->fullBit(oldp+16,(1U));
    bufp->fullBit(oldp+17,(vlSelf->branch_prediction_tb__DOT__branch_inst__DOT__prev_prediction));
}

VL_ATTR_COLD void Vbranch_prediction_tb___024root__trace_full_0_sub_0(Vbranch_prediction_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vbranch_prediction_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_prediction_tb___024root__trace_full_0\n"); );
    // Init
    Vbranch_prediction_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbranch_prediction_tb___024root*>(voidSelf);
    Vbranch_prediction_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vbranch_prediction_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vbranch_prediction_tb___024root__trace_full_0_sub_0(Vbranch_prediction_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbranch_prediction_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_prediction_tb___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->branch_prediction_tb__DOT__prediction));
    bufp->fullBit(oldp+2,(vlSelf->branch_prediction_tb__DOT__branch_inst__DOT__old_branch));
    bufp->fullIData(oldp+3,(vlSelf->branch_prediction_tb__DOT__branch_inst__DOT__pc_temp),32);
    bufp->fullBit(oldp+4,(vlSelf->branch_prediction_tb__DOT__predict_trigger));
    bufp->fullBit(oldp+5,(vlSelf->branch_prediction_tb__DOT__clk));
    bufp->fullCData(oldp+6,(vlSelf->branch_prediction_tb__DOT__prediction_type),2);
    bufp->fullBit(oldp+7,(vlSelf->branch_prediction_tb__DOT__actual_branch));
    bufp->fullIData(oldp+8,(vlSelf->branch_prediction_tb__DOT__temp_imm),32);
    bufp->fullIData(oldp+9,((((IData)(vlSelf->branch_prediction_tb__DOT__prediction)
                               ? (vlSelf->branch_prediction_tb__DOT__branch_inst__DOT__pc_temp 
                                  + vlSelf->branch_prediction_tb__DOT__temp_imm)
                               : vlSelf->branch_prediction_tb__DOT__branch_inst__DOT__pc_temp) 
                             | vlSelf->branch_prediction_tb__DOT__temp_pc)),32);
    bufp->fullIData(oldp+10,(vlSelf->branch_prediction_tb__DOT__temp_pc),32);
}
