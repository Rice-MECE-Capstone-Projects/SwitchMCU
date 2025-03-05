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
    @(posedge clk);
    reset = 0;
    @(posedge clk);
    $display("Reset Test Completed");
end
endtask

task test_read_hit;
input [31:0] address;
input [31:0] expected_data;
begin
    test_num++;
    $display("Test %0d: Read Hit Test @ %h", test_num, address);
    
    // Prime the cache first with a block fetch
    cpu_addr = address;
    cpu_read = 1;
    @(posedge clk);
    
    // Handle 8-word block fetch
    for (integer i = 0; i < 8; i++) begin
        wait(mem_read === 1);
        mem_rdata = expected_data + i;
        mem_ready = 1;
        @(posedge clk);
        mem_ready = 0;
        // Wait for next request or state change
        @(posedge clk);
    end
    
    cpu_read = 0;
    @(posedge clk);
    
    // Allow cache to return to IDLE
    @(posedge clk);
    
    // Now perform read hit
    cpu_addr = address;
    cpu_read = 1;
    @(posedge clk);
    
    // Verify results
    if (cpu_stall !== 0 || cpu_rdata !== expected_data) begin
        $error("Read Hit Failed: Stall=%b, Data=%h (Expected %h)", 
              cpu_stall, cpu_rdata, expected_data);
        error_count++;
    end
    cpu_read = 0;
    @(posedge clk);
    $display("Test %0d: Read Hit %s", test_num, 
           (error_count ? "FAILED" : "PASSED"));
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
    @(posedge clk);
    
    // Verify stall and memory request
    if (cpu_stall !== 1 || mem_read !== 1) begin
        $error("Read Miss Failed: Stall=%b, MemRead=%b", 
              cpu_stall, mem_read);
        error_count++;
    end

    // Simulate 8-word memory response
    for (integer i = 0; i < 8; i++) begin
        mem_rdata = memory_data + i;
        mem_ready = 1;
        @(posedge clk);
        mem_ready = 0;
        @(posedge clk);
    end
    
    cpu_read = 0;
    @(posedge clk);
    
    // Verify cache contents
    for (integer i = 0; i < 8; i++) begin
        cpu_addr = address + (i*4);
        cpu_read = 1;
        @(posedge clk);
        if (cpu_rdata !== (memory_data + i)) begin
            $error("Cache data mismatch @%h: Got %h, Expected %h",
                  cpu_addr, cpu_rdata, memory_data+i);
            error_count++;
        end
        cpu_read = 0;
        @(posedge clk);
    end
    
    $display("Test %0d: Read Miss %s", test_num, 
           (error_count ? "FAILED" : "PASSED"));
end
endtask

task test_write_hit;
input [31:0] address;
input [31:0] write_data;
begin
    test_num++;
    $display("Test %0d: Write Hit Test @ %h", test_num, address);
    
    // Prime the cache first with a read
    cpu_addr = address;
    cpu_read = 1;
    @(posedge clk);
    
    // Handle block fetch
    for (integer i = 0; i < 8; i++) begin
        wait(mem_read === 1);
        mem_rdata = 32'h0; // Prime with zeros
        mem_ready = 1;
        @(posedge clk);
        mem_ready = 0;
        @(posedge clk);
    end
    
    cpu_read = 0;
    @(posedge clk);
    
    // Allow cache to settle
    @(posedge clk);
    
    // Perform write
    cpu_addr = address;
    cpu_write = 1;
    cpu_wdata = write_data;
    @(posedge clk);
    
    // Verify memory write is initiated
    if (mem_write !== 1 || mem_wdata !== write_data) begin
        $error("Write Failed: MemWrite=%b, Data=%h (Expected %h)",
              mem_write, mem_wdata, write_data);
        error_count++;
    end
    
    // Complete the memory write
    mem_ready = 1;
    @(posedge clk);
    mem_ready = 0;
    cpu_write = 0;
    @(posedge clk);
    
    $display("Test %0d: Write Hit %s", test_num, 
           (error_count ? "FAILED" : "PASSED"));
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
    test_write_hit(32'h0000_3000, 32'hDEAD_BEEF);

    if (error_count == 0) 
        $display("All tests passed!");
    else 
        $display("Tests failed: %0d errors", error_count);
    $finish;
end

endmodule
