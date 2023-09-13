module regs_swc (
    clk         ,
    rstn        ,
    write       ,
    waddr       ,
    wdata       ,
    read        ,
    raddr       ,
    rdata       
);
// Define the size of registers
parameter REGS_SIZE = 10;
input                                   clk                 ;
input                                   rstn                ;
input                                   write               ;
input       [$clog2(REGS_SIZE*4):0]     waddr               ;
input       [31:0]                      wdata               ;
input                                   read                ;
input       [$clog2(REGS_SIZE*4):0]     raddr               ;
output  reg [31:0]                      rdata               ;
reg         [REGS_SIZE-1:0][31:0]       regs                ;

// write
always @(posedge clk) begin
    if(!rstn) begin
        regs <= 0;
    end else if(write) begin
        regs[waddr>>2] <= wdata;
    end
end

//read
always @(posedge clk) begin
    if(!rstn) begin
        rdata <= 0;
    end else if(read) begin
        rdata <= regs[raddr>>2];
    end
end

endmodule;