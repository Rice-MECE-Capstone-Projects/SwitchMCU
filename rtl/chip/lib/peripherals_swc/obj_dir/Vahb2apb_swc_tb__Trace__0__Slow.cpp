// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vahb2apb_swc_tb__Syms.h"


VL_ATTR_COLD void Vahb2apb_swc_tb___024root__trace_init_sub__TOP__0(Vahb2apb_swc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("ahb2apb_swc_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"rstn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"hclk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+238,0,"pclk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"paddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"pselx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+33,0,"penable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"pwrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"pwdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+36,0,"pready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"prdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+38,0,"pslverr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+230,0,"haddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+241,0,"hmastlock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+242,0,"hprot",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+243,0,"hsize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+7,0,"htrans",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+8,0,"hwdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"hrdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+10,0,"hwrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"hready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+244,0,"hresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"wbuffread",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"rbuffread",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"wreq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"wbuffdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"wbuffaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+14,0,"rbuffwrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"rreq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"rbuffdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"rbuffaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+16,0,"done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"sck",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"mosi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+245,0,"DFF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+245,0,"LSBFIRST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+246,0,"BR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+247,0,"CPOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+247,0,"CPHA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+245,0,"UE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+245,0,"M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+245,0,"PCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+247,0,"PS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+248,0,"STOP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("ahb2apb_swc_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"hclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"hrstn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+230,0,"haddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+242,0,"hprot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+243,0,"hsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+7,0,"htrans",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+8,0,"hwdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"hrdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+10,0,"hwrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"hready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+244,0,"hresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+249,0,"PD_NUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+238,0,"pclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"prstn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"paddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"pselx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+33,0,"penable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"pwrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"pwdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+36,0,"pready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"prdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+38,0,"pslverr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"wbuffread",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"wreq_ahbs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"wreq_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"wreq_rr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"wreq_rrr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"wreq_apbm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+231,0,"wbuffdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+232,0,"wbuffaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+47,0,"rbuffread",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"rbuffwrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"rreq_ahbs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"rreq_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"rreq_rr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"rreq_rrr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"rreq_apbm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"rbuffdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+233,0,"rbuffaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+54,0,"done_apbm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"done_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"done_rr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"done_rrr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"done_ahbs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+234,0,"wreq_ahbs_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+235,0,"rreq_ahbs_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ahb2apb_ahbs_swc_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+237,0,"hclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"hrstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+230,0,"haddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+242,0,"hprot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+243,0,"hsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+7,0,"htrans",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+8,0,"hwdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"hrdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+10,0,"hwrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"hready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+244,0,"hresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"wreq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+231,0,"wbuffdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+232,0,"wbuffaddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+19,0,"rreq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"rbuffdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+233,0,"rbuffaddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+23,0,"done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+250,0,"HTRANS_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+251,0,"HTRANS_BUSY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+252,0,"HTRANS_NONSEQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+249,0,"HTRANS_SEQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+250,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+251,0,"WSATRT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+252,0,"WPAUSE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+249,0,"WWAIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+253,0,"WDONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+254,0,"RSTART",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+255,0,"RWAIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+256,0,"RDONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+236,0,"nextstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("ahb2apb_apbm_swc_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+249,0,"PD_NUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+238,0,"pclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"prstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"paddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"pselx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+33,0,"penable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"pwrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"pwdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+36,0,"pready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"prdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+38,0,"pslverr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"wbuffread",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"wreq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+231,0,"wbuffdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+232,0,"wbuffaddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+47,0,"rbuffread",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"rbuffwrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"rreq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"rbuffdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+233,0,"rbuffaddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+54,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"resp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+250,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+251,0,"STEUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+252,0,"ACCESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+57,0,"nextstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+239,0,"pselx_comb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ahbm_swc_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+237,0,"hclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"hrstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+230,0,"haddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+241,0,"hmastlock",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+242,0,"hprot",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+243,0,"hsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+7,0,"htrans",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+8,0,"hwdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"hrdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+10,0,"hwrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"hready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+244,0,"hresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"wbuffread",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"rbuffread",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"wreq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"wbuffdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"wbuffaddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+14,0,"rbuffwrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"rreq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"rbuffdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"rbuffaddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+16,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"resp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+250,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+251,0,"STEUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+252,0,"WAIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+250,0,"HTRANS_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+251,0,"HTRANS_BUSY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+252,0,"HTRANS_NONSEQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+249,0,"HTRANS_SEQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+240,0,"nextstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+26,0,"hwdatabuff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+27,0,"wpendingflag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"wpendingflagdly",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"rpendingflag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"rpendingflagdly",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("spictrl_swc_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+257,0,"SPI_CR_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+258,0,"SPI_SR_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+259,0,"SPI_WDR_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+260,0,"SPI_RDR_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+238,0,"pclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"prstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"paddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+58,0,"psel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"penable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"pwrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"pwdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+36,0,"pready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"prdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+38,0,"pslverr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"sck",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"mosi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"miso",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"pready_buff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"prdata_buff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+61,0,"pslverr_buff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"SPI_CR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"SPI_SR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+261,0,"SPI_RDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+250,0,"APB_TRANS_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+251,0,"APB_TRANS_READY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+252,0,"APB_TRANS_READ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+249,0,"APB_TRANS_DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"apb_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+65,0,"apb_nextstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+66,0,"addr_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+262,0,"FIFO_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+67,0,"wdr_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+68,0,"wdr_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+69,0,"wdr_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"wdr_ren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+71,0,"wdr_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+72,0,"wdr_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+263,0,"COUNTER_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"SPI_CR_BR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+74,0,"SPI_CR_CPOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"SPI_CR_CPHA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"SPI_CR_DFF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"SPI_CR_LSBFIRST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"SPI_CR_SPE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"spiwdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+80,0,"cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+81,0,"max_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+250,0,"SPI_TRANS_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+251,0,"SPI_TRANS_READ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+252,0,"SPI_TRANS_DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+249,0,"SPI_TRANS_BUFFER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+253,0,"SPI_TRANS_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+254,0,"SPI_TRANS_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,0,"spi_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+83,0,"spi_nextstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+84,0,"sck_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"exindex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+86,0,"index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+87,0,"rdr_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+88,0,"rdr_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+89,0,"rdr_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"rdr_ren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+91,0,"rdr_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+92,0,"rdr_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"sck_source_dly",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"shift_trig",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+88,0,"spirdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+95,0,"BSY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"OVR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"TXE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"RXNE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("rdr_syncfifo_swc_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+262,0,"data_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"ram_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+253,0,"addr_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+238,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+88,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+89,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+91,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+92,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+99,0,"waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+100,0,"raddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+101,0,"waddr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+102,0,"raddr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("fifo_ram", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+103+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("wdr_syncfifo_swc_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+262,0,"data_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"ram_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+253,0,"addr_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+238,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+68,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+69,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+71,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+72,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+119,0,"waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+120,0,"raddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+121,0,"waddr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+122,0,"raddr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("fifo_ram", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+123+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("uart_swc_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+264,0,"UART_SR_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+265,0,"UART_WDR_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+266,0,"UART_RDR_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+267,0,"UART_BRR_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+268,0,"UART_CR1_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+269,0,"UART_CR2_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+270,0,"UART_CR3_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+238,0,"pclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"prstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"paddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+139,0,"psel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"penable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"pwrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"pwdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+36,0,"pready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"prdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+38,0,"pslverr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"pready_buff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+141,0,"prdata_buff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+142,0,"pslverr_buff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+271,0,"UART_SR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+272,0,"UART_WDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+273,0,"UART_RDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"UART_BRR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+144,0,"UART_CR1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+145,0,"UART_CR2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"UART_CR3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+250,0,"APB_TRANS_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+251,0,"APB_TRANS_READY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+252,0,"APB_TRANS_READ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+249,0,"APB_TRANS_DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"apb_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+148,0,"apb_nextstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+149,0,"addr_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+262,0,"FIFO_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+150,0,"wdr_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+151,0,"wdr_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+152,0,"wdr_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"wdr_ren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+154,0,"wdr_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+155,0,"wdr_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+262,0,"COUNTER_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+156,0,"UART_CR1_UE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"UART_CR1_M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"UART_CR1_PCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"UART_CR1_PS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+160,0,"UART_CR2_STOP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+161,0,"total_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+162,0,"tx_uartwdata_full_buff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+163,0,"tx_byte_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+164,0,"tx_bit_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+250,0,"UART_TX_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+251,0,"UART_TX_READ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+252,0,"UART_TX_DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+249,0,"UART_TX_BUFFER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+253,0,"UART_TX_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+165,0,"uart_tx_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+166,0,"uart_tx_nextstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+167,0,"tx_odd_tx_parity_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"tx_even_tx_parity_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"tx_parity_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+170,0,"tx_uartwdata_with_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+171,0,"tx_uartwdata_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+172,0,"rx_byte_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+173,0,"rx_bit_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+174,0,"rx_dly",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"rx_negedge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+250,0,"UART_RX_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+251,0,"UART_RX_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+252,0,"UART_RX_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"uart_rx_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+177,0,"uart_rx_nextstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+178,0,"capture_bit_cnt_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+179,0,"uartrdata_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+180,0,"uartrdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+181,0,"data_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+182,0,"data_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+183,0,"parity_check",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"stop_check",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"rdr_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+180,0,"rdr_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+186,0,"rdr_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"rdr_ren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+188,0,"rdr_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+189,0,"rdr_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("rdr_syncfifo_swc_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+262,0,"data_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"ram_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+253,0,"addr_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+238,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+180,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+186,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+188,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+189,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+190,0,"waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+191,0,"raddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+192,0,"waddr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+193,0,"raddr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("fifo_ram", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+194+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("wdr_syncfifo_swc_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+262,0,"data_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"ram_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+253,0,"addr_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+238,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+151,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+152,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+154,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+155,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+210,0,"waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+211,0,"raddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+212,0,"waddr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+213,0,"raddr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("fifo_ram", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+214+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vahb2apb_swc_tb___024root__trace_init_top(Vahb2apb_swc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root__trace_init_top\n"); );
    // Body
    Vahb2apb_swc_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vahb2apb_swc_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vahb2apb_swc_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vahb2apb_swc_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vahb2apb_swc_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vahb2apb_swc_tb___024root__trace_register(Vahb2apb_swc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vahb2apb_swc_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vahb2apb_swc_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vahb2apb_swc_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vahb2apb_swc_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vahb2apb_swc_tb___024root__trace_const_0_sub_0(Vahb2apb_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vahb2apb_swc_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root__trace_const_0\n"); );
    // Init
    Vahb2apb_swc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vahb2apb_swc_tb___024root*>(voidSelf);
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vahb2apb_swc_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vahb2apb_swc_tb___024root__trace_const_0_sub_0(Vahb2apb_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+241,(vlSelf->ahb2apb_swc_tb__DOT__hmastlock));
    bufp->fullCData(oldp+242,(vlSelf->ahb2apb_swc_tb__DOT__hprot),7);
    bufp->fullCData(oldp+243,(vlSelf->ahb2apb_swc_tb__DOT__hsize),3);
    bufp->fullBit(oldp+244,(vlSelf->ahb2apb_swc_tb__DOT__hresp));
    bufp->fullBit(oldp+245,(1U));
    bufp->fullCData(oldp+246,(0U),3);
    bufp->fullBit(oldp+247,(0U));
    bufp->fullCData(oldp+248,(2U),2);
    bufp->fullIData(oldp+249,(3U),32);
    bufp->fullIData(oldp+250,(0U),32);
    bufp->fullIData(oldp+251,(1U),32);
    bufp->fullIData(oldp+252,(2U),32);
    bufp->fullIData(oldp+253,(4U),32);
    bufp->fullIData(oldp+254,(5U),32);
    bufp->fullIData(oldp+255,(6U),32);
    bufp->fullIData(oldp+256,(7U),32);
    bufp->fullIData(oldp+257,(0x100000U),32);
    bufp->fullIData(oldp+258,(0x100004U),32);
    bufp->fullIData(oldp+259,(0x100008U),32);
    bufp->fullIData(oldp+260,(0x10000cU),32);
    bufp->fullIData(oldp+261,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_RDR),32);
    bufp->fullIData(oldp+262,(0x10U),32);
    bufp->fullIData(oldp+263,(0xcU),32);
    bufp->fullIData(oldp+264,(0x100100U),32);
    bufp->fullIData(oldp+265,(0x100104U),32);
    bufp->fullIData(oldp+266,(0x100108U),32);
    bufp->fullIData(oldp+267,(0x10010cU),32);
    bufp->fullIData(oldp+268,(0x100110U),32);
    bufp->fullIData(oldp+269,(0x100114U),32);
    bufp->fullIData(oldp+270,(0x100118U),32);
    bufp->fullIData(oldp+271,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_SR),32);
    bufp->fullIData(oldp+272,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_WDR),32);
    bufp->fullIData(oldp+273,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_RDR),32);
}

VL_ATTR_COLD void Vahb2apb_swc_tb___024root__trace_full_0_sub_0(Vahb2apb_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vahb2apb_swc_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root__trace_full_0\n"); );
    // Init
    Vahb2apb_swc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vahb2apb_swc_tb___024root*>(voidSelf);
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vahb2apb_swc_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vahb2apb_swc_tb___024root__trace_full_0_sub_0(Vahb2apb_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->ahb2apb_swc_tb__DOT__rstn));
    bufp->fullBit(oldp+2,(vlSelf->ahb2apb_swc_tb__DOT__wreq));
    bufp->fullIData(oldp+3,(vlSelf->ahb2apb_swc_tb__DOT__wbuffdata),32);
    bufp->fullIData(oldp+4,(vlSelf->ahb2apb_swc_tb__DOT__wbuffaddr),32);
    bufp->fullBit(oldp+5,(vlSelf->ahb2apb_swc_tb__DOT__rreq));
    bufp->fullIData(oldp+6,(vlSelf->ahb2apb_swc_tb__DOT__rbuffaddr),32);
    bufp->fullCData(oldp+7,(vlSelf->ahb2apb_swc_tb__DOT__htrans),2);
    bufp->fullIData(oldp+8,(vlSelf->ahb2apb_swc_tb__DOT__hwdata),32);
    bufp->fullIData(oldp+9,(vlSelf->ahb2apb_swc_tb__DOT__hrdata),32);
    bufp->fullBit(oldp+10,(vlSelf->ahb2apb_swc_tb__DOT__hwrite));
    bufp->fullBit(oldp+11,(vlSelf->ahb2apb_swc_tb__DOT__hready));
    bufp->fullBit(oldp+12,(vlSelf->ahb2apb_swc_tb__DOT__wbuffread));
    bufp->fullBit(oldp+13,(vlSelf->ahb2apb_swc_tb__DOT__rbuffread));
    bufp->fullBit(oldp+14,(vlSelf->ahb2apb_swc_tb__DOT__rbuffwrite));
    bufp->fullIData(oldp+15,(vlSelf->ahb2apb_swc_tb__DOT__rbuffdata),32);
    bufp->fullBit(oldp+16,(vlSelf->ahb2apb_swc_tb__DOT__done));
    bufp->fullBit(oldp+17,(vlSelf->ahb2apb_swc_tb__DOT__resp));
    bufp->fullBit(oldp+18,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_ahbs));
    bufp->fullBit(oldp+19,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_ahbs));
    bufp->fullBit(oldp+20,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_r));
    bufp->fullBit(oldp+21,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_rr));
    bufp->fullBit(oldp+22,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_rrr));
    bufp->fullBit(oldp+23,(((~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_rrr)) 
                            & (IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_rr))));
    bufp->fullCData(oldp+24,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__state),3);
    bufp->fullCData(oldp+25,(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__state),2);
    bufp->fullIData(oldp+26,(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__hwdatabuff),32);
    bufp->fullBit(oldp+27,(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflag));
    bufp->fullBit(oldp+28,(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflagdly));
    bufp->fullBit(oldp+29,(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflag));
    bufp->fullBit(oldp+30,(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflagdly));
    bufp->fullIData(oldp+31,(vlSelf->ahb2apb_swc_tb__DOT__paddr),32);
    bufp->fullCData(oldp+32,(vlSelf->ahb2apb_swc_tb__DOT__pselx),3);
    bufp->fullBit(oldp+33,(vlSelf->ahb2apb_swc_tb__DOT__penable));
    bufp->fullBit(oldp+34,(vlSelf->ahb2apb_swc_tb__DOT__pwrite));
    bufp->fullIData(oldp+35,(vlSelf->ahb2apb_swc_tb__DOT__pwdata),32);
    bufp->fullBit(oldp+36,(vlSelf->ahb2apb_swc_tb__DOT__pready));
    bufp->fullIData(oldp+37,(((((1U & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx))
                                 ? 0xffffffffU : 0U) 
                               & (((1U & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx))
                                    ? vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__prdata_buff
                                    : 0U) & ((1U & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx))
                                              ? 0xffffffffU
                                              : 0U))) 
                              | (((2U & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx))
                                   ? 0xffffffffU : 0U) 
                                 & (((2U & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx))
                                      ? vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__prdata_buff
                                      : 0U) & ((2U 
                                                & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx))
                                                ? 0xffffffffU
                                                : 0U))))),32);
    bufp->fullBit(oldp+38,((((IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx) 
                             & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__pslverr_buff)) 
                            | (IData)((((IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx) 
                                        >> 1U) & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__pslverr_buff))))));
    bufp->fullBit(oldp+39,(vlSelf->ahb2apb_swc_tb__DOT__sck));
    bufp->fullBit(oldp+40,(vlSelf->ahb2apb_swc_tb__DOT__mosi));
    bufp->fullBit(oldp+41,(vlSelf->ahb2apb_swc_tb__DOT__tx));
    bufp->fullBit(oldp+42,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffread));
    bufp->fullBit(oldp+43,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_r));
    bufp->fullBit(oldp+44,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_rr));
    bufp->fullBit(oldp+45,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_rrr));
    bufp->fullBit(oldp+46,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_apbm));
    bufp->fullBit(oldp+47,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffread));
    bufp->fullBit(oldp+48,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffwrite));
    bufp->fullBit(oldp+49,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_r));
    bufp->fullBit(oldp+50,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_rr));
    bufp->fullBit(oldp+51,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_rrr));
    bufp->fullBit(oldp+52,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_apbm));
    bufp->fullIData(oldp+53,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffdata),32);
    bufp->fullBit(oldp+54,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_apbm));
    bufp->fullBit(oldp+55,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__resp));
    bufp->fullCData(oldp+56,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__state),2);
    bufp->fullCData(oldp+57,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate),2);
    bufp->fullBit(oldp+58,((1U & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx))));
    bufp->fullBit(oldp+59,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__pready_buff));
    bufp->fullIData(oldp+60,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__prdata_buff),32);
    bufp->fullBit(oldp+61,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__pslverr_buff));
    bufp->fullIData(oldp+62,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR),32);
    bufp->fullIData(oldp+63,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_SR),32);
    bufp->fullCData(oldp+64,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_state),3);
    bufp->fullCData(oldp+65,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_nextstate),3);
    bufp->fullBit(oldp+66,((1U & ((~ ((0x100000U == vlSelf->ahb2apb_swc_tb__DOT__paddr) 
                                      | ((0x100004U 
                                          == vlSelf->ahb2apb_swc_tb__DOT__paddr) 
                                         | ((0x100008U 
                                             == vlSelf->ahb2apb_swc_tb__DOT__paddr) 
                                            | (0x10000cU 
                                               == vlSelf->ahb2apb_swc_tb__DOT__paddr))))) 
                                  & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx)))));
    bufp->fullBit(oldp+67,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wen));
    bufp->fullSData(oldp+68,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wdata),16);
    bufp->fullBit(oldp+69,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_full));
    bufp->fullBit(oldp+70,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_ren));
    bufp->fullSData(oldp+71,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_rdata),16);
    bufp->fullBit(oldp+72,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_empty));
    bufp->fullCData(oldp+73,((7U & (vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR 
                                    >> 3U))),3);
    bufp->fullBit(oldp+74,((1U & (vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR 
                                  >> 1U))));
    bufp->fullBit(oldp+75,((1U & vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR)));
    bufp->fullBit(oldp+76,((1U & (vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR 
                                  >> 0xbU))));
    bufp->fullBit(oldp+77,((1U & (vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR 
                                  >> 7U))));
    bufp->fullBit(oldp+78,((1U & (vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR 
                                  >> 6U))));
    bufp->fullSData(oldp+79,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spiwdata),16);
    bufp->fullSData(oldp+80,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__cnt),12);
    bufp->fullSData(oldp+81,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__max_cnt),12);
    bufp->fullCData(oldp+82,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_state),3);
    bufp->fullCData(oldp+83,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_nextstate),3);
    bufp->fullBit(oldp+84,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__sck_source));
    bufp->fullSData(oldp+85,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__exindex),12);
    bufp->fullCData(oldp+86,((0xfU & ((0x80U & vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR)
                                       ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__exindex)
                                       : ((0x800U & vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR)
                                           ? ((IData)(0xfU) 
                                              - (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__exindex))
                                           : ((IData)(7U) 
                                              - (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__exindex)))))),4);
    bufp->fullBit(oldp+87,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_wen));
    bufp->fullSData(oldp+88,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spirdata),16);
    bufp->fullBit(oldp+89,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_full));
    bufp->fullBit(oldp+90,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_ren));
    bufp->fullSData(oldp+91,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_rdata),16);
    bufp->fullBit(oldp+92,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_empty));
    bufp->fullBit(oldp+93,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__sck_source_dly));
    bufp->fullBit(oldp+94,(((~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__sck_source_dly)) 
                            & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__sck_source))));
    bufp->fullBit(oldp+95,((1U & (vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_SR 
                                  >> 7U))));
    bufp->fullBit(oldp+96,((1U & (vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_SR 
                                  >> 6U))));
    bufp->fullBit(oldp+97,((1U & (vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_SR 
                                  >> 1U))));
    bufp->fullBit(oldp+98,((1U & vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_SR)));
    bufp->fullCData(oldp+99,((0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr))),4);
    bufp->fullCData(oldp+100,((0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr))),4);
    bufp->fullCData(oldp+101,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr),5);
    bufp->fullCData(oldp+102,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr),5);
    bufp->fullSData(oldp+103,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[0]),16);
    bufp->fullSData(oldp+104,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[1]),16);
    bufp->fullSData(oldp+105,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[2]),16);
    bufp->fullSData(oldp+106,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[3]),16);
    bufp->fullSData(oldp+107,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[4]),16);
    bufp->fullSData(oldp+108,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[5]),16);
    bufp->fullSData(oldp+109,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[6]),16);
    bufp->fullSData(oldp+110,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[7]),16);
    bufp->fullSData(oldp+111,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[8]),16);
    bufp->fullSData(oldp+112,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[9]),16);
    bufp->fullSData(oldp+113,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[10]),16);
    bufp->fullSData(oldp+114,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[11]),16);
    bufp->fullSData(oldp+115,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[12]),16);
    bufp->fullSData(oldp+116,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[13]),16);
    bufp->fullSData(oldp+117,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[14]),16);
    bufp->fullSData(oldp+118,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[15]),16);
    bufp->fullCData(oldp+119,((0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))),4);
    bufp->fullCData(oldp+120,((0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr))),4);
    bufp->fullCData(oldp+121,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr),5);
    bufp->fullCData(oldp+122,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr),5);
    bufp->fullSData(oldp+123,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[0]),16);
    bufp->fullSData(oldp+124,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[1]),16);
    bufp->fullSData(oldp+125,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[2]),16);
    bufp->fullSData(oldp+126,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[3]),16);
    bufp->fullSData(oldp+127,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[4]),16);
    bufp->fullSData(oldp+128,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[5]),16);
    bufp->fullSData(oldp+129,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[6]),16);
    bufp->fullSData(oldp+130,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[7]),16);
    bufp->fullSData(oldp+131,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[8]),16);
    bufp->fullSData(oldp+132,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[9]),16);
    bufp->fullSData(oldp+133,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[10]),16);
    bufp->fullSData(oldp+134,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[11]),16);
    bufp->fullSData(oldp+135,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[12]),16);
    bufp->fullSData(oldp+136,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[13]),16);
    bufp->fullSData(oldp+137,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[14]),16);
    bufp->fullSData(oldp+138,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[15]),16);
    bufp->fullBit(oldp+139,((1U & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx) 
                                   >> 1U))));
    bufp->fullBit(oldp+140,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__pready_buff));
    bufp->fullIData(oldp+141,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__prdata_buff),32);
    bufp->fullBit(oldp+142,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__pslverr_buff));
    bufp->fullIData(oldp+143,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_BRR),32);
    bufp->fullIData(oldp+144,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR1),32);
    bufp->fullIData(oldp+145,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR2),32);
    bufp->fullIData(oldp+146,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR3),32);
    bufp->fullCData(oldp+147,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__apb_state),3);
    bufp->fullCData(oldp+148,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__apb_nextstate),3);
    bufp->fullBit(oldp+149,((1U & ((~ ((0x100100U == vlSelf->ahb2apb_swc_tb__DOT__paddr) 
                                       | ((0x100104U 
                                           == vlSelf->ahb2apb_swc_tb__DOT__paddr) 
                                          | ((0x100108U 
                                              == vlSelf->ahb2apb_swc_tb__DOT__paddr) 
                                             | ((0x10010cU 
                                                 == vlSelf->ahb2apb_swc_tb__DOT__paddr) 
                                                | ((0x100110U 
                                                    == vlSelf->ahb2apb_swc_tb__DOT__paddr) 
                                                   | ((0x100114U 
                                                       == vlSelf->ahb2apb_swc_tb__DOT__paddr) 
                                                      | (0x100118U 
                                                         == vlSelf->ahb2apb_swc_tb__DOT__paddr)))))))) 
                                   & ((IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx) 
                                      >> 1U)))));
    bufp->fullBit(oldp+150,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_wen));
    bufp->fullSData(oldp+151,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_wdata),16);
    bufp->fullBit(oldp+152,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_full));
    bufp->fullBit(oldp+153,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_ren));
    bufp->fullSData(oldp+154,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_rdata),16);
    bufp->fullBit(oldp+155,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_empty));
    bufp->fullBit(oldp+156,((1U & (vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR1 
                                   >> 0xdU))));
    bufp->fullBit(oldp+157,((1U & (vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR1 
                                   >> 0xcU))));
    bufp->fullBit(oldp+158,((1U & (vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR1 
                                   >> 0xaU))));
    bufp->fullBit(oldp+159,((1U & (vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR1 
                                   >> 9U))));
    bufp->fullCData(oldp+160,((3U & (vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR2 
                                     >> 0xcU))),2);
    bufp->fullCData(oldp+161,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__total_bits),4);
    bufp->fullSData(oldp+162,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_uartwdata_full_buff),16);
    bufp->fullCData(oldp+163,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_byte_cnt),4);
    bufp->fullSData(oldp+164,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_bit_cnt),16);
    bufp->fullCData(oldp+165,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uart_tx_state),3);
    bufp->fullCData(oldp+166,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uart_tx_nextstate),3);
    bufp->fullBit(oldp+167,((1U & VL_REDXOR_16(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_rdata))));
    bufp->fullBit(oldp+168,((1U & (~ VL_REDXOR_16(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_rdata)))));
    bufp->fullBit(oldp+169,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_parity_bit));
    bufp->fullSData(oldp+170,((0xffffU & VL_SHIFTL_III(16,16,32, (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_rdata), 1U))),16);
    bufp->fullSData(oldp+171,(((2U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT____VdfgRegularize_h5899cdc5_1_1))
                                ? (0xfc00U | (0x3ffU 
                                              & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_rdata), 1U)))
                                : ((3U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT____VdfgRegularize_h5899cdc5_1_1))
                                    ? (0xf800U | (((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_parity_bit) 
                                                   << 0xaU) 
                                                  | (0x3ffU 
                                                     & VL_SHIFTL_III(10,10,32, (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_rdata), 1U))))
                                    : ((0U == (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT____VdfgRegularize_h5899cdc5_1_1))
                                        ? (0xfe00U 
                                           | (0x1ffU 
                                              & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_rdata), 1U)))
                                        : (0xfc00U 
                                           | (((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_parity_bit) 
                                               << 9U) 
                                              | (0x1ffU 
                                                 & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_rdata), 1U)))))))),16);
    bufp->fullCData(oldp+172,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rx_byte_cnt),4);
    bufp->fullSData(oldp+173,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rx_bit_cnt),16);
    bufp->fullBit(oldp+174,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rx_dly));
    bufp->fullBit(oldp+175,(((~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__tx)) 
                             & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rx_dly))));
    bufp->fullCData(oldp+176,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uart_rx_state),3);
    bufp->fullCData(oldp+177,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uart_rx_nextstate),3);
    bufp->fullSData(oldp+178,((0xffffU & VL_SHIFTR_III(16,16,32, 
                                                       (0xffffU 
                                                        & vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_BRR), 1U))),16);
    bufp->fullSData(oldp+179,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uartrdata_full),16);
    bufp->fullSData(oldp+180,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_wdata),16);
    bufp->fullCData(oldp+181,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__data_start),4);
    bufp->fullCData(oldp+182,(((0x1000U & vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR1)
                                ? 7U : 8U)),4);
    bufp->fullBit(oldp+183,((1U & ((~ (vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR1 
                                       >> 0xaU)) | 
                                   ((0x200U & vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR1)
                                     ? (1U & VL_REDXOR_16(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_wdata))
                                     : (~ (1U & VL_REDXOR_16(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_wdata))))))));
    bufp->fullBit(oldp+184,((1U & ((2U == (3U & (vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR2 
                                                 >> 0xcU)))
                                    ? (3U == (3U & 
                                              ((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uartrdata_full) 
                                               >> 0xeU)))
                                    : ((IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uartrdata_full) 
                                       >> 0xfU)))));
    bufp->fullBit(oldp+185,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_wen));
    bufp->fullBit(oldp+186,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_full));
    bufp->fullBit(oldp+187,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_ren));
    bufp->fullSData(oldp+188,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_rdata),16);
    bufp->fullBit(oldp+189,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_empty));
    bufp->fullCData(oldp+190,((0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr))),4);
    bufp->fullCData(oldp+191,((0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr))),4);
    bufp->fullCData(oldp+192,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr),5);
    bufp->fullCData(oldp+193,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr),5);
    bufp->fullSData(oldp+194,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[0]),16);
    bufp->fullSData(oldp+195,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[1]),16);
    bufp->fullSData(oldp+196,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[2]),16);
    bufp->fullSData(oldp+197,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[3]),16);
    bufp->fullSData(oldp+198,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[4]),16);
    bufp->fullSData(oldp+199,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[5]),16);
    bufp->fullSData(oldp+200,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[6]),16);
    bufp->fullSData(oldp+201,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[7]),16);
    bufp->fullSData(oldp+202,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[8]),16);
    bufp->fullSData(oldp+203,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[9]),16);
    bufp->fullSData(oldp+204,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[10]),16);
    bufp->fullSData(oldp+205,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[11]),16);
    bufp->fullSData(oldp+206,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[12]),16);
    bufp->fullSData(oldp+207,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[13]),16);
    bufp->fullSData(oldp+208,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[14]),16);
    bufp->fullSData(oldp+209,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[15]),16);
    bufp->fullCData(oldp+210,((0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))),4);
    bufp->fullCData(oldp+211,((0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr))),4);
    bufp->fullCData(oldp+212,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr),5);
    bufp->fullCData(oldp+213,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr),5);
    bufp->fullSData(oldp+214,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[0]),16);
    bufp->fullSData(oldp+215,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[1]),16);
    bufp->fullSData(oldp+216,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[2]),16);
    bufp->fullSData(oldp+217,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[3]),16);
    bufp->fullSData(oldp+218,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[4]),16);
    bufp->fullSData(oldp+219,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[5]),16);
    bufp->fullSData(oldp+220,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[6]),16);
    bufp->fullSData(oldp+221,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[7]),16);
    bufp->fullSData(oldp+222,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[8]),16);
    bufp->fullSData(oldp+223,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[9]),16);
    bufp->fullSData(oldp+224,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[10]),16);
    bufp->fullSData(oldp+225,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[11]),16);
    bufp->fullSData(oldp+226,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[12]),16);
    bufp->fullSData(oldp+227,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[13]),16);
    bufp->fullSData(oldp+228,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[14]),16);
    bufp->fullSData(oldp+229,(vlSelf->ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[15]),16);
    bufp->fullIData(oldp+230,(vlSelf->ahb2apb_swc_tb__DOT__haddr),32);
    bufp->fullIData(oldp+231,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffdata),32);
    bufp->fullIData(oldp+232,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffaddr),32);
    bufp->fullIData(oldp+233,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffaddr),32);
    bufp->fullBit(oldp+234,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_ahbs_edge));
    bufp->fullBit(oldp+235,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_ahbs_edge));
    bufp->fullCData(oldp+236,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate),3);
    bufp->fullBit(oldp+237,(vlSelf->ahb2apb_swc_tb__DOT__hclk));
    bufp->fullBit(oldp+238,(vlSelf->ahb2apb_swc_tb__DOT__pclk));
    bufp->fullCData(oldp+239,(((((IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_apbm) 
                                 & ((0x100000U <= vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffaddr) 
                                    & (0x1000ffU >= vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffaddr))) 
                                | ((IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_apbm) 
                                   & ((0x100000U <= vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffaddr) 
                                      & (0x1000ffU 
                                         >= vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffaddr))))
                                ? 1U : ((((IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_apbm) 
                                          & ((0x100100U 
                                              <= vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffaddr) 
                                             & (0x1001ffU 
                                                >= vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffaddr))) 
                                         | ((IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_apbm) 
                                            & ((0x100100U 
                                                <= vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffaddr) 
                                               & (0x1001ffU 
                                                  >= vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffaddr))))
                                         ? 2U : 0U))),3);
    bufp->fullCData(oldp+240,(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__nextstate),2);
}
