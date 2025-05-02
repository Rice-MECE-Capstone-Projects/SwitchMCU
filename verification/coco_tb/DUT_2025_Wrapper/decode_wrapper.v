module decode_wrapper # (
    parameter N_param = 32   ) (
    input wire i_clk,
    input wire i_en,
    input wire [N_param-1:0] instruction,
    output wire [4:0] rd_o,
    output wire [4:0] rs1_o,
    output wire [4:0] rs2_o,
    output wire [2:0] fun3_o,
    output wire [6:0] fun7_o,
    output wire [31:0] imm_o,
    output wire [63:0] Single_Instruction_o,
    output wire [6:0] INST_typ_o,
    output wire [6:0] opcode_o,
    output wire [3:0] operand_amt_o
);

    decode dut (
        .i_clk(i_clk),
        .i_en(i_en),
        .instruction(instruction),
        .rd_o(rd_o),
        .rs1_o(rs1_o),
        .rs2_o(rs2_o),
        .fun3_o(fun3_o),
        .fun7_o(fun7_o),
        .imm_o(imm_o),
        .Single_Instruction_o(Single_Instruction_o),
        .INST_typ_o(INST_typ_o),
        .opcode_o(opcode_o),
        .operand_amt_o(operand_amt_o)
    );
    initial begin
        $dumpfile("./vcds/decode.vcd");
        $dumpvars(0, decode_wrapper);
    end
endmodule
