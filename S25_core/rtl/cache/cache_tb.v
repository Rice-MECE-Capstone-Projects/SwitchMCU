`timescale 1ps/1ps
`include "cache.v"

module cache_tb ();

reg clk, reset;
reg [63:0] Single_Instruction;
reg [31:0] cpu_addr;
reg [31:0] cpu_wdata;
wire [31:0] cpu_rdata;
wire cpu_stall;

wire [31:0] mem_addr;
wire mem_read;
wire mem_write;
wire [255:0] mem_wdata_array;
reg [255:0] mem_rdata_array;
reg mem_ready;

cache U1 (
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

    always #5 clk = ~clk; // 10ps clock cycle

    task main_memory();
        begin
            #10;
            mem_rdata_array = 256'h88888888_77777777_66666666_55555555_44444444_33333333_22222222_11111111; // Sample memory block data
            mem_ready = 1;
            #10;
            mem_ready = 0;
        end
    endtask

    task print_data_table();
        begin
            $display("=== DATA TABLE ===");
            for (integer i = 0; i < 64; i++) begin
                $write("Index %0d: ", i);
                for (integer j = 7; j >= 0; j--) begin  
                    $write("%h ", U1.data_table[i][j]); // Print values on the same line
                end
                $display(""); // Newline after each row
            end
            $display("===========================");
        end
    endtask

    initial begin
        $dumpfile("cache_tb.vcd");
        $dumpvars(0, cache_tb);

        $monitor("Time:%0t | cpu_addr=%h | cpu_wdata=%h | cpu_rdata=%h | cpu_stall=%b | mem_addr=%h | mem_read=%b | mem_write=%b | mem_wdata_array=%h | mem_ready=%b", 
            $time, cpu_addr, cpu_wdata, cpu_rdata, cpu_stall, mem_addr, mem_read, mem_write, mem_wdata_array, mem_ready);
            
        clk = 0;
        reset = 1;
        Single_Instruction = 0;
        cpu_addr = 0;
        cpu_wdata = 0;
        mem_rdata_array = 0;
        mem_ready = 0;

        #10; 
        reset = 0;

        //Load Word - Cache Miss
        #10;
        cpu_addr = 32'h1000_0000;
        Single_Instruction = 64'h0000_0000_0020_0000; // LW instruction
        main_memory();
        print_data_table();

        //Load Word - Cache Miss
        #10;
        cpu_addr = 32'h1000_002c;
        Single_Instruction = 64'h0000_0000_0020_0000; 
        main_memory();
        print_data_table();

        //Load Word - Cache Hit
        #10;
        cpu_addr = 32'h1000_0004; 
        Single_Instruction = 64'h0000_0000_0020_0000;
        print_data_table();

        //Load half word - Cache Hit
        #10;
        cpu_addr = 32'h1000_0010; 
        Single_Instruction = 64'h0000_0000_0010_0000;
        print_data_table();

        //Load byte - Cache Hit
        #10;
        cpu_addr = 32'h1000_0004; 
        Single_Instruction = 64'h0000_0000_0008_0000;
        print_data_table();

        //Store Word - Cache Hit
        #10;
        cpu_addr = 32'h1000_0000;
        Single_Instruction = 64'h0000_0000_0400_0000; 
        cpu_wdata = 32'haaaaaaaa;
        print_data_table();
        mem_ready = 1;

        //Store Word - Cache Hit
        #10;
        cpu_addr = 32'h1000_0004;
        Single_Instruction = 64'h0000_0000_0400_0000; 
        cpu_wdata = 32'hbbbbbbbb;
        print_data_table();
        

        //Store half Word - Cache hit
        #10;
        cpu_addr = 32'h1000_002c;
        Single_Instruction = 64'h0000_0000_0200_0000;
        cpu_wdata = 32'hcccccccc;
        print_data_table();

        //Store byte - Cache hit
        #10;
        cpu_addr = 32'h1000_0021;
        Single_Instruction = 64'h0000_0000_0100_0000;
        cpu_wdata = 32'hdddddddd;
        print_data_table();

        //Store word - Cache miss
        #10;
        cpu_addr = 32'h1001_000c;
        Single_Instruction = 64'h0000_0000_0400_0000;
        cpu_wdata = 32'heeeeeeee;
        print_data_table();

        //Store byte - Cache hit
        #10;
        cpu_addr = 32'h1000_0021;
        Single_Instruction = 64'h0000_0000_0100_0000;
        cpu_wdata = 32'hdddddddd;
        print_data_table();
        
        #10;
        $finish;
end
endmodule
