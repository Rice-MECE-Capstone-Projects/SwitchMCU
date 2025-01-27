// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vahb2apb_swc_tb.h for the primary calling header

#ifndef VERILATED_VAHB2APB_SWC_TB___024ROOT_H_
#define VERILATED_VAHB2APB_SWC_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vahb2apb_swc_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vahb2apb_swc_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ ahb2apb_swc_tb__DOT__hclk;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__pclk;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__rstn;
        CData/*2:0*/ ahb2apb_swc_tb__DOT__pselx;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__penable;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__pwrite;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__pready;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__hmastlock;
        CData/*6:0*/ ahb2apb_swc_tb__DOT__hprot;
        CData/*2:0*/ ahb2apb_swc_tb__DOT__hsize;
        CData/*1:0*/ ahb2apb_swc_tb__DOT__htrans;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__hwrite;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__hready;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__hresp;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__wbuffread;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__rbuffread;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__wreq;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__rbuffwrite;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__rreq;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__done;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__resp;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__sck;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__mosi;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__tx;
        CData/*1:0*/ ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__state;
        CData/*1:0*/ ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__nextstate;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflag;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__wpendingflagdly;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflag;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__rpendingflagdly;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffread;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_ahbs;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_r;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_rr;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_rrr;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_apbm;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffread;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffwrite;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_ahbs;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_r;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_rr;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_rrr;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_apbm;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_apbm;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_r;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_rr;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__done_rrr;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__resp;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_ahbs_edge;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_ahbs_edge;
        CData/*2:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__state;
        CData/*2:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_ahbs_swc_inst__DOT__nextstate;
        CData/*1:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__state;
        CData/*1:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__ahb2apb_apbm_swc_inst__DOT__nextstate;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__pready_buff;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__pslverr_buff;
        CData/*2:0*/ ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_state;
        CData/*2:0*/ ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__apb_nextstate;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wen;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_full;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_ren;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_empty;
        CData/*2:0*/ ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_state;
        CData/*2:0*/ ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spi_nextstate;
    };
    struct {
        CData/*0:0*/ ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__sck_source;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_wen;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_full;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_ren;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_empty;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__sck_source_dly;
        CData/*4:0*/ ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr;
        CData/*4:0*/ ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr;
        CData/*4:0*/ ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr;
        CData/*4:0*/ ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__pready_buff;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__pslverr_buff;
        CData/*2:0*/ ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__apb_state;
        CData/*2:0*/ ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__apb_nextstate;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_wen;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_full;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_ren;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_empty;
        CData/*3:0*/ ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__total_bits;
        CData/*3:0*/ ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_byte_cnt;
        CData/*2:0*/ ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uart_tx_state;
        CData/*2:0*/ ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uart_tx_nextstate;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_parity_bit;
        CData/*3:0*/ ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rx_byte_cnt;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rx_dly;
        CData/*2:0*/ ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uart_rx_state;
        CData/*2:0*/ ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uart_rx_nextstate;
        CData/*3:0*/ ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__data_start;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_wen;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_full;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_ren;
        CData/*0:0*/ ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_empty;
        CData/*1:0*/ ahb2apb_swc_tb__DOT__uart_swc_inst__DOT____VdfgRegularize_h5899cdc5_1_1;
        CData/*4:0*/ ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__waddr_ptr;
        CData/*4:0*/ ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__raddr_ptr;
        CData/*4:0*/ ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__waddr_ptr;
        CData/*4:0*/ ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__raddr_ptr;
        CData/*0:0*/ __Vdly__ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wreq_ahbs_edge;
        CData/*0:0*/ __Vdly__ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rreq_ahbs_edge;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ahb2apb_swc_tb__DOT__hclk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ahb2apb_swc_tb__DOT__pclk__0;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_wdata;
        SData/*15:0*/ ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_rdata;
        SData/*15:0*/ ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spiwdata;
        SData/*11:0*/ ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__cnt;
        SData/*11:0*/ ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__max_cnt;
        SData/*11:0*/ ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__exindex;
        SData/*15:0*/ ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_rdata;
        SData/*15:0*/ ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__spirdata;
        SData/*15:0*/ ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_wdata;
        SData/*15:0*/ ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_rdata;
        SData/*15:0*/ ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_uartwdata_full_buff;
        SData/*15:0*/ ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__tx_bit_cnt;
        SData/*15:0*/ ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rx_bit_cnt;
        SData/*15:0*/ ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__uartrdata_full;
        SData/*15:0*/ ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_wdata;
        SData/*15:0*/ ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_rdata;
        IData/*31:0*/ ahb2apb_swc_tb__DOT__paddr;
        IData/*31:0*/ ahb2apb_swc_tb__DOT__pwdata;
        IData/*31:0*/ ahb2apb_swc_tb__DOT__haddr;
        IData/*31:0*/ ahb2apb_swc_tb__DOT__hwdata;
        IData/*31:0*/ ahb2apb_swc_tb__DOT__hrdata;
    };
    struct {
        IData/*31:0*/ ahb2apb_swc_tb__DOT__wbuffdata;
        IData/*31:0*/ ahb2apb_swc_tb__DOT__wbuffaddr;
        IData/*31:0*/ ahb2apb_swc_tb__DOT__rbuffdata;
        IData/*31:0*/ ahb2apb_swc_tb__DOT__rbuffaddr;
        IData/*31:0*/ ahb2apb_swc_tb__DOT__ahbm_swc_inst__DOT__hwdatabuff;
        IData/*31:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffdata;
        IData/*31:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffaddr;
        IData/*31:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffdata;
        IData/*31:0*/ ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__rbuffaddr;
        IData/*31:0*/ ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__prdata_buff;
        IData/*31:0*/ ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_CR;
        IData/*31:0*/ ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_SR;
        IData/*31:0*/ ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__SPI_RDR;
        IData/*31:0*/ ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__prdata_buff;
        IData/*31:0*/ ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_SR;
        IData/*31:0*/ ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_WDR;
        IData/*31:0*/ ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_RDR;
        IData/*31:0*/ ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_BRR;
        IData/*31:0*/ ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR1;
        IData/*31:0*/ ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR2;
        IData/*31:0*/ ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__UART_CR3;
        IData/*31:0*/ __Vdly__ahb2apb_swc_tb__DOT__haddr;
        IData/*31:0*/ __Vdly__ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffdata;
        IData/*31:0*/ __Vdly__ahb2apb_swc_tb__DOT__ahb2apb_swc_inst__DOT__wbuffaddr;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<SData/*15:0*/, 16> ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram;
        VlUnpacked<SData/*15:0*/, 16> ahb2apb_swc_tb__DOT__spictrl_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram;
        VlUnpacked<SData/*15:0*/, 16> ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__wdr_syncfifo_swc_inst__DOT__fifo_ram;
        VlUnpacked<SData/*15:0*/, 16> ahb2apb_swc_tb__DOT__uart_swc_inst__DOT__rdr_syncfifo_swc_inst__DOT__fifo_ram;
        VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vahb2apb_swc_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vahb2apb_swc_tb___024root(Vahb2apb_swc_tb__Syms* symsp, const char* v__name);
    ~Vahb2apb_swc_tb___024root();
    VL_UNCOPYABLE(Vahb2apb_swc_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
