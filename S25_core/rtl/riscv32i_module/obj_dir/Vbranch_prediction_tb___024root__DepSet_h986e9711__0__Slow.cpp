// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbranch_prediction_tb.h for the primary calling header

#include "Vbranch_prediction_tb__pch.h"
#include "Vbranch_prediction_tb__Syms.h"
#include "Vbranch_prediction_tb___024root.h"

VL_ATTR_COLD void Vbranch_prediction_tb___024root___eval_initial__TOP(Vbranch_prediction_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbranch_prediction_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbranch_prediction_tb___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x6e5f7462U;
    __Vtemp_1[2U] = 0x6374696fU;
    __Vtemp_1[3U] = 0x72656469U;
    __Vtemp_1[4U] = 0x63685f70U;
    __Vtemp_1[5U] = 0x6272616eU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(6, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    __Vtemp_2[0U] = 0x2e686578U;
    __Vtemp_2[1U] = 0x6772616dU;
    __Vtemp_2[2U] = 0x70726fU;
    VL_READMEM_N(true, 32, 10000000, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_2)
                 ,  &(vlSelf->branch_prediction_tb__DOT__branch_inst__DOT__ins_mem__DOT__memory)
                 , 0, ~0ULL);
    vlSelf->branch_prediction_tb__DOT__branch_inst__DOT__ins_mem__DOT__pc_reg = 0U;
}
