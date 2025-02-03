`ifndef PARAMS_VH
`define PARAMS_VH

// Opcode Decoding Type
parameter [6:0] R_Type         =   7'b0110011; //0110011
parameter [6:0] I_Type_A       =   7'b0010011; // 0010011
parameter [6:0] I_Type_L       =   7'b0000011;
parameter [6:0] S_Type         =   7'b0100011;
parameter [6:0] B_Type         =   7'b1100011;
parameter [6:0] J_Type_lk      =   7'b1101111;
parameter [6:0] I_Type_JALR    =   7'b1100111;
parameter [6:0] U_Type_lui     =   7'b0110111;
parameter [6:0] U_Type_auipc   =   7'b0010111;
parameter [6:0] I_Type_ECALL   =   7'b1110011;
parameter [6:0] F_TYPE_FENCE   =   7'b0001111;
parameter [31:0] NOOP          =   32'h00000013;


parameter [3:0] ONE_OP   =   4'b0001;
parameter [3:0] TWO_OP   =   4'b0010;


// Encoding Type
parameter [6:0] INST_typ_R          =   7'b0000001;
parameter [6:0] INST_typ_I          =   7'b0000010;
parameter [6:0] INST_typ_I_ECALL    =   7'b1000010;
parameter [6:0] INST_typ_S          =   7'b0000100;
parameter [6:0] INST_typ_B          =   7'b0001000;
parameter [6:0] INST_typ_U          =   7'b0010000;
parameter [6:0] INST_typ_J          =   7'b0100000;
parameter [6:0] INST_typ_F          =   7'b1000000;
parameter [6:0] UNRECGONIZED        =   7'b0000000;

// Instructions
parameter [63:0] inst_UNKNOWN   = 64'h0000_0000_0000_0000;
parameter [63:0] inst_ADD   = 64'h0000_0000_0000_0001;
parameter [63:0] inst_SUB   = 64'h0000_0000_0000_0002;
parameter [63:0] inst_XOR   = 64'h0000_0000_0000_0004;
parameter [63:0] inst_OR    = 64'h0000_0000_0000_0008;

parameter [63:0] inst_AND   = 64'h0000_0000_0000_0010;
parameter [63:0] inst_SLL   = 64'h0000_0000_0000_0020;
parameter [63:0] inst_SRL   = 64'h0000_0000_0000_0040;
parameter [63:0] inst_SRA   = 64'h0000_0000_0000_0080;

parameter [63:0] inst_SLT   = 64'h0000_0000_0000_0100;
parameter [63:0] inst_SLTU  = 64'h0000_0000_0000_0200;
parameter [63:0] inst_ADDI  = 64'h0000_0000_0000_0400;
parameter [63:0] inst_XORI  = 64'h0000_0000_0000_0800;

parameter [63:0] inst_ORI   = 64'h0000_0000_0000_1000;
parameter [63:0] inst_ANDI  = 64'h0000_0000_0000_2000;
parameter [63:0] inst_SLLI  = 64'h0000_0000_0000_4000;
parameter [63:0] inst_SRLI  = 64'h0000_0000_0000_8000;

parameter [63:0] inst_SRAI  = 64'h0000_0000_0001_0000;
parameter [63:0] inst_SLTI  = 64'h0000_0000_0002_0000;
parameter [63:0] inst_SLTIU = 64'h0000_0000_0004_0000;
parameter [63:0] inst_LB    = 64'h0000_0000_0008_0000;

parameter [63:0] inst_LH    = 64'h0000_0000_0010_0000;
parameter [63:0] inst_LW    = 64'h0000_0000_0020_0000;
parameter [63:0] inst_LBU   = 64'h0000_0000_0040_0000;
parameter [63:0] inst_LHU   = 64'h0000_0000_0080_0000;

parameter [63:0] inst_SB    = 64'h0000_0000_0100_0000;
parameter [63:0] inst_SH    = 64'h0000_0000_0200_0000;
parameter [63:0] inst_SW    = 64'h0000_0000_0400_0000;
parameter [63:0] inst_BEQ   = 64'h0000_0000_0800_0000;

parameter [63:0] inst_BNE   = 64'h0000_0000_1000_0000;
parameter [63:0] inst_BLT   = 64'h0000_0000_2000_0000;
parameter [63:0] inst_BGE   = 64'h0000_0000_4000_0000;
parameter [63:0] inst_BLTU  = 64'h0000_0000_8000_0000;

parameter [63:0] inst_BGEU  = 64'h0000_0001_0000_0000;
parameter [63:0] inst_JAL   = 64'h0000_0002_0000_0000;
parameter [63:0] inst_JALR  = 64'h0000_0004_0000_0000;
parameter [63:0] inst_LUI   = 64'h0000_0008_0000_0000;

parameter [63:0] inst_AUIPC = 64'h0000_0010_0000_0000;
parameter [63:0] inst_ECALL = 64'h0000_0020_0000_0000;
parameter [63:0] inst_EBREAK= 64'h0000_0040_0000_0000;
parameter [63:0] inst_FENCE = 64'h0000_0080_0000_0000;

parameter [63:0] inst_FENCEI= 64'h0000_0100_0000_0000;
parameter [63:0] inst_CSRRW = 64'h0000_0200_0000_0000;
parameter [63:0] inst_CSRRS = 64'h0000_0400_0000_0000;
parameter [63:0] inst_CSRRC = 64'h0000_0800_0000_0000;

parameter [63:0] inst_CSRRWI= 64'h0000_1000_0000_0000;
parameter [63:0] inst_CSRRSI= 64'h0000_2000_0000_0000;
parameter [63:0] inst_CSRRCI= 64'h0000_4000_0000_0000;

`endif

















