module decoder_scoreboard (
    input  logic         clk,
    input  logic         valid,
    input  logic [31:0]  pc,

    // DUT Inputs
    input  logic [4:0]   dut_rd,
    input  logic [4:0]   dut_rs1,
    input  logic [4:0]   dut_rs2,
    input  logic [31:0]  dut_imm,
    input  logic [31:0]  dut_instruction,        // 32-bit Raw (Used for logging only)
    input  logic [63:0]  dut_Single_Instruction, // 64-bit Control Type

    // Golden Inputs
    input  logic [4:0]   gold_rd,
    input  logic [4:0]   gold_rs1,
    input  logic [4:0]   gold_rs2,
    input  logic [31:0]  gold_imm,
    input  logic [63:0]  gold_Single_Instruction // Compare this against DUT
);

    integer total = 0;
    integer num_matches = 0;
    integer num_mismatches = 0;
    int unsigned mismatch_pc_list [10000];
    integer mismatch_idx = 0;

    always @(posedge clk) begin
        if (valid) begin
            total++;

            if (
                (dut_rd     === gold_rd    ) &&
                (dut_rs1    === gold_rs1   ) &&
                (dut_rs2    === gold_rs2   ) &&
                (dut_imm    === gold_imm   ) &&
                (dut_Single_Instruction === gold_Single_Instruction)
            ) begin
                num_matches++;
                $display("[MATCH @ PC=%h] RD=%0d RS1=%0d RS2=%0d IMM=%h Type=%h",
                    pc, dut_rd, dut_rs1, dut_rs2, dut_imm, dut_Single_Instruction);
            end else begin
                num_mismatches++;
                mismatch_pc_list[mismatch_idx++] = pc;

                $display("\n[MISMATCH @ PC=%h] Instruction: %h", pc, dut_instruction);
                $display("  DUT:  rd=%0d rs1=%0d rs2=%0d imm=%h Type=%h",
                    dut_rd, dut_rs1, dut_rs2, dut_imm, dut_Single_Instruction);
                $display("  GOLD: rd=%0d rs1=%0d rs2=%0d imm=%h Type=%h",
                    gold_rd, gold_rs1, gold_rs2, gold_imm, gold_Single_Instruction);
            end
        end
    end

    // Manual summary task
    task print_summary();
        integer i;
        $display("\n-----------------------------------------------");
        $display("          DECODER SCOREBOARD                   ");
        $display("-----------------------------------------------");
        $display("Total Valid Instructions : %0d", total);
        $display("Matches                  : %0d", num_matches);
        $display("Mismatches               : %0d", num_mismatches);

        if (num_mismatches > 0) begin
            $display("Mismatched PCs:");
            for (i = 0; i < mismatch_idx; i++)
                $display("  %h", mismatch_pc_list[i]);
        end
        $display("-----------------------------------------------\n");
    endtask

endmodule
