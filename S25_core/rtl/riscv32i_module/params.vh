`ifndef PARAMS_VH
`define PARAMS_VH


`define PC_reg              31:00   //[31:00]
`define instruct            63:32   //[31:00]
`define alu_res1            95:64   //[31:00]
`define csr_write_en        96

`define load_reg           101
`define jump_en            102     //[ 4:0]
`define branch_en          103     //[ 4:0]
`define reg_write_en       104     //[ 4:0]
`define LD_ready           105     //[ 4:0]
`define SD_ready           106     //[ 4:0]
`define rd                 111:107 //[ 4:0]
`define operand_amt        115:112 //[ 3:0]
`define opRs1_reg          120:116 //[4:0]
`define opRs2_reg          127:121 //[4:0]
`define op1_reg            159:128 //[31:00]
`define op2_reg            191:160 //[31:00]
`define immediate          223:192 //[31:0]
`define alu_res2           255:224 //[31:0]
`define rd_data            287:256 //[31:0]
`define Single_Instruction 351:288 //[63:00]   
`define data_mem_loaded    383:352  
`define csr_reg            395:384 //[11:0]
`define csr_reg_val        427:396 //[31:0]

// Opcode Decoding Type
`define R_Type            7'b0110011 //0110011
`define I_Type_A          7'b0010011 // 0010011
`define I_Type_L          7'b0000011
`define S_Type            7'b0100011
`define B_Type            7'b1100011
`define J_Type_lk         7'b1101111
`define I_Type_JALR       7'b1100111
`define U_Type_lui        7'b0110111
`define U_Type_auipc      7'b0010111
`define I_Type_ECALL      7'b1110011
`define F_TYPE_FENCE      7'b0001111
`define NOOP             32'h00000013


`define ONE_OP      4'b0001
`define TWO_OP      4'b0010


// Encoding Type
`define INST_typ_R             7'b0000001
`define INST_typ_I             7'b0000010
`define INST_typ_I_ECALL       7'b1000010
`define INST_typ_S             7'b0000100
`define INST_typ_B             7'b0001000
`define INST_typ_U             7'b0010000
`define INST_typ_J             7'b0100000
`define INST_typ_F             7'b1000000
`define UNRECGONIZED           7'b0000000

// Instructions
`define inst_UNKNOWN    64'h0000_0000_0000_0000
`define inst_ADD    64'h0000_0000_0000_0001
`define inst_SUB    64'h0000_0000_0000_0002
`define inst_XOR    64'h0000_0000_0000_0004
`define inst_OR     64'h0000_0000_0000_0008

`define inst_AND    64'h0000_0000_0000_0010
`define inst_SLL    64'h0000_0000_0000_0020
`define inst_SRL    64'h0000_0000_0000_0040
`define inst_SRA    64'h0000_0000_0000_0080

`define inst_SLT    64'h0000_0000_0000_0100
`define inst_SLTU   64'h0000_0000_0000_0200
`define inst_ADDI   64'h0000_0000_0000_0400
`define inst_XORI   64'h0000_0000_0000_0800

`define inst_ORI    64'h0000_0000_0000_1000
`define inst_ANDI   64'h0000_0000_0000_2000
`define inst_SLLI   64'h0000_0000_0000_4000
`define inst_SRLI   64'h0000_0000_0000_8000

`define inst_SRAI   64'h0000_0000_0001_0000
`define inst_SLTI   64'h0000_0000_0002_0000
`define inst_SLTIU  64'h0000_0000_0004_0000
`define inst_LB     64'h0000_0000_0008_0000

`define inst_LH     64'h0000_0000_0010_0000
`define inst_LW     64'h0000_0000_0020_0000
`define inst_LBU    64'h0000_0000_0040_0000
`define inst_LHU    64'h0000_0000_0080_0000

`define inst_SB     64'h0000_0000_0100_0000
`define inst_SH     64'h0000_0000_0200_0000
`define inst_SW     64'h0000_0000_0400_0000
`define inst_BEQ    64'h0000_0000_0800_0000

`define inst_BNE    64'h0000_0000_1000_0000
`define inst_BLT    64'h0000_0000_2000_0000
`define inst_BGE    64'h0000_0000_4000_0000
`define inst_BLTU   64'h0000_0000_8000_0000

`define inst_BGEU   64'h0000_0001_0000_0000
`define inst_JAL    64'h0000_0002_0000_0000
`define inst_JALR   64'h0000_0004_0000_0000
`define inst_LUI    64'h0000_0008_0000_0000

`define inst_AUIPC  64'h0000_0010_0000_0000
`define inst_ECALL  64'h0000_0020_0000_0000
`define inst_EBREAK 64'h0000_0040_0000_0000
`define inst_FENCE  64'h0000_0080_0000_0000

`define inst_FENCEI 64'h0000_0100_0000_0000
`define inst_CSRRW  64'h0000_0200_0000_0000
`define inst_CSRRS  64'h0000_0400_0000_0000
`define inst_CSRRC  64'h0000_0800_0000_0000
`define inst_CSRRWI 64'h0000_1000_0000_0000
`define inst_CSRRSI 64'h0000_2000_0000_0000
`define inst_CSRRCI 64'h0000_4000_0000_0000

`endif

















