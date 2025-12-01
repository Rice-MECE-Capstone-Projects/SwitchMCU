`timescale 1ns/1ps

module tb_smoke_riscv32i;

    // -------------------------------------------------
    //  Clock
    // -------------------------------------------------
    logic clk = 0;
    always #5 clk = ~clk;  // 100MHz

    // -------------------------------------------------
    //  GPIO inputs
    // -------------------------------------------------
    logic [31:0] GPIO0_R0_CH1; // reset/start pulses
    logic [31:0] GPIO0_R0_CH2; // memory_offset
    logic [31:0] GPIO0_R1_CH1; // initial PC
    logic [31:0] GPIO0_R1_CH2; // success_code

    wire STOP_sim;

    // -------------------------------------------------
    //  BRAM wires - data mem
    // -------------------------------------------------
    wire        data_mem_clkb;
    wire        data_mem_enb;
    wire        data_mem_rstb;
    wire [3:0]  data_mem_web;
    wire [31:0] data_mem_addrb;
    wire [31:0] data_mem_dinb;
    logic       data_mem_rstb_busy;
    logic [31:0] data_mem_doutb;

    // -------------------------------------------------
    //  BRAM wires - instruction mem
    // -------------------------------------------------
    wire        ins_mem_clkb;
    wire        ins_mem_enb;
    wire        ins_mem_rstb;
    wire [3:0]  ins_mem_web;
    wire [31:0] ins_mem_addrb;
    wire [31:0] ins_mem_dinb;
    logic       ins_mem_rstb_busy;
    logic [31:0] ins_mem_doutb;

    // -------------------------------------------------
    //  DUT
    // -------------------------------------------------
    riscv32i dut (
        .clk(clk),

        .GPIO0_R0_CH1(GPIO0_R0_CH1),
        .GPIO0_R0_CH2(GPIO0_R0_CH2),
        .GPIO0_R1_CH1(GPIO0_R1_CH1),
        .GPIO0_R1_CH2(GPIO0_R1_CH2),

        .STOP_sim(STOP_sim),

        .data_mem_clkb(data_mem_clkb),
        .data_mem_enb(data_mem_enb),
        .data_mem_rstb(data_mem_rstb),
        .data_mem_web(data_mem_web),
        .data_mem_addrb(data_mem_addrb),
        .data_mem_dinb(data_mem_dinb),
        .data_mem_rstb_busy(data_mem_rstb_busy),
        .data_mem_doutb(data_mem_doutb),

        .ins_mem_clkb(ins_mem_clkb),
        .ins_mem_enb(ins_mem_enb),
        .ins_mem_rstb(ins_mem_rstb),
        .ins_mem_web(ins_mem_web),
        .ins_mem_addrb(ins_mem_addrb),
        .ins_mem_dinb(ins_mem_dinb),
        .ins_mem_rstb_busy(ins_mem_rstb_busy),
        .ins_mem_doutb(ins_mem_doutb)
    );

    // -------------------------------------------------
    //  Simple INSTRUCTION Memory Model
    //  Your hex file is loaded here
    // -------------------------------------------------
    localparam IMEM_SIZE = 2048;
    logic [31:0] imem [0:IMEM_SIZE-1];

    initial begin
        $display("Loading program into instruction memory...");
        $readmemh("program.hex", imem);
    end

    always_ff @(posedge clk) begin
        if (ins_mem_enb && !ins_mem_rstb)
            ins_mem_doutb <= imem[ins_mem_addrb[31:2]];
    end

    assign ins_mem_rstb_busy = 1'b0;

    // -------------------------------------------------
    //  Simple DATA Memory Model
    // -------------------------------------------------
    localparam DMEM_SIZE = 2048;
    logic [31:0] dmem [0:DMEM_SIZE-1];

    initial begin
        for (int i = 0; i < DMEM_SIZE; i++) dmem[i] = 32'd0;
    end

    always_ff @(posedge clk) begin
        if (data_mem_enb) begin
            // read
            data_mem_doutb <= dmem[data_mem_addrb[31:2]];

            // write
            if (data_mem_web != 4'b0) begin
                if (data_mem_web[0]) dmem[data_mem_addrb[31:2]][7:0]   <= data_mem_dinb[7:0];
                if (data_mem_web[1]) dmem[data_mem_addrb[31:2]][15:8]  <= data_mem_dinb[15:8];
                if (data_mem_web[2]) dmem[data_mem_addrb[31:2]][23:16] <= data_mem_dinb[23:16];
                if (data_mem_web[3]) dmem[data_mem_addrb[31:2]][31:24] <= data_mem_dinb[31:24];
            end
        end
    end

    assign data_mem_rstb_busy = 1'b0;

    // -------------------------------------------------
    //  Test control: reset + start pulses
    // -------------------------------------------------
    initial begin
        GPIO0_R0_CH1 = 0;
        GPIO0_R0_CH2 = 0;          // memory_offset = 0
        GPIO0_R1_CH1 = 32'h0000_0000; // initial PC = 0
        GPIO0_R1_CH2 = 32'h0000_0014; // success_code = 20 (Example)

        // Reset pulse
        repeat (5) @(posedge clk);
        GPIO0_R0_CH1[1] = 1;
        @(posedge clk);
        GPIO0_R0_CH1[1] = 0;

        // Start pulse
        repeat (5) @(posedge clk);
        GPIO0_R0_CH1[0] = 1;
        @(posedge clk);
        GPIO0_R0_CH1[0] = 0;

        // Wait for STOP or timeout
        int cycles = 0;
        while (STOP_sim == 0 && cycles < 20000) begin
            @(posedge clk);
            cycles++;
        end

        if (STOP_sim)
            $display("SUCCESS: STOP_sim asserted at %0d cycles", cycles);
        else
            $display("TIMEOUT: STOP_sim never asserted");

        $finish;
    end

endmodule

