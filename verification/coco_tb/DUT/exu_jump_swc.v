module exu_jump_swc  (
    hclk                                        ,
    hrstn                                       ,
    cycle_cnt                                   ,
    dec_jump_en                                 ,
    dec_jal                                     ,
    dec_jalr                                    ,
    dec_imm_type_i                              ,
    dec_imm_type_j                              ,
    dec_rd                                      ,
    dec_rs1                                     ,
    pc                                          ,
    pc_write                                    ,
    pc_wdata                                    ,
    flush                                       ,
    reg_waddr                                   ,
    reg_wen                                     ,
    reg_wdata                                   ,
    reg_raddr_1                                 ,
    reg_ren_1                                   ,
    reg_rdata_1                                 
);
/*
Performs Direct or Indirect jump.

Jump and Link (JAL): 
Add a sign-extended J-immediate to the address of the jump instruction to form the jump target address. Store the address of the instruction following the jump into register rd. 

Jump and Link register (JALR) / indirect jump instruction: 
Add a sign extended 12-bit I-immediate to the register rs1, and set the least-significant bit of the result to 0. Store the address of the instruction following the jump into register rd. 
*/
input                       hclk                ;
input                       hrstn               ;
input           [3:0]       cycle_cnt           ;
// signals from dec 
input                       dec_jump_en         ;
input                       dec_jal             ;
input                       dec_jalr            ;
input           [11:0]      dec_imm_type_i      ;
input           [20:0]      dec_imm_type_j      ;
input           [4:0]       dec_rd              ;
input           [4:0]       dec_rs1             ;
// PC
input           [31:0]      pc                  ;
inout                       pc_write            ;
inout           [31:0]      pc_wdata            ;
// pipeline flushing
inout           [1:0]       flush               ;
// regfile write port   
inout           [4:0]       reg_waddr           ;
inout                       reg_wen             ;
inout           [31:0]      reg_wdata           ;
inout           [4:0]       reg_raddr_1         ;
inout                       reg_ren_1           ;
input           [31:0]      reg_rdata_1         ;
// middle signals
reg             [4:0]       mid_reg_waddr       ;
reg                         mid_reg_wen         ;
reg             [31:0]      mid_reg_wdata       ;
reg             [4:0]       mid_reg_raddr_1     ;
reg                         mid_reg_ren_1       ;
reg                         mid_pc_write        ;
reg             [31:0]      mid_pc_wdata        ;
// SEXT values
wire            [31:0]      sext_imm_type_j     ;
wire            [31:0]      sext_imm_type_i     ;

assign reg_waddr   = mid_reg_wen   ? mid_reg_waddr    : 'z  ;
assign reg_wen     = mid_reg_wen   ? mid_reg_wen      : 'z  ;
assign reg_wdata   = mid_reg_wen   ? mid_reg_wdata    : 'z  ;
assign reg_raddr_1 = mid_reg_ren_1 ? mid_reg_raddr_1  : 'z  ;
assign reg_ren_1   = mid_reg_ren_1 ? mid_reg_ren_1    : 'z  ;

assign sext_imm_type_j = {{11{dec_imm_type_j[19]}}, dec_imm_type_j};
assign sext_imm_type_i = {{20{dec_imm_type_i[11]}}, dec_imm_type_i};

wire [31:0] pc_real = pc - 8;
wire [31:0] pc_next = dec_jal ? (pc_real + sext_imm_type_j) : ((reg_rdata_1 + sext_imm_type_i) & ~1); // assigns the pc to jump to based on if dec_jal was called, to do the direct jump, otherwise do the indirect jump

// Read and write the register values during cycles 1 and 2
always@(posedge hclk or negedge hrstn) begin
    if(!hrstn) begin
        mid_reg_raddr_1 <= 0;
        mid_reg_ren_1   <= 0;

        mid_reg_waddr   <= 0;
        mid_reg_wen     <= 0;
        mid_reg_wdata   <= 0;
    end else if(dec_jump_en) begin
        if(cycle_cnt == 1)begin// on cycle 1, if performing an indirect jump, assign the temp register read address to the decoded register and enable reading
            if(dec_jalr) begin
                mid_reg_raddr_1 <= dec_rs1;
                mid_reg_ren_1   <= 1;
            end else begin
                mid_reg_raddr_1 <= 0;
                mid_reg_ren_1   <= 0;
            end

            mid_reg_waddr   <= 0;
            mid_reg_wen     <= 0;
            mid_reg_wdata   <= 0;
        end else if(cycle_cnt == 2)begin // on cycle 2, assign the temp register write address to the decoded rd value and enable writing, with the write data being the address following the jump instruction.
            mid_reg_raddr_1 <= 0;
            mid_reg_ren_1   <= 0;

            mid_reg_waddr <= dec_rd;
            mid_reg_wen   <= 1;
            mid_reg_wdata <= pc_real + 4;
        end else begin
            mid_reg_raddr_1 <= 0;
            mid_reg_ren_1   <= 0;

            mid_reg_waddr <= 0;
            mid_reg_wen   <= 0;
            mid_reg_wdata <= 0;
        end
    end else begin
        mid_reg_raddr_1 <= 0;
        mid_reg_ren_1   <= 0;

        mid_reg_waddr <= 0;
        mid_reg_wen   <= 0;
        mid_reg_wdata <= 0;
    end
end

// Change the PC value during cycles 3 and 4 based on the pc_next value from earlier.
always@(posedge hclk or negedge hrstn) begin
    if(!hrstn) begin
        mid_pc_write <= 0;
        mid_pc_wdata <= 0;
    end else if(dec_jump_en) begin
        if(cycle_cnt == 3) begin // on cycle 3, if we are jumping to a value other than 4 or 8 ahead, we assign the temp pc write value to 1 and the temp pc write data value to the pc_next value previously assigned.
            if(pc_next != pc_real + 4 && pc_next != pc_real + 8) begin
                mid_pc_write <= 1;
                mid_pc_wdata <= pc_next;
            end else begin
                mid_pc_write <= 0;
                mid_pc_wdata <= 0;
            end
        end else if(cycle_cnt == 4) begin // on cycle 4, hold the temp pc values.
            mid_pc_write <= mid_pc_write;
            mid_pc_wdata <= mid_pc_wdata;
        end else begin
            mid_pc_write <= 0;
            mid_pc_wdata <= 0;
        end
    end else begin
        mid_pc_write <= 0;
        mid_pc_wdata <= 0;
    end
end

assign pc_write = dec_jump_en ? mid_pc_write : 'z;
assign pc_wdata = dec_jump_en ? mid_pc_wdata : 'z;

localparam FLUSH_DISABLE = 0, FLUSH_CYCLE_1 = 1, FLUSH_CYCLE_2 = 2;
reg [1:0] mid_flush;


// Set the flush state during cycles 3 and 4 based on how many values we are jumping by.
always@(posedge hclk or negedge hrstn) begin
    if(!hrstn) begin
        mid_flush <= FLUSH_DISABLE;
    end else if(dec_jump_en) begin
        if(cycle_cnt == 3)begin // on cycle 3, set the temporary flush state
            if(pc_next == pc_real + 4) begin // if we are jumping by 4, do not flush
                mid_flush <= FLUSH_DISABLE;
            end else if(pc_next == pc_real + 8) begin // if we are jumping by 8, go to flush cycle 1
                mid_flush <= FLUSH_CYCLE_1;
            end else begin // otherwise, go to flush cycle 2
                mid_flush <= FLUSH_CYCLE_2;
            end
        end else if(cycle_cnt == 4) begin // on cycle 4, hold the temporary flush state
            mid_flush <= mid_flush;
        end else begin // on cycles 1 and 2, disable flushing.
            mid_flush <= FLUSH_DISABLE;
        end
    end else begin
        mid_flush <= FLUSH_DISABLE;
    end
end

assign flush = dec_jump_en ? mid_flush : 'z;

endmodule
