module exu_upper_swc (
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
        mid_reg_waddr <= 0;//resetting all intermediate registers to 0
        mid_reg_wen   <= 0;
        mid_reg_wdata <= 0;
    end else if(dec_upper_en) begin // to check if upper immediate instruction is enabled
        if(cycle_cnt == 1)begin //to check if decoder completed its work
            mid_reg_waddr <= dec_rd;
            mid_reg_wen   <= 1;
            if(dec_lui)
                mid_reg_wdata <= {dec_imm_type_u, 12'b0}; //immediate value for U-type instruction used by LUI and AUIPC
            else if(dec_auipc)
                mid_reg_wdata <= {dec_imm_type_u, 12'b0} + (pc - 8);//for AUIPC add immediate value to first20 bits followed by zeros--(dont know why PC-8)
            else
                mid_reg_wdata <= 0;//default: write 0
        end else begin//reset registers if not in correct cycle
            mid_reg_waddr <= 0;
            mid_reg_wen   <= 0;
            mid_reg_wdata <= 0;
        end
    end else begin//reset if upper immediate instruction is not enabled
        mid_reg_waddr <= 0;
        mid_reg_wen   <= 0;
        mid_reg_wdata <= 0;
    end
end
/* always @* begin
    dbg_mid_reg_waddr = mid_reg_waddr;
    dbg_mid_reg_wen   = mid_reg_wen;
    dbg_mid_reg_wdata = mid_reg_wdata;
end */

endmodule