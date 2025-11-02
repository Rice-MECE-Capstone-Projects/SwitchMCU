`include "params.vh"

module decode (
    input  wire [31:0]  instruction,
    output wire  [4:0]  rd_o,
    output wire  [4:0]  rs1_o,
    output wire  [4:0]  rs2_o,
    output wire  [2:0]  fun3_o,
    output wire  [6:0]  fun7_o,
    output wire  [31:0] imm_o,
    output wire  [6:0]  opcode_o
);
    wire [6:0] opcode;
    wire [4:0] rd, rs1, rs2;
    wire [2:0] fun3;
    wire [6:0] fun7;

    // Extracted fields
    assign opcode = instruction[6:0];
    assign rd     = instruction[11:7];
    assign fun3   = instruction[14:12];
    assign rs1    = instruction[19:15];
    assign rs2    = instruction[24:20];
    assign fun7   = instruction[31:25];

    // Output assignments
    assign rd_o     = rd;
    assign rs1_o    = rs1;
    assign rs2_o    = rs2;
    assign fun3_o   = fun3;
    assign fun7_o   = fun7;
    assign opcode_o = opcode;

    // Immediate value generation based on instruction type (FIXED)
    reg [31:0] imm_o_reg;
    assign imm_o = imm_o_reg;

    always @(*) begin
        // FIX: Use blocking assignment (=) in this combinational block
        case (opcode)
            // I-Type (ALU Imm, Load, JALR)
            `I_Type_A, `I_Type_L, `I_Type_JALR: 
                imm_o_reg = {{21{instruction[31]}}, instruction[30:20]};
            
            // S-Type (Store)
            `S_Type:
                imm_o_reg = {{21{instruction[31]}}, instruction[31:25], instruction[11:7]};

            // B-Type (Branch)
            `B_Type:
                // imm[12] = instruction[31], imm[10:5] = instruction[30:25], imm[4:1] = instruction[11:8], imm[0] is 0
                imm_o_reg = {{20{instruction[31]}}, instruction[7], instruction[30:25], instruction[11:8], 1'b0};

            // U-Type (LUI, AUIPC)
            `U_Type_lui, `U_Type_auipc:
                // imm[31:12] = instruction[31:12], imm[11:0] = 12'b0
                imm_o_reg = {instruction[31:12], 12'b0};

            // J-Type (JAL)
            `J_Type_lk:
                // imm[20] = instruction[31], imm[10:1] = instruction[30:21], imm[11] = instruction[20], imm[19:12] = instruction[19:12]
                imm_o_reg = {{12{instruction[31]}}, instruction[19:12], instruction[20], instruction[30:21], 1'b0};

            default:
                imm_o_reg = 32'b0;
        endcase
    end
endmodule