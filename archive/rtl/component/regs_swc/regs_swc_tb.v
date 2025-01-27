module regs_swc_tb;
// Parameters
parameter REGS_SIZE = 10;
// Ports
reg                             clk = 1     ;
reg                             rstn = 0    ;
reg                             write = 0   ;
reg     [$clog2(REGS_SIZE*4):0] waddr = 0   ;
reg     [31:0]                  wdata = 0   ;
reg                             read = 0    ;
reg     [$clog2(REGS_SIZE*4):0] raddr = 0   ;
wire    [31:0]                  rdata       ;

regs_swc  regs_swc_inst (
.clk        (clk        ),
.rstn       (rstn       ),
.write      (write      ),
.waddr      (waddr      ),
.wdata      (wdata      ),
.read       (read       ),
.raddr      (raddr      ),
.rdata      (rdata      )
);

always #5  clk = ! clk ;

initial begin
    #11;
    rstn = 1;

    #10;
    rstn = 1;
    
    // Write
    for (waddr = 0; waddr < REGS_SIZE*4; waddr = waddr + 4) begin
        write = 1;
        wdata = wdata + 10;
        #10;
    end
    write = 0;
    wdata = 0;
    
    #10;
    
    // Read
    for (raddr = 0; raddr < REGS_SIZE*4; raddr = raddr + 4) begin
        read = 1;
        #10;
    end
    read = 0;

    #10;
    $finish;
end

initial begin
    $dumpfile("regs_swc_tb.vcd");
    $dumpvars(0, regs_swc_tb);
end

endmodule