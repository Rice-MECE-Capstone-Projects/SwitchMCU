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
    tracep->declBit(c+14,0,"predict_trigger",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"prediction_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+16,0,"actual_branch_trigger",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"curr_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"curr_branch_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"pc_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"temp_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"temp_pc_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"temp_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+20,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"prediction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"instruction_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("branch_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+14,0,"predict_trigger",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"prediction_type",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+16,0,"actual_branch_trigger",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"curr_branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"pc",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+20,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"prediction",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"instruction_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"STATIC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+22,0,"ONE_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+23,0,"TWO_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+24,0,"TAKEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+25,0,"NOT_TAKEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+9,0,"old_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"pc_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"pc_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+11,0,"prev_prediction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"predict_trigger_prev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"actual_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ins_mem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+27,0,"MEM_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+15,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"instruction_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"pc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"address_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
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
    bufp->fullIData(oldp+19,(vlSelf->branch_prediction_tb__DOT__temp_pc_o),32);
    bufp->fullBit(oldp+20,(vlSelf->branch_prediction_tb__DOT__reset));
    bufp->fullCData(oldp+21,(0U),2);
    bufp->fullCData(oldp+22,(1U),2);
    bufp->fullCData(oldp+23,(2U),2);
    bufp->fullBit(oldp+24,(1U));
    bufp->fullBit(oldp+25,(0U));
    bufp->fullIData(oldp+26,(0U),32);
    bufp->fullIData(oldp+27,(0x989680U),32);
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
    bufp->fullCData(oldp+1,(vlSelf->branch_prediction_tb__DOT__prediction_type),2);
    bufp->fullBit(oldp+2,(vlSelf->branch_prediction_tb__DOT__curr_branch_temp));
    bufp->fullIData(oldp+3,(vlSelf->branch_prediction_tb__DOT__temp_imm),32);
    bufp->fullIData(oldp+4,(vlSelf->branch_prediction_tb__DOT__temp_pc),32);
    bufp->fullIData(oldp+5,(((IData)(vlSelf->branch_prediction_tb__DOT__reset)
                              ? 0x13U : ((0x98967fU 
                                          >= (0xffffffU 
                                              & (vlSelf->branch_prediction_tb__DOT__temp_pc 
                                                 >> 2U)))
                                          ? vlSelf->branch_prediction_tb__DOT__branch_inst__DOT__ins_mem__DOT__memory
                                         [(0xffffffU 
                                           & (vlSelf->branch_prediction_tb__DOT__temp_pc 
                                              >> 2U))]
                                          : 0U))),32);
    bufp->fullIData(oldp+6,(((0x98967fU >= (0xffffffU 
                                            & (vlSelf->branch_prediction_tb__DOT__temp_pc 
                                               >> 2U)))
                              ? vlSelf->branch_prediction_tb__DOT__branch_inst__DOT__ins_mem__DOT__memory
                             [(0xffffffU & (vlSelf->branch_prediction_tb__DOT__temp_pc 
                                            >> 2U))]
                              : 0U)),32);
    bufp->fullIData(oldp+7,(VL_SHIFTR_III(32,32,32, vlSelf->branch_prediction_tb__DOT__temp_pc, 2U)),32);
    bufp->fullBit(oldp+8,(vlSelf->branch_prediction_tb__DOT__prediction));
    bufp->fullBit(oldp+9,(vlSelf->branch_prediction_tb__DOT__branch_inst__DOT__old_branch));
    bufp->fullIData(oldp+10,(vlSelf->branch_prediction_tb__DOT__branch_inst__DOT__pc_temp),32);
    bufp->fullBit(oldp+11,(vlSelf->branch_prediction_tb__DOT__branch_inst__DOT__prev_prediction));
    bufp->fullBit(oldp+12,(vlSelf->branch_prediction_tb__DOT__branch_inst__DOT__predict_trigger_prev));
    bufp->fullBit(oldp+13,(vlSelf->branch_prediction_tb__DOT__branch_inst__DOT__actual_branch));
    bufp->fullBit(oldp+14,(vlSelf->branch_prediction_tb__DOT__predict_trigger));
    bufp->fullBit(oldp+15,(vlSelf->branch_prediction_tb__DOT__clk));
    bufp->fullBit(oldp+16,(vlSelf->branch_prediction_tb__DOT__actual_branch_trigger));
    bufp->fullIData(oldp+17,(((IData)(vlSelf->branch_prediction_tb__DOT__prediction)
                               ? ((vlSelf->branch_prediction_tb__DOT__branch_inst__DOT__pc_temp 
                                   + vlSelf->branch_prediction_tb__DOT__temp_imm) 
                                  - (IData)(4U)) : vlSelf->branch_prediction_tb__DOT__branch_inst__DOT__pc_temp)),32);
    bufp->fullIData(oldp+18,(vlSelf->branch_prediction_tb__DOT__branch_inst__DOT__ins_mem__DOT__pc_reg),32);
}
