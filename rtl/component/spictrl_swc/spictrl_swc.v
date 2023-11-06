module spictrl_swc (
    pclk        ,
    prstn       ,
    paddr       ,
    psel        ,
    penable     ,
    pwrite      ,
    pwdata      ,
    pready      ,
    prdata      ,
    pslverr     ,
    sck         ,
    mosi        ,
    miso        
);
// Address
localparam SPI_CR_ADDR   = 'h0010_0000;
localparam SPI_SR_ADDR   = 'h0010_0004;
localparam SPI_WDR_ADDR  = 'h0010_0008;
localparam SPI_RDR_ADDR  = 'h0010_000C;
// APB Bus Signals
localparam PD_NUM = 3;   // Peripherals devices number
input                           pclk        ;
input                           prstn       ;
input           [31:0]          paddr       ;
input                           psel        ;
input                           penable     ;
input                           pwrite      ;
input           [31:0]          pwdata      ;
output reg                      pready      ;
output reg      [31:0]          prdata      ;
output reg                      pslverr     ;
output reg                      sck         ;
output reg                      mosi        ;
input                           miso        ;

reg             [31:0]          SPI_CR      ;
reg             [31:0]          SPI_SR      ;
reg             [31:0]          SPI_RDR     ;

// State machine
localparam APB_TRANS_IDLE       =   0   ,
           APB_TRANS_READY      =   1   ,
           APB_TRANS_READ       =   2   ,
           APB_TRANS_DELAY      =   3   ;

reg     [2:0]                   apb_state       ;
reg     [2:0]                   apb_nextstate   ;

always @(posedge pclk) begin
    if(!prstn) begin
        apb_state <= APB_TRANS_IDLE;
    end else begin
        apb_state <= apb_nextstate;
    end 
end
        
always @(*) begin
    case(apb_state)
    APB_TRANS_IDLE: begin
        if(psel && !pwrite && paddr == SPI_RDR_ADDR) begin
            apb_nextstate = APB_TRANS_READ;
        end else if(psel) begin
            apb_nextstate = APB_TRANS_READY;
        end else begin
            apb_nextstate = APB_TRANS_IDLE;
        end
    end
    APB_TRANS_READY: begin
        apb_nextstate = APB_TRANS_IDLE;
    end
    APB_TRANS_READ: begin
        apb_nextstate = APB_TRANS_DELAY;
    end
    APB_TRANS_DELAY:begin
        apb_nextstate = APB_TRANS_READY;
    end
    endcase
end

// addr_error = 1 indicates there's a request with error address on apb bus
wire addr_error;

// addr_error
assign addr_error = psel && !(paddr == SPI_CR_ADDR || paddr == SPI_SR_ADDR || paddr == SPI_WDR_ADDR || paddr == SPI_RDR_ADDR);

// pslverr
always @(posedge pclk) begin
    if(!prstn) begin
        pslverr <= 0;
    end else if(apb_nextstate == APB_TRANS_READY) begin
        if(addr_error) begin
            pslverr <= 1;
        end else begin
            pslverr <= 0;
        end
    end else begin
        pslverr <= 0;
    end
end

// pready
always @(posedge pclk) begin
    if(!prstn) begin
        pready <= 0;
    end else if(apb_nextstate == APB_TRANS_READY) begin
        pready <= 1;
    end else begin
        pready <= 0;
    end
end

// SPI_CR
always @(posedge pclk) begin
    if(!prstn) begin
        SPI_CR <= 'h0000_0000;
    end else if(apb_state == APB_TRANS_READY && pwrite && paddr == SPI_CR_ADDR) begin
        SPI_CR <= pwdata;
    end else begin
        SPI_CR <= SPI_CR;
    end
end

// rdr_ren
always @(posedge pclk) begin
    if(!prstn) begin
        rdr_ren <= 0;
    end else if(apb_nextstate == APB_TRANS_READ) begin
        rdr_ren <= 1;
    end else begin
        rdr_ren <= 0;
    end
end

// prdata
always @(posedge pclk) begin
    if(!prstn) begin
        prdata <= 0;
    end else if(apb_nextstate == APB_TRANS_READY && !pwrite && paddr == SPI_CR_ADDR) begin
        prdata <= SPI_CR;
    end else if(apb_nextstate == APB_TRANS_READY && !pwrite && paddr == SPI_SR_ADDR) begin
        prdata <= SPI_SR;
    end else if(apb_nextstate == APB_TRANS_READY && !pwrite && paddr == SPI_WDR_ADDR) begin
        prdata <= 0;
    end else if(apb_nextstate == APB_TRANS_READY && !pwrite && paddr == SPI_RDR_ADDR) begin
        prdata <= {16'b0, rdr_rdata};
    end else begin
        prdata <= 0;
    end
end

// FIFO Width
localparam FIFO_WIDTH = 16;

// WDR FIFO control
reg                                 wdr_wen         ;
reg         [FIFO_WIDTH-1:0]        wdr_wdata       ;
wire                                wdr_full        ;
reg                                 wdr_ren         ;
wire        [FIFO_WIDTH-1:0]        wdr_rdata       ;
wire                                wdr_empty       ;

// WDR_FIFO
syncfifo_swc #(
    .data_width     (FIFO_WIDTH     ),
    .ram_size       (16             )
) wdr_syncfifo_swc_inst (
    .rstn           (prstn          ),
    .clk            (pclk           ),
    .wen            (wdr_wen        ),
    .wdata          (wdr_wdata      ),
    .full           (wdr_full       ),
    .ren            (wdr_ren        ),
    .rdata          (wdr_rdata      ),
    .empty          (wdr_empty      )
);

// wdr_wen
always @(posedge pclk) begin
    if(!prstn) begin
        wdr_wen <= 0;
    end else if(psel && penable && pwrite && paddr == SPI_WDR_ADDR && !wdr_full) begin
        wdr_wen <= 1;
    end else begin
        wdr_wen <= 0;
    end
end

// wdr_wdata
always @(posedge pclk) begin
    if(!prstn) begin
        wdr_wdata <= 0;
    end else if(psel && penable && pwrite && paddr == SPI_WDR_ADDR && !wdr_full) begin
        wdr_wdata <= pwdata[FIFO_WIDTH-1:0];
    end else begin
        wdr_wdata <= 0;
    end
end

// Signals for SPI transfer
localparam COUNTER_WIDTH = 12;
wire    [2:0]                   SPI_CR_BR       ;
wire                            SPI_CR_CPOL     ;
wire                            SPI_CR_CPHA     ;
wire                            SPI_CR_DFF      ;
wire                            SPI_CR_LSBFIRST ;
wire                            SPI_CR_SPE      ;
reg     [COUNTER_WIDTH-1:0]     cnt             ;
reg     [FIFO_WIDTH-1:0]        spiwdata        ;
wire    [COUNTER_WIDTH-1:0]     maxcnt          ;

// SPI_CR_BR
assign SPI_CR_BR = SPI_CR[5:3];
// SPI_CR_CPOL
assign SPI_CR_CPOL = SPI_CR[1];
// SPI_CR_CPHA
assign SPI_CR_CPHA = SPI_CR[0];
// SPI_CR_DFF
assign SPI_CR_DFF = SPI_CR[11];
// SPI_CR_LSBFIRST
assign SPI_CR_LSBFIRST = SPI_CR[7];
// SPI_CR_SPE
assign SPI_CR_SPE = SPI_CR[6];
// maxcnt
assign maxcnt = ((16 << SPI_CR_BR) << SPI_CR_DFF) - 1;

// State machine
localparam SPI_TRANS_IDLE     =   0   ,
           SPI_TRANS_READ     =   1   ,
           SPI_TRANS_DELAY    =   2   ,
           SPI_TRANS_BUFFER   =   3   ,
           SPI_TRANS_COUNT    =   4   ,
           SPI_TRANS_WRITE    =   5   ;

reg     [2:0]                   spi_state       ;
reg     [2:0]                   spi_nextstate   ;
           
always @(posedge pclk) begin
    if(!prstn) begin
        spi_state <= SPI_TRANS_IDLE;
    end else begin
        spi_state <= spi_nextstate;
    end 
end

always @(*) begin
  case(spi_state)
    SPI_TRANS_IDLE: begin
        if(!wdr_empty && SPI_CR_SPE) begin
            spi_nextstate = SPI_TRANS_READ;  
        end else begin
            spi_nextstate = SPI_TRANS_IDLE;
        end
    end
    SPI_TRANS_READ: begin
        spi_nextstate = SPI_TRANS_DELAY;  
    end
    SPI_TRANS_DELAY: begin
        spi_nextstate = SPI_TRANS_BUFFER;
    end
    SPI_TRANS_BUFFER: begin
        spi_nextstate = SPI_TRANS_COUNT;    
    end
    SPI_TRANS_COUNT: begin
        if(cnt == maxcnt) begin
            spi_nextstate = SPI_TRANS_WRITE;
        end else begin
            spi_nextstate = SPI_TRANS_COUNT;
        end      
    end
    SPI_TRANS_WRITE: begin
        if(!wdr_empty)begin
            spi_nextstate = SPI_TRANS_READ;
        end else begin
            spi_nextstate = SPI_TRANS_IDLE;
        end
    end
    default:
        spi_nextstate = SPI_TRANS_IDLE;
  endcase
end

// cnt
always @(posedge pclk) begin
    if(!prstn) begin
        cnt <= 0;
    end else if(spi_nextstate == SPI_TRANS_COUNT) begin
        if(cnt == maxcnt) begin
            cnt <= cnt;
        end else begin
            cnt <= cnt + 1;
        end
    end else begin
        cnt <= 0;
    end
end

// wdr_ren
always @(posedge pclk) begin
    if (!prstn) begin
        wdr_ren <= 0;
    end else if(spi_nextstate == SPI_TRANS_READ)begin
        wdr_ren <= 1;
    end else begin
        wdr_ren <= 0;
    end   
end

// spiwdata
always @(posedge pclk) begin
    if (!prstn) begin
        spiwdata <= 0;
    end else if(spi_nextstate == SPI_TRANS_BUFFER)begin
        spiwdata <= wdr_rdata;
    end else if(spi_nextstate == SPI_TRANS_COUNT)begin
        spiwdata <= spiwdata;
    end else begin
        spiwdata <= 0;
    end   
end

wire sck_source;

// sck_source
assign sck_source = cnt[{1'b0, SPI_CR_BR}];

// sck
always @(posedge pclk) begin
    if (!prstn) begin
        sck <= 0;
    end else if(spi_nextstate == SPI_TRANS_COUNT || spi_state == SPI_TRANS_COUNT)begin
        if(SPI_CR_CPOL) begin
            sck <= SPI_CR_CPHA ? sck_source : !sck_source;
        end else begin
            sck <= SPI_CR_CPHA ? !sck_source : sck_source;
        end
    end else begin
        sck <= SPI_CR_CPOL;
    end
end

wire [COUNTER_WIDTH-1:0]    exindex     ;
reg  [3:0]                  index       ;

// exindex
assign exindex = cnt >> (SPI_CR_BR + 1);

// index
always @(*) begin
    if(SPI_CR_LSBFIRST) begin
        index = exindex[3:0];
    end else begin
        if(SPI_CR_DFF) begin
            index = 15 - exindex[3:0];
        end else begin
            index = 7 - exindex[3:0];
        end
    end
end

// mosi
always @(posedge pclk) begin
    if (!prstn) begin
        mosi <= 0;
    end else if(spi_nextstate == SPI_TRANS_COUNT || spi_state == SPI_TRANS_COUNT)begin
        mosi <= spiwdata[index];
    end else begin
        mosi <= 0;
    end   
end

// RDR FIFO control
reg                                 rdr_wen         ;
wire        [FIFO_WIDTH-1:0]        rdr_wdata       ;
wire                                rdr_full        ;
reg                                 rdr_ren         ;
wire        [FIFO_WIDTH-1:0]        rdr_rdata       ;
wire                                rdr_empty       ;

// RDR_FIFO
syncfifo_swc #(
    .data_width     (FIFO_WIDTH     ),
    .ram_size       (16             )
) rdr_syncfifo_swc_inst (
    .rstn           (prstn          ),
    .clk            (pclk           ),
    .wen            (rdr_wen        ),
    .wdata          (rdr_wdata      ),
    .full           (rdr_full       ),
    .ren            (rdr_ren        ),
    .rdata          (rdr_rdata      ),
    .empty          (rdr_empty      )
);

reg                                 sck_source_r    ;

// sck_source_r
always @(posedge pclk) begin
    if (!prstn) begin
        sck_source_r <= 0;
    end else begin
        sck_source_r <= sck_source;
    end
end

wire shift_trig;

// rdr_wen_source
assign shift_trig =  (!sck_source_r && sck_source);

reg         [15:0]                  spirdata        ;

// spirdata
always @(posedge pclk) begin
    if (!prstn) begin
        spirdata <= 0;
    end else if(shift_trig) begin
        spirdata <= {spirdata[14:0], miso};
    end else if(spi_nextstate == SPI_TRANS_COUNT || spi_nextstate == SPI_TRANS_WRITE) begin
        spirdata <= spirdata;
    end else begin
        spirdata <= 0;
    end
end

// rdr_wen
always @(posedge pclk) begin
    if (!prstn) begin
        rdr_wen <= 0;
    end else if(spi_nextstate == SPI_TRANS_WRITE && !rdr_full) begin
        rdr_wen <= 1;
    end else begin
        rdr_wen <= 0;
    end
end

// rdr_wdata
assign rdr_wdata = spirdata;

// rdr_ren
always @(posedge pclk) begin
    if (!prstn) begin
        rdr_ren <= 0;
    end else if(!rdr_empty) begin
        rdr_ren <= 1;
    end else begin
        rdr_ren <= 0;
    end
end

// SPI_SR
always @(posedge pclk) begin
    SPI_SR[0] <= rdr_empty ;
    SPI_SR[1] <= ~wdr_empty ;
    SPI_SR[6] <= rdr_full ;   
end

always @(posedge pclk) begin
    if(!prstn) begin
        SPI_SR[7] <= 0 ; 
    end else if((spi_nextstate == SPI_TRANS_IDLE)) begin
        SPI_SR[7] <= 0 ;
    end else begin
        SPI_SR[7] <= 1 ;
    end 
end

wire    BSY  ;
wire    OVR  ;
wire    TXE  ;
wire    RXNE ;

assign  BSY = SPI_SR[7];
assign  OVR = SPI_SR[6];
assign  TXE = SPI_SR[1];
assign  RXNE = SPI_SR[0];
// SPI_RDR
// always @(posedge pclk) begin
//     if(!prstn) begin
//         SPI_RDR <= 'h0000_0000;
//     end else if() begin
//         SPI_RDR <= pwdata;
//     end else begin
//         SPI_RDR <= SPI_WDR;
//     end
// end

endmodule
