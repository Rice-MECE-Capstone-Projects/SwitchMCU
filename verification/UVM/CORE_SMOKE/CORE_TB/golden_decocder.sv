package golden_decoder_pkg;

typedef struct packed {
    logic [4:0]  rd;
    logic [4:0]  rs1;
    logic [4:0]  rs2;
    logic [2:0]  funct3;
    logic [6:0]  funct7;
    logic [31:0] imm;
    logic [6:0]  opcode;
} golden_dec_t;


// ------------------------
// Pure Golden Model
// ------------------------
function automatic golden_dec_t golden_decode(input logic [31:0] instr);
    golden_dec_t g;

    g.opcode = instr[6:0];
    g.rd     = instr[11:7];
    g.funct3 = instr[14:12];
    g.rs1    = instr[19:15];
    g.rs2    = instr[24:20];
    g.funct7 = instr[31:25];

    // Immediate extraction by opcode
    case (g.opcode)
        7'b0010011, 7'b0000011, 7'b1100111: begin // I-type
            g.imm = {{20{instr[31]}}, instr[31:20]};
        end
        7'b0100011: begin // S-type
            g.imm = {{20{instr[31]}}, instr[31:25], instr[11:7]};
        end
        7'b1100011: begin // B-type
            g.imm = {{19{instr[31]}}, instr[31], instr[7], instr[30:25], instr[11:8], 1'b0};
        end
        7'b0110111, 7'b0010111: begin // U-type
            g.imm = {instr[31:12], 12'b0};
        end
        7'b1101111: begin // J-type
            g.imm = {{11{instr[31]}}, instr[31], instr[19:12],
                     instr[20], instr[30:21], 1'b0};
        end
        default: g.imm = 32'b0;
    endcase

    return g;
endfunction

endpackage

