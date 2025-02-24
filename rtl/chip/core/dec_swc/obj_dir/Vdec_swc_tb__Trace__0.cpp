// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdec_swc_tb__Syms.h"


void Vdec_swc_tb___024root__trace_chg_0_sub_0(Vdec_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vdec_swc_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec_swc_tb___024root__trace_chg_0\n"); );
    // Init
    Vdec_swc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdec_swc_tb___024root*>(voidSelf);
    Vdec_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vdec_swc_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vdec_swc_tb___024root__trace_chg_0_sub_0(Vdec_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdec_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec_swc_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_upper_en));
        bufp->chgBit(oldp+1,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_imm_en));
        bufp->chgBit(oldp+2,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_reg_en));
        bufp->chgBit(oldp+3,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_jump_en));
        bufp->chgBit(oldp+4,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_branch_en));
        bufp->chgBit(oldp+5,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_load_en));
        bufp->chgBit(oldp+6,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_store_en));
        bufp->chgCData(oldp+7,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_rs2),5);
        bufp->chgCData(oldp+8,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_rs1),5);
        bufp->chgCData(oldp+9,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_rd),5);
        bufp->chgSData(oldp+10,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_imm_type_i),12);
        bufp->chgSData(oldp+11,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_imm_type_s),12);
        bufp->chgSData(oldp+12,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_imm_type_b),13);
        bufp->chgIData(oldp+13,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_imm_type_u),20);
        bufp->chgIData(oldp+14,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_imm_type_j),21);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+15,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_out),32);
        bufp->chgBit(oldp+16,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_lui));
        bufp->chgBit(oldp+17,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_auipc));
        bufp->chgBit(oldp+18,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_jal));
        bufp->chgBit(oldp+19,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_jalr));
        bufp->chgBit(oldp+20,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_beq));
        bufp->chgBit(oldp+21,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_bne));
        bufp->chgBit(oldp+22,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_blt));
        bufp->chgBit(oldp+23,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_bge));
        bufp->chgBit(oldp+24,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_bltu));
        bufp->chgBit(oldp+25,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_bgeu));
        bufp->chgBit(oldp+26,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_lb));
        bufp->chgBit(oldp+27,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_lh));
        bufp->chgBit(oldp+28,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_lw));
        bufp->chgBit(oldp+29,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_lbu));
        bufp->chgBit(oldp+30,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_lhu));
        bufp->chgBit(oldp+31,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_sb));
        bufp->chgBit(oldp+32,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_sh));
        bufp->chgBit(oldp+33,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_sw));
        bufp->chgBit(oldp+34,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_addi));
        bufp->chgBit(oldp+35,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_slti));
        bufp->chgBit(oldp+36,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_sltiu));
        bufp->chgBit(oldp+37,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_xori));
        bufp->chgBit(oldp+38,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_ori));
        bufp->chgBit(oldp+39,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_andi));
        bufp->chgBit(oldp+40,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_slli));
        bufp->chgBit(oldp+41,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_srli));
        bufp->chgBit(oldp+42,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_srai));
        bufp->chgBit(oldp+43,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_add));
        bufp->chgBit(oldp+44,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_sub));
        bufp->chgBit(oldp+45,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_sll));
        bufp->chgBit(oldp+46,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_slt));
        bufp->chgBit(oldp+47,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_sltu));
        bufp->chgBit(oldp+48,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_xor));
        bufp->chgBit(oldp+49,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_srl));
        bufp->chgBit(oldp+50,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_sra));
        bufp->chgBit(oldp+51,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_or));
        bufp->chgBit(oldp+52,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_and));
        bufp->chgBit(oldp+53,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_fence));
        bufp->chgBit(oldp+54,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_fence_i));
        bufp->chgBit(oldp+55,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_ecall));
        bufp->chgBit(oldp+56,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_ebreak));
        bufp->chgBit(oldp+57,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_csrrw));
        bufp->chgBit(oldp+58,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_csrrs));
        bufp->chgBit(oldp+59,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_csrrc));
        bufp->chgBit(oldp+60,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_csrrwi));
        bufp->chgBit(oldp+61,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_csrrsi));
        bufp->chgBit(oldp+62,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__dec_csrrci));
        bufp->chgBit(oldp+63,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_28_equal_0000));
        bufp->chgBit(oldp+64,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_19_15_equal_00000));
        bufp->chgBit(oldp+65,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_11_7_equal_00000));
        bufp->chgBit(oldp+66,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_25_equal_0000000));
        bufp->chgBit(oldp+67,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_25_equal_0100000));
        bufp->chgBit(oldp+68,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_000));
        bufp->chgBit(oldp+69,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_001));
        bufp->chgBit(oldp+70,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_010));
        bufp->chgBit(oldp+71,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_011));
        bufp->chgBit(oldp+72,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_100));
        bufp->chgBit(oldp+73,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_101));
        bufp->chgBit(oldp+74,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_110));
        bufp->chgBit(oldp+75,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_111));
        bufp->chgBit(oldp+76,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0000011));
        bufp->chgBit(oldp+77,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0001111));
        bufp->chgBit(oldp+78,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010011));
        bufp->chgBit(oldp+79,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010111));
        bufp->chgBit(oldp+80,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0100011));
        bufp->chgBit(oldp+81,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110011));
        bufp->chgBit(oldp+82,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110111));
        bufp->chgBit(oldp+83,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100011));
        bufp->chgBit(oldp+84,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100111));
        bufp->chgBit(oldp+85,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1101111));
        bufp->chgBit(oldp+86,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011));
        bufp->chgBit(oldp+87,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_20_equal_000000000000));
        bufp->chgBit(oldp+88,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_20_equal_000000000001));
        bufp->chgBit(oldp+89,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_jalr));
        bufp->chgBit(oldp+90,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_beq));
        bufp->chgBit(oldp+91,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_bne));
        bufp->chgBit(oldp+92,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_blt));
        bufp->chgBit(oldp+93,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_bge));
        bufp->chgBit(oldp+94,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_bltu));
        bufp->chgBit(oldp+95,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_bgeu));
        bufp->chgBit(oldp+96,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_lb));
        bufp->chgBit(oldp+97,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_lh));
        bufp->chgBit(oldp+98,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_lw));
        bufp->chgBit(oldp+99,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_lbu));
        bufp->chgBit(oldp+100,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_lhu));
        bufp->chgBit(oldp+101,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sb));
        bufp->chgBit(oldp+102,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sh));
        bufp->chgBit(oldp+103,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sw));
        bufp->chgBit(oldp+104,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_addi));
        bufp->chgBit(oldp+105,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_slti));
        bufp->chgBit(oldp+106,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sltiu));
        bufp->chgBit(oldp+107,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_xori));
        bufp->chgBit(oldp+108,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_ori));
        bufp->chgBit(oldp+109,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_andi));
        bufp->chgBit(oldp+110,(((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_001) 
                                & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011))));
        bufp->chgBit(oldp+111,(((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_010) 
                                & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011))));
        bufp->chgBit(oldp+112,(((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_011) 
                                & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011))));
        bufp->chgBit(oldp+113,(((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_101) 
                                & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011))));
        bufp->chgBit(oldp+114,(((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_110) 
                                & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011))));
        bufp->chgBit(oldp+115,(((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_111) 
                                & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011))));
        bufp->chgBit(oldp+116,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_slli));
        bufp->chgBit(oldp+117,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_srli));
        bufp->chgBit(oldp+118,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_srai));
        bufp->chgBit(oldp+119,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_add));
        bufp->chgBit(oldp+120,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sub));
        bufp->chgBit(oldp+121,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sll));
        bufp->chgBit(oldp+122,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_slt));
        bufp->chgBit(oldp+123,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sltu));
        bufp->chgBit(oldp+124,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_xor));
        bufp->chgBit(oldp+125,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_srl));
        bufp->chgBit(oldp+126,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_sra));
        bufp->chgBit(oldp+127,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_or));
        bufp->chgBit(oldp+128,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__mid_and));
        bufp->chgBit(oldp+129,(((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_28_equal_0000) 
                                & ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_000) 
                                   & ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_19_15_equal_00000) 
                                      & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_1))))));
        bufp->chgBit(oldp+130,(((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_2) 
                                & ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_001) 
                                   & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_1)))));
        bufp->chgBit(oldp+131,(((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_2) 
                                & ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_000) 
                                   & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_0)))));
        bufp->chgBit(oldp+132,(((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_20_equal_000000000001) 
                                & ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12_equal_000) 
                                   & ((IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_19_15_equal_00000) 
                                      & (IData)(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_0))))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+133,(vlSelf->dec_swc_tb__DOT__cycle_cnt),4);
        bufp->chgCData(oldp+134,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_28),4);
        bufp->chgCData(oldp+135,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_25),7);
        bufp->chgSData(oldp+136,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_31_20),12);
        bufp->chgCData(oldp+137,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_19_15),5);
        bufp->chgCData(oldp+138,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_14_12),3);
        bufp->chgCData(oldp+139,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_11_7),5);
        bufp->chgCData(oldp+140,(vlSelf->dec_swc_tb__DOT__dec_swc_inst__DOT__inst_6_0),7);
    }
    bufp->chgBit(oldp+141,(vlSelf->dec_swc_tb__DOT__hclk));
    bufp->chgBit(oldp+142,(vlSelf->dec_swc_tb__DOT__hrstn));
    bufp->chgIData(oldp+143,(vlSelf->dec_swc_tb__DOT__inst_in),32);
    bufp->chgBit(oldp+144,(vlSelf->dec_swc_tb__DOT__ifu_dec_stall));
}

void Vdec_swc_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdec_swc_tb___024root__trace_cleanup\n"); );
    // Init
    Vdec_swc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdec_swc_tb___024root*>(voidSelf);
    Vdec_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
