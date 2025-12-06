`ifndef PARAMS_VH
`define PARAMS_VH

// Opcode Decoding Type
`define R_Type          7'b0110011
`define I_Type_A        7'b0010011
`define I_Type_L        7'b0000011
`define S_Type          7'b0100011
`define B_Type          7'b1100011
`define J_Type_lk       7'b1101111
`define I_Type_JALR     7'b1100111
`define U_Type_lui      7'b0110111
`define U_Type_auipc    7'b0010111
`define I_Type_ECALL    7'b1110011
`define NOOP            32'h00000013

// Instruction Function Codes
`define ADD_FUN7        7'b0000000
`define SUB_FUN7        7'b0100000
`define SRA_FUN7        7'b0100000

`define ADD_FUN3        3'b000
`define SUB_FUN3        3'b000
`define SLL_FUN3        3'b001
`define SLT_FUN3        3'b010
`define SLTU_FUN3       3'b011
`define XOR_FUN3        3'b100
`define SRL_FUN3        3'b101
`define SRA_FUN3        3'b101
`define OR_FUN3         3'b110
`define AND_FUN3        3'b111

// Load/Store function codes
`define LB_FUN3         3'b000
`define LH_FUN3         3'b001
`define LW_FUN3         3'b010
`define LBU_FUN3        3'b100
`define LHU_FUN3        3'b101

`define SB_FUN3         3'b000
`define SH_FUN3         3'b001
`define SW_FUN3         3'b010

`endif // PARAMS_VH