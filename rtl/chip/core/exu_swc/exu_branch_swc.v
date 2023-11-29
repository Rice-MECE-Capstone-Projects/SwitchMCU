module exu_branch_swc (
    hclk                                        ,
    hrstn                                       ,
    cycle_cnt                                   ,
    dec_branch_en                               ,
    dec_beq                                     ,
    dec_bne                                     ,
    dec_blt                                     ,
    dec_bge                                     ,
    dec_bltu                                    ,
    dec_bgeu                                    ,
    dec_imm_type_b                              ,
    dec_rs1                                     ,
    dec_rs2                                     ,
    pc                                          ,
    pc_write                                    ,
    pc_wdata                                    ,
    flush                                       ,
    reg_rdata_1                                 ,
    reg_raddr_1                                 ,
    reg_ren_1                                   ,
    reg_rdata_2                                 ,
    reg_raddr_2                                 ,
    reg_ren_2                                   
);

// general signals
input                       hclk                ;
input                       hrstn               ;
// control signals
input           [3:0]       cycle_cnt           ;
inout           [1:0]       flush               ;
// signals from dec
input                       dec_branch_en       ;
input                       dec_beq             ;
input                       dec_bne             ;
input                       dec_blt             ;
input                       dec_bge             ;
input                       dec_bltu            ;
input                       dec_bgeu            ;
input           [12:0]      dec_imm_type_b      ;
input           [4:0]       dec_rs1             ;
input           [4:0]       dec_rs2             ; 
// PC signals
input           [31:0]      pc                  ;
inout                       pc_write            ;
inout           [31:0]      pc_wdata            ;
// regfile signals
input           [31:0]      reg_rdata_1         ;
inout           [4:0]       reg_raddr_1         ;
inout                       reg_ren_1           ;
input           [31:0]      reg_rdata_2         ;
inout           [4:0]       reg_raddr_2         ;
inout                       reg_ren_2           ;
// middle signals
reg             [4:0]       mid_reg_raddr_1     ;
reg                         mid_reg_ren_1       ;
reg             [4:0]       mid_reg_raddr_2     ;
reg                         mid_reg_ren_2       ;
reg                         mid_pc_write        ;
reg             [31:0]      mid_pc_wdata        ;
// SEXT values
wire            [31:0]      sext_imm_type_b     ;

assign reg_raddr_1 = mid_reg_ren_1 ? mid_reg_raddr_1  : 'z  ;
assign reg_ren_1   = mid_reg_ren_1 ? mid_reg_ren_1    : 'z  ;
assign reg_raddr_2 = mid_reg_ren_2 ? mid_reg_raddr_2  : 'z  ;
assign reg_ren_2   = mid_reg_ren_2 ? mid_reg_ren_2    : 'z  ;

assign sext_imm_type_b = {{19{dec_imm_type_b[11]}}, dec_imm_type_b};

always@(posedge hclk or negedge hrstn) begin
    if(!hrstn) begin
        mid_reg_raddr_1 <= 0;
        mid_reg_ren_1   <= 0;

        mid_reg_raddr_2 <= 0;
        mid_reg_ren_2   <= 0;
    end else if(dec_branch_en)begin
        if(cycle_cnt == 1) begin
            mid_reg_raddr_1 <= dec_rs1;
            mid_reg_ren_1   <= 1;

            mid_reg_raddr_2 <= dec_rs2;
            mid_reg_ren_2   <= 1;
        end else begin
            mid_reg_raddr_1 <= 0;
            mid_reg_ren_1   <= 0;

            mid_reg_raddr_2 <= 0;
            mid_reg_ren_2   <= 0;   
        end 
    end else begin
        mid_reg_raddr_1 <= 0;
        mid_reg_ren_1   <= 0;

        mid_reg_raddr_2 <= 0;
        mid_reg_ren_2   <= 0;
    end
end

wire [31:0] pc_real = pc - 8;
wire [31:0] pc_next = pc_real  + sext_imm_type_b;
wire        branch  = dec_beq  ? (reg_rdata_1 == reg_rdata_2) :
                      dec_bne  ? (reg_rdata_1 != reg_rdata_2) :
                      dec_blt  ? ($signed(reg_rdata_1) <  $signed(reg_rdata_2)) :
                      dec_bge  ? ($signed(reg_rdata_1) >= $signed(reg_rdata_2)) :
                      dec_bltu ? (reg_rdata_1 <  reg_rdata_2) :
                      dec_bgeu ? (reg_rdata_1 >= reg_rdata_2) :
                      0;

always@(posedge hclk or negedge hrstn) begin
    if(!hrstn) begin
        mid_pc_write <= 0;
        mid_pc_wdata <= 0;
    end else if(dec_branch_en) begin
        if(cycle_cnt == 3) begin
            if(branch) begin
                if(pc_next != pc_real + 4 && pc_next != pc_real + 8) begin
                    mid_pc_write <= 1;
                    mid_pc_wdata <= pc_next;
                end else begin
                    mid_pc_write <= 0;
                    mid_pc_wdata <= 0;
                end
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

assign pc_write = dec_branch_en ? mid_pc_write : 'z;
assign pc_wdata = dec_branch_en ? mid_pc_wdata : 'z;

localparam FLUSH_DISABLE = 0, FLUSH_CYCLE_1 = 1, FLUSH_CYCLE_2 = 2;
reg [1:0] mid_flush;

always@(posedge hclk or negedge hrstn) begin
    if(!hrstn) begin
        mid_flush <= FLUSH_DISABLE;
    end else if(dec_branch_en) begin
        if(cycle_cnt == 3)begin
            if(branch) begin
                if(pc_next == pc_real + 4) begin
                    mid_flush <= FLUSH_DISABLE;
                end else if(pc_next == pc_real + 8) begin
                    mid_flush <= FLUSH_CYCLE_1;
                end else begin
                    mid_flush <= FLUSH_CYCLE_2;
                end
            end else begin
                mid_flush <= FLUSH_DISABLE;
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

assign flush = dec_branch_en ? mid_flush : 'z;

endmodule