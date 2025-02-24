// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vexu_reg_wbu_top_tb__Syms.h"


void Vexu_reg_wbu_top_tb___024root__trace_chg_0_sub_0(Vexu_reg_wbu_top_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vexu_reg_wbu_top_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_reg_wbu_top_tb___024root__trace_chg_0\n"); );
    // Init
    Vexu_reg_wbu_top_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vexu_reg_wbu_top_tb___024root*>(voidSelf);
    Vexu_reg_wbu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vexu_reg_wbu_top_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vexu_reg_wbu_top_tb___024root__trace_chg_0_sub_0(Vexu_reg_wbu_top_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vexu_reg_wbu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_reg_wbu_top_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->exu_reg_wbu_top_tb__DOT__hrstn));
        bufp->chgBit(oldp+1,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_jal));
        bufp->chgBit(oldp+2,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_add));
        bufp->chgBit(oldp+3,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_reg_en));
        bufp->chgBit(oldp+4,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_jump_en));
        bufp->chgCData(oldp+5,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_rs2),5);
        bufp->chgCData(oldp+6,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_rs1),5);
        bufp->chgCData(oldp+7,(vlSelf->exu_reg_wbu_top_tb__DOT__dec_rd),5);
        bufp->chgCData(oldp+8,(vlSelf->exu_reg_wbu_top_tb__DOT__mau_load_rd),5);
        bufp->chgIData(oldp+9,(vlSelf->exu_reg_wbu_top_tb__DOT__mau_load_data),32);
        bufp->chgBit(oldp+10,(vlSelf->exu_reg_wbu_top_tb__DOT__mau_load_en));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+11,(vlSelf->exu_reg_wbu_top_tb__DOT__inst_out),32);
        bufp->chgCData(oldp+12,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_load_rd),5);
        bufp->chgIData(oldp+13,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_load_base_addr),32);
        bufp->chgIData(oldp+14,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_load_offset),32);
        bufp->chgBit(oldp+15,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_load_sext));
        bufp->chgCData(oldp+16,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_load_size),2);
        bufp->chgIData(oldp+17,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_store_addr),32);
        bufp->chgIData(oldp+18,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_store_data),32);
        bufp->chgCData(oldp+19,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_store_size),2);
        bufp->chgBit(oldp+20,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_store_en));
        bufp->chgCData(oldp+21,(vlSelf->exu_reg_wbu_top_tb__DOT__reg_waddr),5);
        bufp->chgIData(oldp+22,(vlSelf->exu_reg_wbu_top_tb__DOT__reg_wdata),32);
        bufp->chgBit(oldp+23,(vlSelf->exu_reg_wbu_top_tb__DOT__reg_wen));
        bufp->chgCData(oldp+24,(vlSelf->exu_reg_wbu_top_tb__DOT__reg_raddr_1),5);
        bufp->chgIData(oldp+25,(vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_1),32);
        bufp->chgBit(oldp+26,(((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_ren_1) 
                               | ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_1) 
                                  | ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_ren_1) 
                                     | ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_1) 
                                        | ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__mid_reg_ren_1) 
                                           | (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_1))))))));
        bufp->chgCData(oldp+27,(vlSelf->exu_reg_wbu_top_tb__DOT__reg_raddr_2),5);
        bufp->chgIData(oldp+28,(vlSelf->exu_reg_wbu_top_tb__DOT__reg_rdata_2),32);
        bufp->chgBit(oldp+29,(((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_2) 
                               | ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_2) 
                                  | (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_2)))));
        bufp->chgCData(oldp+30,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_waddr),5);
        bufp->chgBit(oldp+31,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wen));
        bufp->chgIData(oldp+32,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wdata),32);
        bufp->chgCData(oldp+33,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_raddr_1),5);
        bufp->chgBit(oldp+34,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_ren_1));
        bufp->chgCData(oldp+35,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_raddr_1),5);
        bufp->chgBit(oldp+36,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_1));
        bufp->chgCData(oldp+37,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_raddr_2),5);
        bufp->chgBit(oldp+38,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_2));
        bufp->chgBit(oldp+39,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__branch));
        bufp->chgCData(oldp+40,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_flush),2);
        bufp->chgCData(oldp+41,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_waddr),5);
        bufp->chgBit(oldp+42,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wen));
        bufp->chgIData(oldp+43,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wdata),32);
        bufp->chgCData(oldp+44,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_raddr_1),5);
        bufp->chgBit(oldp+45,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_ren_1));
        bufp->chgCData(oldp+46,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_flush),2);
        bufp->chgCData(oldp+47,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__mid_reg_raddr_1),5);
        bufp->chgBit(oldp+48,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__mid_reg_ren_1));
        bufp->chgCData(oldp+49,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_rd_buff),5);
        bufp->chgIData(oldp+50,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_base_addr_buff),32);
        bufp->chgIData(oldp+51,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_offset_buff),32);
        bufp->chgBit(oldp+52,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_sext_buff));
        bufp->chgCData(oldp+53,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_size_buff),2);
        bufp->chgBit(oldp+54,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_en_buff));
        bufp->chgCData(oldp+55,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_waddr),5);
        bufp->chgBit(oldp+56,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wen));
        bufp->chgIData(oldp+57,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wdata),32);
        bufp->chgCData(oldp+58,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_raddr_1),5);
        bufp->chgBit(oldp+59,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_1));
        bufp->chgCData(oldp+60,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_raddr_2),5);
        bufp->chgBit(oldp+61,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_2));
        bufp->chgCData(oldp+62,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__mid_reg_raddr_1),5);
        bufp->chgBit(oldp+63,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_1));
        bufp->chgCData(oldp+64,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__mid_reg_raddr_2),5);
        bufp->chgBit(oldp+65,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_2));
        bufp->chgIData(oldp+66,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__exu_store_addr_buff),32);
        bufp->chgIData(oldp+67,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__exu_store_data_buff),32);
        bufp->chgBit(oldp+68,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__exu_store_en_buff));
        bufp->chgCData(oldp+69,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__exu_store_size_buff),2);
        bufp->chgCData(oldp+70,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_upper_en_inst__DOT__mid_reg_waddr),5);
        bufp->chgBit(oldp+71,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wen));
        bufp->chgIData(oldp+72,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wdata),32);
        bufp->chgIData(oldp+73,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[0]),32);
        bufp->chgIData(oldp+74,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[1]),32);
        bufp->chgIData(oldp+75,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[2]),32);
        bufp->chgIData(oldp+76,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[3]),32);
        bufp->chgIData(oldp+77,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[4]),32);
        bufp->chgIData(oldp+78,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[5]),32);
        bufp->chgIData(oldp+79,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[6]),32);
        bufp->chgIData(oldp+80,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[7]),32);
        bufp->chgIData(oldp+81,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[8]),32);
        bufp->chgIData(oldp+82,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[9]),32);
        bufp->chgIData(oldp+83,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[10]),32);
        bufp->chgIData(oldp+84,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[11]),32);
        bufp->chgIData(oldp+85,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[12]),32);
        bufp->chgIData(oldp+86,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[13]),32);
        bufp->chgIData(oldp+87,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[14]),32);
        bufp->chgIData(oldp+88,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[15]),32);
        bufp->chgIData(oldp+89,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[16]),32);
        bufp->chgIData(oldp+90,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[17]),32);
        bufp->chgIData(oldp+91,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[18]),32);
        bufp->chgIData(oldp+92,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[19]),32);
        bufp->chgIData(oldp+93,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[20]),32);
        bufp->chgIData(oldp+94,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[21]),32);
        bufp->chgIData(oldp+95,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[22]),32);
        bufp->chgIData(oldp+96,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[23]),32);
        bufp->chgIData(oldp+97,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[24]),32);
        bufp->chgIData(oldp+98,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[25]),32);
        bufp->chgIData(oldp+99,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[26]),32);
        bufp->chgIData(oldp+100,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[27]),32);
        bufp->chgIData(oldp+101,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[28]),32);
        bufp->chgIData(oldp+102,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[29]),32);
        bufp->chgIData(oldp+103,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[30]),32);
        bufp->chgIData(oldp+104,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile[31]),32);
        bufp->chgIData(oldp+105,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__i),32);
        bufp->chgCData(oldp+106,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__wbu_inst__DOT__mid_reg_waddr),5);
        bufp->chgBit(oldp+107,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__wbu_inst__DOT__mid_reg_wen));
        bufp->chgIData(oldp+108,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__wbu_inst__DOT__mid_reg_wdata),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+109,(vlSelf->exu_reg_wbu_top_tb__DOT__pc),32);
        bufp->chgCData(oldp+110,(vlSelf->exu_reg_wbu_top_tb__DOT__cycle_cnt),4);
        bufp->chgBit(oldp+111,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__flush_stall));
        bufp->chgCData(oldp+112,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_flush_swc_inst__DOT__state),2);
        bufp->chgIData(oldp+113,((vlSelf->exu_reg_wbu_top_tb__DOT__pc 
                                  - (IData)(8U))),32);
        bufp->chgIData(oldp+114,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__pc_next),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+115,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_load_en));
        bufp->chgBit(oldp+116,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_write));
        bufp->chgIData(oldp+117,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata),32);
        bufp->chgBit(oldp+118,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_write));
        bufp->chgIData(oldp+119,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_wdata),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgBit(oldp+120,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_stall));
        bufp->chgBit(oldp+121,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT____Vcellinp__ex_imm_en_inst__dec_branch_en));
        bufp->chgBit(oldp+122,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en23));
        bufp->chgBit(oldp+123,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT____Vcellinp__exu_load_swc_inst__dec_load_en));
        bufp->chgBit(oldp+124,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT____Vcellinp__exu_upper_en_inst__dec_upper_en));
    }
    bufp->chgBit(oldp+125,(vlSelf->exu_reg_wbu_top_tb__DOT__hclk));
    bufp->chgBit(oldp+126,(((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__pc_write__en0) 
                            & (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en15) 
                                & (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_write)) 
                               | ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en23) 
                                  & (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_write))))));
    bufp->chgIData(oldp+127,((vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__pc_wdata__en1 
                              & ((((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en15)
                                    ? 0xffffffffU : 0U) 
                                  & (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en15)
                                       ? vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_wdata
                                       : 0U) & ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en15)
                                                 ? 0xffffffffU
                                                 : 0U))) 
                                 | (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en23)
                                      ? 0xffffffffU
                                      : 0U) & (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en23)
                                                 ? vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata
                                                 : 0U) 
                                               & ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en23)
                                                   ? 0xffffffffU
                                                   : 0U)))))),32);
    bufp->chgCData(oldp+128,(((((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en15)
                                 ? 3U : 0U) & (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en15)
                                                 ? (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_flush)
                                                 : 0U) 
                                               & ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en15)
                                                   ? 3U
                                                   : 0U))) 
                              | (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en23)
                                   ? 3U : 0U) & (((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en23)
                                                   ? (IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_flush)
                                                   : 0U) 
                                                 & ((IData)(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en23)
                                                     ? 3U
                                                     : 0U))))),2);
    bufp->chgCData(oldp+129,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_flush_swc_inst__DOT__nextstate),2);
    bufp->chgBit(oldp+130,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en15));
    bufp->chgIData(oldp+131,(vlSelf->exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__pc_next),32);
}

void Vexu_reg_wbu_top_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexu_reg_wbu_top_tb___024root__trace_cleanup\n"); );
    // Init
    Vexu_reg_wbu_top_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vexu_reg_wbu_top_tb___024root*>(voidSelf);
    Vexu_reg_wbu_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}
