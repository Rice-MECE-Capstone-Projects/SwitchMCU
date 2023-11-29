// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vchip_tb.h for the primary calling header

#include "verilated.h"

#include "Vchip_tb__Syms.h"
#include "Vchip_tb__Syms.h"
#include "Vchip_tb___024root.h"

VL_ATTR_COLD void Vchip_tb___024root___eval_initial__TOP(Vchip_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h35232e27__0;
    // Body
    __Vtemp_h35232e27__0[0U] = 0x2e766364U;
    __Vtemp_h35232e27__0[1U] = 0x705f7462U;
    __Vtemp_h35232e27__0[2U] = 0x636869U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_h35232e27__0));
    vlSymsp->_traceDumpOpen();
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hmastlock = 0U;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hwrite = 0U;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hsize = 2U;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__itcm_hburst = 0U;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hmastlock = 0U;
    vlSelf->chip_tb__DOT__chip_top_inst__DOT__dtcm_hburst = 0U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vchip_tb___024root___dump_triggers__stl(Vchip_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vchip_tb___024root___eval_triggers__stl(Vchip_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchip_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchip_tb___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vchip_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
