module ex_imm_en (
    hclk                                        ,
    hrstn                                       ,
    cycle_cnt                                   ,
    dec_branch_en                               ,
    dec_addi                                    ,
    dec_slti                                    ,
    dec_sltiu                                   ,
    dec_xori                                    ,
    dec_ori                                     ,
    dec_andi                                    ,
    dec_slli                                    ,
    dec_srli                                    ,
    dec_srai                                    ,
    dec_imm_type_i                              ,
    dec_rd                                      ,
    dec_rs1                                     ,
    pc                                          ,
    reg_waddr                                   ,
    reg_wen                                     ,
    reg_wdata                                   ,
    reg_raddr_1                                 ,
    reg_ren_1                                   ,
    reg_rdata_1                                 
);

// general signals
input                       hclk                ;
input                       hrstn               ;
// control signals
input           [3:0]       cycle_cnt           ;
// signals from deccoder
input                       dec_branch_en       ;
input                       dec_addi            ;
input                       dec_slti            ;
input                       dec_sltiu           ;
input                       dec_xori            ;
input                       dec_ori             ;
input                       dec_andi            ;
input                       dec_slli            ;
input                       dec_srli            ;
input                       dec_srai            ;
input           [11:0]      dec_imm_type_i      ;
input           [4:0]       dec_rd              ;
input           [4:0]       dec_rs1             ;
// PC signals
input           [31:0]      pc                  ;
// regfile signals
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

assign reg_waddr   = mid_reg_wen   ? mid_reg_waddr    : 'z  ;
assign reg_wen     = mid_reg_wen   ? mid_reg_wen      : 'z  ;
assign reg_wdata   = mid_reg_wen   ? mid_reg_wdata    : 'z  ;
assign reg_raddr_1 = mid_reg_ren_1 ? mid_reg_raddr_1  : 'z  ;
assign reg_ren_1   = mid_reg_ren_1 ? mid_reg_ren_1    : 'z  ;

// the process
always@(posedge hclk or negedge hrstn) begin
    if(!hrstn) begin
        mid_reg_raddr_1 <= 0;
        mid_reg_ren_1   <= 0;
        
        mid_reg_waddr   <= 0;
        mid_reg_wen     <= 0;
        mid_reg_wdata   <= 0;
    end else if(dec_branch_en)begin
        if(cycle_cnt == 1) begin
            mid_reg_raddr_1 <= dec_rs1;
            mid_reg_ren_1   <= 1;

            mid_reg_waddr   <= 0;
            mid_reg_wen     <= 0;
            mid_reg_wdata   <= 0;
        end else if(cycle_cnt == 2) begin
            mid_reg_raddr_1 <= 0;
            mid_reg_ren_1   <= 0;

            mid_reg_waddr   <= 0;
            mid_reg_wen     <= 0;
            mid_reg_wdata   <= 0;
        end else if(cycle_cnt == 3)begin
            mid_reg_raddr_1 <= 0;
            mid_reg_ren_1   <= 0;

            mid_reg_waddr   <= dec_rd;
            mid_reg_wen     <= 1;
            if(dec_addi)
                mid_reg_wdata <= {{20{dec_imm_type_i[11]}}, dec_imm_type_i} + reg_rdata_1;
            else if(dec_slti)
                mid_reg_wdata <= {31'b0, $signed(reg_rdata_1) < $signed({{20{dec_imm_type_i[11]}}, dec_imm_type_i})};
            else if(dec_sltiu)
                mid_reg_wdata <= {31'b0, reg_rdata_1 < {{20{dec_imm_type_i[11]}}, dec_imm_type_i}};
            else if(dec_xori)
                mid_reg_wdata <= reg_rdata_1 ^ {{20{dec_imm_type_i[11]}}, dec_imm_type_i};
            else if(dec_ori)
                mid_reg_wdata <= reg_rdata_1 | {{20{dec_imm_type_i[11]}}, dec_imm_type_i};
            else if(dec_andi)
                mid_reg_wdata <= reg_rdata_1 & {{20{dec_imm_type_i[11]}}, dec_imm_type_i};
            else if(dec_slli)
                mid_reg_wdata <= reg_rdata_1 << dec_imm_type_i[4:0];
            else if(dec_srli)
                mid_reg_wdata <= reg_rdata_1 >> dec_imm_type_i[4:0];
            else if(dec_srai)
                mid_reg_wdata <= $signed(reg_rdata_1) >>> dec_imm_type_i[4:0];
            else
                mid_reg_wdata <= 0;
            end else begin
                mid_reg_raddr_1 <= 0;
                mid_reg_ren_1   <= 0;
    
                mid_reg_waddr   <= 0;
                mid_reg_wen     <= 0;
                mid_reg_wdata   <= 0;
            end
    end else begin
        mid_reg_raddr_1 <= 0;
        mid_reg_ren_1   <= 0;

        mid_reg_waddr   <= 0;
        mid_reg_wen     <= 0;
        mid_reg_wdata   <= 0;
    end
end
endmodule