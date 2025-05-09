module top_module (
    input wire i_clk,
    input wire i_en,
    input wire [N_param-1:0] instruction,
    input wire i_clk,
    input wire i_en,
    input wire [4:0] rd_i,
    input wire [4:0] rs1_i,
    input wire [4:0] rs2_i,
    input wire [31:0] instruction,
    input wire [31:0] operand1_pi,
    input wire [31:0] operand2_pi,
    input wire [31:0] imm_i,
    input wire [31:0] pc_i,
    input wire [63:0] Single_Instruction_i,

    output wire [4:0] rd_o,
    output wire [4:0] rs1_o,
    output wire [4:0] rs2_o,
    output wire [2:0] fun3_o,
    output wire [6:0] fun7_o,
    output wire [31:0] imm_o,
    output wire [63:0] Single_Instruction_o,
    output wire [6:0] INST_typ_o,
    output wire [6:0] opcode_o,
    output wire [3:0] operand_amt_o,
    output wire [31:0] alu_result_1,
    output wire [31:0] alu_result_2,
    output wire branch_inst_wire,
    output wire jump_inst_wire,
    output wire write_reg_file_wire
);

    wire [4:0] inter_rd;
    wire [4:0] inter_rs1;
    wire [4:0] inter_rs2;
    wire [31:0] inter_imm;
    wire [63:0] inter_Single_Instruction;

    decode decode_inst (
        .i_clk(i_clk),
        .i_en(i_en),
        .instruction(instruction),
        .rd_o(inter_rd),
        .rs1_o(inter_rs1),
        .rs2_o(inter_rs2),
        .fun3_o(fun3_o),
        .fun7_o(fun7_o),
        .imm_o(inter_imm),
        .Single_Instruction_o(inter_Single_Instruction),
        .INST_typ_o(INST_typ_o),
        .opcode_o(opcode_o),
        .operand_amt_o(operand_amt_o)
    );

    execute execute_inst (
        .i_clk(i_clk),
        .i_en(i_en),
        .rd_i(inter_rd),
        .rs1_i(inter_rs1),
        .rs2_i(inter_rs2),
        .instruction(instruction),
        .operand1_pi(operand1_pi),
        .operand2_pi(operand2_pi),
        .imm_i(inter_imm),
        .pc_i(pc_i),
        .Single_Instruction_i(inter_Single_Instruction),
        .alu_result_1(alu_result_1),
        .alu_result_2(alu_result_2),
        .branch_inst_wire(branch_inst_wire),
        .jump_inst_wire(jump_inst_wire),
        .write_reg_file_wire(write_reg_file_wire)
    );

    initial begin
        $dumpfile("./vcds/top_module.vcd");
        $dumpvars(0, top_module);
    end
endmodule
