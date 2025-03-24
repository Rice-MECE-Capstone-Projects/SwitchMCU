// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbranch_prediction_tb__Syms.h"


void Vbranch_prediction_tb___024root__trace_chg_0_sub_0(Vbranch_prediction_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vbranch_prediction_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_prediction_tb___024root__trace_chg_0\n"); );
    // Init
    Vbranch_prediction_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbranch_prediction_tb___024root*>(voidSelf);
    Vbranch_prediction_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vbranch_prediction_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vbranch_prediction_tb___024root__trace_chg_0_sub_0(Vbranch_prediction_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbranch_prediction_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_prediction_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+0,(vlSelf->branch_prediction_tb__DOT__prediction_type),2);
        bufp->chgBit(oldp+1,(vlSelf->branch_prediction_tb__DOT__curr_branch_temp));
        bufp->chgIData(oldp+2,(vlSelf->branch_prediction_tb__DOT__temp_imm),32);
        bufp->chgIData(oldp+3,(vlSelf->branch_prediction_tb__DOT__temp_pc),32);
        bufp->chgIData(oldp+4,(((IData)(vlSelf->branch_prediction_tb__DOT__reset)
                                 ? 0x13U : ((0x98967fU 
                                             >= (0xffffffU 
                                                 & (vlSelf->branch_prediction_tb__DOT__temp_pc 
                                                    >> 2U)))
                                             ? vlSelf->branch_prediction_tb__DOT__branch_inst__DOT__ins_mem__DOT__memory
                                            [(0xffffffU 
                                              & (vlSelf->branch_prediction_tb__DOT__temp_pc 
                                                 >> 2U))]
                                             : 0U))),32);
        bufp->chgIData(oldp+5,(((0x98967fU >= (0xffffffU 
                                               & (vlSelf->branch_prediction_tb__DOT__temp_pc 
                                                  >> 2U)))
                                 ? vlSelf->branch_prediction_tb__DOT__branch_inst__DOT__ins_mem__DOT__memory
                                [(0xffffffU & (vlSelf->branch_prediction_tb__DOT__temp_pc 
                                               >> 2U))]
                                 : 0U)),32);
        bufp->chgIData(oldp+6,(VL_SHIFTR_III(32,32,32, vlSelf->branch_prediction_tb__DOT__temp_pc, 2U)),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+7,(vlSelf->branch_prediction_tb__DOT__prediction));
        bufp->chgBit(oldp+8,(vlSelf->branch_prediction_tb__DOT__branch_inst__DOT__old_branch));
        bufp->chgIData(oldp+9,(vlSelf->branch_prediction_tb__DOT__branch_inst__DOT__pc_temp),32);
        bufp->chgBit(oldp+10,(vlSelf->branch_prediction_tb__DOT__branch_inst__DOT__prev_prediction));
        bufp->chgBit(oldp+11,(vlSelf->branch_prediction_tb__DOT__branch_inst__DOT__predict_trigger_prev));
        bufp->chgBit(oldp+12,(vlSelf->branch_prediction_tb__DOT__branch_inst__DOT__actual_branch));
    }
    bufp->chgBit(oldp+13,(vlSelf->branch_prediction_tb__DOT__predict_trigger));
    bufp->chgBit(oldp+14,(vlSelf->branch_prediction_tb__DOT__clk));
    bufp->chgBit(oldp+15,(vlSelf->branch_prediction_tb__DOT__actual_branch_trigger));
    bufp->chgIData(oldp+16,(((IData)(vlSelf->branch_prediction_tb__DOT__prediction)
                              ? ((vlSelf->branch_prediction_tb__DOT__branch_inst__DOT__pc_temp 
                                  + vlSelf->branch_prediction_tb__DOT__temp_imm) 
                                 - (IData)(4U)) : vlSelf->branch_prediction_tb__DOT__branch_inst__DOT__pc_temp)),32);
    bufp->chgIData(oldp+17,(vlSelf->branch_prediction_tb__DOT__branch_inst__DOT__ins_mem__DOT__pc_reg),32);
}

void Vbranch_prediction_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_prediction_tb___024root__trace_cleanup\n"); );
    // Init
    Vbranch_prediction_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbranch_prediction_tb___024root*>(voidSelf);
    Vbranch_prediction_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
