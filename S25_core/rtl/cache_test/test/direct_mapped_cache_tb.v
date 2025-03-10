`timescale 1ns / 1ps

module direct_mapped_cache_tb;

    // Parameters (match the cache module)
    parameter ADDRESS_WIDTH = 32;
    parameter CACHE_SIZE_BYTES = 4096;
    parameter BLOCK_SIZE_BYTES = 32;

    // Signals
    reg clk;
    reg rst;
    reg [ADDRESS_WIDTH-1:0] cpu_addr;
    reg [BLOCK_SIZE_BYTES*8-1:0] cpu_wdata;
    reg cpu_read;
    reg cpu_write;
    reg [BLOCK_SIZE_BYTES*8-1:0] cpu_rdata; // Changed cpu_rdata to reg
    wire cache_hit;
    wire [ADDRESS_WIDTH-1:0] mem_addr;
    wire [BLOCK_SIZE_BYTES*8-1:0] mem_wdata;
    wire mem_read;
    wire mem_write;

    // Memory model (for simulation)
    reg [BLOCK_SIZE_BYTES*8-1:0] memory [0:(2**ADDRESS_WIDTH/BLOCK_SIZE_BYTES)-1];
    reg [BLOCK_SIZE_BYTES*8-1:0] mem_read_data; // Added memory read data signal

    // Instantiate the cache module
    direct_mapped_cache #(
        .ADDRESS_WIDTH(ADDRESS_WIDTH),
        .CACHE_SIZE_BYTES(CACHE_SIZE_BYTES),
        .BLOCK_SIZE_BYTES(BLOCK_SIZE_BYTES)
    ) dut (
        .clk(clk),
        .rst(rst),
        .cpu_addr(cpu_addr),
        .cpu_wdata(cpu_wdata),
        .cpu_read(cpu_read),
        .cpu_write(cpu_write),
        .cpu_rdata(dut_cpu_rdata), // Connect the internal output from DUT.
        .cache_hit(cache_hit),
        .mem_addr(mem_addr),
        .mem_wdata(mem_wdata),
        .mem_read(mem_read),
        .mem_write(mem_write)
    );
    wire [BLOCK_SIZE_BYTES*8-1:0] dut_cpu_rdata; // Add internal wire to connect to dut output.

    // Clock generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    // Test sequence
    initial begin
        rst = 1;
        cpu_read = 0;
        cpu_write = 0;
        #10;
        rst = 0;
        #10;

        // Initialize memory with known values
        for (integer i = 0; i < (2**ADDRESS_WIDTH/BLOCK_SIZE_BYTES); i = i + 1) begin
            memory[i] = i * BLOCK_SIZE_BYTES; // Initialize memory with simple pattern
        end

        // Test 1: Read miss, then hit
        cpu_addr = 32'h0000_0000;
        cpu_read = 1;
        #10;
        cpu_read = 0;
        #10;
        if (!cache_hit || cpu_rdata !== memory[cpu_addr/BLOCK_SIZE_BYTES]) $display("Test 1 failed: Read miss/hit. cpu_rdata: %h, mem: %h, hit: %b", cpu_rdata, memory[cpu_addr/BLOCK_SIZE_BYTES], cache_hit);

        cpu_addr = 32'h0000_0000;
        cpu_read = 1;
        #10;
        cpu_read = 0;
        #10;
        if (!cache_hit || cpu_rdata !== memory[cpu_addr/BLOCK_SIZE_BYTES]) $display("Test 1 failed: Second hit. cpu_rdata: %h, mem: %h, hit: %b", cpu_rdata, memory[cpu_addr/BLOCK_SIZE_BYTES], cache_hit);

        // Test 2: Write-through
        cpu_addr = 32'h0000_0032;
        cpu_wdata = 32'hDEADBEEF;
        cpu_write = 1;
        #10;
        cpu_write = 0;
        #10;
        if (memory[cpu_addr/BLOCK_SIZE_BYTES] !== 32'hDEADBEEF) $display("Test 2 failed: Write-through. mem: %h", memory[cpu_addr/BLOCK_SIZE_BYTES]);

        // Test 3: Read after write
        cpu_addr = 32'h0000_0032;
        cpu_read = 1;
        #10;
        cpu_read = 0;
        #10;
        if (!cache_hit || cpu_rdata !== 32'hDEADBEEF) $display("Test 3 failed: Read after write. cpu_rdata: %h", cpu_rdata);

        //Test 4: Conflict miss.
        cpu_addr = 32'h0001_0000;
        cpu_read = 1;
        #10;
        cpu_read = 0;
        #10;
        if (!cache_hit || cpu_rdata !== memory[cpu_addr/BLOCK_SIZE_BYTES]) $display("Test 4 failed: Conflict miss 1. cpu_rdata: %h, mem: %h", cpu_rdata, memory[cpu_addr/BLOCK_SIZE_BYTES]);

        cpu_addr = 32'h0000_0000;
        cpu_read = 1;
        #10;
        cpu_read = 0;
        #10;
        if (!cache_hit || cpu_rdata !== memory[cpu_addr/BLOCK_SIZE_BYTES]) $display("Test 4 failed: Conflict miss 2. cpu_rdata: %h, mem: %h", cpu_rdata, memory[cpu_addr/BLOCK_SIZE_BYTES], cache_hit);

        $display("Simulation complete");
        $finish;
    end

    // Memory model behavior
    always @(posedge clk) begin
        if (mem_read) begin
            mem_read_data <= memory[mem_addr/BLOCK_SIZE_BYTES]; // Simulate memory read
        end
        if (mem_write) begin
            memory[cpu_addr/BLOCK_SIZE_BYTES] <= mem_wdata; // Simulate memory write
        end
    end

    //Drive cpu_rdata from the mem_read_data when mem_read is active.
    always @(*) begin
        if (mem_read) begin
            cpu_rdata = mem_read_data;
        end else begin
            cpu_rdata = dut_cpu_rdata; // Drive from the DUT output.
        end
    end

endmodule
