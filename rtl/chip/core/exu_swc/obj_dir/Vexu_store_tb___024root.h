// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vexu_store_tb.h for the primary calling header

#ifndef VERILATED_VEXU_STORE_TB___024ROOT_H_
#define VERILATED_VEXU_STORE_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vexu_store_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vexu_store_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ exu_store_tb__DOT__hclk;
    CData/*0:0*/ exu_store_tb__DOT__hrstn;
    CData/*3:0*/ exu_store_tb__DOT__cycle_cnt;
    CData/*0:0*/ exu_store_tb__DOT__dec_store_en;
    CData/*0:0*/ exu_store_tb__DOT__dec_sb;
    CData/*0:0*/ exu_store_tb__DOT__dec_sh;
    CData/*0:0*/ exu_store_tb__DOT__dec_sw;
    CData/*4:0*/ exu_store_tb__DOT__dec_rs1;
    CData/*4:0*/ exu_store_tb__DOT__dec_rs2;
    CData/*0:0*/ exu_store_tb__DOT__exu_stall;
    CData/*0:0*/ exu_store_tb__DOT__exu_store_en;
    CData/*1:0*/ exu_store_tb__DOT__exu_store_size;
    CData/*4:0*/ exu_store_tb__DOT__uut__DOT__mid_reg_raddr_1;
    CData/*0:0*/ exu_store_tb__DOT__uut__DOT__mid_reg_ren_1;
    CData/*4:0*/ exu_store_tb__DOT__uut__DOT__mid_reg_raddr_2;
    CData/*0:0*/ exu_store_tb__DOT__uut__DOT__mid_reg_ren_2;
    CData/*0:0*/ exu_store_tb__DOT__uut__DOT__exu_store_en_buff;
    CData/*1:0*/ exu_store_tb__DOT__uut__DOT__exu_store_size_buff;
    CData/*0:0*/ __Vtrigprevexpr___TOP__exu_store_tb__DOT__hclk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__exu_store_tb__DOT__hrstn__0;
    CData/*0:0*/ __VactContinue;
    SData/*11:0*/ exu_store_tb__DOT__dec_imm_type_s;
    IData/*31:0*/ exu_store_tb__DOT__reg_rdata_1;
    IData/*31:0*/ exu_store_tb__DOT__reg_rdata_2;
    IData/*31:0*/ exu_store_tb__DOT__exu_store_addr;
    IData/*31:0*/ exu_store_tb__DOT__exu_store_data;
    IData/*31:0*/ exu_store_tb__DOT__uut__DOT__exu_store_addr_buff;
    IData/*31:0*/ exu_store_tb__DOT__uut__DOT__exu_store_data_buff;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hfff496ee__0;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vexu_store_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vexu_store_tb___024root(Vexu_store_tb__Syms* symsp, const char* v__name);
    ~Vexu_store_tb___024root();
    VL_UNCOPYABLE(Vexu_store_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
