`include "params.vh"

module decode 
   # (
    parameter   N_param = 32   ) (
    input  wire i_clk,
    input  wire i_en,
    input  wire [N_param-1:0]  instruction,
    // outputs to register file
    output wire  [4:0] rd_o,
    output wire  [4:0] rs1_o,
    output wire  [4:0] rs2_o,
    output wire  [2:0] fun3_o,
    output wire  [6:0] fun7_o,
    output wire  [31:0] imm_o,
    output wire  [63:0] Single_Instruction_o,
    output wire  [6:0] INST_typ_o,
    output wire  [6:0] opcode_o,
    output wire   [3:0] operand_amt_o
    // outputs to ALU
);

    // param_module params ()

wire [6:0] opcode;
reg  [31:0] imm;
reg  [6:0] INST_typ;
reg  [2:0] fun3;
reg  [6:0] fun7;
reg  [4:0] rd,rs1,rs2;
reg [63:0] Single_Instruction; 
reg  [3:0] operand_amt;
//FPGA 
initial begin 
    imm         <=0;
    INST_typ    <=0;
    fun3        <=0;
    fun7        <=0;
    rd          <=0;
    rs1         <=0;
    rs2         <=0;
    operand_amt <=0;
end

assign operand_amt_o        = operand_amt;
assign opcode               = instruction[6:0];
assign opcode_o             = instruction[6:0];
assign Single_Instruction_o = Single_Instruction;


always @(*) begin
    case (opcode)
        R_Type: begin
            INST_typ <= INST_typ_R;
            rd     <= instruction[11:7];
            fun3   <= instruction[14:12];
            rs1    <= instruction[19:15];
            rs2    <= instruction[24:20];
            fun7   <= instruction[31:25];
            imm    <= 32'b0;
        end

        I_Type_A,I_Type_L, I_Type_JALR: begin  
            INST_typ <= INST_typ_I;
            rd     <= instruction[11:7];
            fun3   <= instruction[14:12];
            rs1    <= instruction[19:15];
            rs2    <= 0;
            fun7   <= instruction[31:25];
            imm    <= {{20{instruction[31]}},instruction[31:20]};
        end

        I_Type_ECALL: begin
            INST_typ <= INST_typ_I_ECALL;
            rd     <= instruction[11:7];
            fun3   <= instruction[14:12];
            rs1    <= instruction[19:15];
            rs2    <= instruction[24:20];
            fun7   <= instruction[31:25];
            imm    <= {{20{instruction[31]}},instruction[31:20]};

        end 

        S_Type: begin  
            INST_typ <= INST_typ_S;
            rd     <= 0;
            fun3   <= instruction[14:12];
            rs1    <= instruction[19:15];
            rs2    <= instruction[24:20];
            fun7   <= 0;
            imm    <= {{20{instruction[31]}},instruction[31:25],instruction[11:7]};
        end

        B_Type: begin  
            INST_typ <= INST_typ_B;
            rd     <= 0;
            fun3   <= instruction[14:12];
            rs1    <= instruction[19:15];
            rs2    <= instruction[24:20];
            fun7   <= 0;
            imm    <= { {20{instruction[31]}}, instruction[7], instruction[30:25], instruction[11:8], 1'b0 }; // {{19{i_inst[31]}},i_inst[31],i_inst[7],i_inst[30:25],i_inst[11:8],1'b0} 
        end

        U_Type_auipc, U_Type_lui: begin  
            INST_typ <= INST_typ_U;
            rd       <= instruction[11:7];
            fun3     <= 0;
            rs1      <= 0;
            rs2      <= 0;
            fun7     <= 0;
            imm      <= { instruction[31:12], 12'b0};     
        end

       J_Type_lk: begin  
            INST_typ <= INST_typ_J;
            rd     <= instruction[11:7];
            fun3   <= 0; 
            rs1    <= 0; 
            rs2    <= 0; 
            fun7   <= 0; 
            imm    <= { {12{instruction[31]}}, instruction[19:12], instruction[20], instruction[30:25], instruction[24:21], 1'b0 };
        end

        F_TYPE_FENCE: begin  
            INST_typ <= INST_typ_F;
            rd     <= instruction[11:7];
            fun3   <= instruction[14:12];
            rs1    <= instruction[19:15];
            rs2    <= instruction[24:20];
            fun7   <= instruction[31:25];
            imm    <= 32'b0;
        end

        default: begin
            INST_typ <= UNRECGONIZED;
            rd     <= 0;
            fun3   <= 0;
            rs1    <= 0; 
            rs2    <= 0; 
            fun7   <= 0; 
            imm    <= 0;
        end
    endcase

    case (INST_typ)
        INST_typ_R: begin
            case ({fun7,fun3})
            {7'b0000000,3'b000}: begin  // ADD
            Single_Instruction <= inst_ADD;
            end 
            {7'b0100000,3'b000}: begin  // SUB
            Single_Instruction <= inst_SUB;
            end 
            {7'b0000000,3'b001}: begin  // SLL
            Single_Instruction <= inst_SLL;
            end 
            {7'b0000000,3'b010}: begin  // SLT
            Single_Instruction <= inst_SLT;
            end 
            {7'b0000000,3'b011}: begin  //SLTU 
            Single_Instruction <= inst_SLTU;
            end 
            {7'b0000000,3'b100}: begin  // XOR
            Single_Instruction <= inst_XOR;
            end 
            {7'b0000000,3'b101}: begin  //SRL 
            Single_Instruction <= inst_SRL;
            end 
            {7'b0100000,3'b101}: begin  // SRA
            Single_Instruction <= inst_SRA;
            end 
            {7'b0000000,3'b110}: begin  // OR 
            Single_Instruction <= inst_OR;
            end 
            {7'b0000000,3'b111}: begin  //AND 
            Single_Instruction <= inst_AND;
            end 
            default: begin  //UNKNOWN 
            Single_Instruction <= inst_UNKNOWN;
            end 
            endcase
        end
        INST_typ_U:  begin 
            case(opcode)
            U_Type_auipc:begin 
            Single_Instruction <= inst_AUIPC;   
            end
            U_Type_lui:begin 
            Single_Instruction <= inst_LUI;
            end
            default: begin 
            Single_Instruction <= inst_UNKNOWN;
            end
            endcase
        


        end
        INST_typ_I: begin
            case(opcode)
            I_Type_A: begin 
                case ({fun3})
                {3'b000}: begin  // ADDI
                Single_Instruction <= inst_ADDI;
                end 
                {3'b010}: begin  // SLTI
                Single_Instruction <= inst_SLTI;
                end 
                {3'b011}: begin  //SLTIU 
                Single_Instruction <= inst_SLTIU;
                end 
                {3'b100}: begin  // XORI
                Single_Instruction <= inst_XORI;
                end 
                {3'b110}: begin  // ORI 
                Single_Instruction <= inst_ORI;
                end 
                {3'b111}: begin  //ANDI 
                Single_Instruction <= inst_ANDI;
                end 
                {3'b001}: begin  //SLLI 
                    case(fun7)
                        {7'b0000000}:begin 
                Single_Instruction <= inst_SLLI;
                        end 
                        default: begin 
                Single_Instruction <= inst_UNKNOWN;
                        end
                    endcase
                end 
                {3'b101}: begin  
                    case(fun7)
                        {7'b0000000}:begin  //SRLI
                Single_Instruction <= inst_SRLI;
                        end 
                        {7'b0100000}:begin //SRAI
                Single_Instruction <= inst_SRAI;
                        end 
                        default: begin 
                Single_Instruction <= inst_UNKNOWN;
                        end
                    endcase
                end 
                default: begin  // 
                Single_Instruction <= inst_UNKNOWN;
                end 
            endcase
            end
            I_Type_L: begin 
                case ({fun3})
                {3'b000}: begin  // LB
                Single_Instruction <= inst_LB;
                end 
                {3'b001}: begin  // LH
                Single_Instruction <= inst_LH;
                end 
                {3'b010}: begin  // LW
                Single_Instruction <= inst_LW;
                end 
                {3'b100}: begin  // LBU
                Single_Instruction <= inst_LBU;
                end 
                {3'b101}: begin  // LHU
                Single_Instruction <= inst_LHU;
                end 
                default:begin 
                Single_Instruction <= inst_UNKNOWN;
                end
                endcase
            end
            I_Type_JALR: begin 
                case ({fun3})
                {3'b000}: begin  // JALR
                Single_Instruction <= inst_JALR;
                end 
                default: begin 
                Single_Instruction <= inst_UNKNOWN;
                end
                endcase
            end

            endcase
        end

        INST_typ_I_ECALL: begin 
                case ({fun3})
                {3'b000}: begin  //
                if (instruction[20]==1'b1) begin 
                Single_Instruction <= inst_EBREAK ;

                end else begin
                Single_Instruction <= inst_ECALL;

                 end
                end 
                {3'b001}: begin  //
                Single_Instruction <= inst_CSRRW;
                end 
                {3'b010}: begin  //CSRRS
                Single_Instruction <= inst_CSRRS;
                end 
                {3'b011}: begin  //CSRRC
                Single_Instruction <= inst_CSRRC;
                end 
                {3'b101}: begin  //CSRRWI
                Single_Instruction <= inst_CSRRWI;
                end 
                {3'b110}: begin  //CSRRSI
                Single_Instruction <= inst_CSRRSI;
                end 
                {3'b111}: begin  //CSRRCI
                Single_Instruction <= inst_CSRRCI;
                end 
                default: begin 
                Single_Instruction <= inst_UNKNOWN;
                end
        endcase

        end
        
        INST_typ_S: begin  
            case ({fun3})
                {3'b000}: begin  // SB
                Single_Instruction <= inst_SB;
                end 
                {3'b001}: begin  // SH
                Single_Instruction <= inst_SH;
                end 
                {3'b010}: begin  // SW
                Single_Instruction <= inst_SW;
                end 
                default: begin 
                Single_Instruction <= inst_UNKNOWN;
                end
            endcase
        end

        INST_typ_B: begin  
            case ({fun3})
                {3'b000}: begin  // SEQ
                Single_Instruction <= inst_BEQ;
                end 
                {3'b001}: begin  // BNE
                Single_Instruction <= inst_BNE;
                end 
                {3'b100}: begin  // BLT
                Single_Instruction <= inst_BLT;
                end 
                {3'b101}: begin  // BGE
                Single_Instruction <= inst_BGE;
                end 
                {3'b110}: begin  // BLTU
                Single_Instruction <= inst_BLTU;
                end 
                {3'b111}: begin  // BGEU
                Single_Instruction <= inst_BGEU;
                end 
                default: begin 
                Single_Instruction <= inst_UNKNOWN;
                end
            endcase  
        end

        INST_typ_J: begin  
                Single_Instruction <= inst_JAL;
        end

        INST_typ_F: begin         
                case ({fun3})
                {3'b000}: begin  // FENCE
                Single_Instruction <= inst_FENCE;
                end 
                {3'b001}: begin  // FENCE
                Single_Instruction <= inst_FENCEI;
                end 
                default: begin 
                Single_Instruction <= inst_UNKNOWN;
                end
            endcase
        end


        UNRECGONIZED: begin  
                Single_Instruction <= inst_UNKNOWN;
        end
        default: begin
                Single_Instruction <= inst_UNKNOWN;
        end
    
    endcase

    
end


assign rd_o   = rd;
assign fun3_o = fun3;
assign fun7_o = fun7;
assign rs1_o  = rs1;
assign rs2_o  = rs2;
assign imm_o  = imm;
assign INST_typ_o = INST_typ;
// assign opcode_o = opcode;


endmodule









  

