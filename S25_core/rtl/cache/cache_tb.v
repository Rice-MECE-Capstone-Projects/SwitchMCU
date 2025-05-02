`timescale 1ps/1ps
`include "cache.v"

module cache_tb ();

reg clk, reset;
reg [31:0] cpu_addr;
reg [31:0] cpu_wdata;
wire [31:0] cpu_rdata;
wire cpu_stall;

wire [31:0] mem_addr_block;
wire [31:0] mem_addr;
wire mem_read;
wire mem_write;
wire [255:0] mem_wdata_block;
wire [31:0] miss_mem_wdata;
reg [255:0] mem_rdata_array;
reg mem_ready;

wire [2:0] state;

reg data_req;
reg data_we;
reg [3:0] data_be;
wire data_rvalid;
wire data_gnt;

cache U1 (
    .clk(clk),
    .reset(reset),
    .cpu_addr(cpu_addr),
    .cpu_wdata(cpu_wdata),
    .cpu_rdata(cpu_rdata),
    .cpu_stall(cpu_stall),
    .mem_addr_block(mem_addr_block),
    .mem_addr(mem_addr),
    .mem_read(mem_read),
    .mem_write(mem_write),
    .mem_wdata_block(mem_wdata_block),
    .miss_mem_wdata(miss_mem_wdata),
    .mem_rdata_array(mem_rdata_array),
    .mem_ready(mem_ready),
    .state(state),
    .data_req(data_req),
    .data_we(data_we),
    .data_be(data_be),
    .data_rvalid(data_rvalid),
    .data_gnt(data_gnt)
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

        $monitor("data_req=%b | data_rvalid=%b | data_gnt=%b | cpu_addr=%h | cpu_wdata=%h | cpu_rdata=%h | cpu_stall=%b | mem_read=%b | mem_write=%b| mem_addr_block=%h | mem_addr=%h | mem_wdata_block=%h | miss_mem_wdata=%h | mem_ready=%b", 
        data_req, data_rvalid, data_gnt, cpu_addr, cpu_wdata, cpu_rdata, cpu_stall, mem_read, mem_write, mem_addr_block, mem_addr, mem_wdata_block, miss_mem_wdata, mem_ready);

            
        clk = 0;
        reset = 1;
        cpu_addr = 0;
        cpu_wdata = 0;
        mem_rdata_array = 0;
        mem_ready = 0;
        data_req = 0;
        data_we = 0;
        data_be = 4'b0000;

        #10; 
        reset = 0;

        //Load Word - Cache Miss
        #10;
        data_req = 1;
        data_we = 0;
        cpu_addr = 32'h1000_0000;
        data_be = 4'b0010; 
        main_memory();
        #10;
        print_data_table();

        //Load byte unsigned - Cache Miss
        #10;
        data_req = 1;
        data_we = 0;
        cpu_addr = 32'h1000_002c;
        data_be = 4'b0000;
        main_memory();
        #10;
        print_data_table();

        //Load Half Word - Cache Hit
        #10;
        data_req = 1;
        data_we = 0;
        cpu_addr = 32'h1000_0004; 
        data_be = 4'b0001;
        #10;
        print_data_table();

        //Load half signed word - Cache miss
        #10;
        data_req = 1;
        data_we = 0;
        cpu_wdata = 32'h00000000;
        cpu_addr = 32'h1000_003c; 
        data_be = 4'b0001;
        main_memory();
        #10;
        print_data_table();
      
        //Store word - Cache miss
        #10;
        data_req = 1;
        data_we = 1;
        cpu_addr = 32'h1000_5106;
        data_be = 4'b0111;
        cpu_wdata = 32'hbbbbbbbb;
        #20;
        mem_ready = 1;
        #10;
        print_data_table();
        mem_ready = 0;
        
        //Store half word - Cache miss
        #10;
        data_req = 1;
        data_we = 1;
        cpu_addr = 32'h1000_0101;
        data_be = 4'b0110;
        cpu_wdata = 32'hcccccccc;
        #20;
        mem_ready = 1;
        #10;
        print_data_table();
        mem_ready = 0;

         //Store half Word - Cache hit
        #10;
        data_req = 1;
        data_we = 1;
        cpu_addr = 32'h1000_002c;
        data_be = 4'b0110;
        cpu_wdata = 32'hcccccccc;
        #10;
        mem_ready = 1;
        #10;
        print_data_table();
        mem_ready = 0;

        //Load half word - Cache Hit
        #10;
        data_req = 1;
        data_we = 0;
        cpu_wdata = 32'h00000000;
        cpu_addr = 32'h1000_0010; 
        data_be = 4'b0001;
        #10;
        print_data_table();

        //Store Word - Cache Hit
        #10;
        data_req = 1;
        data_we = 1;
        cpu_addr = 32'h1000_0000;
        data_be = 4'b0111;
        cpu_wdata = 32'haaaaaaaa;
        #10;
        mem_ready = 1;
        #10;
        print_data_table();
        mem_ready = 0;

        //Load half word - Cache Hit
        #10;
        data_req = 1;
        data_we = 0;
        cpu_wdata = 32'h00000000;
        cpu_addr = 32'h1000_0018; 
        data_be = 4'b0001;
        #10;
        print_data_table();

        //Load half signed word - Cache miss
        #10;
        data_req = 1;
        data_we = 0;
        cpu_wdata = 32'h00000000;
        cpu_addr = 32'h1000_005c; 
        data_be = 4'b0001;
        main_memory();
        #10;
        print_data_table();
       

        //Load half unsigned word - Cache hit
        #10;
        data_req = 1;
        data_we = 0;
        cpu_wdata = 32'h00000000;
        cpu_addr = 32'h1000_005c; 
        data_be = 4'b0100;
        #10;
        print_data_table();

        //Store Word - Cache Hit
        #10;
        data_req = 1;
        data_we = 1;
        cpu_addr = 32'h1000_0014;
        data_be = 4'b0111;
        cpu_wdata = 32'hbbbbbbbb;
        #10;
        mem_ready = 1;
        #10;
        print_data_table();
        mem_ready = 0;

        //Load byte - Cache Hit
        #10;
        data_req = 1;
        data_we = 0;
        cpu_wdata = 32'h00000000;
        cpu_addr = 32'h1000_0004; 
        data_be = 4'b0000;
        #10;
        print_data_table();
        
        //Store half Word - Cache hit
        #10;
        data_req = 1;
        data_we = 1;
        cpu_addr = 32'h1000_002c;
        data_be = 4'b0110;
        cpu_wdata = 32'hcccccccc;
        #10;
        mem_ready = 1;
        #10;
        print_data_table();
        mem_ready = 0;

        //Store word - Cache miss
        #10;
        data_req = 1;
        data_we = 1;
        cpu_addr = 32'h1000_0060;
        data_be = 4'b0111;
        cpu_wdata = 32'heeeeeeee;
        #20;
        mem_ready = 1;
        #10;
        print_data_table();
        mem_ready = 0;

        //Load byte - Cache miss
        #10;
        data_req = 1;
        data_we = 0;
        cpu_wdata = 32'h00000000;
        cpu_addr = 32'h1000_0069; 
        data_be = 4'b0000;
        #20;
        mem_ready = 1;
        #10;
        print_data_table();
        mem_ready = 0;

        //Load byte - Cache Hit
        #10;
        data_req = 1;
        data_we = 0;
        cpu_wdata = 32'h00000000;
        cpu_addr = 32'h1000_001a; 
        data_be = 4'b0000;
        #10;
        print_data_table();


        //Store byte - Cache hit
        #10;
        data_req = 1;
        data_we = 1;
        cpu_addr = 32'h1000_0059;
        data_be = 4'b0101;
        cpu_wdata = 32'heeeeeeee;
        #10;
        mem_ready = 1;
        #10;
        print_data_table();
        mem_ready = 0;

        //Store half Word - Cache hit
        #10;
        data_req = 1;
        data_we = 1;
        cpu_wdata = 32'h00000000;
        cpu_addr = 32'h1000_0069;
        data_be = 4'b0110;
        cpu_wdata = 32'haaaaaaaa;
        #20;
        mem_ready = 1;
        #10;
        print_data_table();
        mem_ready = 0;

        //Store byte - Cache hit
        #10;
        data_req = 1;
        data_we = 1;
        cpu_wdata = 32'h00000000;
        cpu_addr = 32'h1000_0073;
        data_be = 4'b0101;
        cpu_wdata = 32'hffffffff;
        #20;
        mem_ready = 1;
        #10;
        print_data_table();
        mem_ready = 0;

        //Store byte - Cache miss
        #10;
        data_req = 1;
        data_we = 1;
        cpu_wdata = 32'h00000000;
        cpu_addr = 32'h1000_0082;
        data_be = 4'b0101;
        cpu_wdata = 32'haaaaaaaa;
        #20;
        mem_ready = 1;
        #10;
        print_data_table();
        mem_ready = 0;

        //Load byte - Cache miss
        #10;
        data_req = 1;
        data_we = 0;
        cpu_wdata = 32'h00000000;
        cpu_addr = 32'h1000_0080; 
        data_be = 4'b0000;
        #20;
        mem_ready = 1;
        #10;
        print_data_table();
        mem_ready = 0;

        //Load half word - Cache Hit
        #10;
        data_req = 1;
        data_we = 0;
        cpu_wdata = 32'h00000000;
        cpu_addr = 32'h1000_0010; 
        data_be = 4'b0001;
        #10;
        print_data_table();
        
        #50;
        $finish;
end
endmodule
