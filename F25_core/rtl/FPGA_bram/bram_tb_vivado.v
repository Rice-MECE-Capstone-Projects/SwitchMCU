`timescale 1ns / 1ps

module bram_tb ();
    // Clock and Reset
    reg tb_clk;
    reg rstb;

    // Port B - Read/Write
    reg enb;
    reg [31:0] addrb; // 32-bit address for 65536-depth
    reg [31:0] dinb;
    reg [3:0] web;
    wire [31:0] doutb;

    wire rstb_busy;
    design_1 design_1 (
        .clkb(tb_clk),
        .addrb(addrb),
        .dinb(dinb),
        .doutb(doutb),
        .enb(enb),
        .rstb(rstb),
        .web(web),
        .rstb_busy(rstb_busy)
    );

    // Clock Generation
    always #5 tb_clk = ~tb_clk;  // 100 MHz clock (10 ns period)

    initial begin
        // Initialize signals
        tb_clk = 0;
        rstb = 1;
        enb = 0;
        web = 4'b0000;
        addrb = 0;
        dinb = 0;

        // Wait for a few clock cycles after reset
        repeat (10) @(posedge tb_clk);
        rstb = 0; // Release reset
        repeat (10) @(posedge tb_clk);

        // WRITE OPERATIONS on Port B

        @(posedge tb_clk); #2 enb = 1; web = 4'b1111; addrb = 32'h0000; dinb = 32'hDEADBEEF;                   
        @(posedge tb_clk); #2 enb = 1; web = 4'b1111; addrb = 32'h0004; dinb = 32'h12345678; 
        @(posedge tb_clk); #2 enb = 1; web = 4'b1111; addrb = 32'h0008; dinb = 32'hCAFEBABE; 
        @(posedge tb_clk); #2 enb = 1; web = 4'b1111; addrb = 32'h0010; dinb = 32'hAABBCCDD;
        @(posedge tb_clk); #2 enb = 1; web = 4'b0000; addrb = 32'h0014;  dinb = 32'h0;// Disable writing


        repeat (2) @(posedge tb_clk);

        // READ OPERATIONS on Port B
        @(posedge tb_clk);

        @(posedge tb_clk); #2 enb = 1; web = 4'b0000; addrb = 32'h0000; dinb = 32'h0;  
        @(posedge tb_clk); #2 enb = 1; web = 4'b0000; addrb = 32'h0004; dinb = 32'h0;  
        @(posedge tb_clk); #2 enb = 1; web = 4'b0000; addrb = 32'h0003; dinb = 32'h0;  
        @(posedge tb_clk); #2 enb = 1; web = 4'b0000; addrb = 32'h0008; dinb = 32'h0;  
        @(posedge tb_clk); #2 enb = 1; web = 4'b0000; addrb = 32'h0010; dinb = 32'h0;  
        @(posedge tb_clk); #2 enb = 1; web = 4'b0000; addrb = 32'h000A; dinb = 32'h0;  
    
        
        repeat (5) @(posedge tb_clk); // Wait extra cycles before stopping simulation
        @(posedge tb_clk); #2 enb = 0; web = 4'b0000; addrb = 32'h000A; dinb = 32'h0;  
        repeat (5) @(posedge tb_clk); // Wait extra cycles before stopping simulation

        $finish;
    end

endmodule


