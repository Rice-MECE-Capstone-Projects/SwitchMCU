module exu_load_swc (
    hclk                                        ,
    hrstn                                       ,
    cycle_cnt                                   ,
    ifu_dec_stall                               ,
    dec_load_en                                 ,
    dec_lb                                      ,
    dec_lh                                      ,
    dec_lw                                      ,
    dec_lbu                                     ,
    dec_lhu                                     ,
    dec_imm_type_i                              ,
    dec_rd                                      ,
    dec_rs1                                     ,
    exu_load_rd                                 ,
    exu_load_base_addr                          ,
    exu_load_offset                             ,
    exu_load_sext                               ,
    exu_load_size                               ,
    exu_load_en                                 ,
    reg_raddr_1                                 ,
    reg_ren_1                                   ,
    reg_rdata_1                                 
);
/*
Sends signals the the mau to execute load instructions, which are encoded in an I-type format
the Effective Address is obtained by adding the register rs1 to the immediate
the value from the Effective Address in the memory is copied to register rd
*/
// general signals
input                       hclk                ;
input                       hrstn               ;
// control signals
input           [3:0]       cycle_cnt           ;
output                      ifu_dec_stall       ;
// signals from dec 
input                       dec_load_en         ;
input                       dec_lb              ;
input                       dec_lh              ;
input                       dec_lw              ;
input                       dec_lbu             ;
input                       dec_lhu             ;
input           [11:0]      dec_imm_type_i      ;
input           [4:0]       dec_rd              ;
input           [4:0]       dec_rs1             ;
// signals to mau
output reg      [4:0]       exu_load_rd         ;
output reg      [31:0]      exu_load_base_addr  ;
output reg      [31:0]      exu_load_offset     ;
output reg                  exu_load_sext       ;
output reg      [1:0]       exu_load_size       ;
output reg                  exu_load_en         ;
// regfile signals
inout           [4:0]       reg_raddr_1         ;
inout                       reg_ren_1           ;
input           [31:0]      reg_rdata_1         ;
// middle signals
reg             [4:0]       mid_reg_raddr_1     ;
reg                         mid_reg_ren_1       ;

assign reg_raddr_1 = mid_reg_ren_1 ? mid_reg_raddr_1  : 'z  ;
assign reg_ren_1   = mid_reg_ren_1 ? mid_reg_ren_1    : 'z  ;

// load the base address
always@(posedge hclk or negedge hrstn) begin
    if(!hrstn) begin
        mid_reg_raddr_1 <= 0;
        mid_reg_ren_1   <= 0;
    end else if(dec_load_en)begin
        if(cycle_cnt == 1) begin // on cycle 1, we assign the temp read address to the decoded rs1 and enable reading
            mid_reg_raddr_1 <= dec_rs1;
            mid_reg_ren_1   <= 1;
        end else begin
            mid_reg_raddr_1 <= 0;
            mid_reg_ren_1   <= 0;
        end
    end else begin
        mid_reg_raddr_1 <= 0;
        mid_reg_ren_1   <= 0;
    end
end

// generate the signals to the mau
reg      [4:0]       exu_load_rd_buff           ;
reg      [31:0]      exu_load_base_addr_buff    ;
reg      [31:0]      exu_load_offset_buff       ;
reg                  exu_load_sext_buff         ;
reg      [1:0]       exu_load_size_buff         ;
reg                  exu_load_en_buff           ;
localparam LOAD_IDLE = 0, LOAD_BTYE = 1, LOAD_HALFWORD = 2, LOAD_WORD = 3;

// assign the buffer signals on cycle 3 and hold for cycle 4
always@(posedge hclk or negedge hrstn) begin
    if(!hrstn) begin
        exu_load_rd_buff        <= 0;
        exu_load_base_addr_buff <= 0;
        exu_load_offset_buff    <= 0;
        exu_load_sext_buff      <= 0;
        exu_load_size_buff      <= LOAD_IDLE;
        exu_load_en_buff        <= 0;
    end else if(dec_load_en)begin
        if(cycle_cnt == 3)begin // on cycle 3, all the values are set
            exu_load_rd_buff        <=   dec_rd;
            exu_load_base_addr_buff <=   reg_rdata_1;
            exu_load_offset_buff    <=   {{20{dec_imm_type_i[11]}}, dec_imm_type_i};
            exu_load_sext_buff      <=   dec_lb | dec_lh | dec_lw; // we sign extend for any of the non unsigned commands
            exu_load_size_buff      <=   (dec_lb | dec_lbu) ? LOAD_BTYE      :
                                         (dec_lh | dec_lhu) ? LOAD_HALFWORD  :
                                         (dec_lw)           ? LOAD_WORD      :
                                         LOAD_IDLE                           ;
            exu_load_en_buff        <=   1;
        end else if(cycle_cnt == 4)begin // hold the values on cycle 4
            exu_load_rd_buff        <= exu_load_rd_buff       ;
            exu_load_base_addr_buff <= exu_load_base_addr_buff;
            exu_load_offset_buff    <= exu_load_offset_buff   ;
            exu_load_sext_buff      <= exu_load_sext_buff     ;
            exu_load_size_buff      <= exu_load_size_buff     ;
            exu_load_en_buff        <= exu_load_en_buff       ;
        end else begin // clear the values
            exu_load_rd_buff        <= 0;
            exu_load_base_addr_buff <= 0;
            exu_load_offset_buff    <= 0;
            exu_load_sext_buff      <= 0;
            exu_load_size_buff      <= LOAD_IDLE;
            exu_load_en_buff        <= 0;
        end
    end else begin
        exu_load_rd_buff        <= 0;
        exu_load_base_addr_buff <= 0;
        exu_load_offset_buff    <= 0;
        exu_load_sext_buff      <= 0;
        exu_load_size_buff      <= LOAD_IDLE;
        exu_load_en_buff        <= 0;
    end
end

// assign the outputs to the buffer values on cycle 4
always@(posedge hclk or negedge hrstn) begin
    if(!hrstn) begin
        exu_load_rd        <= 0;
        exu_load_base_addr <= 0;
        exu_load_offset    <= 0;
        exu_load_sext      <= 0;
        exu_load_size      <= LOAD_IDLE;
        exu_load_en        <= 0;
    end else if(cycle_cnt == 4)begin
        exu_load_rd        <= exu_load_rd_buff          ;
        exu_load_base_addr <= exu_load_base_addr_buff   ;
        exu_load_offset    <= exu_load_offset_buff      ;
        exu_load_sext      <= exu_load_sext_buff        ;
        exu_load_size      <= exu_load_size_buff        ;
        exu_load_en        <= exu_load_en_buff          ;
    end else begin
        exu_load_rd        <= exu_load_rd               ;
        exu_load_base_addr <= exu_load_base_addr        ;
        exu_load_offset    <= exu_load_offset           ;
        exu_load_sext      <= exu_load_sext             ;
        exu_load_size      <= exu_load_size             ;
        exu_load_en        <= exu_load_en               ;
    end
end

assign ifu_dec_stall = exu_load_en;

endmodule
