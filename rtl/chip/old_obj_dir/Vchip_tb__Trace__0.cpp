// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vchip_tb__Syms.h"


void Vchip_tb___024root__trace_chg_0_sub_0(Vchip_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vchip_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root__trace_chg_0\n"); );
    // Init
    Vchip_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vchip_tb___024root*>(voidSelf);
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vchip_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vchip_tb___024root__trace_chg_0_sub_0(Vchip_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_dec_out),32);
        bufp->chgBit(oldp+1,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lui));
        bufp->chgBit(oldp+2,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_auipc));
        bufp->chgBit(oldp+3,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_jal));
        bufp->chgBit(oldp+4,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_jalr));
        bufp->chgBit(oldp+5,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_beq));
        bufp->chgBit(oldp+6,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_bne));
        bufp->chgBit(oldp+7,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_blt));
        bufp->chgBit(oldp+8,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_bge));
        bufp->chgBit(oldp+9,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_bltu));
        bufp->chgBit(oldp+10,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_bgeu));
        bufp->chgBit(oldp+11,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lb));
        bufp->chgBit(oldp+12,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lh));
        bufp->chgBit(oldp+13,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lw));
        bufp->chgBit(oldp+14,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lbu));
        bufp->chgBit(oldp+15,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lhu));
        bufp->chgBit(oldp+16,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sb));
        bufp->chgBit(oldp+17,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sh));
        bufp->chgBit(oldp+18,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sw));
        bufp->chgBit(oldp+19,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_addi));
        bufp->chgBit(oldp+20,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_slti));
        bufp->chgBit(oldp+21,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sltiu));
        bufp->chgBit(oldp+22,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_xori));
        bufp->chgBit(oldp+23,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_ori));
        bufp->chgBit(oldp+24,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_andi));
        bufp->chgBit(oldp+25,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_slli));
        bufp->chgBit(oldp+26,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_srli));
        bufp->chgBit(oldp+27,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_srai));
        bufp->chgBit(oldp+28,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_add));
        bufp->chgBit(oldp+29,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sub));
        bufp->chgBit(oldp+30,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sll));
        bufp->chgBit(oldp+31,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_slt));
        bufp->chgBit(oldp+32,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sltu));
        bufp->chgBit(oldp+33,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_xor));
        bufp->chgBit(oldp+34,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_srl));
        bufp->chgBit(oldp+35,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sra));
        bufp->chgBit(oldp+36,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_or));
        bufp->chgBit(oldp+37,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_and));
        bufp->chgBit(oldp+38,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_fence));
        bufp->chgBit(oldp+39,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_fence_i));
        bufp->chgBit(oldp+40,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_ecall));
        bufp->chgBit(oldp+41,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_ebreak));
        bufp->chgBit(oldp+42,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrw));
        bufp->chgBit(oldp+43,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrs));
        bufp->chgBit(oldp+44,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrc));
        bufp->chgBit(oldp+45,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrwi));
        bufp->chgBit(oldp+46,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrsi));
        bufp->chgBit(oldp+47,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrci));
        bufp->chgIData(oldp+48,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_exu_out),32);
        bufp->chgIData(oldp+49,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_store_addr),32);
        bufp->chgBit(oldp+50,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_store_en));
        bufp->chgCData(oldp+51,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_waddr),5);
        bufp->chgIData(oldp+52,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_wdata),32);
        bufp->chgBit(oldp+53,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_wen));
        bufp->chgCData(oldp+54,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_raddr_1),5);
        bufp->chgIData(oldp+55,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_1),32);
        bufp->chgBit(oldp+56,((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_1) 
                                | ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_ren_1) 
                                   | ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_ren_1) 
                                      | ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_1) 
                                         | ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__mid_reg_ren_1) 
                                            | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_1)))))) 
                               & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_ren_1) 
                                  | ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_1) 
                                     | ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_ren_1) 
                                        | ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_1) 
                                           | ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__mid_reg_ren_1) 
                                              | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_1)))))))));
        bufp->chgCData(oldp+57,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_raddr_2),5);
        bufp->chgIData(oldp+58,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_2),32);
        bufp->chgBit(oldp+59,(((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_2) 
                               | ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_2) 
                                  | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_2)))));
        bufp->chgBit(oldp+60,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_28_equal_0000));
        bufp->chgBit(oldp+61,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_19_15_equal_00000));
        bufp->chgBit(oldp+62,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_11_7_equal_00000));
        bufp->chgBit(oldp+63,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_25_equal_0000000));
        bufp->chgBit(oldp+64,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_25_equal_0100000));
        bufp->chgBit(oldp+65,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_000));
        bufp->chgBit(oldp+66,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_001));
        bufp->chgBit(oldp+67,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_010));
        bufp->chgBit(oldp+68,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_011));
        bufp->chgBit(oldp+69,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_100));
        bufp->chgBit(oldp+70,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_101));
        bufp->chgBit(oldp+71,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_110));
        bufp->chgBit(oldp+72,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_111));
        bufp->chgBit(oldp+73,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0000011));
        bufp->chgBit(oldp+74,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0001111));
        bufp->chgBit(oldp+75,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010011));
        bufp->chgBit(oldp+76,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0100011));
        bufp->chgBit(oldp+77,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110011));
        bufp->chgBit(oldp+78,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100011));
        bufp->chgBit(oldp+79,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100111));
        bufp->chgBit(oldp+80,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011));
        bufp->chgBit(oldp+81,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_20_equal_000000000000));
        bufp->chgBit(oldp+82,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_20_equal_000000000001));
        bufp->chgBit(oldp+83,(((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_001) 
                               & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011))));
        bufp->chgBit(oldp+84,(((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_010) 
                               & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011))));
        bufp->chgBit(oldp+85,(((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_011) 
                               & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011))));
        bufp->chgBit(oldp+86,(((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_101) 
                               & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011))));
        bufp->chgBit(oldp+87,(((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_110) 
                               & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011))));
        bufp->chgBit(oldp+88,(((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_111) 
                               & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011))));
        bufp->chgBit(oldp+89,(((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_28_equal_0000) 
                               & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_000) 
                                  & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_19_15_equal_00000) 
                                     & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_1))))));
        bufp->chgBit(oldp+90,(((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_2) 
                               & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_001) 
                                  & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_1)))));
        bufp->chgBit(oldp+91,(((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_2) 
                               & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_000) 
                                  & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_0)))));
        bufp->chgBit(oldp+92,(((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_20_equal_000000000001) 
                               & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_000) 
                                  & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_19_15_equal_00000) 
                                     & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgRegularize_hdd4686a8_0_0))))));
        bufp->chgCData(oldp+93,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_waddr),5);
        bufp->chgBit(oldp+94,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wen));
        bufp->chgIData(oldp+95,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wdata),32);
        bufp->chgCData(oldp+96,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_raddr_1),5);
        bufp->chgBit(oldp+97,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_ren_1));
        bufp->chgCData(oldp+98,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_raddr_1),5);
        bufp->chgBit(oldp+99,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_1));
        bufp->chgCData(oldp+100,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_raddr_2),5);
        bufp->chgBit(oldp+101,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_2));
        bufp->chgBit(oldp+102,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__branch));
        bufp->chgCData(oldp+103,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_flush),2);
        bufp->chgCData(oldp+104,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_waddr),5);
        bufp->chgBit(oldp+105,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wen));
        bufp->chgIData(oldp+106,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wdata),32);
        bufp->chgCData(oldp+107,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_raddr_1),5);
        bufp->chgBit(oldp+108,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_ren_1));
        bufp->chgCData(oldp+109,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_flush),2);
        bufp->chgCData(oldp+110,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__mid_reg_raddr_1),5);
        bufp->chgBit(oldp+111,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__mid_reg_ren_1));
        bufp->chgCData(oldp+112,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_rd_buff),5);
        bufp->chgIData(oldp+113,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_base_addr_buff),32);
        bufp->chgIData(oldp+114,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_offset_buff),32);
        bufp->chgBit(oldp+115,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_sext_buff));
        bufp->chgCData(oldp+116,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_size_buff),2);
        bufp->chgBit(oldp+117,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_en_buff));
        bufp->chgCData(oldp+118,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_waddr),5);
        bufp->chgBit(oldp+119,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wen));
        bufp->chgIData(oldp+120,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wdata),32);
        bufp->chgCData(oldp+121,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_raddr_1),5);
        bufp->chgBit(oldp+122,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_1));
        bufp->chgCData(oldp+123,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_raddr_2),5);
        bufp->chgBit(oldp+124,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_2));
        bufp->chgCData(oldp+125,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_raddr_1),5);
        bufp->chgBit(oldp+126,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_1));
        bufp->chgCData(oldp+127,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_raddr_2),5);
        bufp->chgBit(oldp+128,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_2));
        bufp->chgIData(oldp+129,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_addr_buff),32);
        bufp->chgIData(oldp+130,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_data_buff),32);
        bufp->chgBit(oldp+131,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_en_buff));
        bufp->chgCData(oldp+132,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_size_buff),2);
        bufp->chgCData(oldp+133,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__mid_reg_waddr),5);
        bufp->chgBit(oldp+134,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wen));
        bufp->chgIData(oldp+135,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wdata),32);
        bufp->chgIData(oldp+136,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[0]),32);
        bufp->chgIData(oldp+137,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[1]),32);
        bufp->chgIData(oldp+138,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[2]),32);
        bufp->chgIData(oldp+139,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[3]),32);
        bufp->chgIData(oldp+140,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[4]),32);
        bufp->chgIData(oldp+141,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[5]),32);
        bufp->chgIData(oldp+142,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[6]),32);
        bufp->chgIData(oldp+143,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[7]),32);
        bufp->chgIData(oldp+144,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[8]),32);
        bufp->chgIData(oldp+145,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[9]),32);
        bufp->chgIData(oldp+146,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[10]),32);
        bufp->chgIData(oldp+147,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[11]),32);
        bufp->chgIData(oldp+148,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[12]),32);
        bufp->chgIData(oldp+149,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[13]),32);
        bufp->chgIData(oldp+150,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[14]),32);
        bufp->chgIData(oldp+151,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[15]),32);
        bufp->chgIData(oldp+152,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[16]),32);
        bufp->chgIData(oldp+153,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[17]),32);
        bufp->chgIData(oldp+154,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[18]),32);
        bufp->chgIData(oldp+155,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[19]),32);
        bufp->chgIData(oldp+156,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[20]),32);
        bufp->chgIData(oldp+157,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[21]),32);
        bufp->chgIData(oldp+158,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[22]),32);
        bufp->chgIData(oldp+159,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[23]),32);
        bufp->chgIData(oldp+160,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[24]),32);
        bufp->chgIData(oldp+161,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[25]),32);
        bufp->chgIData(oldp+162,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[26]),32);
        bufp->chgIData(oldp+163,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[27]),32);
        bufp->chgIData(oldp+164,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[28]),32);
        bufp->chgIData(oldp+165,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[29]),32);
        bufp->chgIData(oldp+166,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[30]),32);
        bufp->chgIData(oldp+167,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[31]),32);
        bufp->chgIData(oldp+168,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__i),32);
        bufp->chgCData(oldp+169,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__mid_reg_waddr),5);
        bufp->chgBit(oldp+170,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__mid_reg_wen));
        bufp->chgIData(oldp+171,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__mid_reg_wdata),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+172,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_haddr),32);
        bufp->chgCData(oldp+173,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_htrans),2);
        bufp->chgBit(oldp+174,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hresp));
        bufp->chgIData(oldp+175,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hrdata),32);
        bufp->chgIData(oldp+176,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr),32);
        bufp->chgBit(oldp+177,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hwrite));
        bufp->chgIData(oldp+178,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hwdata),32);
        bufp->chgCData(oldp+179,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_htrans),2);
        bufp->chgBit(oldp+180,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hresp));
        bufp->chgIData(oldp+181,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hrdata),32);
        bufp->chgIData(oldp+182,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_ifu_out),32);
        bufp->chgBit(oldp+183,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_idle));
        bufp->chgIData(oldp+184,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc),32);
        bufp->chgBit(oldp+185,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_upper_en));
        bufp->chgBit(oldp+186,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_en));
        bufp->chgBit(oldp+187,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_reg_en));
        bufp->chgBit(oldp+188,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_jump_en));
        bufp->chgBit(oldp+189,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_branch_en));
        bufp->chgBit(oldp+190,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_load_en));
        bufp->chgBit(oldp+191,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_store_en));
        bufp->chgCData(oldp+192,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_rs2),5);
        bufp->chgCData(oldp+193,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_rs1),5);
        bufp->chgCData(oldp+194,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_rd),5);
        bufp->chgSData(oldp+195,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_i),12);
        bufp->chgSData(oldp+196,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_s),12);
        bufp->chgSData(oldp+197,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_b),13);
        bufp->chgIData(oldp+198,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_u),20);
        bufp->chgIData(oldp+199,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_j),21);
        bufp->chgCData(oldp+200,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_load_rd),5);
        bufp->chgIData(oldp+201,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_load_data),32);
        bufp->chgBit(oldp+202,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_load_en));
        bufp->chgCData(oldp+203,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_28),4);
        bufp->chgCData(oldp+204,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_25),7);
        bufp->chgSData(oldp+205,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_20),12);
        bufp->chgCData(oldp+206,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_19_15),5);
        bufp->chgCData(oldp+207,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12),3);
        bufp->chgCData(oldp+208,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_11_7),5);
        bufp->chgBit(oldp+209,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__flush_stall));
        bufp->chgCData(oldp+210,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_flush_swc_inst__DOT__state),2);
        bufp->chgIData(oldp+211,((((- (IData)((1U & 
                                               ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_b) 
                                                >> 0xbU)))) 
                                   << 0xdU) | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_b))),32);
        bufp->chgIData(oldp+212,((vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc 
                                  - (IData)(8U))),32);
        bufp->chgIData(oldp+213,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__pc_next),32);
        bufp->chgIData(oldp+214,((((- (IData)((1U & 
                                               (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_j 
                                                >> 0x13U)))) 
                                   << 0x15U) | vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_j)),32);
        bufp->chgIData(oldp+215,((((- (IData)((1U & 
                                               ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_i) 
                                                >> 0xbU)))) 
                                   << 0xcU) | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_i))),32);
        bufp->chgCData(oldp+216,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__state),2);
        bufp->chgIData(oldp+217,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__inst_out_buff),32);
        bufp->chgCData(oldp+218,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__state),3);
        bufp->chgIData(oldp+219,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__mau_load_data_buff),32);
        bufp->chgCData(oldp+220,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__mau_load_rd_buff),5);
        bufp->chgIData(oldp+221,((vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr 
                                  - (IData)(0x200000U))),32);
        bufp->chgIData(oldp+222,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__i),32);
        bufp->chgIData(oldp+223,((vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_haddr 
                                  - (IData)(0x100000U))),32);
        bufp->chgBit(oldp+224,((0xffcU < (vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_haddr 
                                          - (IData)(0x100000U)))));
        bufp->chgBit(oldp+225,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__trans_error));
        bufp->chgIData(oldp+226,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+227,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_rd),5);
        bufp->chgIData(oldp+228,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_base_addr),32);
        bufp->chgIData(oldp+229,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_offset),32);
        bufp->chgBit(oldp+230,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_sext));
        bufp->chgCData(oldp+231,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_size),2);
        bufp->chgBit(oldp+232,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_en));
        bufp->chgIData(oldp+233,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_store_data),32);
        bufp->chgBit(oldp+234,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010111));
        bufp->chgBit(oldp+235,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110111));
        bufp->chgBit(oldp+236,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1101111));
        bufp->chgBit(oldp+237,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_jalr));
        bufp->chgBit(oldp+238,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_beq));
        bufp->chgBit(oldp+239,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_bne));
        bufp->chgBit(oldp+240,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_blt));
        bufp->chgBit(oldp+241,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_bge));
        bufp->chgBit(oldp+242,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_bltu));
        bufp->chgBit(oldp+243,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_bgeu));
        bufp->chgBit(oldp+244,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_lb));
        bufp->chgBit(oldp+245,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_lh));
        bufp->chgBit(oldp+246,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_lw));
        bufp->chgBit(oldp+247,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_lbu));
        bufp->chgBit(oldp+248,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_lhu));
        bufp->chgBit(oldp+249,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sb));
        bufp->chgBit(oldp+250,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sh));
        bufp->chgBit(oldp+251,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sw));
        bufp->chgBit(oldp+252,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_addi));
        bufp->chgBit(oldp+253,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_slti));
        bufp->chgBit(oldp+254,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sltiu));
        bufp->chgBit(oldp+255,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_xori));
        bufp->chgBit(oldp+256,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_ori));
        bufp->chgBit(oldp+257,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_andi));
        bufp->chgBit(oldp+258,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_slli));
        bufp->chgBit(oldp+259,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_srli));
        bufp->chgBit(oldp+260,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_srai));
        bufp->chgBit(oldp+261,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_add));
        bufp->chgBit(oldp+262,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sub));
        bufp->chgBit(oldp+263,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sll));
        bufp->chgBit(oldp+264,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_slt));
        bufp->chgBit(oldp+265,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sltu));
        bufp->chgBit(oldp+266,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_xor));
        bufp->chgBit(oldp+267,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_srl));
        bufp->chgBit(oldp+268,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sra));
        bufp->chgBit(oldp+269,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_or));
        bufp->chgBit(oldp+270,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_and));
        bufp->chgBit(oldp+271,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_write));
        bufp->chgIData(oldp+272,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata),32);
        bufp->chgBit(oldp+273,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_write));
        bufp->chgIData(oldp+274,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_wdata),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+275,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_stall));
        bufp->chgBit(oldp+276,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT____Vcellinp__ex_imm_en_inst__dec_branch_en));
        bufp->chgBit(oldp+277,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en23));
        bufp->chgBit(oldp+278,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en15));
        bufp->chgIData(oldp+279,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__pc_next),32);
        bufp->chgBit(oldp+280,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT____Vcellinp__exu_load_swc_inst__dec_load_en));
        bufp->chgBit(oldp+281,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT____Vcellinp__exu_upper_en_inst__dec_upper_en));
    }
    bufp->chgBit(oldp+282,(vlSelf->chip_tb__DOT__hclk));
    bufp->chgBit(oldp+283,(vlSelf->chip_tb__DOT__hrstn));
    bufp->chgBit(oldp+284,(vlSelf->chip_tb__DOT__itcm_ready));
    bufp->chgCData(oldp+285,(((IData)(vlSelf->chip_tb__DOT__hrstn)
                               ? 2U : 0U)),3);
    bufp->chgBit(oldp+286,((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en15) 
                             | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en23)) 
                            & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en15) 
                                & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_write)) 
                               | ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en23) 
                                  & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_write))))));
    bufp->chgIData(oldp+287,(((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en15)
                                 ? 0xffffffffU : 0U) 
                               | ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en23)
                                   ? 0xffffffffU : 0U)) 
                              & ((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en15)
                                    ? 0xffffffffU : 0U) 
                                  & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en15)
                                       ? vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_wdata
                                       : 0U) & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en15)
                                                 ? 0xffffffffU
                                                 : 0U))) 
                                 | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en23)
                                      ? 0xffffffffU
                                      : 0U) & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en23)
                                                 ? vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata
                                                 : 0U) 
                                               & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en23)
                                                   ? 0xffffffffU
                                                   : 0U)))))),32);
    bufp->chgCData(oldp+288,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt),4);
    bufp->chgCData(oldp+289,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0),7);
    bufp->chgCData(oldp+290,(((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en15)
                                 ? 3U : 0U) & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en15)
                                                 ? (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_flush)
                                                 : 0U) 
                                               & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en15)
                                                   ? 3U
                                                   : 0U))) 
                              | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en23)
                                   ? 3U : 0U) & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en23)
                                                   ? (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_flush)
                                                   : 0U) 
                                                 & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en23)
                                                     ? 3U
                                                     : 0U))))),2);
    bufp->chgCData(oldp+291,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_flush_swc_inst__DOT__nextstate),2);
    bufp->chgCData(oldp+292,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__nextstate),2);
    bufp->chgCData(oldp+293,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__nextstate),3);
    bufp->chgBit(oldp+294,((2U < ((IData)(vlSelf->chip_tb__DOT__hrstn)
                                   ? 2U : 0U))));
    bufp->chgBit(oldp+295,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram_addr_error));
    bufp->chgBit(oldp+296,(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__trans_error));
}

void Vchip_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root__trace_cleanup\n"); );
    // Init
    Vchip_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vchip_tb___024root*>(voidSelf);
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
