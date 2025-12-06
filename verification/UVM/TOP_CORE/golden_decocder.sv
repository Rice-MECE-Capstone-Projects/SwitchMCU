`timescale 1ns/1ps
`ifndef PARAMS_VH
`define PARAMS_VH


`define PC_reg              31:00   //[31:00]
`define instruct            63:32   //[31:00]
`define alu_res1            95:64   //[31:00]
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




package golden_decoder_pkg;

    // ---------------------------------------------------------
    // Golden Decoder Output Structure
    // ---------------------------------------------------------
    typedef struct packed {
        logic [4:0]  rd;
        logic [4:0]  rs1;
        logic [4:0]  rs2;
        logic [31:0] imm;
        
        // The 64-bit Control Identifier (Source of Truth for Control)
        logic [63:0] Single_Instruction;
    } golden_dec_t;

    // ---------------------------------------------------------
    // Golden Decode Function
    // ---------------------------------------------------------
    function automatic golden_dec_t golden_decode(input logic [31:0] instruction);
        golden_dec_t d;
        
        // Local variables for internal decoding logic
        // (Used to calculate Single_Instruction, but not returned)
        logic [6:0] opcode;
        logic [2:0] funct3;
        logic [6:0] funct7;
        logic [6:0] INST_typ; 

        // 1. Extract Basic Fields (Internal use)
        opcode = instruction[6:0];
        funct3 = instruction[14:12];
        funct7 = instruction[31:25];

        // 2. Extract Register Fields (Output use)
        d.rd     = instruction[11:7];
        d.rs1    = instruction[19:15];
        d.rs2    = instruction[24:20];

        // 3. Extract Immediate (Replicating DUT Logic)
        case (opcode)
            `R_Type: begin
                INST_typ = `INST_typ_R;
                d.imm    = 32'b0;
            end
            `I_Type_A, `I_Type_L, `I_Type_JALR: begin
                INST_typ = `INST_typ_I;
                d.imm    = {{20{instruction[31]}}, instruction[31:20]};
                d.rs2    = 5'b0; // Clean up rs2 for I-type
            end
            `I_Type_ECALL: begin
                INST_typ = `INST_typ_I_ECALL;
                d.imm    = {{20{instruction[31]}}, instruction[31:20]};
            end 
            `S_Type: begin
                INST_typ = `INST_typ_S;
                d.rd     = 5'b0; 
                d.imm    = {{20{instruction[31]}}, instruction[31:25], instruction[11:7]};
            end
            `B_Type: begin
                INST_typ = `INST_typ_B;
                d.rd     = 5'b0; 
                d.imm    = {{20{instruction[31]}}, instruction[7], instruction[30:25], instruction[11:8], 1'b0};
            end
            `U_Type_auipc, `U_Type_lui: begin
                INST_typ = `INST_typ_U;
                d.rs1    = 5'b0;
                d.rs2    = 5'b0;
                d.imm    = {instruction[31:12], 12'b0};
            end
            `J_Type_lk: begin // JAL
                INST_typ = `INST_typ_J;
                d.rs1    = 5'b0;
                d.rs2    = 5'b0;
                d.imm    = {{12{instruction[31]}}, instruction[19:12], instruction[20], instruction[30:25], instruction[24:21], 1'b0};
            end
            `F_TYPE_FENCE: begin
                INST_typ = `INST_typ_F;
                d.imm    = 32'b0;
            end
            default: begin
                INST_typ = `UNRECGONIZED;
                d.imm    = 32'b0;
            end
        endcase

        // 4. Determine 64-bit Single_Instruction ID
        d.Single_Instruction = `inst_UNKNOWN; // Default

        case (INST_typ)
            `INST_typ_R: begin
                case ({funct7, funct3})
                    {7'b0000000, 3'b000}: d.Single_Instruction = `inst_ADD;
                    {7'b0100000, 3'b000}: d.Single_Instruction = `inst_SUB;
                    {7'b0000000, 3'b001}: d.Single_Instruction = `inst_SLL;
                    {7'b0000000, 3'b010}: d.Single_Instruction = `inst_SLT;
                    {7'b0000000, 3'b011}: d.Single_Instruction = `inst_SLTU;
                    {7'b0000000, 3'b100}: d.Single_Instruction = `inst_XOR;
                    {7'b0000000, 3'b101}: d.Single_Instruction = `inst_SRL;
                    {7'b0100000, 3'b101}: d.Single_Instruction = `inst_SRA;
                    {7'b0000000, 3'b110}: d.Single_Instruction = `inst_OR;
                    {7'b0000000, 3'b111}: d.Single_Instruction = `inst_AND;
                    default:              d.Single_Instruction = `inst_UNKNOWN;
                endcase
            end

            `INST_typ_U: begin
                case (opcode)
                    `U_Type_auipc: d.Single_Instruction = `inst_AUIPC;
                    `U_Type_lui:   d.Single_Instruction = `inst_LUI;
                    default:       d.Single_Instruction = `inst_UNKNOWN;
                endcase
            end

            `INST_typ_I: begin
                case (opcode)
                    `I_Type_A: begin
                        case (funct3)
                            3'b000: d.Single_Instruction = `inst_ADDI;
                            3'b010: d.Single_Instruction = `inst_SLTI;
                            3'b011: d.Single_Instruction = `inst_SLTIU;
                            3'b100: d.Single_Instruction = `inst_XORI;
                            3'b110: d.Single_Instruction = `inst_ORI;
                            3'b111: d.Single_Instruction = `inst_ANDI;
                            3'b001: begin // SLLI
                                if (funct7 == 7'b0000000) d.Single_Instruction = `inst_SLLI;
                                else d.Single_Instruction = `inst_UNKNOWN;
                            end
                            3'b101: begin // SRLI / SRAI
                                if      (funct7 == 7'b0000000) d.Single_Instruction = `inst_SRLI;
                                else if (funct7 == 7'b0100000) d.Single_Instruction = `inst_SRAI;
                                else d.Single_Instruction = `inst_UNKNOWN;
                            end
                            default: d.Single_Instruction = `inst_UNKNOWN;
                        endcase
                    end
                    `I_Type_L: begin
                        case (funct3)
                            3'b000: d.Single_Instruction = `inst_LB;
                            3'b001: d.Single_Instruction = `inst_LH;
                            3'b010: d.Single_Instruction = `inst_LW;
                            3'b100: d.Single_Instruction = `inst_LBU;
                            3'b101: d.Single_Instruction = `inst_LHU;
                            default: d.Single_Instruction = `inst_UNKNOWN;
                        endcase
                    end
                    `I_Type_JALR: begin
                        if (funct3 == 3'b000) d.Single_Instruction = `inst_JALR;
                        else d.Single_Instruction = `inst_UNKNOWN;
                    end
                endcase
            end

            `INST_typ_I_ECALL: begin
                case (funct3)
                    3'b000: begin
                        if (instruction[20] == 1'b1) d.Single_Instruction = `inst_EBREAK;
                        else                         d.Single_Instruction = `inst_ECALL;
                    end
                    3'b001: d.Single_Instruction = `inst_CSRRW;
                    3'b010: d.Single_Instruction = `inst_CSRRS;
                    3'b011: d.Single_Instruction = `inst_CSRRC;
                    3'b101: d.Single_Instruction = `inst_CSRRWI;
                    3'b110: d.Single_Instruction = `inst_CSRRSI;
                    3'b111: d.Single_Instruction = `inst_CSRRCI;
                    default: d.Single_Instruction = `inst_UNKNOWN;
                endcase
            end

            `INST_typ_S: begin
                case (funct3)
                    3'b000: d.Single_Instruction = `inst_SB;
                    3'b001: d.Single_Instruction = `inst_SH;
                    3'b010: d.Single_Instruction = `inst_SW;
                    default: d.Single_Instruction = `inst_UNKNOWN;
                endcase
            end

            `INST_typ_B: begin
                case (funct3)
                    3'b000: d.Single_Instruction = `inst_BEQ;
                    3'b001: d.Single_Instruction = `inst_BNE;
                    3'b100: d.Single_Instruction = `inst_BLT;
                    3'b101: d.Single_Instruction = `inst_BGE;
                    3'b110: d.Single_Instruction = `inst_BLTU;
                    3'b111: d.Single_Instruction = `inst_BGEU;
                    default: d.Single_Instruction = `inst_UNKNOWN;
                endcase
            end

            `INST_typ_J: begin
                d.Single_Instruction = `inst_JAL;
            end

            `INST_typ_F: begin
                case (funct3)
                    3'b000: d.Single_Instruction = `inst_FENCE;
                    3'b001: d.Single_Instruction = `inst_FENCEI;
                    default: d.Single_Instruction = `inst_UNKNOWN;
                endcase
            end

            default: d.Single_Instruction = `inst_UNKNOWN;
        endcase

        return d;
    endfunction

endpackage
