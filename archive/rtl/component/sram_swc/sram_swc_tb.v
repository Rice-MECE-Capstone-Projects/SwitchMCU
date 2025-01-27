// TODO: Cite Interleaved test cases. Generated with GPT

module sram_swc_tb();
    // Parameters for the SRAM
    localparam DATA_WIDTH = 32;
    localparam ADDR_WIDTH = 10;
    localparam MEM_DEPTH = 1 << ADDR_WIDTH;

    // Testbench signals
    reg clk;
    reg we;
    reg [ADDR_WIDTH-1:0] addr;
    reg [DATA_WIDTH-1:0] data_in;
    wire [DATA_WIDTH-1:0] data_out;

    // Instantiate the SRAM with specific parameters
    sram_swc #(
        .DATA_WIDTH(DATA_WIDTH),
        .ADDR_WIDTH(ADDR_WIDTH)
    ) sram_instance (
        .clk(clk),
        .we(we),
        .addr(addr),
        .wdata(data_in),
        .rdata(data_out)
    );

    // Clock generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk; // 100 MHz Clock
    end

    initial begin
        $dumpfile("sram_swc_tb.vcd");
        $dumpvars(0, sram_swc_tb);
        #15000 $finish;
    end

    // SRAM test sequence
    initial begin
        // Initialize inputs
        // Write to the SRAM
        we = 1;
        addr = 0;  data_in = 32'h11111111; #10;
        addr = 1;  data_in = 32'h22222222; #10;
        addr = 2;  data_in = 32'h33333333; #10;
        addr = 3;  data_in = 32'h44444444; #10;
        addr = 4;  data_in = 32'h55555555; #10;
        addr = 5;  data_in = 32'h66666666; #10;
        addr = 6;  data_in = 32'h77777777; #10;
        addr = 7;  data_in = 32'h88888888; #10;
        addr = 8;  data_in = 32'h99999999; #10;
        addr = 9;  data_in = 32'hAAAAAAAA; #10;
        addr = 10; data_in = 32'hBBBBBBBB; #10;
        addr = 11; data_in = 32'hCCCCCCCC; #10;
        addr = 12; data_in = 32'hDDDDDDDD; #10;
        addr = 13; data_in = 32'hEEEEEEEE; #10;
        addr = 14; data_in = 32'hFFFFFFFF; #10;
        addr = 15; data_in = 32'h10101010; #10;
        addr = 16; data_in = 32'h11111111; #10;
        addr = 17; data_in = 32'h12121212; #10;
        addr = 18; data_in = 32'h13131313; #10;
        addr = 19; data_in = 32'h14141414; #10;
        addr = 20; data_in = 32'h15151515; #10;
        addr = 21; data_in = 32'h16161616; #10;
        addr = 22; data_in = 32'h17171717; #10;
        addr = 23; data_in = 32'h18181818; #10;
        addr = 24; data_in = 32'h19191919; #10;
        addr = 25; data_in = 32'h1A1A1A1A; #10;
        addr = 26; data_in = 32'h1B1B1B1B; #10;
        addr = 27; data_in = 32'h1C1C1C1C; #10;
        addr = 28; data_in = 32'h1D1D1D1D; #10;
        addr = 29; data_in = 32'h1E1E1E1E; #10;
        addr = 30; data_in = 32'h1F1F1F1F; #10;
        addr = 31; data_in = 32'h20202020; #10;

        // Read from the SRAM
        we = 0; 
        addr = 0; #10;
        addr = 1; #10;
        addr = 2; #10;
        addr = 3; #10;
        addr = 4; #10;
        addr = 5; #10;
        addr = 6; #10;
        addr = 7; #10;
        addr = 8; #10;
        addr = 9; #10;
        addr = 10; #10;
        addr = 11; #10;
        addr = 12; #10;
        addr = 13; #10;
        addr = 14; #10;
        addr = 15; #10;
        addr = 16; #10;
        addr = 17; #10;
        addr = 18; #10;
        addr = 19; #10;
        addr = 20; #10;
        addr = 21; #10;
        addr = 22; #10;
        addr = 23; #10;
        addr = 24; #10;
        addr = 25; #10;
        addr = 26; #10;
        addr = 27; #10;
        addr = 28; #10;
        addr = 29; #10;
        addr = 30; #10;
        addr = 31; #10;

        //Interleaved write/read
        we = 1; addr = 32; data_in = 32'h21212121; #10; we = 0; addr = 32; #10;
        we = 1; addr = 33; data_in = 32'h22222222; #10; we = 0; addr = 33; #10;
        we = 1; addr = 34; data_in = 32'h23232323; #10; we = 0; addr = 34; #10;
        we = 1; addr = 35; data_in = 32'h24242424; #10; we = 0; addr = 35; #10;
        we = 1; addr = 36; data_in = 32'h25252525; #10; we = 0; addr = 36; #10;
        we = 1; addr = 37; data_in = 32'h26262626; #10; we = 0; addr = 37; #10;
        we = 1; addr = 38; data_in = 32'h27272727; #10; we = 0; addr = 38; #10;
        we = 1; addr = 39; data_in = 32'h28282828; #10; we = 0; addr = 39; #10;
        we = 1; addr = 40; data_in = 32'h29292929; #10; we = 0; addr = 40; #10;
        we = 1; addr = 41; data_in = 32'h2A2A2A2A; #10; we = 0; addr = 41; #10;
        we = 1; addr = 42; data_in = 32'h2B2B2B2B; #10; we = 0; addr = 42; #10;
        we = 1; addr = 43; data_in = 32'h2C2C2C2C; #10; we = 0; addr = 43; #10;
        we = 1; addr = 44; data_in = 32'h2D2D2D2D; #10; we = 0; addr = 44; #10;
        we = 1; addr = 45; data_in = 32'h2E2E2E2E; #10; we = 0; addr = 45; #10;
        we = 1; addr = 46; data_in = 32'h2F2F2F2F; #10; we = 0; addr = 46; #10;
        we = 1; addr = 47; data_in = 32'h30303030; #10; we = 0; addr = 47; #10;
        we = 1; addr = 48; data_in = 32'h31313131; #10; we = 0; addr = 48; #10;
        we = 1; addr = 49; data_in = 32'h32323232; #10; we = 0; addr = 49; #10;
        we = 1; addr = 50; data_in = 32'h33333333; #10; we = 0; addr = 50; #10;
        we = 1; addr = 51; data_in = 32'h34343434; #10; we = 0; addr = 51; #10;
        we = 1; addr = 52; data_in = 32'h35353535; #10; we = 0; addr = 52; #10;
        we = 1; addr = 53; data_in = 32'h36363636; #10; we = 0; addr = 53; #10;
        we = 1; addr = 54; data_in = 32'h37373737; #10; we = 0; addr = 54; #10;
        we = 1; addr = 55; data_in = 32'h38383838; #10; we = 0; addr = 55; #10;
        we = 1; addr = 56; data_in = 32'h39393939; #10; we = 0; addr = 56; #10;
        we = 1; addr = 57; data_in = 32'h3A3A3A3A; #10; we = 0; addr = 57; #10;
        we = 1; addr = 58; data_in = 32'h3B3B3B3B; #10; we = 0; addr = 58; #10;
        we = 1; addr = 59; data_in = 32'h3C3C3C3C; #10; we = 0; addr = 59; #10;
        we = 1; addr = 60; data_in = 32'h3D3D3D3D; #10; we = 0; addr = 60; #10;
        we = 1; addr = 61; data_in = 32'h3E3E3E3E; #10; we = 0; addr = 61; #10;
        we = 1; addr = 62; data_in = 32'h3F3F3F3F; #10; we = 0; addr = 62; #10;
        we = 1; addr = 63; data_in = 32'h40404040; #10; we = 0; addr = 63; #10;

    end

endmodule
