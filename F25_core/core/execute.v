module execute (
    input  wire i_clk,
    input  wire i_en,
    input  wire [31:0] operand1_pi,
    input  wire [31:0] operand2_pi,
    input  wire [31:0] imm_i,
    input  wire [31:0] pc_i,
    input  wire [6:0] opcode_i,
    input  wire [2:0] fun3_i,
    input  wire [6:0] fun7_i,
    input  wire [4:0] rd_i,
    output wire [31:0] alu_result,
    output wire  branch_inst_wire, 
    output wire  jump_inst_wire,
    output wire  write_reg_file_wire
);
    reg  [32:0] result;
    reg  branch_inst, jump_inst, write_reg_file;
    wire signed [31:0] operand1_pi_signed = operand1_pi;
    wire signed [31:0] operand2_pi_signed = operand2_pi;
    wire signed [31:0] imm_i_signed = imm_i;

    assign alu_result = result[31:0];
    assign jump_inst_wire = jump_inst;
    assign branch_inst_wire = branch_inst;
    assign write_reg_file_wire = (~(rd_i==0)) & write_reg_file;

    always @(*) begin
        result <= 0;
        branch_inst <= 0;
        jump_inst <= 0;
        write_reg_file <= 0;
        case({opcode_i, fun3_i, fun7_i})
            `R_Type, `I_Type_A: begin
                // All R-Type and I-Type arithmetic operations
                write_reg_file <= 1'b1;
                case (fun3_i)
                    // ADD, SUB, SLL, SLT, SLTU, XOR, SRL, SRA, OR, AND
                    3'b000: result <= (fun7_i == 7'b0000000) ? operand1_pi + operand2_pi : operand1_pi - operand2_pi;
                    3'b001: result <= (operand1_pi << operand2_pi[4:0]);
                    3'b010: result <= (operand1_pi_signed < operand2_pi_signed) ? 1 : 0;
                    3'b011: result <= (operand1_pi < operand2_pi) ? 1 : 0;
                    3'b100: result <= operand1_pi ^ operand2_pi;
                    3'b101: result <= (fun7_i == 7'b0000000) ? (operand1_pi >> operand2_pi[4:0]) : ($signed(operand1_pi) >>> operand2_pi[4:0]);
                    3'b110: result <= operand1_pi | operand2_pi;
                    3'b111: result <= operand1_pi & operand2_pi;
                    default: result <= 0;
                endcase
            end
            `I_Type_A: begin
                write_reg_file <= 1'b1;
                case (fun3_i)
                    // ADDI, SLTI, SLTIU, XORI, ORI, ANDI, SLLI, SRLI, SRAI
                    3'b000: result <= operand1_pi + imm_i;
                    3'b010: result <= (operand1_pi_signed < imm_i_signed) ? 1 : 0;
                    3'b011: result <= (operand1_pi < imm_i) ? 1 : 0;
                    3'b100: result <= operand1_pi ^ imm_i;
                    3'b110: result <= operand1_pi | imm_i;
                    3'b111: result <= operand1_pi & imm_i;
                    3'b001: result <= (operand1_pi << imm_i[4:0]);
                    3'b101: result <= (fun7_i == 7'b0000000) ? (operand1_pi >> imm_i[4:0]) : ($signed(operand1_pi) >>> imm_i[4:0]);
                    default: result <= 0;
                endcase
            end
            `I_Type_L, `I_Type_L, `I_Type_L, `I_Type_L, `I_Type_L: begin
                // Load instructions: handled by dataMem
                write_reg_file <= 1'b1;
                result <= operand1_pi + imm_i;
            end
            `S_Type: begin
                // Store instructions: handled by dataMem
                write_reg_file <= 1'b0;
                result <= operand1_pi + imm_i;
            end
            `B_Type: begin
                branch_inst <= 1'b1;
                write_reg_file <= 1'b0;
                result <= (fun3_i == 3'b000 && operand1_pi == operand2_pi) || 
                          (fun3_i == 3'b001 && operand1_pi != operand2_pi) ||
                          (fun3_i == 3'b100 && operand1_pi_signed < operand2_pi_signed) ||
                          (fun3_i == 3'b101 && operand1_pi_signed >= operand2_pi_signed) ||
                          (fun3_i == 3'b110 && operand1_pi < operand2_pi) ||
                          (fun3_i == 3'b111 && operand1_pi >= operand2_pi);
            end
            `J_Type_lk, `I_Type_JALR: begin
                jump_inst <= 1'b1;
                write_reg_file <= 1'b1;
                result <= pc_i + 4;
            end
            `U_Type_lui, `U_Type_auipc: begin
                write_reg_file <= 1'b1;
                result <= (opcode_i == `U_Type_lui) ? imm_i : pc_i + imm_i;
            end
        endcase
    end
endmodule