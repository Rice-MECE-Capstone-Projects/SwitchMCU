// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vexu_jump_tb__Syms.h"


void Vexu_jump_tb___024root__trace_chg_0_sub_0(Vexu_jump_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vexu_jump_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_jump_tb___024root__trace_chg_0\n"); );
    // Init
    Vexu_jump_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vexu_jump_tb___024root*>(voidSelf);
    Vexu_jump_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vexu_jump_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vexu_jump_tb___024root__trace_chg_0_sub_0(Vexu_jump_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_jump_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_jump_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->exu_jump_tb__DOT__hrstn));
        bufp->chgBit(oldp+1,(vlSelf->exu_jump_tb__DOT__dec_jump_en));
        bufp->chgBit(oldp+2,(vlSelf->exu_jump_tb__DOT__dec_jal));
        bufp->chgBit(oldp+3,(vlSelf->exu_jump_tb__DOT__dec_jalr));
        bufp->chgSData(oldp+4,(vlSelf->exu_jump_tb__DOT__dec_imm_type_i),12);
        bufp->chgIData(oldp+5,(vlSelf->exu_jump_tb__DOT__dec_imm_type_j),21);
        bufp->chgCData(oldp+6,(vlSelf->exu_jump_tb__DOT__dec_rd),5);
        bufp->chgCData(oldp+7,(vlSelf->exu_jump_tb__DOT__dec_rs1),5);
        bufp->chgIData(oldp+8,(vlSelf->exu_jump_tb__DOT__reg_rdata_1),32);
        bufp->chgIData(oldp+9,((((- (IData)((1U & (vlSelf->exu_jump_tb__DOT__dec_imm_type_j 
                                                   >> 0x13U)))) 
                                 << 0x15U) | vlSelf->exu_jump_tb__DOT__dec_imm_type_j)),32);
        bufp->chgIData(oldp+10,((((- (IData)((1U & 
                                              ((IData)(vlSelf->exu_jump_tb__DOT__dec_imm_type_i) 
                                               >> 0xbU)))) 
                                  << 0xcU) | (IData)(vlSelf->exu_jump_tb__DOT__dec_imm_type_i))),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+11,((((IData)(vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_wen)
                                   ? 0x1fU : 0U) & 
                                 (((IData)(vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_wen)
                                    ? (IData)(vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_waddr)
                                    : 0U) & ((IData)(vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_wen)
                                              ? 0x1fU
                                              : 0U)))),5);
        bufp->chgBit(oldp+12,(vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_wen));
        bufp->chgIData(oldp+13,((((IData)(vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_wen)
                                   ? 0xffffffffU : 0U) 
                                 & (((IData)(vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_wen)
                                      ? vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_wdata
                                      : 0U) & ((IData)(vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_wen)
                                                ? 0xffffffffU
                                                : 0U)))),32);
        bufp->chgCData(oldp+14,((((IData)(vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_ren_1)
                                   ? 0x1fU : 0U) & 
                                 (((IData)(vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_ren_1)
                                    ? (IData)(vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_raddr_1)
                                    : 0U) & ((IData)(vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_ren_1)
                                              ? 0x1fU
                                              : 0U)))),5);
        bufp->chgBit(oldp+15,(vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_ren_1));
        bufp->chgCData(oldp+16,(vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_waddr),5);
        bufp->chgIData(oldp+17,(vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_wdata),32);
        bufp->chgCData(oldp+18,(vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_reg_raddr_1),5);
        bufp->chgBit(oldp+19,(vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_pc_write));
        bufp->chgIData(oldp+20,(vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_pc_wdata),32);
        bufp->chgCData(oldp+21,(vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_flush),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgCData(oldp+22,(vlSelf->exu_jump_tb__DOT__cycle_cnt),4);
        bufp->chgIData(oldp+23,(vlSelf->exu_jump_tb__DOT__pc),32);
        bufp->chgIData(oldp+24,((vlSelf->exu_jump_tb__DOT__pc 
                                 - (IData)(8U))),32);
    }
    bufp->chgBit(oldp+25,(vlSelf->exu_jump_tb__DOT__hclk));
    bufp->chgBit(oldp+26,(((IData)(vlSelf->exu_jump_tb__DOT__dec_jump_en) 
                           & (IData)(vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_pc_write))));
    bufp->chgIData(oldp+27,((((IData)(vlSelf->exu_jump_tb__DOT__dec_jump_en)
                               ? 0xffffffffU : 0U) 
                             & (((IData)(vlSelf->exu_jump_tb__DOT__dec_jump_en)
                                  ? vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_pc_wdata
                                  : 0U) & ((IData)(vlSelf->exu_jump_tb__DOT__dec_jump_en)
                                            ? 0xffffffffU
                                            : 0U)))),32);
    bufp->chgCData(oldp+28,((((IData)(vlSelf->exu_jump_tb__DOT__dec_jump_en)
                               ? 3U : 0U) & (((IData)(vlSelf->exu_jump_tb__DOT__dec_jump_en)
                                               ? (IData)(vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__mid_flush)
                                               : 0U) 
                                             & ((IData)(vlSelf->exu_jump_tb__DOT__dec_jump_en)
                                                 ? 3U
                                                 : 0U)))),2);
    bufp->chgIData(oldp+29,(vlSelf->exu_jump_tb__DOT__exu_jump_inst__DOT__pc_next),32);
}

void Vexu_jump_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_jump_tb___024root__trace_cleanup\n"); );
    // Init
    Vexu_jump_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vexu_jump_tb___024root*>(voidSelf);
    Vexu_jump_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
