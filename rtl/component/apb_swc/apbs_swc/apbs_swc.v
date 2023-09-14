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

// pslverr
assign pslverr = 0;

// pready
always @(posedge pclk) begin
    if(psel) begin
        pready <= 1;
    end else begin
        pready <= 0;
    end
end

// SPI_CR
always @(posedge pclk) begin
    if(psel && penable && pwrite && paddr == 'h00) begin
        SPI_CR <= pwdata;
    end else begin
        SPI_CR <= SPI_CR;
    end
end

// prdata
always @(posedge pclk) begin
    if(psel && penable && !pwrite && paddr == 'h00) begin
        prdata <= SPI_CR;
    end
end
    
endmodule
