`timescale 1ns/1ps
module tb_riscv32i_cache();

reg clk;
reg reset;

// CPU Interface
reg [31:0] cpu_addr;
reg cpu_read;
reg cpu_write;
reg [31:0] cpu_wdata;
wire [31:0] cpu_rdata;
wire cpu_stall;

// Memory Interface
wire [31:0] mem_addr;
wire mem_read;
wire mem_write;
wire [31:0] mem_wdata;
reg [31:0] mem_rdata;
reg mem_ready;

// Instantiate the cache
riscv32i_cache uut (
    .clk(clk),
    .reset(reset),
    .cpu_addr(cpu_addr),
    .cpu_read(cpu_read),
    .cpu_write(cpu_write),
    .cpu_wdata(cpu_wdata),
    .cpu_rdata(cpu_rdata),
    .cpu_stall(cpu_stall),
    .mem_addr(mem_addr),
    .mem_read(mem_read),
    .mem_write(mem_write),
    .mem_wdata(mem_wdata),
    .mem_rdata(mem_rdata),
    .mem_ready(mem_ready)
);

// Clock generation
always #5 clk = ~clk;

integer test_num = 0;
integer error_count = 0;

task reset_test;
begin
    reset = 1;
    @(negedge clk);
    reset = 0;
    $display("Reset Test Completed");
end
endtask

task test_read_hit;
input [31:0] address;
input [31:0] memory_data;
begin
    test_num++;
    $display("Test %0d: Read Hit Test @ %h", test_num, address);
    
    // Prime the cache with a read miss first
    cpu_addr = address;
    cpu_read = 1;
    @(negedge clk);
    
    // Handle read miss
    wait(mem_read === 1);
    mem_rdata = memory_data;
    mem_ready = 1;
    @(negedge clk);
    mem_ready = 0;
    cpu_read = 0;
    
    // Now perform read hit
    cpu_addr = address;
    cpu_read = 1;
    @(negedge clk);
    
    // Verify results
    if (cpu_stall !== 0 || cpu_rdata !== memory_data) begin
        $error("Read Hit Failed: Stall=%b, Data=%h", cpu_stall, cpu_rdata);
        error_count++;
    end
    cpu_read = 0;
    $display("Test %0d: Read Hit Passed", test_num);
end
endtask

task test_read_miss;
input [31:0] address;
input [31:0] memory_data;
begin
    test_num++;
    $display("Test %0d: Read Miss Test @ %h", test_num, address);
    
    cpu_addr = address;
    cpu_read = 1;
    @(negedge clk);
    
    // Verify stall and memory request
    if (cpu_stall !== 1 || mem_read !== 1) begin
        $error("Read Miss Failed: Stall=%b, MemRead=%b", cpu_stall, mem_read);
        error_count++;
    end
    
    // Simulate memory response
    mem_rdata = memory_data;
    mem_ready = 1;
    @(negedge clk);
    mem_ready = 0;
    cpu_read = 0;
    
    // Allow one cycle for FSM transition
    @(negedge clk);
    $display("Test %0d: Read Miss Passed", test_num);
end
endtask

initial begin
    clk = 0;
    reset = 0;
    {cpu_read, cpu_write, cpu_wdata} = 0;
    {mem_rdata, mem_ready} = 0;

    #10 reset_test();
    test_read_hit(32'h0000_1000, 32'h1234_5678);
    test_read_miss(32'h0000_2000, 32'hCAFE_BABE);
    
    if (error_count == 0) $display("All tests passed!");
    else $display("Tests failed: %0d errors", error_count);
    $finish;
end

endmodule
