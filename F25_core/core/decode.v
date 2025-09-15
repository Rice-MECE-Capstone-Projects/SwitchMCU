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

    assign opcode = instruction[6:0];
    assign rd     = instruction[11:7];
    assign fun3   = instruction[14:12];
    assign rs1    = instruction[19:15];
    assign rs2    = instruction[24:20];
    assign fun7   = instruction[31:25];

    assign rd_o     = rd;
    assign rs1_o    = rs1;
    assign rs2_o    = rs2;
    assign fun3_o   = fun3;
    assign fun7_o   = fun7;
    assign opcode_o = opcode;

    // Immediate value generation based on instruction type
    // I-type
    assign imm_o = {{21{instruction[31]}}, instruction[30:20]};
    // S-type
    // assign imm_o = {{21{instruction[31]}}, instruction[30:25], instruction[11:7]};
    // Other types can be added here if needed

endmodule

