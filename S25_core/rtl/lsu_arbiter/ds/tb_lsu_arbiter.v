`timescale 1ns/1ps

module tb_lsu_arbiter;
    reg clk;
    reg rst_n;
    
    // Interface signals
    wire        data_req_o;
    wire [31:0] data_addr_o;
    reg  [31:0] data_rdata_i;
    reg         data_rvalid_i;
    reg         data_gnt_i;
    
    // Cache interfaces
    reg         icache_req;
    reg  [31:0] icache_addr;
    wire        icache_gnt;
    
    reg         dcache_req;
    reg  [31:0] dcache_addr;
    wire        dcache_gnt;

    lsu_arbiter uut(.*);

    // Clock generation (100MHz)
    always #5 clk = ~clk;

    // Automatic grant generator
    always @(posedge clk) begin
        data_gnt_i <= (data_req_o && $random % 4 != 0); // Random 75% grant rate
        if (data_gnt_i) begin
            #20 data_rvalid_i <= 1;
            #10 data_rvalid_i <= 0;
        end
    end

    initial begin
        clk = 0;
        rst_n = 0;
        {icache_req, dcache_req} = 0;
        
        $dumpfile("lsu_wave.vcd");
        $dumpvars(0, tb_lsu_arbiter);
        
        // Reset sequence
        #100 rst_n = 1;
        
        // Test 1: Concurrent requests
        fork
            begin
                @(posedge clk);
                icache_req = 1;
                dcache_req = 1;
                wait(icache_gnt | dcache_gnt);
                #100;
                icache_req = 0;
                dcache_req = 0;
            end
            #500_000 $error("Test1 Timeout");
        join_any
        
        // Test 2: Sequential requests
        fork
            begin
                @(posedge clk);
                dcache_req = 1;
                wait(dcache_gnt);
                #100;
                dcache_req = 0;
            end
            #300_000 $error("Test2 Timeout");
        join_any
        
        $display("All tests passed");
        $finish;
    end
endmodule
