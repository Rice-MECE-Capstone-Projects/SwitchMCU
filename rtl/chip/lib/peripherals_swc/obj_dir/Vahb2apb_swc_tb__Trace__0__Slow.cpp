// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vahb2apb_swc_tb__Syms.h"


VL_ATTR_COLD void Vahb2apb_swc_tb___024root__trace_init_sub__TOP__0(Vahb2apb_swc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("ahb2apb_swc_tb ");
    tracep->declBit(c+1,"rstn", false,-1);
    tracep->declBit(c+142,"hclk", false,-1);
    tracep->declBit(c+143,"pclk", false,-1);
    tracep->declBus(c+31,"paddr", false,-1, 31,0);
    tracep->declBus(c+32,"pselx", false,-1, 2,0);
    tracep->declBit(c+33,"penable", false,-1);
    tracep->declBit(c+34,"pwrite", false,-1);
    tracep->declBus(c+35,"pwdata", false,-1, 31,0);
    tracep->declBit(c+36,"pready", false,-1);
    tracep->declBus(c+37,"prdata", false,-1, 31,0);
    tracep->declBit(c+38,"pslverr", false,-1);
    tracep->declBus(c+135,"haddr", false,-1, 31,0);
    tracep->declBit(c+146,"hmastlock", false,-1);
    tracep->declBus(c+147,"hprot", false,-1, 6,0);
    tracep->declBus(c+148,"hsize", false,-1, 2,0);
    tracep->declBus(c+7,"htrans", false,-1, 1,0);
    tracep->declBus(c+8,"hwdata", false,-1, 31,0);
    tracep->declBus(c+9,"hrdata", false,-1, 31,0);
    tracep->declBit(c+10,"hwrite", false,-1);
    tracep->declBit(c+11,"hready", false,-1);
    tracep->declBit(c+149,"hresp", false,-1);
    tracep->declBit(c+12,"wbuffread", false,-1);
    tracep->declBit(c+13,"rbuffread", false,-1);
    tracep->declBit(c+2,"wreq", false,-1);
    tracep->declBus(c+3,"wbuffdata", false,-1, 31,0);
    tracep->declBus(c+4,"wbuffaddr", false,-1, 31,0);
    tracep->declBit(c+14,"rbuffwrite", false,-1);
    tracep->declBit(c+5,"rreq", false,-1);
    tracep->declBus(c+15,"rbuffdata", false,-1, 31,0);
    tracep->declBus(c+6,"rbuffaddr", false,-1, 31,0);
    tracep->declBit(c+16,"done", false,-1);
    tracep->declBit(c+17,"resp", false,-1);
    tracep->declBit(c+39,"sck", false,-1);
    tracep->declBit(c+40,"mosi", false,-1);
    tracep->declBus(c+150,"DFF", false,-1, 0,0);
    tracep->declBus(c+150,"LSBFIRST", false,-1, 0,0);
    tracep->declBus(c+151,"BR", false,-1, 2,0);
    tracep->declBus(c+152,"CPOL", false,-1, 0,0);
    tracep->declBus(c+152,"CPHA", false,-1, 0,0);
    tracep->pushNamePrefix("ahb2apb_swc_inst ");
    tracep->declBit(c+1,"rstn", false,-1);
    tracep->declBit(c+142,"hclk", false,-1);
    tracep->declBit(c+1,"hrstn", false,-1);
    tracep->declBus(c+135,"haddr", false,-1, 31,0);
    tracep->declBus(c+147,"hprot", false,-1, 6,0);
    tracep->declBus(c+148,"hsize", false,-1, 2,0);
    tracep->declBus(c+7,"htrans", false,-1, 1,0);
    tracep->declBus(c+8,"hwdata", false,-1, 31,0);
    tracep->declBus(c+9,"hrdata", false,-1, 31,0);
    tracep->declBit(c+10,"hwrite", false,-1);
    tracep->declBit(c+11,"hready", false,-1);
    tracep->declBit(c+149,"hresp", false,-1);
    tracep->declBus(c+153,"PD_NUM", false,-1, 31,0);
    tracep->declBit(c+143,"pclk", false,-1);
    tracep->declBit(c+1,"prstn", false,-1);
    tracep->declBus(c+31,"paddr", false,-1, 31,0);
    tracep->declBus(c+32,"pselx", false,-1, 2,0);
    tracep->declBit(c+33,"penable", false,-1);
    tracep->declBit(c+34,"pwrite", false,-1);
    tracep->declBus(c+35,"pwdata", false,-1, 31,0);
    tracep->declBit(c+36,"pready", false,-1);
    tracep->declBus(c+37,"prdata", false,-1, 31,0);
    tracep->declBit(c+38,"pslverr", false,-1);
    tracep->declBit(c+41,"wbuffread", false,-1);
    tracep->declBit(c+18,"wreq_ahbs", false,-1);
    tracep->declBit(c+42,"wreq_r", false,-1);
    tracep->declBit(c+43,"wreq_rr", false,-1);
    tracep->declBit(c+44,"wreq_rrr", false,-1);
    tracep->declBit(c+45,"wreq_apbm", false,-1);
    tracep->declBus(c+136,"wbuffdata", false,-1, 31,0);
    tracep->declBus(c+137,"wbuffaddr", false,-1, 31,0);
    tracep->declBit(c+46,"rbuffread", false,-1);
    tracep->declBit(c+47,"rbuffwrite", false,-1);
    tracep->declBit(c+19,"rreq_ahbs", false,-1);
    tracep->declBit(c+48,"rreq_r", false,-1);
    tracep->declBit(c+49,"rreq_rr", false,-1);
    tracep->declBit(c+50,"rreq_rrr", false,-1);
    tracep->declBit(c+51,"rreq_apbm", false,-1);
    tracep->declBus(c+52,"rbuffdata", false,-1, 31,0);
    tracep->declBus(c+138,"rbuffaddr", false,-1, 31,0);
    tracep->declBit(c+53,"done_apbm", false,-1);
    tracep->declBit(c+20,"done_r", false,-1);
    tracep->declBit(c+21,"done_rr", false,-1);
    tracep->declBit(c+22,"done_rrr", false,-1);
    tracep->declBit(c+23,"done_ahbs", false,-1);
    tracep->declBit(c+54,"resp", false,-1);
    tracep->declBit(c+139,"wreq_ahbs_edge", false,-1);
    tracep->declBit(c+140,"rreq_ahbs_edge", false,-1);
    tracep->pushNamePrefix("ahb2apb_ahbs_swc_inst ");
    tracep->declBit(c+142,"hclk", false,-1);
    tracep->declBit(c+1,"hrstn", false,-1);
    tracep->declBus(c+135,"haddr", false,-1, 31,0);
    tracep->declBus(c+147,"hprot", false,-1, 6,0);
    tracep->declBus(c+148,"hsize", false,-1, 2,0);
    tracep->declBus(c+7,"htrans", false,-1, 1,0);
    tracep->declBus(c+8,"hwdata", false,-1, 31,0);
    tracep->declBus(c+9,"hrdata", false,-1, 31,0);
    tracep->declBit(c+10,"hwrite", false,-1);
    tracep->declBit(c+11,"hready", false,-1);
    tracep->declBit(c+149,"hresp", false,-1);
    tracep->declBit(c+18,"wreq", false,-1);
    tracep->declBus(c+136,"wbuffdata", false,-1, 31,0);
    tracep->declBus(c+137,"wbuffaddr", false,-1, 31,0);
    tracep->declBit(c+19,"rreq", false,-1);
    tracep->declBus(c+52,"rbuffdata", false,-1, 31,0);
    tracep->declBus(c+138,"rbuffaddr", false,-1, 31,0);
    tracep->declBit(c+23,"done", false,-1);
    tracep->declBus(c+154,"HTRANS_IDLE", false,-1, 31,0);
    tracep->declBus(c+155,"HTRANS_BUSY", false,-1, 31,0);
    tracep->declBus(c+156,"HTRANS_NONSEQ", false,-1, 31,0);
    tracep->declBus(c+153,"HTRANS_SEQ", false,-1, 31,0);
    tracep->declBus(c+154,"IDLE", false,-1, 31,0);
    tracep->declBus(c+155,"WSATRT", false,-1, 31,0);
    tracep->declBus(c+156,"WPAUSE", false,-1, 31,0);
    tracep->declBus(c+153,"WWAIT", false,-1, 31,0);
    tracep->declBus(c+157,"WDONE", false,-1, 31,0);
    tracep->declBus(c+158,"RSTART", false,-1, 31,0);
    tracep->declBus(c+159,"RWAIT", false,-1, 31,0);
    tracep->declBus(c+160,"RDONE", false,-1, 31,0);
    tracep->declBus(c+24,"state", false,-1, 2,0);
    tracep->declBus(c+141,"nextstate", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ahb2apb_apbm_swc_inst ");
    tracep->declBus(c+153,"PD_NUM", false,-1, 31,0);
    tracep->declBit(c+143,"pclk", false,-1);
    tracep->declBit(c+1,"prstn", false,-1);
    tracep->declBus(c+31,"paddr", false,-1, 31,0);
    tracep->declBus(c+32,"pselx", false,-1, 2,0);
    tracep->declBit(c+33,"penable", false,-1);
    tracep->declBit(c+34,"pwrite", false,-1);
    tracep->declBus(c+35,"pwdata", false,-1, 31,0);
    tracep->declBit(c+36,"pready", false,-1);
    tracep->declBus(c+37,"prdata", false,-1, 31,0);
    tracep->declBit(c+38,"pslverr", false,-1);
    tracep->declBit(c+41,"wbuffread", false,-1);
    tracep->declBit(c+45,"wreq", false,-1);
    tracep->declBus(c+136,"wbuffdata", false,-1, 31,0);
    tracep->declBus(c+137,"wbuffaddr", false,-1, 31,0);
    tracep->declBit(c+46,"rbuffread", false,-1);
    tracep->declBit(c+47,"rbuffwrite", false,-1);
    tracep->declBit(c+51,"rreq", false,-1);
    tracep->declBus(c+52,"rbuffdata", false,-1, 31,0);
    tracep->declBus(c+138,"rbuffaddr", false,-1, 31,0);
    tracep->declBit(c+53,"done", false,-1);
    tracep->declBit(c+54,"resp", false,-1);
    tracep->declBus(c+154,"IDLE", false,-1, 31,0);
    tracep->declBus(c+155,"STEUP", false,-1, 31,0);
    tracep->declBus(c+156,"ACCESS", false,-1, 31,0);
    tracep->declBus(c+55,"state", false,-1, 1,0);
    tracep->declBus(c+56,"nextstate", false,-1, 1,0);
    tracep->declBus(c+144,"pselx_comb", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ahbm_swc_inst ");
    tracep->declBit(c+142,"hclk", false,-1);
    tracep->declBit(c+1,"hrstn", false,-1);
    tracep->declBus(c+135,"haddr", false,-1, 31,0);
    tracep->declBit(c+146,"hmastlock", false,-1);
    tracep->declBus(c+147,"hprot", false,-1, 6,0);
    tracep->declBus(c+148,"hsize", false,-1, 2,0);
    tracep->declBus(c+7,"htrans", false,-1, 1,0);
    tracep->declBus(c+8,"hwdata", false,-1, 31,0);
    tracep->declBus(c+9,"hrdata", false,-1, 31,0);
    tracep->declBit(c+10,"hwrite", false,-1);
    tracep->declBit(c+11,"hready", false,-1);
    tracep->declBit(c+149,"hresp", false,-1);
    tracep->declBit(c+12,"wbuffread", false,-1);
    tracep->declBit(c+13,"rbuffread", false,-1);
    tracep->declBit(c+2,"wreq", false,-1);
    tracep->declBus(c+3,"wbuffdata", false,-1, 31,0);
    tracep->declBus(c+4,"wbuffaddr", false,-1, 31,0);
    tracep->declBit(c+14,"rbuffwrite", false,-1);
    tracep->declBit(c+5,"rreq", false,-1);
    tracep->declBus(c+15,"rbuffdata", false,-1, 31,0);
    tracep->declBus(c+6,"rbuffaddr", false,-1, 31,0);
    tracep->declBit(c+16,"done", false,-1);
    tracep->declBit(c+17,"resp", false,-1);
    tracep->declBus(c+154,"IDLE", false,-1, 31,0);
    tracep->declBus(c+155,"STEUP", false,-1, 31,0);
    tracep->declBus(c+156,"WAIT", false,-1, 31,0);
    tracep->declBus(c+154,"HTRANS_IDLE", false,-1, 31,0);
    tracep->declBus(c+155,"HTRANS_BUSY", false,-1, 31,0);
    tracep->declBus(c+156,"HTRANS_NONSEQ", false,-1, 31,0);
    tracep->declBus(c+153,"HTRANS_SEQ", false,-1, 31,0);
    tracep->declBus(c+25,"state", false,-1, 1,0);
    tracep->declBus(c+145,"nextstate", false,-1, 1,0);
    tracep->declBus(c+26,"hwdatabuff", false,-1, 31,0);
    tracep->declBit(c+27,"wpendingflag", false,-1);
    tracep->declBit(c+28,"wpendingflagdly", false,-1);
    tracep->declBit(c+29,"rpendingflag", false,-1);
    tracep->declBit(c+30,"rpendingflagdly", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("spictrl_swc_inst ");
    tracep->declBus(c+161,"SPI_CR_ADDR", false,-1, 31,0);
    tracep->declBus(c+162,"SPI_SR_ADDR", false,-1, 31,0);
    tracep->declBus(c+163,"SPI_WDR_ADDR", false,-1, 31,0);
    tracep->declBus(c+164,"SPI_RDR_ADDR", false,-1, 31,0);
    tracep->declBus(c+153,"PD_NUM", false,-1, 31,0);
    tracep->declBit(c+143,"pclk", false,-1);
    tracep->declBit(c+1,"prstn", false,-1);
    tracep->declBus(c+31,"paddr", false,-1, 31,0);
    tracep->declBit(c+57,"psel", false,-1);
    tracep->declBit(c+33,"penable", false,-1);
    tracep->declBit(c+34,"pwrite", false,-1);
    tracep->declBus(c+35,"pwdata", false,-1, 31,0);
    tracep->declBit(c+36,"pready", false,-1);
    tracep->declBus(c+37,"prdata", false,-1, 31,0);
    tracep->declBit(c+38,"pslverr", false,-1);
    tracep->declBit(c+39,"sck", false,-1);
    tracep->declBit(c+40,"mosi", false,-1);
    tracep->declBit(c+40,"miso", false,-1);
    tracep->declBus(c+58,"SPI_CR", false,-1, 31,0);
    tracep->declBus(c+59,"SPI_SR", false,-1, 31,0);
    tracep->declBus(c+165,"SPI_RDR", false,-1, 31,0);
    tracep->declBus(c+154,"APB_TRANS_IDLE", false,-1, 31,0);
    tracep->declBus(c+155,"APB_TRANS_READY", false,-1, 31,0);
    tracep->declBus(c+156,"APB_TRANS_READ", false,-1, 31,0);
    tracep->declBus(c+153,"APB_TRANS_DELAY", false,-1, 31,0);
    tracep->declBus(c+60,"apb_state", false,-1, 2,0);
    tracep->declBus(c+61,"apb_nextstate", false,-1, 2,0);
    tracep->declBit(c+62,"addr_error", false,-1);
    tracep->declBus(c+166,"FIFO_WIDTH", false,-1, 31,0);
    tracep->declBit(c+63,"wdr_wen", false,-1);
    tracep->declBus(c+64,"wdr_wdata", false,-1, 15,0);
    tracep->declBit(c+65,"wdr_full", false,-1);
    tracep->declBit(c+66,"wdr_ren", false,-1);
    tracep->declBus(c+67,"wdr_rdata", false,-1, 15,0);
    tracep->declBit(c+68,"wdr_empty", false,-1);
    tracep->declBus(c+167,"COUNTER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+69,"SPI_CR_BR", false,-1, 2,0);
    tracep->declBit(c+70,"SPI_CR_CPOL", false,-1);
    tracep->declBit(c+71,"SPI_CR_CPHA", false,-1);
    tracep->declBit(c+72,"SPI_CR_DFF", false,-1);
    tracep->declBit(c+73,"SPI_CR_LSBFIRST", false,-1);
    tracep->declBit(c+74,"SPI_CR_SPE", false,-1);
    tracep->declBus(c+75,"cnt", false,-1, 11,0);
    tracep->declBus(c+76,"spiwdata", false,-1, 15,0);
    tracep->declBus(c+77,"maxcnt", false,-1, 11,0);
    tracep->declBus(c+154,"SPI_TRANS_IDLE", false,-1, 31,0);
    tracep->declBus(c+155,"SPI_TRANS_READ", false,-1, 31,0);
    tracep->declBus(c+156,"SPI_TRANS_DELAY", false,-1, 31,0);
    tracep->declBus(c+153,"SPI_TRANS_BUFFER", false,-1, 31,0);
    tracep->declBus(c+157,"SPI_TRANS_COUNT", false,-1, 31,0);
    tracep->declBus(c+158,"SPI_TRANS_WRITE", false,-1, 31,0);
    tracep->declBus(c+78,"spi_state", false,-1, 2,0);
    tracep->declBus(c+79,"spi_nextstate", false,-1, 2,0);
    tracep->declBit(c+80,"sck_source", false,-1);
    tracep->declBus(c+81,"exindex", false,-1, 11,0);
    tracep->declBus(c+82,"index", false,-1, 3,0);
    tracep->declBit(c+83,"rdr_wen", false,-1);
    tracep->declBus(c+84,"rdr_wdata", false,-1, 15,0);
    tracep->declBit(c+85,"rdr_full", false,-1);
    tracep->declBit(c+86,"rdr_ren", false,-1);
    tracep->declBus(c+87,"rdr_rdata", false,-1, 15,0);
    tracep->declBit(c+88,"rdr_empty", false,-1);
    tracep->declBit(c+89,"sck_source_r", false,-1);
    tracep->declBit(c+90,"shift_trig", false,-1);
    tracep->declBus(c+84,"spirdata", false,-1, 15,0);
    tracep->declBit(c+91,"BSY", false,-1);
    tracep->declBit(c+92,"OVR", false,-1);
    tracep->declBit(c+93,"TXE", false,-1);
    tracep->declBit(c+94,"RXNE", false,-1);
    tracep->pushNamePrefix("rdr_syncfifo_swc_inst ");
    tracep->declBus(c+166,"data_width", false,-1, 31,0);
    tracep->declBus(c+166,"ram_size", false,-1, 31,0);
    tracep->declBus(c+157,"addr_width", false,-1, 31,0);
    tracep->declBit(c+1,"rstn", false,-1);
    tracep->declBit(c+143,"clk", false,-1);
    tracep->declBit(c+83,"wen", false,-1);
    tracep->declBus(c+84,"wdata", false,-1, 15,0);
    tracep->declBit(c+85,"full", false,-1);
    tracep->declBit(c+86,"ren", false,-1);
    tracep->declBus(c+87,"rdata", false,-1, 15,0);
    tracep->declBit(c+88,"empty", false,-1);
    tracep->declBus(c+95,"waddr", false,-1, 3,0);
    tracep->declBus(c+96,"raddr", false,-1, 3,0);
    tracep->declBus(c+97,"waddr_ptr", false,-1, 4,0);
    tracep->declBus(c+98,"raddr_ptr", false,-1, 4,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+99+i*1,"fifo_ram", true,(i+0), 15,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wdr_syncfifo_swc_inst ");
    tracep->declBus(c+166,"data_width", false,-1, 31,0);
    tracep->declBus(c+166,"ram_size", false,-1, 31,0);
    tracep->declBus(c+157,"addr_width", false,-1, 31,0);
    tracep->declBit(c+1,"rstn", false,-1);
    tracep->declBit(c+143,"clk", false,-1);
    tracep->declBit(c+63,"wen", false,-1);
    tracep->declBus(c+64,"wdata", false,-1, 15,0);
    tracep->declBit(c+65,"full", false,-1);
    tracep->declBit(c+66,"ren", false,-1);
    tracep->declBus(c+67,"rdata", false,-1, 15,0);
    tracep->declBit(c+68,"empty", false,-1);
    tracep->declBus(c+115,"waddr", false,-1, 3,0);
    tracep->declBus(c+116,"raddr", false,-1, 3,0);
    tracep->declBus(c+117,"waddr_ptr", false,-1, 4,0);
    tracep->declBus(c+118,"raddr_ptr", false,-1, 4,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+119+i*1,"fifo_ram", true,(i+0), 15,0);
    }
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vahb2apb_swc_tb___024root__trace_init_top(Vahb2apb_swc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root__trace_init_top\n"); );
    // Body
    Vahb2apb_swc_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vahb2apb_swc_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vahb2apb_swc_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vahb2apb_swc_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vahb2apb_swc_tb___024root__trace_register(Vahb2apb_swc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vahb2apb_swc_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vahb2apb_swc_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vahb2apb_swc_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vahb2apb_swc_tb___024root__trace_full_sub_0(Vahb2apb_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vahb2apb_swc_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root__trace_full_top_0\n"); );
    // Init
    Vahb2apb_swc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vahb2apb_swc_tb___024root*>(voidSelf);
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vahb2apb_swc_tb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vahb2apb_swc_tb___024root__trace_full_sub_0(Vahb2apb_swc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb2apb_swc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb2apb_swc_tb___024root__trace_full_sub_0\n"); );
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
    bufp->fullIData(oldp+37,(vlSelf->ahb2apb_swc_tb__DOT__prdata),32);
    bufp->fullBit(oldp+38,(vlSelf->ahb2apb_swc_tb__DOT__pslverr));
    bufp->fullBit(oldp+39,(vlSelf->ahb2apb_swc_tb__DOT__sck));
    bufp->fullBit(oldp+40,(vlSelf->ahb2apb_swc_tb__DOT__mosi));
    bufp->fullBit(oldp+41,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffread));
    bufp->fullBit(oldp+42,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_r));
    bufp->fullBit(oldp+43,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_rr));
    bufp->fullBit(oldp+44,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_rrr));
    bufp->fullBit(oldp+45,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_apbm));
    bufp->fullBit(oldp+46,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffread));
    bufp->fullBit(oldp+47,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffwrite));
    bufp->fullBit(oldp+48,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_r));
    bufp->fullBit(oldp+49,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_rr));
    bufp->fullBit(oldp+50,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_rrr));
    bufp->fullBit(oldp+51,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_apbm));
    bufp->fullIData(oldp+52,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffdata),32);
    bufp->fullBit(oldp+53,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_apbm));
    bufp->fullBit(oldp+54,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__resp));
    bufp->fullCData(oldp+55,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__state),2);
    bufp->fullCData(oldp+56,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate),2);
    bufp->fullBit(oldp+57,((1U & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx))));
    bufp->fullIData(oldp+58,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR),32);
    bufp->fullIData(oldp+59,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_SR),32);
    bufp->fullCData(oldp+60,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_state),3);
    bufp->fullCData(oldp+61,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_nextstate),3);
    bufp->fullBit(oldp+62,((1U & ((~ ((0x100000U == vlSelf->ahb2apb_swc_tb__DOT__paddr) 
                                      | ((0x100004U 
                                          == vlSelf->ahb2apb_swc_tb__DOT__paddr) 
                                         | ((0x100008U 
                                             == vlSelf->ahb2apb_swc_tb__DOT__paddr) 
                                            | (0x10000cU 
                                               == vlSelf->ahb2apb_swc_tb__DOT__paddr))))) 
                                  & (IData)(vlSelf->ahb2apb_swc_tb__DOT__pselx)))));
    bufp->fullBit(oldp+63,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wen));
    bufp->fullSData(oldp+64,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wdata),16);
    bufp->fullBit(oldp+65,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_full));
    bufp->fullBit(oldp+66,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_ren));
    bufp->fullSData(oldp+67,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_rdata),16);
    bufp->fullBit(oldp+68,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_empty));
    bufp->fullCData(oldp+69,((7U & (vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR 
                                    >> 3U))),3);
    bufp->fullBit(oldp+70,((1U & (vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR 
                                  >> 1U))));
    bufp->fullBit(oldp+71,((1U & vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR)));
    bufp->fullBit(oldp+72,((1U & (vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR 
                                  >> 0xbU))));
    bufp->fullBit(oldp+73,((1U & (vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR 
                                  >> 7U))));
    bufp->fullBit(oldp+74,((1U & (vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR 
                                  >> 6U))));
    bufp->fullSData(oldp+75,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__cnt),12);
    bufp->fullSData(oldp+76,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spiwdata),16);
    bufp->fullSData(oldp+77,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__maxcnt),12);
    bufp->fullCData(oldp+78,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_state),3);
    bufp->fullCData(oldp+79,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_nextstate),3);
    bufp->fullBit(oldp+80,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__sck_source));
    bufp->fullSData(oldp+81,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__exindex),12);
    bufp->fullCData(oldp+82,((0xfU & ((0x80U & vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR)
                                       ? (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__exindex)
                                       : ((0x800U & vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR)
                                           ? ((IData)(0xfU) 
                                              - (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__exindex))
                                           : ((IData)(7U) 
                                              - (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__exindex)))))),4);
    bufp->fullBit(oldp+83,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_wen));
    bufp->fullSData(oldp+84,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spirdata),16);
    bufp->fullBit(oldp+85,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_full));
    bufp->fullBit(oldp+86,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_ren));
    bufp->fullSData(oldp+87,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_rdata),16);
    bufp->fullBit(oldp+88,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_empty));
    bufp->fullBit(oldp+89,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__sck_source_r));
    bufp->fullBit(oldp+90,(((~ (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__sck_source_r)) 
                            & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__sck_source))));
    bufp->fullBit(oldp+91,((1U & (vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_SR 
                                  >> 7U))));
    bufp->fullBit(oldp+92,((1U & (vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_SR 
                                  >> 6U))));
    bufp->fullBit(oldp+93,((1U & (vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_SR 
                                  >> 1U))));
    bufp->fullBit(oldp+94,((1U & vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_SR)));
    bufp->fullCData(oldp+95,((0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr))),4);
    bufp->fullCData(oldp+96,((0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr))),4);
    bufp->fullCData(oldp+97,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr),5);
    bufp->fullCData(oldp+98,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr),5);
    bufp->fullSData(oldp+99,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[0]),16);
    bufp->fullSData(oldp+100,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[1]),16);
    bufp->fullSData(oldp+101,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[2]),16);
    bufp->fullSData(oldp+102,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[3]),16);
    bufp->fullSData(oldp+103,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[4]),16);
    bufp->fullSData(oldp+104,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[5]),16);
    bufp->fullSData(oldp+105,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[6]),16);
    bufp->fullSData(oldp+106,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[7]),16);
    bufp->fullSData(oldp+107,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[8]),16);
    bufp->fullSData(oldp+108,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[9]),16);
    bufp->fullSData(oldp+109,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[10]),16);
    bufp->fullSData(oldp+110,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[11]),16);
    bufp->fullSData(oldp+111,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[12]),16);
    bufp->fullSData(oldp+112,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[13]),16);
    bufp->fullSData(oldp+113,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[14]),16);
    bufp->fullSData(oldp+114,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram[15]),16);
    bufp->fullCData(oldp+115,((0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr))),4);
    bufp->fullCData(oldp+116,((0xfU & (IData)(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr))),4);
    bufp->fullCData(oldp+117,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr),5);
    bufp->fullCData(oldp+118,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr),5);
    bufp->fullSData(oldp+119,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[0]),16);
    bufp->fullSData(oldp+120,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[1]),16);
    bufp->fullSData(oldp+121,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[2]),16);
    bufp->fullSData(oldp+122,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[3]),16);
    bufp->fullSData(oldp+123,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[4]),16);
    bufp->fullSData(oldp+124,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[5]),16);
    bufp->fullSData(oldp+125,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[6]),16);
    bufp->fullSData(oldp+126,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[7]),16);
    bufp->fullSData(oldp+127,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[8]),16);
    bufp->fullSData(oldp+128,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[9]),16);
    bufp->fullSData(oldp+129,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[10]),16);
    bufp->fullSData(oldp+130,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[11]),16);
    bufp->fullSData(oldp+131,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[12]),16);
    bufp->fullSData(oldp+132,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[13]),16);
    bufp->fullSData(oldp+133,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[14]),16);
    bufp->fullSData(oldp+134,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram[15]),16);
    bufp->fullIData(oldp+135,(vlSelf->ahb2apb_swc_tb__DOT__haddr),32);
    bufp->fullIData(oldp+136,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffdata),32);
    bufp->fullIData(oldp+137,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffaddr),32);
    bufp->fullIData(oldp+138,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffaddr),32);
    bufp->fullBit(oldp+139,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_ahbs_edge));
    bufp->fullBit(oldp+140,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_ahbs_edge));
    bufp->fullCData(oldp+141,(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate),3);
    bufp->fullBit(oldp+142,(vlSelf->ahb2apb_swc_tb__DOT__hclk));
    bufp->fullBit(oldp+143,(vlSelf->ahb2apb_swc_tb__DOT__pclk));
    bufp->fullCData(oldp+144,(((((IData)(vlSelf->ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_apbm) 
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
    bufp->fullCData(oldp+145,(vlSelf->ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__nextstate),2);
    bufp->fullBit(oldp+146,(vlSelf->ahb2apb_swc_tb__DOT__hmastlock));
    bufp->fullCData(oldp+147,(vlSelf->ahb2apb_swc_tb__DOT__hprot),7);
    bufp->fullCData(oldp+148,(vlSelf->ahb2apb_swc_tb__DOT__hsize),3);
    bufp->fullBit(oldp+149,(vlSelf->ahb2apb_swc_tb__DOT__hresp));
    bufp->fullBit(oldp+150,(1U));
    bufp->fullCData(oldp+151,(0U),3);
    bufp->fullBit(oldp+152,(0U));
    bufp->fullIData(oldp+153,(3U),32);
    bufp->fullIData(oldp+154,(0U),32);
    bufp->fullIData(oldp+155,(1U),32);
    bufp->fullIData(oldp+156,(2U),32);
    bufp->fullIData(oldp+157,(4U),32);
    bufp->fullIData(oldp+158,(5U),32);
    bufp->fullIData(oldp+159,(6U),32);
    bufp->fullIData(oldp+160,(7U),32);
    bufp->fullIData(oldp+161,(0x100000U),32);
    bufp->fullIData(oldp+162,(0x100004U),32);
    bufp->fullIData(oldp+163,(0x100008U),32);
    bufp->fullIData(oldp+164,(0x10000cU),32);
    bufp->fullIData(oldp+165,(vlSelf->ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_RDR),32);
    bufp->fullIData(oldp+166,(0x10U),32);
    bufp->fullIData(oldp+167,(0xcU),32);
}
