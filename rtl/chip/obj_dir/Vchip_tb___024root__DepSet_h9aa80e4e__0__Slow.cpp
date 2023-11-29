// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vchip_tb.h for the primary calling header

#include "verilated.h"

#include "Vchip_tb__Syms.h"
#include "Vchip_tb___024root.h"

VL_ATTR_COLD void Vchip_tb___024root___eval_static(Vchip_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vchip_tb___024root___eval_final(Vchip_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vchip_tb___024root___eval_triggers__stl(Vchip_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vchip_tb___024root___dump_triggers__stl(Vchip_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vchip_tb___024root___eval_stl(Vchip_tb___024root* vlSelf);

VL_ATTR_COLD void Vchip_tb___024root___eval_settle(Vchip_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vchip_tb___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vchip_tb___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("chip_tb.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vchip_tb___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vchip_tb___024root___dump_triggers__stl(Vchip_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*1:0*/, 128> Vchip_tb__ConstPool__TABLE_h805b10f4_0;
extern const VlUnpacked<CData/*2:0*/, 1024> Vchip_tb__ConstPool__TABLE_h54943851_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vchip_tb__ConstPool__TABLE_h02dcf0d6_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vchip_tb__ConstPool__TABLE_h74d24f31_0;

VL_ATTR_COLD void Vchip_tb___024root___stl_sequent__TOP__0(Vchip_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_h325c31e4__0;
    chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_h325c31e4__0 = 0;
    CData/*0:0*/ chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_h2317b9e8__0;
    chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_h2317b9e8__0 = 0;
    CData/*0:0*/ chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_hf07fddca__0;
    chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_hf07fddca__0 = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    SData/*9:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__haddr 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_haddr;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__hwrite 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hwrite;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__hwdata 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hwdata;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__hsize 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hsize;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__hburst 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hburst;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__hprot 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hprot;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__htrans 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_htrans;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__hresp 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hresp;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__hrdata 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hrdata;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__haddr 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__hwrite 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hwrite;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__hwdata 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hwdata;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__hburst 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hburst;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__hprot 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hprot;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__htrans 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_htrans;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__hresp 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hresp;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__hrdata 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hrdata;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__reg_rdata_1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__reg_rdata_2 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_2;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__ifu_idle 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_idle;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__cycle_cnt 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__pc 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__inst_out 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_ifu_out;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_in 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_ifu_out;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_out 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_dec_out;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__cycle_cnt 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_lui 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lui;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_auipc 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_auipc;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_jal 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_jal;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_jalr 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_jalr;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_beq 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_beq;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_bne 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_bne;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_blt 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_blt;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_bge 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_bge;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_bltu 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_bltu;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_bgeu 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_bgeu;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_lb 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lb;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_lh 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lh;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_lw 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lw;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_lbu 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lbu;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_lhu 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lhu;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_sb 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sb;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_sh 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sh;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_sw 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sw;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_addi 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_addi;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_slti 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_slti;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_sltiu 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sltiu;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_xori 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_xori;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_ori 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_ori;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_andi 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_andi;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_slli 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_slli;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_srli 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_srli;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_srai 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_srai;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_add 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_add;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_sub 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sub;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_sll 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sll;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_slt 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_slt;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_sltu 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sltu;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_xor 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_xor;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_srl 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_srl;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_sra 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sra;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_or 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_or;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_and 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_and;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_fence 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_fence;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_fence_i 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_fence_i;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_ecall 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_ecall;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_ebreak 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_ebreak;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_csrrw 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrw;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_csrrs 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrs;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_csrrc 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrc;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_csrrwi 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrwi;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_csrrsi 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrsi;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_csrrci 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrci;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_upper_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_upper_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_imm_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_reg_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_reg_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_jump_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_jump_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_branch_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_branch_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_load_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_load_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_store_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_store_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_rs2 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_rs2;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_rs1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_rs1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_rd 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_rd;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_imm_type_i 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_i;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_imm_type_s 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_s;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_imm_type_b 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_b;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_imm_type_u 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_u;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_imm_type_j 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_j;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__inst_in 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_dec_out;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__inst_out 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_exu_out;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_fence 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_fence;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_fence_i 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_fence_i;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_ecall 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_ecall;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_ebreak 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_ebreak;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_csrrw 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrw;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_csrrs 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrs;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_csrrc 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrc;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_csrrwi 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrwi;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_csrrsi 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrsi;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_csrrci 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrci;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_upper_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_upper_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_imm_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_jump_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_jump_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_branch_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_branch_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_load_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_load_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_flush_swc_inst__DOT__flush_stall 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__flush_stall;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__cycle_cnt 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__exu_load_rd 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_rd;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__exu_load_base_addr 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_base_addr;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__exu_load_offset 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_offset;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__exu_load_sext 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_sext;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__exu_load_size 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_size;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__exu_load_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__exu_store_addr 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_store_addr;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__exu_store_data 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_store_data;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__exu_store_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_store_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__exu_store_size 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_store_size;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__mau_load_rd 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_load_rd;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__mau_load_data 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_load_data;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__mau_load_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_load_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__cycle_cnt 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__mau_load_rd 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_load_rd;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__mau_load_data 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_load_data;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__mau_load_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_load_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_auipc 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010111;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_lui 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110111;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_jal 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1101111;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_jalr 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_000) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100111));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_beq 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_000) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_bne 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_001) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_blt 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_100) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_bge 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_101) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_bltu 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_110) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_bgeu 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_111) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_lb 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_000) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0000011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_lh 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_001) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0000011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_lw 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_010) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0000011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_lbu 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_100) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0000011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_lhu 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_101) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0000011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sb 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_000) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0100011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sh 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_001) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0100011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sw 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_010) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0100011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_addi 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_000) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_slti 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_010) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sltiu 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_011) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_xori 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_100) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_ori 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_110) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_andi 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_111) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_csrrw 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_001) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_csrrs 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_010) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_csrrc 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_011) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_csrrwi 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_101) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_csrrsi 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_110) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_csrrci 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_111) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_slt 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_25_equal_0000000) 
           & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_010) 
              & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110011)));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sltu 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_25_equal_0000000) 
           & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_011) 
              & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110011)));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_xor 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_25_equal_0000000) 
           & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_100) 
              & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110011)));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_or 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_25_equal_0000000) 
           & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_110) 
              & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110011)));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_and 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_25_equal_0000000) 
           & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_111) 
              & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110011)));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__itcm_haddr 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_haddr;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__itcm_hwrite 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hwrite;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__itcm_hwdata 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hwdata;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__itcm_hsize 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hsize;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__itcm_hprot 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hprot;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__itcm_hburst 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hburst;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__itcm_htrans 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_htrans;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__itcm_hmastlock 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hmastlock;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__itcm_hresp 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hresp;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__itcm_hrdata 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hrdata;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_haddr 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_hwrite 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hwrite;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_hwdata 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hwdata;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_hprot 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hprot;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_hburst 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hburst;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_htrans 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_htrans;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_hmastlock 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hmastlock;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_hresp 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hresp;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_hrdata 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hrdata;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_lui 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lui;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_auipc 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_auipc;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_jal 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_jal;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_jalr 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_jalr;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_beq 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_beq;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_bne 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_bne;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_blt 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_blt;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_bge 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_bge;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_bltu 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_bltu;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_bgeu 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_bgeu;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_lb 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lb;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_lh 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lh;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_lw 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lw;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_lbu 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lbu;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_lhu 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lhu;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_sb 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sb;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_sh 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sh;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_sw 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sw;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_addi 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_addi;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_slti 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_slti;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_sltiu 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sltiu;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_xori 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_xori;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_ori 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_ori;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_andi 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_andi;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_slli 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_slli;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_srli 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_srli;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_srai 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_srai;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_add 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_add;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_sub 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sub;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_sll 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sll;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_slt 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_slt;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_sltu 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sltu;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_xor 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_xor;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_srl 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_srl;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_sra 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sra;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_or 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_or;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_and 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_and;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_reg_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_reg_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_store_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_store_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_imm_type_s 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_s;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_imm_type_b 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_b;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_imm_type_u 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_u;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_imm_type_j 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_j;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_rd 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_rd;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_base_addr 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_base_addr;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_offset 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_offset;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_sext 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_sext;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_size 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_size;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_addr 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_store_addr;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_data 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_store_data;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_size 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_store_size;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_store_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__sext_imm_type_b 
        = (((- (IData)((1U & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_b) 
                              >> 0xbU)))) << 0xdU) 
           | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_b));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_ready 
        = vlSelf->chip_tb__DOT__itcm_ready;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__hburst_error 
        = (0U != (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hburst));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__hburst_error 
        = (0U != (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hburst));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__hsize_error 
        = (2U < (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hsize));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__haddr_error 
        = (1U & ((0U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hsize))
                  ? (0xfffU < vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_haddr)
                  : ((1U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hsize))
                      ? (0xffeU < vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_haddr)
                      : ((2U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hsize))
                          ? (0xffcU < vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_haddr)
                          : 1U))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__sext_imm_type_j 
        = (((- (IData)((1U & (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_j 
                              >> 0x13U)))) << 0x15U) 
           | vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_j);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__sext_imm_type_i 
        = (((- (IData)((1U & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_i) 
                              >> 0xbU)))) << 0xcU) 
           | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_i));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__branch 
        = (1U & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_beq)
                  ? (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_1 
                     == vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_2)
                  : ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_bne)
                      ? (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_1 
                         != vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_2)
                      : ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_blt)
                          ? VL_LTS_III(32, vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_1, vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_2)
                          : ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_bge)
                              ? VL_GTES_III(32, vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_1, vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_2)
                              : ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_bltu)
                                  ? (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_1 
                                     < vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_2)
                                  : ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_bgeu)
                                      ? (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_1 
                                         >= vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_2)
                                      : 0U)))))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_rs2 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_rs2;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_imm_type_i 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_i;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_rdata_2 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_2;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_hc00f64ab__0 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_001) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_25_equal_0000000));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_h4745dcb5__0 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_101) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_25_equal_0000000));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_h615169f4__0 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_101) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_25_equal_0100000));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_h230ed8e8__0 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_000) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110011));
    chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_h2317b9e8__0 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_19_15_equal_00000) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_20_equal_000000000000));
    chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_hf07fddca__0 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_000) 
           & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_11_7_equal_00000) 
              & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011)));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_dec_stall 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_en;
    chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_h325c31e4__0 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_11_7_equal_00000) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0001111));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__pc_real 
        = (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc 
           - (IData)(8U));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_rd 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_rd;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_ren_2 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_2) 
           | ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_2) 
              | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_2)));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_rs1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_rs1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_rdata_1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_raddr_2 
        = ((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_2)
              ? 0x1fU : 0U) | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_2)
                                 ? 0x1fU : 0U) | ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_2)
                                                   ? 0x1fU
                                                   : 0U))) 
           & ((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_2)
                 ? 0x1fU : 0U) & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_2)
                                    ? (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_raddr_2)
                                    : 0U) & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_2)
                                              ? 0x1fU
                                              : 0U))) 
              | ((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_2)
                    ? 0x1fU : 0U) & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_2)
                                       ? (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_raddr_2)
                                       : 0U) & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_2)
                                                 ? 0x1fU
                                                 : 0U))) 
                 | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_2)
                      ? 0x1fU : 0U) & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_2)
                                         ? (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_raddr_2)
                                         : 0U) & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_2)
                                                   ? 0x1fU
                                                   : 0U))))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__cycle_cnt 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_wen 
        = (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wen) 
            | ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wen) 
               | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wen) 
                   | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wen)) 
                  & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wen) 
                     | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wen))))) 
           | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__mid_reg_wen));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hsize 
        = ((IData)(vlSelf->chip_tb__DOT__hrstn) ? 2U
            : 0U);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_ren_1 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_ren_1) 
           | ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_1) 
              | ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_ren_1) 
                 | ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_1) 
                    | ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__mid_reg_ren_1) 
                       | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_1))))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_waddr 
        = (((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wen)
               ? 0x1fU : 0U) | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wen)
                                  ? 0x1fU : 0U) | (
                                                   ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wen)
                                                     ? 0x1fU
                                                     : 0U) 
                                                   | ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wen)
                                                       ? 0x1fU
                                                       : 0U)))) 
            & ((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wen)
                  ? 0x1fU : 0U) & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wen)
                                     ? (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__mid_reg_waddr)
                                     : 0U) & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wen)
                                               ? 0x1fU
                                               : 0U))) 
               | ((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wen)
                     ? 0x1fU : 0U) & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wen)
                                        ? (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_waddr)
                                        : 0U) & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wen)
                                                  ? 0x1fU
                                                  : 0U))) 
                  | ((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wen)
                        ? 0x1fU : 0U) & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wen)
                                           ? (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_waddr)
                                           : 0U) & 
                                         ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wen)
                                           ? 0x1fU : 0U))) 
                     | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wen)
                          ? 0x1fU : 0U) & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wen)
                                             ? (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_waddr)
                                             : 0U) 
                                           & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wen)
                                               ? 0x1fU
                                               : 0U))))))) 
           | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__mid_reg_wen)
                ? 0x1fU : 0U) & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__mid_reg_wen)
                                   ? (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__mid_reg_waddr)
                                   : 0U) & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__mid_reg_wen)
                                             ? 0x1fU
                                             : 0U))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_wdata 
        = (((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wen)
               ? 0xffffffffU : 0U) | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wen)
                                        ? 0xffffffffU
                                        : 0U) | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wen)
                                                   ? 0xffffffffU
                                                   : 0U) 
                                                 | ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wen)
                                                     ? 0xffffffffU
                                                     : 0U)))) 
            & ((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wen)
                  ? 0xffffffffU : 0U) & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wen)
                                           ? vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wdata
                                           : 0U) & 
                                         ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wen)
                                           ? 0xffffffffU
                                           : 0U))) 
               | ((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wen)
                     ? 0xffffffffU : 0U) & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wen)
                                              ? vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wdata
                                              : 0U) 
                                            & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wen)
                                                ? 0xffffffffU
                                                : 0U))) 
                  | ((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wen)
                        ? 0xffffffffU : 0U) & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wen)
                                                 ? vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wdata
                                                 : 0U) 
                                               & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wen)
                                                   ? 0xffffffffU
                                                   : 0U))) 
                     | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wen)
                          ? 0xffffffffU : 0U) & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wen)
                                                   ? vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wdata
                                                   : 0U) 
                                                 & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wen)
                                                     ? 0xffffffffU
                                                     : 0U))))))) 
           | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__mid_reg_wen)
                ? 0xffffffffU : 0U) & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__mid_reg_wen)
                                         ? vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__mid_reg_wdata
                                         : 0U) & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__mid_reg_wen)
                                                   ? 0xffffffffU
                                                   : 0U))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_raddr_1 
        = ((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_ren_1)
              ? 0x1fU : 0U) | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_1)
                                 ? 0x1fU : 0U) | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_ren_1)
                                                    ? 0x1fU
                                                    : 0U) 
                                                  | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_1)
                                                       ? 0x1fU
                                                       : 0U) 
                                                     | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__mid_reg_ren_1)
                                                          ? 0x1fU
                                                          : 0U) 
                                                        | ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_1)
                                                            ? 0x1fU
                                                            : 0U)))))) 
           & ((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_ren_1)
                 ? 0x1fU : 0U) & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_ren_1)
                                    ? (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_raddr_1)
                                    : 0U) & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_ren_1)
                                              ? 0x1fU
                                              : 0U))) 
              | ((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_1)
                    ? 0x1fU : 0U) & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_1)
                                       ? (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_raddr_1)
                                       : 0U) & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_1)
                                                 ? 0x1fU
                                                 : 0U))) 
                 | ((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_ren_1)
                       ? 0x1fU : 0U) & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_ren_1)
                                          ? (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_raddr_1)
                                          : 0U) & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_ren_1)
                                                    ? 0x1fU
                                                    : 0U))) 
                    | ((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_1)
                          ? 0x1fU : 0U) & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_1)
                                             ? (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_raddr_1)
                                             : 0U) 
                                           & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_1)
                                               ? 0x1fU
                                               : 0U))) 
                       | ((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__mid_reg_ren_1)
                             ? 0x1fU : 0U) & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__mid_reg_ren_1)
                                                ? (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__mid_reg_raddr_1)
                                                : 0U) 
                                              & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__mid_reg_ren_1)
                                                  ? 0x1fU
                                                  : 0U))) 
                          | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_1)
                               ? 0x1fU : 0U) & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_1)
                                                  ? (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_raddr_1)
                                                  : 0U) 
                                                & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_1)
                                                    ? 0x1fU
                                                    : 0U)))))))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hready 
        = vlSelf->chip_tb__DOT__hrstn;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__hclk 
        = vlSelf->chip_tb__DOT__hclk;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__hrstn 
        = vlSelf->chip_tb__DOT__hrstn;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_stall 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_en) 
           | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__flush_stall));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__haddr 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__itcm_haddr;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__hwrite 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__itcm_hwrite;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__hwdata 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__itcm_hwdata;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__hsize 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__itcm_hsize;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__hprot 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__itcm_hprot;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__hburst 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__itcm_hburst;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__htrans 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__itcm_htrans;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__hmastlock 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__itcm_hmastlock;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__hresp 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__itcm_hresp;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__hrdata 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__itcm_hrdata;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__haddr 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_haddr;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__hwrite 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_hwrite;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__hwdata 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_hwdata;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__hprot 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_hprot;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__hburst 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_hburst;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__htrans 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_htrans;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__hmastlock 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_hmastlock;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__hresp 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_hresp;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__hrdata 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_hrdata;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__dec_lui 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_lui;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__dec_auipc 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_auipc;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__dec_jal 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_jal;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__dec_jalr 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_jalr;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__dec_beq 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_beq;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__dec_bne 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_bne;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__dec_blt 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_blt;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__dec_bge 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_bge;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__dec_bltu 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_bltu;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__dec_bgeu 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_bgeu;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__dec_lb 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_lb;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__dec_lh 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_lh;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__dec_lw 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_lw;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__dec_lbu 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_lbu;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__dec_lhu 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_lhu;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__dec_sb 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_sb;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__dec_sh 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_sh;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__dec_sw 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_sw;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__dec_addi 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_addi;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__dec_slti 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_slti;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__dec_sltiu 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_sltiu;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__dec_xori 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_xori;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__dec_ori 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_ori;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__dec_andi 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_andi;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__dec_slli 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_slli;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__dec_srli 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_srli;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__dec_srai 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_srai;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__dec_add 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_add;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__dec_sub 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_sub;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__dec_sll 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_sll;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__dec_slt 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_slt;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__dec_sltu 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_sltu;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__dec_xor 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_xor;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__dec_srl 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_srl;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__dec_sra 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_sra;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__dec_or 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_or;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__dec_and 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_and;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_reg_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__dec_store_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_store_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__dec_imm_type_s 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_imm_type_s;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__dec_imm_type_b 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_imm_type_b;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__dec_imm_type_u 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_imm_type_u;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__dec_imm_type_j 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_imm_type_j;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_rd 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_rd;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_base_addr 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_base_addr;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_offset 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_offset;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_sext 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_sext;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_size 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_size;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_addr 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_addr;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_data 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_data;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_size 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_size;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__itcm_ready 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_ready;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__trans_error 
        = ((0U != (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_htrans)) 
           & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__hburst_error) 
              | ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__hsize_error) 
                 | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__haddr_error))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__dec_rs2 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_rs2;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__dec_rs2 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_rs2;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__dec_rs2 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_rs2;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__dec_imm_type_i 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_imm_type_i;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__dec_imm_type_i 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_imm_type_i;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__dec_imm_type_i 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_imm_type_i;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__reg_rdata_2 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_rdata_2;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__reg_rdata_2 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_rdata_2;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__reg_rdata_2 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_rdata_2;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_slli 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_hc00f64ab__0) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sll 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_hc00f64ab__0) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_srli 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_h4745dcb5__0) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_srl 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_h4745dcb5__0) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_srai 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_h615169f4__0) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sra 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_h615169f4__0) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110011));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_add 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_25_equal_0000000) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_h230ed8e8__0));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sub 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_25_equal_0100000) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_h230ed8e8__0));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_ecall 
        = ((IData)(chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_h2317b9e8__0) 
           & (IData)(chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_hf07fddca__0));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_ebreak 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_20_equal_000000000001) 
           & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_19_15_equal_00000) 
              & (IData)(chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_hf07fddca__0)));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__ifu_dec_stall 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_dec_stall;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__ifu_dec_stall 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_dec_stall;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ifu_dec_stall 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_dec_stall;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_fence_i 
        = ((IData)(chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_h2317b9e8__0) 
           & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_001) 
              & (IData)(chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_h325c31e4__0)));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_fence 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_28_equal_0000) 
           & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_19_15_equal_00000) 
              & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_000) 
                 & (IData)(chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_h325c31e4__0))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__pc_real 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__pc_real;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__pc_next 
        = (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__pc_real 
           + vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__sext_imm_type_b);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__pc_next 
        = ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_jal)
            ? (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__pc_real 
               + vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__sext_imm_type_j)
            : (0xfffffffeU & (vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_1 
                              + vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__sext_imm_type_i)));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__dec_rd 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_rd;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__dec_rd 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_rd;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__dec_rd 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_rd;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__dec_rd 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_rd;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__dec_rd 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_rd;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__pc 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__pc 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__pc 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__pc 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__pc 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__reg_ren_2 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_ren_2;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_ren_2 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_ren_2;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__dec_rs1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_rs1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__dec_rs1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_rs1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__dec_rs1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_rs1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__dec_rs1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_rs1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__dec_rs1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_rs1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__dec_rs1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_rs1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__reg_rdata_1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_rdata_1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__reg_rdata_1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_rdata_1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__reg_rdata_1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_rdata_1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__reg_rdata_1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_rdata_1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__reg_rdata_1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_rdata_1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__reg_rdata_1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_rdata_1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__reg_raddr_2 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_raddr_2;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_raddr_2 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_raddr_2;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__cycle_cnt 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__cycle_cnt;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__cycle_cnt 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__cycle_cnt;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__cycle_cnt 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__cycle_cnt;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__cycle_cnt 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__cycle_cnt;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__cycle_cnt 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__cycle_cnt;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__cycle_cnt 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__cycle_cnt;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__cycle_cnt 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__cycle_cnt;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_flush_swc_inst__DOT__cycle_cnt 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__cycle_cnt;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__reg_wen 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_wen;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__reg_wen 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_wen;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_wen 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_wen;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__hsize 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hsize;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_hsize 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hsize;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__hsize_error 
        = (2U < (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hsize));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__haddr_error 
        = (1U & ((0U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hsize))
                  ? (0xfffU < vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr)
                  : ((1U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hsize))
                      ? (0xffeU < vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr)
                      : ((2U == (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hsize))
                          ? (0xffcU < vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr)
                          : 1U))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__reg_ren_1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_ren_1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_ren_1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_ren_1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__reg_waddr 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_waddr;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__reg_waddr 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_waddr;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_waddr 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_waddr;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__reg_wdata 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_wdata;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__reg_wdata 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_wdata;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_wdata 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_wdata;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__reg_raddr_1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_raddr_1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_raddr_1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_raddr_1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__hready 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hready;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__hready 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hready;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hready 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hready;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__itcm_hready 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hready;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_hready 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hready;
    __Vtableidx1 = (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hready) 
                     << 6U) | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt) 
                                << 2U) | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__state)));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__nextstate 
        = Vchip_tb__ConstPool__TABLE_h805b10f4_0[__Vtableidx1];
    __Vtableidx3 = (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hready) 
                     << 9U) | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_store_en) 
                                << 8U) | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_en) 
                                           << 7U) | 
                                          (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt) 
                                            << 3U) 
                                           | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__state)))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__nextstate 
        = Vchip_tb__ConstPool__TABLE_h54943851_0[__Vtableidx3];
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__hclk 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__hclk;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__hclk 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__hclk;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__hclk 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__hclk;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__hrstn 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__hrstn;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__hrstn 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__hrstn;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__hrstn 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__hrstn;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__exu_stall 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_stall;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__exu_stall 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_stall;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_stall 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_stall;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT____Vcellinp__exu_upper_en_inst__dec_upper_en 
        = ((~ (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_stall)) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_upper_en));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT____Vcellinp__ex_imm_en_inst__dec_branch_en 
        = ((~ (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_stall)) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_en));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT____Vcellinp__exu_load_swc_inst__dec_load_en 
        = ((~ (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_stall)) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_load_en));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en15 
        = ((~ (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_stall)) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_jump_en));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en23 
        = ((~ (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_stall)) 
           & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_branch_en));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__itcm_ready 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__itcm_ready;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__ifu_dec_stall 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ifu_dec_stall;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__reg_ren_2 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_ren_2;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__reg_ren_2 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_ren_2;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__reg_ren_2 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_ren_2;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__reg_raddr_2 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_raddr_2;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__reg_raddr_2 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_raddr_2;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__reg_raddr_2 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_raddr_2;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__reg_wen 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_wen;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__reg_wen 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_wen;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__reg_wen 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_wen;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__reg_wen 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_wen;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__hsize 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_hsize;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__trans_error 
        = ((0U != (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_htrans)) 
           & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__hburst_error) 
              | ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__hsize_error) 
                 | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__haddr_error))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__reg_ren_1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_ren_1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__reg_ren_1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_ren_1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__reg_ren_1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_ren_1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__reg_ren_1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_ren_1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__reg_ren_1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_ren_1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__reg_ren_1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_ren_1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__reg_waddr 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_waddr;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__reg_waddr 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_waddr;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__reg_waddr 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_waddr;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__reg_waddr 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_waddr;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__reg_wdata 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_wdata;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__reg_wdata 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_wdata;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__reg_wdata 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_wdata;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__reg_wdata 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_wdata;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__reg_raddr_1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_raddr_1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__reg_raddr_1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_raddr_1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__reg_raddr_1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_raddr_1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__reg_raddr_1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_raddr_1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__reg_raddr_1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_raddr_1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__reg_raddr_1 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_raddr_1;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__hready 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__itcm_hready;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__hready 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_hready;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__hclk 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__hclk;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__hclk 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__hclk;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__hclk 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__hclk;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__hclk 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__hclk;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__hclk 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__hclk;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hclk 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__hclk;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__hrstn 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__hrstn;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__hrstn 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__hrstn;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__hrstn 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__hrstn;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__hrstn 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__hrstn;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__hrstn 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__hrstn;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hrstn 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__hrstn;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__dec_upper_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT____Vcellinp__exu_upper_en_inst__dec_upper_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__dec_branch_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT____Vcellinp__ex_imm_en_inst__dec_branch_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__dec_load_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT____Vcellinp__exu_load_swc_inst__dec_load_en;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__dec_jump_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en15;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__dec_branch_en 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en23;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc_write 
        = (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en15) 
            | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en23)) 
           & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en15) 
               & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_write)) 
              | ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en23) 
                 & (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_write))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc_wdata 
        = ((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en15)
              ? 0xffffffffU : 0U) | ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en23)
                                      ? 0xffffffffU
                                      : 0U)) & ((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en15)
                                                   ? 0xffffffffU
                                                   : 0U) 
                                                 & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en15)
                                                      ? vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_wdata
                                                      : 0U) 
                                                    & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en15)
                                                        ? 0xffffffffU
                                                        : 0U))) 
                                                | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en23)
                                                     ? 0xffffffffU
                                                     : 0U) 
                                                   & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en23)
                                                        ? vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata
                                                        : 0U) 
                                                      & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en23)
                                                          ? 0xffffffffU
                                                          : 0U)))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__flush 
        = ((((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en15)
              ? 3U : 0U) & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en15)
                              ? (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_flush)
                              : 0U) & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en15)
                                        ? 3U : 0U))) 
           | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en23)
                ? 3U : 0U) & (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en23)
                                ? (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_flush)
                                : 0U) & ((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en23)
                                          ? 3U : 0U))));
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__hclk 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hclk;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__hclk 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hclk;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__hclk 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hclk;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__hclk 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hclk;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__hclk 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hclk;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__hclk 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hclk;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__hclk 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hclk;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_flush_swc_inst__DOT__hclk 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hclk;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__hrstn 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hrstn;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__hrstn 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hrstn;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__hrstn 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hrstn;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__hrstn 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hrstn;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__hrstn 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hrstn;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__hrstn 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hrstn;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__hrstn 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hrstn;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_flush_swc_inst__DOT__hrstn 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hrstn;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__pc_write 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc_write;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc_write;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__pc_wdata 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc_wdata;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_wdata 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc_wdata;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__flush 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__flush;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__flush 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__flush;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_flush_swc_inst__DOT__flush 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__flush;
    __Vtableidx2 = (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__flush) 
                     << 6U) | (((IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt) 
                                << 2U) | (IData)(vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_flush_swc_inst__DOT__state)));
    if (Vchip_tb__ConstPool__TABLE_h02dcf0d6_0[__Vtableidx2]) {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_flush_swc_inst__DOT__nextstate 
            = Vchip_tb__ConstPool__TABLE_h74d24f31_0
            [__Vtableidx2];
    }
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__pc_write 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__pc_write 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__pc_wdata 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_wdata;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__pc_wdata 
        = vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_wdata;
}

VL_ATTR_COLD void Vchip_tb___024root___eval_stl(Vchip_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vchip_tb___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vchip_tb___024root___dump_triggers__act(Vchip_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge chip_tb.hclk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge chip_tb.hclk or negedge chip_tb.hrstn)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vchip_tb___024root___dump_triggers__nba(Vchip_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge chip_tb.hclk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge chip_tb.hclk or negedge chip_tb.hrstn)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vchip_tb___024root___ctor_var_reset(Vchip_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->chip_tb__DOT__hclk = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__hrstn = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__itcm_ready = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__hclk = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__hrstn = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_ready = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_haddr = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hwrite = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hwdata = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hsize = VL_RAND_RESET_I(3);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hprot = VL_RAND_RESET_I(7);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hburst = VL_RAND_RESET_I(3);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_htrans = VL_RAND_RESET_I(2);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hmastlock = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hready = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hresp = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hrdata = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_haddr = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hwrite = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hwdata = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hsize = VL_RAND_RESET_I(3);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hprot = VL_RAND_RESET_I(7);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hburst = VL_RAND_RESET_I(3);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_htrans = VL_RAND_RESET_I(2);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hmastlock = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hready = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hresp = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hrdata = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__hclk = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__hrstn = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__haddr = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__hwrite = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__hwdata = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__hsize = VL_RAND_RESET_I(3);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__hburst = VL_RAND_RESET_I(3);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__hprot = VL_RAND_RESET_I(7);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__htrans = VL_RAND_RESET_I(2);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__hready = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__hresp = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__hrdata = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__sram[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__hburst_error = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__hsize_error = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__haddr_error = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__trans_error = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_swc_inst__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__hclk = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__hrstn = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__haddr = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__hwrite = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__hwdata = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__hsize = VL_RAND_RESET_I(3);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__hburst = VL_RAND_RESET_I(3);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__hprot = VL_RAND_RESET_I(7);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__htrans = VL_RAND_RESET_I(2);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__hready = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__hresp = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__hrdata = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__sram[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__hburst_error = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__hsize_error = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__haddr_error = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__trans_error = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_swc_inst__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__hclk = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__hrstn = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__itcm_haddr = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__itcm_hwrite = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__itcm_hwdata = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__itcm_hsize = VL_RAND_RESET_I(3);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__itcm_hprot = VL_RAND_RESET_I(7);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__itcm_hburst = VL_RAND_RESET_I(3);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__itcm_htrans = VL_RAND_RESET_I(2);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__itcm_hmastlock = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__itcm_hready = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__itcm_hresp = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__itcm_hrdata = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_haddr = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_hwrite = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_hwdata = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_hsize = VL_RAND_RESET_I(3);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_hprot = VL_RAND_RESET_I(7);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_hburst = VL_RAND_RESET_I(3);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_htrans = VL_RAND_RESET_I(2);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_hmastlock = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_hready = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_hresp = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dtcm_hrdata = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__itcm_ready = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_ifu_out = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_idle = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc_write = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc_wdata = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_dec_out = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lui = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_auipc = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_jal = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_jalr = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_beq = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_bne = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_blt = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_bge = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_bltu = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_bgeu = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lb = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lh = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lw = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lbu = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_lhu = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sb = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sh = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sw = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_addi = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_slti = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sltiu = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_xori = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_ori = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_andi = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_slli = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_srli = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_srai = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_add = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sub = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sll = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_slt = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sltu = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_xor = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_srl = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_sra = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_or = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_and = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_fence = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_fence_i = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_ecall = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_ebreak = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrw = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrs = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrc = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrwi = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrsi = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_csrrci = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_upper_en = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_en = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_reg_en = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_jump_en = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_branch_en = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_load_en = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_store_en = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_rs2 = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_rs1 = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_rd = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_i = VL_RAND_RESET_I(12);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_s = VL_RAND_RESET_I(12);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_b = VL_RAND_RESET_I(13);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_u = VL_RAND_RESET_I(20);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_imm_type_j = VL_RAND_RESET_I(21);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__inst_exu_out = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_rd = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_base_addr = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_offset = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_sext = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_size = VL_RAND_RESET_I(2);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_en = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_store_addr = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_store_data = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_store_size = VL_RAND_RESET_I(2);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_store_en = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_load_rd = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_load_data = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_load_en = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_wdata = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_wen = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_raddr_1 = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_1 = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_ren_1 = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_raddr_2 = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_rdata_2 = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__reg_ren_2 = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_dec_stall = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__cycle_cnt = VL_RAND_RESET_I(4);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__hclk = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__hrstn = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__reg_wen = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__reg_wdata = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__reg_raddr_1 = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__reg_ren_1 = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__reg_rdata_1 = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__reg_raddr_2 = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__reg_ren_2 = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__reg_rdata_2 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__hclk = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__hrstn = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__haddr = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__hwrite = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__hwdata = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__hsize = VL_RAND_RESET_I(3);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__hburst = VL_RAND_RESET_I(3);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__hprot = VL_RAND_RESET_I(7);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__htrans = VL_RAND_RESET_I(2);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__hmastlock = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__hready = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__hresp = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__hrdata = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__itcm_ready = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__ifu_idle = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__ifu_dec_stall = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__cycle_cnt = VL_RAND_RESET_I(4);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__pc_write = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__pc_wdata = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__inst_out = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__nextstate = VL_RAND_RESET_I(2);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__ifu_swc_inst__DOT__inst_out_buff = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__hclk = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__hrstn = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_in = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_out = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__cycle_cnt = VL_RAND_RESET_I(4);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__ifu_dec_stall = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_lui = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_auipc = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_jal = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_jalr = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_beq = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_bne = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_blt = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_bge = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_bltu = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_bgeu = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_lb = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_lh = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_lw = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_lbu = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_lhu = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_sb = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_sh = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_sw = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_addi = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_slti = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_sltiu = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_xori = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_ori = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_andi = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_slli = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_srli = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_srai = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_add = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_sub = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_sll = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_slt = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_sltu = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_xor = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_srl = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_sra = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_or = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_and = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_fence = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_fence_i = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_ecall = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_ebreak = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_csrrw = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_csrrs = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_csrrc = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_csrrwi = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_csrrsi = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_csrrci = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_upper_en = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_imm_en = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_reg_en = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_jump_en = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_branch_en = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_load_en = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_store_en = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_rs2 = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_rs1 = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_rd = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_imm_type_i = VL_RAND_RESET_I(12);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_imm_type_s = VL_RAND_RESET_I(12);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_imm_type_b = VL_RAND_RESET_I(13);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_imm_type_u = VL_RAND_RESET_I(20);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__dec_imm_type_j = VL_RAND_RESET_I(21);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_28 = VL_RAND_RESET_I(4);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_25 = VL_RAND_RESET_I(7);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_20 = VL_RAND_RESET_I(12);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_19_15 = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12 = VL_RAND_RESET_I(3);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_11_7 = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0 = VL_RAND_RESET_I(7);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_28_equal_0000 = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_19_15_equal_00000 = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_11_7_equal_00000 = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_25_equal_0000000 = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_25_equal_0100000 = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_000 = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_001 = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_010 = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_011 = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_100 = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_101 = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_110 = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_14_12_equal_111 = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0000011 = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0001111 = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010011 = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0010111 = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0100011 = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110011 = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_0110111 = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100011 = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1100111 = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1101111 = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_6_0_equal_1110011 = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_20_equal_000000000000 = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__inst_31_20_equal_000000000001 = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_lui = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_auipc = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_jal = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_jalr = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_beq = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_bne = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_blt = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_bge = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_bltu = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_bgeu = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_lb = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_lh = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_lw = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_lbu = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_lhu = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sb = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sh = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sw = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_addi = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_slti = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sltiu = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_xori = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_ori = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_andi = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_csrrw = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_csrrs = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_csrrc = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_csrrwi = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_csrrsi = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_csrrci = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_slli = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_srli = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_srai = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_add = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sub = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sll = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_slt = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sltu = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_xor = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_srl = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_sra = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_or = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_and = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_fence = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_fence_i = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_ecall = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT__mid_ebreak = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_hc00f64ab__0 = 0;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_h4745dcb5__0 = 0;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_h615169f4__0 = 0;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__dec_swc_inst__DOT____VdfgTmp_h230ed8e8__0 = 0;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hclk = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__hrstn = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__cycle_cnt = VL_RAND_RESET_I(4);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ifu_dec_stall = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__inst_in = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__inst_out = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_lui = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_auipc = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_jal = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_jalr = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_beq = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_bne = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_blt = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_bge = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_bltu = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_bgeu = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_lb = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_lh = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_lw = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_lbu = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_lhu = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_sb = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_sh = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_sw = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_addi = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_slti = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_sltiu = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_xori = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_ori = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_andi = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_slli = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_srli = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_srai = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_add = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_sub = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_sll = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_slt = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_sltu = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_xor = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_srl = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_sra = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_or = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_and = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_fence = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_fence_i = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_ecall = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_ebreak = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_csrrw = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_csrrs = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_csrrc = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_csrrwi = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_csrrsi = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_csrrci = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_upper_en = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_imm_en = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_reg_en = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_jump_en = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_branch_en = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_load_en = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_store_en = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_rs2 = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_rs1 = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_rd = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_imm_type_i = VL_RAND_RESET_I(12);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_imm_type_s = VL_RAND_RESET_I(12);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_imm_type_b = VL_RAND_RESET_I(13);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_imm_type_u = VL_RAND_RESET_I(20);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__dec_imm_type_j = VL_RAND_RESET_I(21);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_wdata = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_rd = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_base_addr = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_offset = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_sext = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_size = VL_RAND_RESET_I(2);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_en = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_addr = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_data = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_size = VL_RAND_RESET_I(2);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_en = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_wdata = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_wen = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_raddr_1 = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_rdata_1 = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_ren_1 = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_raddr_2 = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_rdata_2 = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__reg_ren_2 = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__flush = VL_RAND_RESET_I(2);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__flush_stall = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_stall = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT____Vcellinp__exu_upper_en_inst__dec_upper_en = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT____Vcellinp__ex_imm_en_inst__dec_branch_en = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT____Vcellinp__exu_load_swc_inst__dec_load_en = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en15 = 0;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__pc_write__en23 = 0;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__hclk = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__hrstn = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__cycle_cnt = VL_RAND_RESET_I(4);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__dec_upper_en = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__dec_lui = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__dec_auipc = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__dec_imm_type_u = VL_RAND_RESET_I(20);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__dec_rd = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__reg_wen = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__reg_wdata = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__exu_stall = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__mid_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wen = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wdata = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__hclk = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__hrstn = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__cycle_cnt = VL_RAND_RESET_I(4);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__dec_branch_en = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__dec_addi = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__dec_slti = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__dec_sltiu = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__dec_xori = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__dec_ori = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__dec_andi = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__dec_slli = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__dec_srli = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__dec_srai = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__dec_imm_type_i = VL_RAND_RESET_I(12);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__dec_rd = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__dec_rs1 = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__reg_wen = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__reg_wdata = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__reg_raddr_1 = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__reg_ren_1 = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__reg_rdata_1 = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wen = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wdata = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_raddr_1 = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_imm_en_inst__DOT__mid_reg_ren_1 = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__hclk = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__hrstn = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__cycle_cnt = VL_RAND_RESET_I(4);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__dec_add = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__dec_sub = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__dec_sll = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__dec_slt = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__dec_sltu = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__dec_xor = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__dec_srl = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__dec_sra = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__dec_or = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__dec_and = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__dec_rs1 = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__dec_rs2 = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__dec_rd = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__reg_wen = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__reg_wdata = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__reg_rdata_1 = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__reg_raddr_1 = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__reg_ren_1 = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__reg_rdata_2 = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__reg_raddr_2 = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__reg_ren_2 = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__exu_stall = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wen = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wdata = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_raddr_1 = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_1 = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_raddr_2 = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_2 = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__hclk = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__hrstn = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__cycle_cnt = VL_RAND_RESET_I(4);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__dec_jump_en = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__dec_jal = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__dec_jalr = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__dec_imm_type_i = VL_RAND_RESET_I(12);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__dec_imm_type_j = VL_RAND_RESET_I(21);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__dec_rd = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__dec_rs1 = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__pc_write = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__pc_wdata = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__flush = VL_RAND_RESET_I(2);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__reg_wen = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__reg_wdata = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__reg_raddr_1 = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__reg_ren_1 = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__reg_rdata_1 = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wen = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wdata = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_raddr_1 = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_ren_1 = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_write = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_wdata = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__sext_imm_type_j = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__sext_imm_type_i = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__pc_real = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__pc_next = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_jump_swc_inst__DOT__mid_flush = VL_RAND_RESET_I(2);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__hclk = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__hrstn = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__cycle_cnt = VL_RAND_RESET_I(4);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__dec_branch_en = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__dec_beq = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__dec_bne = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__dec_blt = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__dec_bge = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__dec_bltu = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__dec_bgeu = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__dec_imm_type_b = VL_RAND_RESET_I(13);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__dec_rs1 = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__dec_rs2 = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__pc_write = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__pc_wdata = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__flush = VL_RAND_RESET_I(2);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__reg_rdata_1 = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__reg_raddr_1 = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__reg_ren_1 = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__reg_rdata_2 = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__reg_raddr_2 = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__reg_ren_2 = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_raddr_1 = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_1 = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_raddr_2 = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_2 = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_write = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__sext_imm_type_b = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__pc_real = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__pc_next = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_branch_swc_inst__DOT__mid_flush = VL_RAND_RESET_I(2);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__hclk = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__hrstn = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__cycle_cnt = VL_RAND_RESET_I(4);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__ifu_dec_stall = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__dec_load_en = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__dec_lb = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__dec_lh = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__dec_lw = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__dec_lbu = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__dec_lhu = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__dec_imm_type_i = VL_RAND_RESET_I(12);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__dec_rd = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__dec_rs1 = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_rd = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_base_addr = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_offset = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_sext = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_size = VL_RAND_RESET_I(2);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_en = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__reg_raddr_1 = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__reg_ren_1 = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__reg_rdata_1 = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__mid_reg_raddr_1 = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__mid_reg_ren_1 = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_rd_buff = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_base_addr_buff = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_offset_buff = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_sext_buff = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_size_buff = VL_RAND_RESET_I(2);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_load_swc_inst__DOT__exu_load_en_buff = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__hclk = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__hrstn = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__cycle_cnt = VL_RAND_RESET_I(4);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__dec_store_en = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__dec_sb = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__dec_sh = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__dec_sw = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__dec_imm_type_s = VL_RAND_RESET_I(12);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__dec_rs1 = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__dec_rs2 = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_addr = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_data = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_en = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_size = VL_RAND_RESET_I(2);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__reg_raddr_1 = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__reg_ren_1 = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__reg_rdata_1 = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__reg_raddr_2 = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__reg_ren_2 = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__reg_rdata_2 = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_stall = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_raddr_1 = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_1 = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_raddr_2 = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_2 = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_addr_buff = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_data_buff = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_en_buff = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__exu_store_swc_inst__DOT__exu_store_size_buff = VL_RAND_RESET_I(2);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_flush_swc_inst__DOT__hclk = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_flush_swc_inst__DOT__hrstn = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_flush_swc_inst__DOT__cycle_cnt = VL_RAND_RESET_I(4);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_flush_swc_inst__DOT__flush = VL_RAND_RESET_I(2);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_flush_swc_inst__DOT__flush_stall = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_flush_swc_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_top_swc_inst__DOT__ex_flush_swc_inst__DOT__nextstate = VL_RAND_RESET_I(2);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__hclk = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__hrstn = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__haddr = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__hwrite = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__hwdata = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__hsize = VL_RAND_RESET_I(3);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__hburst = VL_RAND_RESET_I(3);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__hprot = VL_RAND_RESET_I(7);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__htrans = VL_RAND_RESET_I(2);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__hmastlock = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__hready = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__hresp = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__hrdata = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__cycle_cnt = VL_RAND_RESET_I(4);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__exu_load_rd = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__exu_load_base_addr = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__exu_load_offset = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__exu_load_sext = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__exu_load_size = VL_RAND_RESET_I(2);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__exu_load_en = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__exu_store_addr = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__exu_store_data = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__exu_store_en = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__exu_store_size = VL_RAND_RESET_I(2);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__mau_load_rd = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__mau_load_data = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__mau_load_en = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__nextstate = VL_RAND_RESET_I(3);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__mau_load_data_buff = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__mau_swc_inst__DOT__mau_load_rd_buff = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__hclk = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__hrstn = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__cycle_cnt = VL_RAND_RESET_I(4);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__mau_load_rd = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__mau_load_data = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__mau_load_en = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__reg_wen = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__reg_wdata = VL_RAND_RESET_I(32);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__mid_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__mid_reg_wen = VL_RAND_RESET_I(1);
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__wbu_swc_inst__DOT__mid_reg_wdata = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_rd = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_base_addr = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_offset = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_sext = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_size = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_load_en = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__exu_store_data = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__chip_tb__DOT__hclk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__chip_tb__DOT__hrstn__0 = VL_RAND_RESET_I(1);
}
