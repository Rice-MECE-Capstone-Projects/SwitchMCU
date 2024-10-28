// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vexu_branch_tb__Syms.h"


void Vexu_branch_tb___024root__trace_chg_0_sub_0(Vexu_branch_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vexu_branch_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_branch_tb___024root__trace_chg_0\n"); );
    // Init
    Vexu_branch_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vexu_branch_tb___024root*>(voidSelf);
    Vexu_branch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vexu_branch_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vexu_branch_tb___024root__trace_chg_0_sub_0(Vexu_branch_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_branch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_branch_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->exu_branch_tb__DOT__hrstn));
        bufp->chgBit(oldp+1,(vlSelf->exu_branch_tb__DOT__dec_branch_en));
        bufp->chgBit(oldp+2,(vlSelf->exu_branch_tb__DOT__dec_beq));
        bufp->chgBit(oldp+3,(vlSelf->exu_branch_tb__DOT__dec_bne));
        bufp->chgBit(oldp+4,(vlSelf->exu_branch_tb__DOT__dec_blt));
        bufp->chgBit(oldp+5,(vlSelf->exu_branch_tb__DOT__dec_bge));
        bufp->chgBit(oldp+6,(vlSelf->exu_branch_tb__DOT__dec_bltu));
        bufp->chgBit(oldp+7,(vlSelf->exu_branch_tb__DOT__dec_bgeu));
        bufp->chgSData(oldp+8,(vlSelf->exu_branch_tb__DOT__dec_imm_type_b),13);
        bufp->chgCData(oldp+9,(vlSelf->exu_branch_tb__DOT__dec_rs1),5);
        bufp->chgCData(oldp+10,(vlSelf->exu_branch_tb__DOT__dec_rs2),5);
        bufp->chgIData(oldp+11,(vlSelf->exu_branch_tb__DOT__reg_rdata_1),32);
        bufp->chgIData(oldp+12,(vlSelf->exu_branch_tb__DOT__reg_rdata_2),32);
        bufp->chgIData(oldp+13,((((- (IData)((1U & 
                                              ((IData)(vlSelf->exu_branch_tb__DOT__dec_imm_type_b) 
                                               >> 0xbU)))) 
                                  << 0xdU) | (IData)(vlSelf->exu_branch_tb__DOT__dec_imm_type_b))),32);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[2U]) 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgCData(oldp+14,((((IData)(vlSelf->exu_branch_tb__DOT__dec_branch_en)
                                   ? 3U : 0U) & (((IData)(vlSelf->exu_branch_tb__DOT__dec_branch_en)
                                                   ? (IData)(vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_flush)
                                                   : 0U) 
                                                 & ((IData)(vlSelf->exu_branch_tb__DOT__dec_branch_en)
                                                     ? 3U
                                                     : 0U)))),2);
        bufp->chgBit(oldp+15,(((IData)(vlSelf->exu_branch_tb__DOT__dec_branch_en) 
                               & (IData)(vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_pc_write))));
        bufp->chgIData(oldp+16,((((IData)(vlSelf->exu_branch_tb__DOT__dec_branch_en)
                                   ? 0xffffffffU : 0U) 
                                 & (((IData)(vlSelf->exu_branch_tb__DOT__dec_branch_en)
                                      ? vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_pc_wdata
                                      : 0U) & ((IData)(vlSelf->exu_branch_tb__DOT__dec_branch_en)
                                                ? 0xffffffffU
                                                : 0U)))),32);
        bufp->chgCData(oldp+17,(((((IData)(vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_reg_ren_1)
                                    ? 0x1fU : 0U) & 
                                  (((IData)(vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_reg_ren_1)
                                     ? (IData)(vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_reg_raddr_1)
                                     : 0U) & ((IData)(vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_reg_ren_1)
                                               ? 0x1fU
                                               : 0U))) 
                                 | (IData)(vlSelf->exu_branch_tb__DOT__reg_raddr_1__strong__out11))),5);
        bufp->chgBit(oldp+18,(((IData)(vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_reg_ren_1) 
                               | (IData)(vlSelf->exu_branch_tb__DOT__reg_ren_1__strong__out13))));
        bufp->chgCData(oldp+19,(((((IData)(vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_reg_ren_2)
                                    ? 0x1fU : 0U) & 
                                  (((IData)(vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_reg_ren_2)
                                     ? (IData)(vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_reg_raddr_2)
                                     : 0U) & ((IData)(vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_reg_ren_2)
                                               ? 0x1fU
                                               : 0U))) 
                                 | (IData)(vlSelf->exu_branch_tb__DOT__reg_raddr_2__strong__out15))),5);
        bufp->chgBit(oldp+20,(((IData)(vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_reg_ren_2) 
                               | (IData)(vlSelf->exu_branch_tb__DOT__reg_ren_2__strong__out17))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+21,(vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_reg_raddr_1),5);
        bufp->chgBit(oldp+22,(vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_reg_ren_1));
        bufp->chgCData(oldp+23,(vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_reg_raddr_2),5);
        bufp->chgBit(oldp+24,(vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_reg_ren_2));
        bufp->chgBit(oldp+25,(vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_pc_write));
        bufp->chgIData(oldp+26,(vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_pc_wdata),32);
        bufp->chgCData(oldp+27,(vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__mid_flush),2);
    }
    bufp->chgBit(oldp+28,(vlSelf->exu_branch_tb__DOT__hclk));
    bufp->chgCData(oldp+29,(vlSelf->exu_branch_tb__DOT__cycle_cnt),4);
    bufp->chgIData(oldp+30,(vlSelf->exu_branch_tb__DOT__pc),32);
    bufp->chgIData(oldp+31,((vlSelf->exu_branch_tb__DOT__pc 
                             - (IData)(8U))),32);
    bufp->chgIData(oldp+32,(vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__pc_next),32);
    bufp->chgBit(oldp+33,(vlSelf->exu_branch_tb__DOT__exu_branch_inst__DOT__branch));
}

void Vexu_branch_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_branch_tb___024root__trace_cleanup\n"); );
    // Init
    Vexu_branch_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vexu_branch_tb___024root*>(voidSelf);
    Vexu_branch_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
