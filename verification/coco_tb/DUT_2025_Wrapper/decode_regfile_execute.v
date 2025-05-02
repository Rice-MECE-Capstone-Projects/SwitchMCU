module decode_regfile_execute (
    input i_clk,
    input i_en,
    input [31:0] instruction,
    input clk,
    input reset,
    input [4:0] reg1_pi,
    input [4:0] reg2_pi,
    input [4:0] destReg_pi,
    input we_pi,
    input [31:0] writeData_pi,
    input i_clk,
    input i_en,
    input [4:0] rd_i,
    input [4:0] rs1_i,
    input [4:0] rs2_i,
    input [31:0] instruction,
    input [31:0] operand1_pi,
    input [31:0] operand2_pi,
    input [31:0] imm_i,
    input [31:0] pc_i,
    input [63:0] Single_Instruction_i,

    output [4:0] rd_o,
    output [4:0] rs1_o,
    output [4:0] rs2_o,
    output [2:0] fun3_o,
    output [6:0] fun7_o,
    output [31:0] imm_o,
    output [63:0] Single_Instruction_o,
    output [6:0] INST_typ_o,
    output [6:0] opcode_o,
    output [3:0] operand_amt_o,
    output [31:0] operand1_po,
    output [31:0] operand2_po,
    output [31:0] alu_result_1,
    output [31:0] alu_result_2,
    output branch_inst_wire,
    output jump_inst_wire,
    output write_reg_file_wire
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

    regfile regfile_inst (
        .clk(clk),
        .reset(reset),
        .reg1_pi(reg1_pi),
        .reg2_pi(reg2_pi),
        .destReg_pi(destReg_pi),
        .we_pi(we_pi),
        .writeData_pi(writeData_pi),
        .operand1_po(operand1_po),
        .operand2_po(operand2_po)
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

    initial begin
        $dumpfile("./vcds/decode_regfile_execute.vcd");
        $dumpvars(0, decode_regfile_execute);
    end
endmodule
