module uart_swc (
    pclk        ,
    prstn       ,
    paddr       ,
    psel        ,
    penable     ,
    pwrite      ,
    pwdata      ,
    pready      ,
    prdata      ,
    pslverr     
);
// Address
localparam SPI_CR_ADDR   = 'h0010_0100;
localparam SPI_SR_ADDR   = 'h0010_0104;
localparam SPI_WDR_ADDR  = 'h0010_0108;
localparam SPI_RDR_ADDR  = 'h0010_010C;
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

endmodule
