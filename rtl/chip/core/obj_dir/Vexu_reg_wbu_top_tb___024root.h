// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vexu_reg_wbu_top_tb.h for the primary calling header

#ifndef VERILATED_VEXU_REG_WBU_TOP_TB___024ROOT_H_
#define VERILATED_VEXU_REG_WBU_TOP_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vexu_reg_wbu_top_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vexu_reg_wbu_top_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__hclk;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__hrstn;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_lui;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_auipc;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_jal;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_jalr;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_beq;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_bne;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_blt;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_bge;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_bltu;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_bgeu;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_lb;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_lh;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_lw;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_lbu;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_lhu;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_sb;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_sh;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_sw;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_addi;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_slti;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_sltiu;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_xori;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_ori;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_andi;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_slli;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_srli;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_srai;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_add;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_sub;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_sll;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_slt;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_sltu;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_xor;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_srl;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_sra;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_or;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_and;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_fence;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_fence_i;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_ecall;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_ebreak;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_csrrw;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_csrrs;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_csrrc;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_csrrwi;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_csrrsi;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_csrrci;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_upper_en;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_imm_en;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_reg_en;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_jump_en;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_branch_en;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_load_en;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__dec_store_en;
        CData/*4:0*/ exu_reg_wbu_top_tb__DOT__dec_rs2;
        CData/*4:0*/ exu_reg_wbu_top_tb__DOT__dec_rs1;
        CData/*4:0*/ exu_reg_wbu_top_tb__DOT__dec_rd;
        CData/*4:0*/ exu_reg_wbu_top_tb__DOT__exu_load_rd;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__exu_load_sext;
        CData/*1:0*/ exu_reg_wbu_top_tb__DOT__exu_load_size;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__exu_load_en;
        CData/*1:0*/ exu_reg_wbu_top_tb__DOT__exu_store_size;
    };
    struct {
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__exu_store_en;
        CData/*4:0*/ exu_reg_wbu_top_tb__DOT__reg_waddr;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__reg_wen;
        CData/*4:0*/ exu_reg_wbu_top_tb__DOT__reg_raddr_1;
        CData/*4:0*/ exu_reg_wbu_top_tb__DOT__reg_raddr_2;
        CData/*3:0*/ exu_reg_wbu_top_tb__DOT__cycle_cnt;
        CData/*4:0*/ exu_reg_wbu_top_tb__DOT__mau_load_rd;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__mau_load_en;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__pc_write__en0;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__flush_stall;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_stall;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT____Vcellinp__exu_upper_en_inst__dec_upper_en;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT____Vcellinp__ex_imm_en_inst__dec_branch_en;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT____Vcellinp__exu_load_swc_inst__dec_load_en;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en15;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__pc_write__en23;
        CData/*4:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_upper_en_inst__DOT__mid_reg_waddr;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wen;
        CData/*4:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_waddr;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wen;
        CData/*4:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_raddr_1;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_ren_1;
        CData/*4:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_waddr;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wen;
        CData/*4:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_raddr_1;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_1;
        CData/*4:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_raddr_2;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_ren_2;
        CData/*4:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_waddr;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wen;
        CData/*4:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_raddr_1;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_ren_1;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_write;
        CData/*1:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_flush;
        CData/*4:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_raddr_1;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_1;
        CData/*4:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_raddr_2;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_reg_ren_2;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_write;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__branch;
        CData/*1:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_flush;
        CData/*4:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__mid_reg_raddr_1;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__mid_reg_ren_1;
        CData/*4:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_rd_buff;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_sext_buff;
        CData/*1:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_size_buff;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_en_buff;
        CData/*4:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__mid_reg_raddr_1;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_1;
        CData/*4:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__mid_reg_raddr_2;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__mid_reg_ren_2;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__exu_store_en_buff;
        CData/*1:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__exu_store_size_buff;
        CData/*1:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_flush_swc_inst__DOT__state;
        CData/*1:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_flush_swc_inst__DOT__nextstate;
        CData/*4:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__wbu_inst__DOT__mid_reg_waddr;
        CData/*0:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__wbu_inst__DOT__mid_reg_wen;
        CData/*0:0*/ __Vdly__exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_write;
        CData/*0:0*/ __Vdly__exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_write;
        CData/*0:0*/ __Vdly__exu_reg_wbu_top_tb__DOT__exu_load_en;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__exu_reg_wbu_top_tb__DOT__hclk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__exu_reg_wbu_top_tb__DOT__hrstn__0;
        CData/*0:0*/ __VactContinue;
    };
    struct {
        SData/*11:0*/ exu_reg_wbu_top_tb__DOT__dec_imm_type_i;
        SData/*11:0*/ exu_reg_wbu_top_tb__DOT__dec_imm_type_s;
        SData/*12:0*/ exu_reg_wbu_top_tb__DOT__dec_imm_type_b;
        IData/*31:0*/ exu_reg_wbu_top_tb__DOT__inst_in;
        IData/*31:0*/ exu_reg_wbu_top_tb__DOT__inst_out;
        IData/*19:0*/ exu_reg_wbu_top_tb__DOT__dec_imm_type_u;
        IData/*20:0*/ exu_reg_wbu_top_tb__DOT__dec_imm_type_j;
        IData/*31:0*/ exu_reg_wbu_top_tb__DOT__pc;
        IData/*31:0*/ exu_reg_wbu_top_tb__DOT__exu_load_base_addr;
        IData/*31:0*/ exu_reg_wbu_top_tb__DOT__exu_load_offset;
        IData/*31:0*/ exu_reg_wbu_top_tb__DOT__exu_store_addr;
        IData/*31:0*/ exu_reg_wbu_top_tb__DOT__exu_store_data;
        IData/*31:0*/ exu_reg_wbu_top_tb__DOT__reg_wdata;
        IData/*31:0*/ exu_reg_wbu_top_tb__DOT__reg_rdata_1;
        IData/*31:0*/ exu_reg_wbu_top_tb__DOT__reg_rdata_2;
        IData/*31:0*/ exu_reg_wbu_top_tb__DOT__mau_load_data;
        IData/*31:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__pc_wdata__en1;
        IData/*31:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_upper_en_inst__DOT__mid_reg_wdata;
        IData/*31:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__ex_imm_en_inst__DOT__mid_reg_wdata;
        IData/*31:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_reg_swc_inst__DOT__mid_reg_wdata;
        IData/*31:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_reg_wdata;
        IData/*31:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_wdata;
        IData/*31:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__pc_next;
        IData/*31:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata;
        IData/*31:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__pc_next;
        IData/*31:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_base_addr_buff;
        IData/*31:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_load_swc_inst__DOT__exu_load_offset_buff;
        IData/*31:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__exu_store_addr_buff;
        IData/*31:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_store_swc_inst__DOT__exu_store_data_buff;
        IData/*31:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__i;
        IData/*31:0*/ exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__wbu_inst__DOT__mid_reg_wdata;
        IData/*31:0*/ __Vdly__exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_jump_swc_inst__DOT__mid_pc_wdata;
        IData/*31:0*/ __Vdly__exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__exu_top_inst__DOT__exu_branch_swc_inst__DOT__mid_pc_wdata;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 32> exu_reg_wbu_top_tb__DOT__exu_reb_wbu_top_inst__DOT__regfile_inst__DOT__regfile;
        VlUnpacked<CData/*0:0*/, 7> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vexu_reg_wbu_top_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vexu_reg_wbu_top_tb___024root(Vexu_reg_wbu_top_tb__Syms* symsp, const char* v__name);
    ~Vexu_reg_wbu_top_tb___024root();
    VL_UNCOPYABLE(Vexu_reg_wbu_top_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
