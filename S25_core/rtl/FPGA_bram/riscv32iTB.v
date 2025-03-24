`timescale 1ps / 1ps
`include "params.vh"

module riscv32iTB//;
#(
    parameter   N_param = 32 
)
();
    glbl glbl ();
    parameter MEM_DEPTH = 1096;
    reg tb_clk;
    reg rstb;
    reg [31:0] Cycle_count;
    // Port B - Read/Write
    reg enb;
    reg [31:0] addrb; // 32-bit address for 65536-depth
    reg [31:0] dinb;
    reg [3:0] web;
    wire [31:0] doutb;

    wire rstb_busy;
    // design_1 design_1 (
    //     .clkb(tb_clk),
    //     .addrb(addrb),
    //     .dinb(dinb),
    //     .doutb(doutb),
    //     .enb(enb),
    //     .rstb(rstb),
    //     .web(web),
    //     .rstb_busy(rstb_busy)
    // );

bram
`ifndef GATESIM
#(    .MEM_DEPTH(MEM_DEPTH)
      ) 
`endif
    dut (
        .clkb(tb_clk),
        .addrb(addrb),
        .dinb(dinb),
        .doutb(doutb),
        .enb(enb),
        .rstb(rstb),
        .web(web),
        .rstb_busy(rstb_busy)
    );



    // Clock generation
    always #5000 tb_clk = ~tb_clk; // 100 MHz clock

    initial begin : init
        string vcdfile;
        int vcdlevel;
        if ($value$plusargs("VCDFILE=%s",vcdfile))
            $dumpfile(vcdfile);
        if ($value$plusargs("VCDLEVEL=%d",vcdlevel))
            $dumpvars(vcdlevel);
            end


    // Test procedure
initial begin
        // Initialize signals
        tb_clk = 0;
        rstb = 1;
        enb = 0;
        web = 4'b0000;
        addrb = 0;
        dinb = 0;

        // Wait for a few clock cycles after rstb
        repeat (10) @(posedge tb_clk);
        rstb = 0; // Release rstb
        repeat (10) @(posedge tb_clk);

        // WRITE OPERATIONS on Port B

        @(posedge tb_clk); #1000 enb = 1; web = 4'b1011; addrb = 32'h0000; dinb = 32'hDEADBEEF;                   
        @(posedge tb_clk); #1000 enb = 1; web = 4'b1011; addrb = 32'h0004; dinb = 32'h12345678; 
        @(posedge tb_clk); #1000 enb = 1; web = 4'b1011; addrb = 32'h0008; dinb = 32'hCAFEBABE; 
        @(posedge tb_clk); #1000 enb = 1; web = 4'b1011; addrb = 32'h0010; dinb = 32'hAABBCCDD;
        @(posedge tb_clk); #1000 enb = 1; web = 4'b0000; addrb = 32'h0014;  dinb = 32'h0;// Disable writing

        // @(posedge tb_clk); #1000 enb = 1; web = 4'b1111; addrb = 32'h0000; dinb = 32'hDEADBEEF;                   
        // @(posedge tb_clk); #1000 enb = 1; web = 4'b1111; addrb = 32'h0004; dinb = 32'h12345678; 
        // @(posedge tb_clk); #1000 enb = 1; web = 4'b1111; addrb = 32'h0008; dinb = 32'hCAFEBABE; 
        // @(posedge tb_clk); #1000 enb = 1; web = 4'b1111; addrb = 32'h0010; dinb = 32'hAABBCCDD;
        // @(posedge tb_clk); #1000 enb = 1; web = 4'b0000; addrb = 32'h0014;  dinb = 32'h0;// Disable writing

        repeat (2) @(posedge tb_clk);

        // READ OPERATIONS on Port B
        @(posedge tb_clk);

        @(posedge tb_clk); #1000 enb = 1; web = 4'b0000; addrb = 32'h0000; dinb = 32'h0;  
        @(posedge tb_clk); #1000 enb = 1; web = 4'b0000; addrb = 32'h0004; dinb = 32'h0;  
        @(posedge tb_clk); #1000 enb = 1; web = 4'b0000; addrb = 32'h0003; dinb = 32'h0;  
        @(posedge tb_clk); #1000 enb = 1; web = 4'b0000; addrb = 32'h0008; dinb = 32'h0;  
        @(posedge tb_clk); #1000 enb = 1; web = 4'b0000; addrb = 32'h0010; dinb = 32'h0;  
        @(posedge tb_clk); #1000 enb = 1; web = 4'b0000; addrb = 32'h000A; dinb = 32'h0;  
    
        
        repeat (5) @(posedge tb_clk); // Wait extra cycles before stopping simulation
        @(posedge tb_clk); #1000 enb = 0; web = 4'b0000; addrb = 32'h000A; dinb = 32'h0;  
        repeat (5) @(posedge tb_clk); // Wait extra cycles before stopping simulation


        // $writememh("memory_dump.hex", dut.DMEM);

        repeat (1) @(posedge tb_clk);

        $finish;
    end



always @(posedge tb_clk) begin
  	 if (rstb)
	    Cycle_count  <= 32'h0;
	 else 
            Cycle_count <= Cycle_count + 1;
  end



endmodule
