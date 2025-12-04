`timescale 1ns/1ps

module tb_decoder_scoreboard;

    import golden_decoder_pkg::*;

    // ----------------------------------------------
    // Clock
    // ----------------------------------------------
    logic clk = 0;
    always #5 clk = ~clk;   // 100 MHz

    // ----------------------------------------------
    // GPIO / Control
    // ----------------------------------------------
    logic [31:0] GPIO0_R0_CH1;
    logic [31:0] GPIO0_R0_CH2;
    logic [31:0] GPIO0_R1_CH1;
    logic [31:0] GPIO0_R1_CH2;
    wire STOP_sim;

    // ----------------------------------------------
    // BRAM Wires
    // ----------------------------------------------
    wire          data_mem_clkb, data_mem_enb, data_mem_rstb, data_mem_rstb_busy;
    wire [3:0]    data_mem_web;
    wire [31:0]   data_mem_addrb, data_mem_dinb, data_mem_doutb;

    wire          ins_mem_clkb, ins_mem_enb, ins_mem_rstb, ins_mem_rstb_busy;
    wire [3:0]    ins_mem_web;
    wire [31:0]   ins_mem_addrb, ins_mem_dinb, ins_mem_doutb;

    // ----------------------------------------------
    // DUT
    // ----------------------------------------------
    riscv32i dut (
        .clk(clk),
        .GPIO0_R0_CH1(GPIO0_R0_CH1),
        .GPIO0_R0_CH2(GPIO0_R0_CH2),
        .GPIO0_R1_CH1(GPIO0_R1_CH1),
        .GPIO0_R1_CH2(GPIO0_R1_CH2),
        .STOP_sim(STOP_sim),
        
        // Data BRAM Connections
        .data_mem_clkb(data_mem_clkb), .data_mem_enb(data_mem_enb), 
        .data_mem_rstb(data_mem_rstb), .data_mem_web(data_mem_web), 
        .data_mem_addrb(data_mem_addrb), .data_mem_dinb(data_mem_dinb), 
        .data_mem_rstb_busy(data_mem_rstb_busy), .data_mem_doutb(data_mem_doutb),

        // Ins BRAM Connections
        .ins_mem_clkb(ins_mem_clkb), .ins_mem_enb(ins_mem_enb), 
        .ins_mem_rstb(ins_mem_rstb), .ins_mem_web(ins_mem_web), 
        .ins_mem_addrb(ins_mem_addrb), .ins_mem_dinb(ins_mem_dinb), 
        .ins_mem_rstb_busy(ins_mem_rstb_busy), .ins_mem_doutb(ins_mem_doutb)
    );

    // ----------------------------------------------
    // Signal Binding (Using only Working Signals)
    // ----------------------------------------------
    wire valid    = dut.u_riscv32i_main.stage1_DECO_valid;
    wire [31:0] pc = dut.u_riscv32i_main.pc_stage_1;

    wire [4:0]  dut_rd       = dut.u_riscv32i_main.rd_stage1;
    wire [4:0]  dut_rs1      = dut.u_riscv32i_main.rs1_stage1;
    wire [4:0]  dut_rs2      = dut.u_riscv32i_main.rs2_stage1;
    wire [31:0] dut_imm      = dut.u_riscv32i_main.imm_stage1;
    wire [31:0] dut_instruction = dut.u_riscv32i_main.instruction_stage_1; 
    wire [63:0] dut_Single_Instruction = dut.u_riscv32i_main.Single_Instruction_stage1;

    // ----------------------------------------------
    // Golden Model
    // ----------------------------------------------
    golden_dec_t gold;

    always_comb begin
        gold = golden_decode(dut_instruction); 
    end

    // ----------------------------------------------
    // Scoreboard Instantiation
    // ----------------------------------------------
    decoder_scoreboard u_scoreboard (
        .clk(clk),
        .valid(valid),
        .pc(pc),

        // DUT
        .dut_rd(dut_rd),
        .dut_rs1(dut_rs1),
        .dut_rs2(dut_rs2),
        .dut_imm(dut_imm),
        .dut_instruction(dut_instruction),
        .dut_Single_Instruction(dut_Single_Instruction),

        // Gold (Matches the new struct without opcode/funct fields)
        .gold_rd(gold.rd),
        .gold_rs1(gold.rs1),
        .gold_rs2(gold.rs2),
        .gold_imm(gold.imm),
        .gold_Single_Instruction(gold.Single_Instruction) // The critical control field
    );

    // ----------------------------------------------
    // BRAM Models
    // ----------------------------------------------
    bram_mem #(.MEM_DEPTH(4096)) data_mem_bram (
        .clkb(data_mem_clkb), .enb(data_mem_enb), .rstb(data_mem_rstb), 
        .web(data_mem_web), .addrb(data_mem_addrb), .dinb(data_mem_dinb), 
        .rstb_busy(data_mem_rstb_busy), .doutb(data_mem_doutb)
    );

    bram_ins #(.MEM_DEPTH(1096)) ins_mem_bram (
        .clkb(ins_mem_clkb), .enb(ins_mem_enb), .rstb(ins_mem_rstb), 
        .web(ins_mem_web), .addrb(ins_mem_addrb), .dinb(ins_mem_dinb), 
        .rstb_busy(ins_mem_rstb_busy), .doutb(ins_mem_doutb)
    );

    // ----------------------------------------------
    // Stimulus
    // ----------------------------------------------
    initial begin
        $display("[%t] Starting decoder scoreboard test", $time);

        GPIO0_R0_CH2 = 32'h600;       
        GPIO0_R1_CH1 = 32'h00000384;  
        GPIO0_R1_CH2 = 32'hDEADBEEF;  

        GPIO0_R0_CH1 = 0;
        repeat (5) @(posedge clk);

        // Reset
        GPIO0_R0_CH1 = 32'b10;
        @(posedge clk);
        GPIO0_R0_CH1 = 32'b00;

        repeat (5) @(posedge clk);

        // Start
        GPIO0_R0_CH1 = 32'b01;
        @(posedge clk);
        GPIO0_R0_CH1 = 32'b00;

        repeat (5000) @(posedge clk);

        $display("Simulation timeout reached");
        u_scoreboard.print_summary();
        $finish;
    end

endmodule
