// Top-Level Testbench for Data Cache System
// Includes cache, interface, and dataMem modules.
`timescale 1ps/1ps

// Include all necessary modules for instantiation
`include "cache.v"
`include "data_cache_interface.v"
`include "dataMem.v"

module data_cache_system_tb ();

    // Clock and Reset
    reg clk, reset;
    
    // CPU Interface Signals
    reg [31:0] cpu_addr;
    reg [31:0] cpu_wdata;
    wire [31:0] cpu_rdata;
    reg data_req;
    reg data_we;
    reg [3:0] data_be;
    wire data_rvalid;
    wire data_gnt;
    wire cpu_stall;

    // Cache to Interface Signals (Block-Level)
    wire [31:0] cache_mem_addr_block;
    wire [31:0] cache_mem_addr;
    wire cache_mem_read;
    wire cache_mem_write;
    wire [255:0] cache_mem_wdata_block;
    wire [31:0] cache_miss_mem_wdata;
    wire [255:0] cache_mem_rdata_array; 
    wire cache_mem_ready; // This is the new synchronization signal
    wire [2:0] cache_state;


    // Interface to DataMem Signals (Word-Level)
    wire [31:0] mem_addr;
    wire mem_read;
    wire mem_write;
    wire [31:0] mem_wdata;
    wire [31:0] mem_rdata;
    wire mem_valid; // 1-cycle data valid signal from DataMem

    // Testbench control
    integer test_count;
    integer pass_count;
    integer fail_count;
    integer timeout_cycles;

    // --- Instantiate Modules ---

    // 1. Data Cache Unit (DUV)
    cache U_CACHE (
        .clk(clk),
        .reset(reset),
        .cpu_addr(cpu_addr),
        .cpu_wdata(cpu_wdata),
        .cpu_rdata(cpu_rdata),
        .data_req(data_req),
        .data_we(data_we),
        .data_be(data_be),
        .data_rvalid(data_rvalid),
        .data_gnt(data_gnt),
        .cpu_stall(cpu_stall),
        .mem_addr_block(cache_mem_addr_block),
        .mem_addr(cache_mem_addr),
        .mem_read(cache_mem_read),
        .mem_write(cache_mem_write),
        .mem_wdata_block(cache_mem_wdata_block),
        .miss_mem_wdata(cache_miss_mem_wdata),
        .mem_rdata_array(cache_mem_rdata_array),
        .mem_ready(cache_mem_ready),
        .state(cache_state)
    );

    // 2. Data Cache Interface (Burst Controller)
    data_cache_interface U_INTERFACE (
        .clk(clk),
        .reset(reset),
        .cache_mem_addr_block(cache_mem_addr_block),
        .cache_mem_addr(cache_mem_addr),
        .cache_mem_read(cache_mem_read),
        .cache_mem_write(cache_mem_write),
        .cache_mem_wdata_block(cache_mem_wdata_block),
        .cache_miss_mem_wdata(cache_miss_mem_wdata),
        .cache_mem_rdata_array(cache_mem_rdata_array),
        .cache_mem_ready(cache_mem_ready),
        .mem_addr(mem_addr),
        .mem_read(mem_read),
        .mem_write(mem_write),
        .mem_wdata(mem_wdata),
        .mem_rdata(mem_rdata),
        .mem_valid(mem_valid)
    );

    // 3. Data Memory
    dataMem U_DMEM (
        .clk(clk),
        .reset(reset),
        .mem_addr(mem_addr),
        .mem_read(mem_read),
        .mem_write(mem_write),
        .mem_wdata(mem_wdata),
        .mem_rdata(mem_rdata),
        .mem_valid(mem_valid)
    );

    // Clock Generation
    always #5 clk = ~clk; // 10ps clock cycle

    // Utility Task: Wait for Cache to Finish Request
    task wait_for_cache_ready;
        input integer timeout;
    begin
        @(posedge clk); // Wait one cycle for stall to assert
        while (cpu_stall) begin
            timeout = timeout - 1;
            if (timeout == 0) begin
                $display("FAIL: Simulation Deadlock Detected! Time: %t", $time);
                $finish;
            end
            @(posedge clk);
        end
    end
    endtask

    // Utility Task: Print Cache Line
    task print_cache_line(input integer index);
    begin
        // The cache instance is named U_CACHE in your TB.
        // This calls cache.v's 'debug_dump_line' task we added earlier.
         U_CACHE.debug_dump_line(index[5:0]);  // mask to 6 bits if NUM_LINES=64
    end
    endtask

    // Task: Check data
    task check_data;
        // FIX: Replaced 'string' with a wide reg for Verilog compatibility
        input [255:0] test_name; 
        input [31:0] expected;
        input [31:0] actual;
    begin
        test_count = test_count + 1;
        if (expected === actual) begin
            $display("PASS: %s - Got: %h", test_name, actual);
            pass_count = pass_count + 1;
        end else begin
            $display("FAIL: %s - Expected: %h, Got: %h", test_name, expected, actual);
            fail_count = fail_count + 1;
        end
    end
    endtask

    // Initial Setup and Monitor
    initial begin
        $dumpfile("data_cache_system_tb.vcd");
        $dumpvars(0, data_cache_system_tb);

        $monitor("T=%t | State=%d | cpu_addr=%h | cpu_rdata=%h | cpu_stall=%b | cache_ready=%b | mem_read/write=%b%b | mem_addr=%h | mem_valid=%b",
                 $time, cache_state, cpu_addr, cpu_rdata, cpu_stall, cache_mem_ready, cache_mem_read, cache_mem_write, mem_addr, mem_valid);

        // Initialization
        clk = 0;
        reset = 1;
        cpu_addr = 0;
        cpu_wdata = 0;
        data_req = 0;
        data_we = 0;
        data_be = 4'b0000;
        test_count = 0;
        pass_count = 0;
        fail_count = 0;

        #10;
        reset = 0;
        $display("=================================================");
        $display("   Integrated Cache-Interface-DataMem Testbench   ");
        $display("=================================================");
        $display("Reset Complete at T=%t", $time);

        // --- TEST SCENARIOS ---
        // Data in memory_dump.hex at 0x0: 00000000, bbcc00aa, deadbeef, ...

        // --- Test 1: Load Word (LW) - CACHE MISS ---
        $display("\n[Test 1] Read Miss - LW from 0x00000008 (Word 2)");
        cpu_addr = 32'h00000008; // Address 0x8, Word Offset 2
        data_req = 1;
        data_we = 0;
        data_be = 4'b0010; // inst_LW
        cpu_wdata = 32'b0;

        wait_for_cache_ready(00); // Wait for burst read
        check_data("Test 1 Result", 32'hdeadbeef, cpu_rdata);
        print_cache_line(0); // Index 0 (addr[10:5])

        // --- Test 2: Load Word (LW) - CACHE HIT ---
        $display("\n[Test 2] Read Hit - LW from 0x00000004 (Word 1)");
        cpu_addr = 32'h00000004; // Address 0x4, Word Offset 1
        data_req = 1;
        data_we = 0;
        data_be = 4'b0010; // inst_LW
        
        wait_for_cache_ready(10); // Should be immediate
        check_data("Test 2 Result", 32'hbbcc00aa, cpu_rdata);

        // --- Test 3: Store Word (SW) - CACHE HIT ---
        $display("\n[Test 3] Write Hit - SW to 0x0000000C (Word 3)");
        cpu_addr = 32'h0000000C; // Address 0xC, Word Offset 3
        data_req = 1;
        data_we = 1;
        data_be = 4'b0111; // inst_SW
        cpu_wdata = 32'hAAAAAAAA;

        wait_for_cache_ready(500); // Wait for write-back burst
        $display("Cache line after write:");
        print_cache_line(0);
        // We can't easily check memory here without another read, but VCD will show it.

        // --- Test 4: Load Word (LW) - CACHE HIT (Reading back written data) ---
        $display("\n[Test 4] Read Hit - LW from 0x0000000C (Word 3)");
        cpu_addr = 32'h0000000C; 
        data_req = 1;
        data_we = 0;
        data_be = 4'b0010; // inst_LW
        
        wait_for_cache_ready(10);
        check_data("Test 4 Result", 32'hAAAAAAAA, cpu_rdata);

        // --- Test 5: Store Word (SW) - CACHE MISS (Write-Through/No-Allocate) ---
        $display("\n[Test 5] Write Miss - SW to 0x00001000");
        cpu_addr = 32'h00001000;
        data_req = 1;
        data_we = 1;
        data_be = 4'b0111; // inst_SW
        cpu_wdata = 32'hFEEDFACE;

        wait_for_cache_ready(100); // Wait for single write-through
        $display("Check VCD or memory dump. 0x1000 should now be FEEDFACE.");
        // Verify cache was NOT polluted (Index 128)
        $display("Cache line for missed write (should be invalid):");
        print_cache_line(128); // Index 128 (addr[10:5] for 0x1000)

        // --- Final Summary ---
        $display("\n=================================================");
        $display("   Test Summary   ");
        $display("   Total Tests: %0d", test_count);
        $display("   Passed:      %0d", pass_count);
        $display("   Failed:      %0d", fail_count);
        $display("=================================================");

        #50;
        $finish;
    end
endmodule

