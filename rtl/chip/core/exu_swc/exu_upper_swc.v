module exu_upper_en (
    hclk                                        ,
    hrstn                                       ,
    cycle_cnt                                   ,
    dec_upper_en                                ,
    dec_lui                                     ,
    dec_auipc                                   ,
    dec_imm_type_u                              ,
    dec_rd                                      ,
    pc                                          ,
    reg_waddr                                   ,
    reg_wen                                     ,
    reg_wdata                                   ,
    exu_stall                                   
);

// general signals
input                       hclk                ;
input                       hrstn               ;
input           [3:0]       cycle_cnt           ;
// signals from dec 
input                       dec_upper_en        ;
input                       dec_lui             ;
input                       dec_auipc           ;
input           [19:0]      dec_imm_type_u      ;
input           [4:0]       dec_rd              ;
// PC
input           [31:0]      pc                  ;
// regfile write port   
inout           [4:0]       reg_waddr           ;
inout                       reg_wen             ;
inout           [31:0]      reg_wdata           ;
// exu_stall
input                       exu_stall           ;
// middle signals
reg             [4:0]       mid_reg_waddr       ;
reg                         mid_reg_wen         ;
reg             [31:0]      mid_reg_wdata       ;

assign reg_waddr = mid_reg_wen ? mid_reg_waddr : 'z;
assign reg_wen   = mid_reg_wen ? mid_reg_wen   : 'z;
assign reg_wdata = mid_reg_wen ? mid_reg_wdata : 'z;

always@(posedge hclk or negedge hrstn) begin
    if(!hrstn) begin
        mid_reg_waddr <= 0;
        mid_reg_wen   <= 0;
        mid_reg_wdata <= 0;
    end else if(dec_upper_en) begin
        if(cycle_cnt == 1)begin
            mid_reg_waddr <= dec_rd;
            mid_reg_wen   <= 1;
            if(dec_lui)
                mid_reg_wdata <= {dec_imm_type_u, 12'b0};
            else if(dec_auipc)
                mid_reg_wdata <= {dec_imm_type_u, 12'b0} + (pc - 8);
            else
                mid_reg_wdata <= 0;
        end else begin
            mid_reg_waddr <= 0;
            mid_reg_wen   <= 0;
            mid_reg_wdata <= 0;
        end
    end else begin
        mid_reg_waddr <= 0;
        mid_reg_wen   <= 0;
        mid_reg_wdata <= 0;
    end
end

endmodule