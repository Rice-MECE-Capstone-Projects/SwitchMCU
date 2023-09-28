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
    if(psel) begin
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
    end else if(psel && penable && pwrite && paddr == SPI_WDR_ADDR && !full) begin
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

// WDR FIFO control
reg                     wen         ;
reg         [31:0]      wdata       ;
wire                    full        ;
reg                     ren         ;
wire        [31:0]      rdata       ;
wire                    empty       ;

// WDR_FIFO
syncfifo_swc  wdr_syncfifo_swc_inst (
    .rstn       (prstn      ),
    .clk        (pclk       ),
    .wen        (wen        ),
    .wdata      (wdata      ),
    .full       (full       ),
    .ren        (ren        ),
    .rdata      (rdata      ),
    .empty      (empty      )
);

// wen
always @(posedge pclk) begin
    if(!prstn) begin
        wen <= 0;
    end else if(psel && penable && pwrite && paddr == SPI_WDR_ADDR && !full) begin
        wen <= 1;
    end else begin
        wen <= 0;
    end
end

// wdata
always @(posedge pclk) begin
    if(!prstn) begin
        wdata <= 0;
    end else if(psel && penable && pwrite && paddr == SPI_WDR_ADDR && !full) begin
        wdata <= pwdata;
    end else begin
        wdata <= 0;
    end
end

// define counter
localparam COUNTER_WIDTH = 11;
localparam IDLE     =   0 ,
           READ     =   1 ,
           DELAY    =   2 ,
           STORE    =   3 ,
           COUNT    =   4 ;

reg     [COUNTER_WIDTH-1:0]     counter         ;
reg     [2:0]                   state           ;
reg     [2:0]                   nextstate       ;
reg     [31:0]                  spi_wdata       ;
wire    [COUNTER_WIDTH-1:0]     max_cnt         ;

// assign max_cnt = (16 << SPI_CR[5:3]) - 1;
assign max_cnt = 15;

// State machine
always @(posedge pclk) begin
    if(!prstn) begin
        state <= IDLE;
    end else begin
        state <= nextstate;
    end 
end

always @(*) begin
  case(state)
    IDLE: begin
        if(!empty) begin
            nextstate = READ;  
        end else begin
            nextstate = IDLE;
        end     
    end
    READ: begin
        nextstate = DELAY;  
    end
    DELAY: begin
        nextstate = STORE;
    end
    STORE: begin
        nextstate = COUNT;    
    end
    COUNT: begin
        if(!empty)begin
            nextstate = READ;    
        end else if(counter == max_cnt) begin
            nextstate = IDLE;
        end else begin
            nextstate = COUNT;
        end      
    end
  endcase
end

// counter
always @(posedge pclk) begin
    if(!prstn) begin
        counter <= 0;
    end else if(nextstate == COUNT) begin
        if(counter == max_cnt) begin
            counter <= counter;
        end else begin
            counter <= counter + 1;
        end
    end else begin
        counter <= 0;
    end
end

// ren
always @(posedge pclk ) begin
    if (!prstn) begin
        ren <= 0;
    end else if(nextstate == READ)begin
        ren <= 1;
    end else begin
        ren <= 0;
    end   
end

always @(posedge pclk ) begin
    if (!prstn) begin
        spi_wdata <= 0;
    end else if(nextstate == STORE)begin
        spi_wdata <= rdata;
    end else begin
        spi_wdata <= spi_wdata;
    end   
end


// spi_wdata


endmodule
