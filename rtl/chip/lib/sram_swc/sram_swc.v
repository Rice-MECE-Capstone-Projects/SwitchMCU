module sram_swc (
    hclk                                                                        ,
    hrstn                                                                       ,
    haddr                                                                       ,
    hwrite                                                                      ,
    hwdata                                                                      ,
    hsize                                                                       ,
    hburst                                                                      ,
    hprot                                                                       ,
    htrans                                                                      ,
    hready                                                                      ,
    hresp                                                                       ,
    hrdata          
);

// parameters
parameter DATA_PATH                                                             ;
parameter SRAM_SIZE  = 4096                                                     ;
parameter BASE_ADDRESS = 0                                                      ;

// AHB bus signals
input                                   hclk                                    ;
input                                   hrstn                                   ;
input        [31:0]                     haddr                                   ;
input                                   hwrite                                  ;
input        [31:0]                     hwdata                                  ;
input        [2:0]                      hsize                                   ;
input        [6:0]                      hprot                                   ;
input        [2:0]                      hburst                                  ;
input        [1:0]                      htrans                                  ;
output                                  hready                                  ;
output reg                              hresp                                   ;
output reg   [31:0]                     hrdata                                  ;
localparam                              HTRANS_IDLE    = 0                      ,
                                        HTRANS_BUSY    = 1                      ,
                                        HTRANS_NONSEQ  = 2                      ,
                                        HTRANS_SEQ     = 3                      ;

// sram      
reg         [7:0]                       sram            [SRAM_SIZE - 1:0]       ;

// sram_addr
wire [31:0] sram_addr = haddr - BASE_ADDRESS;

// hready
assign hready = hrstn;

// errors
wire hburst_error     = hburst != 0;
wire hsize_error      = hsize > 2;
wire sram_addr_error  = hsize == 0  ? sram_addr > SRAM_SIZE - 1 :
                        hsize == 1  ? sram_addr > SRAM_SIZE - 2 :
                        hsize == 2  ? sram_addr > SRAM_SIZE - 4 :
                        1;
wire trans_error      = (htrans != HTRANS_IDLE) && (hburst_error || hsize_error || sram_addr_error);

// hresp
always @(posedge hclk) begin
    if(!hrstn) begin
        hresp <= 0;
    end else if(trans_error) begin
        hresp <= 1;
    end else begin
        hresp <= 0;
    end
end

// hrdata
always @(posedge hclk) begin
    if(!hrstn) begin
        hrdata <= 0;
    end else begin
        if(!hwrite && !trans_error) begin
            if(hsize == 0) begin
                hrdata <= {{24{1'b0}}, sram[sram_addr]};
            end else if(hsize == 1) begin
                hrdata <= {{16{1'b0}}, sram[sram_addr + 1], sram[sram_addr]};
            end else if(hsize == 2) begin
                hrdata <= {sram[sram_addr + 3], sram[sram_addr + 2], sram[sram_addr + 1], sram[sram_addr]};
            end else begin
                hrdata <= 0;
            end
        end else begin
            hrdata <= 0;
        end
    end
end

// sram
integer i;
always @(posedge hclk) begin
    if(!hrstn) begin
        for (i = 0; i < SRAM_SIZE; i = i + 1) begin
            sram[i] = {8{1'b0}};
        end
    end else begin
        if(hwrite && !trans_error) begin
            if(hsize == 0) begin
                sram[sram_addr]     <= hwdata[7:0];
            end else if(hsize == 1) begin
                sram[sram_addr + 1] <= hwdata[15:8];
                sram[sram_addr]     <= hwdata[7:0];
            end else if(hsize == 2) begin
                sram[sram_addr + 3] <= hwdata[31:24];
                sram[sram_addr + 2] <= hwdata[23:16];
                sram[sram_addr + 1] <= hwdata[15:8];
                sram[sram_addr]     <= hwdata[7:0];
            end
        end
    end
end

// load initial data
initial begin
    #30;
    $readmemh(DATA_PATH, sram);
end

endmodule
