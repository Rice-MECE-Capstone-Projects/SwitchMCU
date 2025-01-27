module exu_imm_swc (
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
/*
This module performs Integer-Register Immediate instructions, placing the result in the dec_rd register.
*/
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
    	// on a reset, set all intermediate values to 0
        mid_reg_raddr_1 <= 0;
        mid_reg_ren_1   <= 0;
        
        mid_reg_waddr   <= 0;
        mid_reg_wen     <= 0;
        mid_reg_wdata   <= 0;
    end else if(dec_branch_en)begin
        if(cycle_cnt == 1) begin // on cycle 1 assign the temp read address to the decoded address, and enable writing to the read address
            mid_reg_raddr_1 <= dec_rs1;
            mid_reg_ren_1   <= 1;

            mid_reg_waddr   <= 0;
            mid_reg_wen     <= 0;
            mid_reg_wdata   <= 0;
        end else if(cycle_cnt == 2) begin // on cycle 2 clear the intermediate values.
            mid_reg_raddr_1 <= 0;
            mid_reg_ren_1   <= 0;

            mid_reg_waddr   <= 0;
            mid_reg_wen     <= 0;
            mid_reg_wdata   <= 0;
        end else if(cycle_cnt == 3)begin // on cycle 3 assign the write address to the destination register and enable writing to the register.
            mid_reg_raddr_1 <= 0;
            mid_reg_ren_1   <= 0;

            mid_reg_waddr   <= dec_rd;
            mid_reg_wen     <= 1;
            if(dec_addi) // for ADDI add the immediate to the data
                mid_reg_wdata <= {{20{dec_imm_type_i[11]}}, dec_imm_type_i} + reg_rdata_1;
            else if(dec_slti) // for SLTI check if the data is less than the immediate for signed values
                mid_reg_wdata <= {31'b0, $signed(reg_rdata_1) < $signed({{20{dec_imm_type_i[11]}}, dec_imm_type_i})};
            else if(dec_sltiu) // for SLTIU check if the data is less than the immediate for unsigned values
                mid_reg_wdata <= {31'b0, reg_rdata_1 < {{20{dec_imm_type_i[11]}}, dec_imm_type_i}};
            else if(dec_xori) // for XORI take the bitwise XOR of the data and immediate
                mid_reg_wdata <= reg_rdata_1 ^ {{20{dec_imm_type_i[11]}}, dec_imm_type_i};
            else if(dec_ori) // for ORI take the bitwise OR of the data and immediate
                mid_reg_wdata <= reg_rdata_1 | {{20{dec_imm_type_i[11]}}, dec_imm_type_i};
            else if(dec_andi) // for ANDI take the bitwise AND of the data and immediate
                mid_reg_wdata <= reg_rdata_1 & {{20{dec_imm_type_i[11]}}, dec_imm_type_i};
            else if(dec_slli) // for SLLI perform a logical left shift of the data by the immediate value
                mid_reg_wdata <= reg_rdata_1 << dec_imm_type_i[4:0];
            else if(dec_srli) // for SRLI perform a logical right shift of the data by the immediate value
                mid_reg_wdata <= reg_rdata_1 >> dec_imm_type_i[4:0];
            else if(dec_srai) // for SRAI perform an arithmetic right shift of the data by the immediate value
                mid_reg_wdata <= $signed(reg_rdata_1) >>> dec_imm_type_i[4:0];
            else
                mid_reg_wdata <= 0;
            end else begin // on cycle 4 set all the temp registers to 0
                mid_reg_raddr_1 <= 0;
                mid_reg_ren_1   <= 0;
    
                mid_reg_waddr   <= 0;
                mid_reg_wen     <= 0;
                mid_reg_wdata   <= 0;
            end
    end else begin // if dec_branch_en is not enabled, set all temp registers to 0
        mid_reg_raddr_1 <= 0;
        mid_reg_ren_1   <= 0;

        mid_reg_waddr   <= 0;
        mid_reg_wen     <= 0;
        mid_reg_wdata   <= 0;
    end
end
endmodule
