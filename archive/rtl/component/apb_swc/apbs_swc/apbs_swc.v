module apbs_swc (
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
parameter SPI_CR_ADDR   = 'h0010_0000;
parameter SPI_SR_ADDR   = 'h0010_0004;
parameter SPI_WDR_ADDR  = 'h0010_0008;
parameter SPI_RDR_ADDR  = 'h0010_000C;
// APB Bus Signals
parameter PD_NUM = 3;   // Peripherals devices number
input                           pclk        ;
input                           prstn       ;
input           [31:0]          paddr       ;
input                           psel        ;
input                           penable     ;
input                           pwrite      ;
input           [31:0]          pwdata      ;
output reg                      pready      ;
output reg      [31:0]          prdata      ;
output                          pslverr     ;

reg             [31:0]          SPI_CR      ;
reg             [31:0]          SPI_SR      ;
reg             [31:0]          SPI_WDR     ;
reg             [31:0]          SPI_RDR     ;

// pslverr
assign pslverr = 0;

// pready
always @(posedge pclk) begin
    if(psel && pwrite) begin
        pready <= 1;
    end else if(psel && !pwrite) begin
        pready <= 1;
    end else begin
        pready <= 0;
    end
end

// SPI_CR
always @(posedge pclk) begin
    if(!prstn) begin
        SPI_CR <= 'h0000_0000;
    end else if(psel && penable && pwrite && paddr == SPI_CR_ADDR) begin
        SPI_CR <= pwdata;
    end else begin
        SPI_CR <= SPI_CR;
    end
end

// SPI_SR
always @(posedge pclk) begin
    if(!prstn) begin
        SPI_SR <= 'h0000_0002;
    end else if(psel && penable && pwrite && paddr == SPI_SR_ADDR) begin
        SPI_SR <= pwdata;
    end else begin
        SPI_SR <= SPI_SR;
    end
end

// SPI_WDR
always @(posedge pclk) begin
    if(!prstn) begin
        SPI_WDR <= 'h0000_0000;
    end else if(psel && penable && pwrite && paddr == SPI_WDR_ADDR) begin
        SPI_WDR <= pwdata;
    end else begin
        SPI_WDR <= SPI_WDR;
    end
end

// prdata
always @(posedge pclk) begin
    if(!prstn) begin
        prdata <= 0;
    end else if(psel && !pwrite && paddr == SPI_CR_ADDR) begin
        prdata <= SPI_CR;
    end else if(psel && !pwrite && paddr == SPI_SR_ADDR) begin
        prdata <= SPI_SR;
    end else if(psel && !pwrite && paddr == SPI_WDR_ADDR) begin
        prdata <= SPI_WDR;
    end else begin
        prdata <= 0;
    end
end
    
endmodule
