`timescale 1ns/1ps
module cache_tb;

// System Signals
reg clk;
reg reset;

// CPU Interface
reg [63:0] Single_Instruction;
reg [31:0] cpu_addr;
reg [31:0] cpu_wdata;
wire [31:0] cpu_rdata;
wire cpu_stall;

// Memory Interface
wire [31:0] mem_addr;
wire mem_read;
wire mem_write;
wire [255:0] mem_wdata_array;
reg [255:0] mem_rdata_array;
reg mem_ready;

// Instantiate DUT
cache dut (
    .clk(clk),
    .reset(reset),
    .Single_Instruction(Single_Instruction),
    .cpu_addr(cpu_addr),
    .cpu_wdata(cpu_wdata),
    .cpu_rdata(cpu_rdata),
    .cpu_stall(cpu_stall),
    .mem_addr(mem_addr),
    .mem_read(mem_read),
    .mem_write(mem_write),
    .mem_wdata_array(mem_wdata_array),
    .mem_rdata_array(mem_rdata_array),
    .mem_ready(mem_ready)
);

// Clock Generation
always #5 clk = ~clk;

// Test Control
integer testcase = 0;
initial begin
    $dumpfile("cache.vcd");
    $dumpvars(0, cache_tb);
    
    // Initialize signals
    clk = 0;
    reset = 1;
    Single_Instruction = 0;
    cpu_addr = 0;
    cpu_wdata = 0;
    mem_rdata_array = 0;
    mem_ready = 0;

    // Reset sequence
    #20 reset = 0;
    #10 reset = 1;
    
    // Test Suite
    basic_hit_miss_test();
    write_policy_test();
    replacement_test();
    concurrency_test();
    
    #100 $display("All tests completed");
    $finish;
end

//----------------------------------------------------------
// Test Scenario 1: Basic Hit/Miss Detection
//----------------------------------------------------------
task basic_hit_miss_test;
begin
    $display("\nTest %0d: Basic Cache Hit/Miss", testcase++);
    
    // Initial read (miss)
    trigger_read(32'h0000_1000, 64'hLW);
    verify_miss(32'h1000, "Initial read miss");
    
    // Subsequent read (hit)
    trigger_read(32'h0000_1004, 64'hLW);
    verify_hit(32'h1004, "Subsequent read hit");
end
endtask

//----------------------------------------------------------
// Test Scenario 2: Write Policy Verification
//----------------------------------------------------------
task write_policy_test;
begin
    $display("\nTest %0d: Write Policy Check", testcase++);
    
    // Write hit with write-back
    trigger_write(32'h0000_2000, 64'hSW, 32'hDEADBEEF);
    verify_writeback(32'h2000, "Write-back verification");
    
    // Write miss with no-write allocate
    trigger_write(32'h0000_3000, 64'hSW, 32'hCAFEBABE);
    verify_mem_write(32'h3000, "No-write allocate check");
end
endtask

//----------------------------------------------------------
// Common Test Utilities
//----------------------------------------------------------
task trigger_read;
input [31:0] address;
input [63:0] inst;
begin
    @(negedge clk);
    cpu_addr = address;
    Single_Instruction = inst;
    #1; // Setup time
end
endtask

task verify_miss;
input [31:0] exp_addr;
input string msg;
begin
    if(mem_addr !== {exp_addr[31:5], 5'b0}) begin
        $error("%s: Expected addr %h, got %h", 
              msg, {exp_addr[31:5], 5'b0}, mem_addr);
    end
    check_stall(1, "Miss stall check");
end
endtask

//----------------------------------------------------------
// Automated Checkers
//----------------------------------------------------------
task check_stall;
input exp_stall;
input string msg;
begin
    if(cpu_stall !== exp_stall) begin
        $error("%s: Expected %b, got %b", 
              msg, exp_stall, cpu_stall);
    end
    else begin
        $display("PASS: %s", msg);
    end
end
endtask

task verify_hit;
input [31:0] exp_addr;
input string msg;
begin
    if(mem_read || mem_write) begin
        $error("%s: Unexpected memory access", msg);
    end
    check_stall(0, "Hit stall check");
end
endtask
endmodule
