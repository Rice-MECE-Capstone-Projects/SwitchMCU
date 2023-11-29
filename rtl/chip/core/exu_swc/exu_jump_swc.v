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
wire [31:0] pc_next = dec_jal ? (pc_real + sext_imm_type_j) : ((reg_rdata_1 + sext_imm_type_i) & ~1);

always@(posedge hclk or negedge hrstn) begin
    if(!hrstn) begin
        mid_reg_raddr_1 <= 0;
        mid_reg_ren_1   <= 0;

        mid_reg_waddr   <= 0;
        mid_reg_wen     <= 0;
        mid_reg_wdata   <= 0;
    end else if(dec_jump_en) begin
        if(cycle_cnt == 1)begin
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
        end else if(cycle_cnt == 2)begin
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

always@(posedge hclk or negedge hrstn) begin
    if(!hrstn) begin
        mid_pc_write <= 0;
        mid_pc_wdata <= 0;
    end else if(dec_jump_en) begin
        if(cycle_cnt == 3) begin
            if(pc_next != pc_real + 4 && pc_next != pc_real + 8) begin
                mid_pc_write <= 1;
                mid_pc_wdata <= pc_next;
            end else begin
                mid_pc_write <= 0;
                mid_pc_wdata <= 0;
            end
        end else if(cycle_cnt == 4) begin
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

always@(posedge hclk or negedge hrstn) begin
    if(!hrstn) begin
        mid_flush <= FLUSH_DISABLE;
    end else if(dec_jump_en) begin
        if(cycle_cnt == 3)begin
            if(pc_next == pc_real + 4) begin
                mid_flush <= FLUSH_DISABLE;
            end else if(pc_next == pc_real + 8) begin
                mid_flush <= FLUSH_CYCLE_1;
            end else begin
                mid_flush <= FLUSH_CYCLE_2;
            end
        end else if(cycle_cnt == 4) begin
            mid_flush <= mid_flush;
        end else begin
            mid_flush <= FLUSH_DISABLE;
        end
    end else begin
        mid_flush <= FLUSH_DISABLE;
    end
end

assign flush = dec_jump_en ? mid_flush : 'z;

endmodule