`timescale 1ns/1ps
`include "params.vh"
import golden_decoder_pkg::*;

module tb_decoder_scoreboard;

    logic clk = 0;

    // GPIO inputs
    logic [31:0] GPIO0_R0_CH1;
    logic [31:0] GPIO0_R0_CH2;
    logic [31:0] GPIO0_R1_CH1;
    logic [31:0] GPIO0_R1_CH2;

    wire STOP_sim;

    // BRAM ports (same as smoke test)
    wire        data_mem_clkb, data_mem_enb, data_mem_rstb;
    wire [3:0]  data_mem_web;
    wire [31:0] data_mem_addrb, data_mem_dinb, data_mem_doutb;
    wire        data_mem_rstb_busy;

    wire        ins_mem_clkb, ins_mem_enb, ins_mem_rstb;
    wire [3:0]  ins_mem_web;
    wire [31:0] ins_mem_addrb, ins_mem_dinb, ins_mem_doutb;
    wire        ins_mem_rstb_busy;

    // Instantiate DUT (same top)
    riscv32i dut(
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
        .data_mem_doutb(data_mem_doutb),
        .data_mem_rstb_busy(data_mem_rstb_busy),

        .ins_mem_clkb(ins_mem_clkb),
        .ins_mem_enb(ins_mem_enb),
        .ins_mem_rstb(ins_mem_rstb),
        .ins_mem_web(ins_mem_web),
        .ins_mem_addrb(ins_mem_addrb),
        .ins_mem_dinb(ins_mem_dinb),
        .ins_mem_doutb(ins_mem_doutb),
        .ins_mem_rstb_busy(ins_mem_rstb_busy)
    );

    // BRAM modules
    bram_mem data_mem_bram (...connections identical...);
    bram_ins ins_mem_bram (...connections identical...);

    // Clock generation
    always #5 clk = ~clk;

    // ----------------------------------------------
    // INITIALIZE DESIGN (same as smoke test)
    // ----------------------------------------------
    initial begin
        $display("=== DECODER SCOREBOARD TB START ===");

        GPIO0_R0_CH1 = 0;
        GPIO0_R0_CH2 = 32'h00000600;
        GPIO0_R1_CH1 = 32'h00000384;
        GPIO0_R1_CH2 = 32'hDEADBEEF;

        repeat (10) @(posedge clk);

        // Reset pulse
        GPIO0_R0_CH1 = 32'b10;
        @(posedge clk);
        GPIO0_R0_CH1 = 0;

        // Start pulse
        @(posedge clk);
        GPIO0_R0_CH1 = 32'b01;
        @(posedge clk);
        GPIO0_R0_CH1 = 0;
    end


    // ---------------------------------------------------------
    // DECODER SCOREBOARD — COMPARE pipeReg1 WITH GOLDEN MODEL
    // ---------------------------------------------------------
    always @(posedge clk) begin
        if (dut.u_riscv32i_main.enable_design) begin

            // instruction at decode stage (pipeReg1)
            logic [31:0] instr;
            instr = dut.u_riscv32i_main.pipeReg1[`instruct];

            // ignore bubbles
            if (instr === 32'h00000000)
                return;

            golden_dec_t g = golden_decode(instr);

            // compare fields
            if (dut.u_riscv32i_main.rd_stage1   !== g.rd ||
                dut.u_riscv32i_main.rs1_stage1  !== g.rs1 ||
                dut.u_riscv32i_main.rs2_stage1  !== g.rs2 ||
                dut.u_riscv32i_main.fun3_stage1 !== g.funct3 ||
                dut.u_riscv32i_main.fun7_stage1 !== g.funct7 ||
                dut.u_riscv32i_main.opcode_stage1 !== g.opcode ||
                dut.u_riscv32i_main.imm_stage1  !== g.imm)
            begin
                $display("\n*** DECODE MISMATCH ***");
                $display("INSTR: %h", instr);

                $display(" RTL: rd=%0d rs1=%0d rs2=%0d f3=%0h f7=%0h imm=%h opc=%h",
                    dut.u_riscv32i_main.rd_stage1,
                    dut.u_riscv32i_main.rs1_stage1,
                    dut.u_riscv32i_main.rs2_stage1,
                    dut.u_riscv32i_main.fun3_stage1,
                    dut.u_riscv32i_main.fun7_stage1,
                    dut.u_riscv32i_main.imm_stage1,
                    dut.u_riscv32i_main.opcode_stage1);

                $display(" GOLDEN: rd=%0d rs1=%0d rs2=%0d f3=%0h f7=%0h imm=%h opc=%h",
                    g.rd, g.rs1, g.rs2, g.funct3, g.funct7, g.imm, g.opcode);

                $fatal(1, "DECODE FAILURE");
            end
            else begin
                $display("[OK] INSTR %h decoded correctly.", instr);
            end
        end
    end

endmodule

