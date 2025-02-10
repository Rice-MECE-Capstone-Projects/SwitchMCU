module top_module (
    input input wire i_clk,
    input input wire i_en,
    input input wire [4:0] rd_i,
    input input wire [4:0] rs1_i,
    input input wire [4:0] rs2_i,
    input input wire [31:0] instruction,
    input input wire [31:0] operand1_pi,
    input input wire [31:0] operand2_pi,
    input input wire [31:0] imm_i,
    input input wire [31:0] pc_i,
    input input wire [63:0] Single_Instruction_i,
    input input wire i_clk,
    input input wire i_en,
    input input wire [N_param-1:0] instruction,

    output wire [31:0] alu_result_1,
    output wire [31:0] alu_result_2,
    output wire branch_inst_wire,
    output wire jump_inst_wire,
    output wire write_reg_file_wire,
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


    execute execute_inst (
        .i_clk(i_clk),
        .i_en(i_en),
        .rd_i(rd_i),
        .rs1_i(rs1_i),
        .rs2_i(rs2_i),
        .instruction(instruction),
        .operand1_pi(operand1_pi),
        .operand2_pi(operand2_pi),
        .imm_i(imm_i),
        .pc_i(pc_i),
        .Single_Instruction_i(Single_Instruction_i),
        .alu_result_1(alu_result_1),
        .alu_result_2(alu_result_2),
        .branch_inst_wire(branch_inst_wire),
        .jump_inst_wire(jump_inst_wire),
        .write_reg_file_wire(write_reg_file_wire)
    );

    decode decode_inst (
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
        $dumpfile("./vcds/top_module.vcd");
        $dumpvars(0, top_module);
    end
endmodule
