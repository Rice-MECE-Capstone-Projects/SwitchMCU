module exu_store_swc (
    hclk                                        ,
    hrstn                                       ,
    cycle_cnt                                   ,
    dec_store_en                                ,
    dec_sb                                      ,
    dec_sh                                      ,
    dec_sw                                      ,
    dec_imm_type_s                              ,
    dec_rs1                                     ,
    dec_rs2                                     ,
    exu_store_addr                              ,
    exu_store_data                              ,
    exu_store_en                                ,
    exu_store_size                              ,
    reg_raddr_1                                 ,
    reg_ren_1                                   ,
    reg_rdata_1                                 ,
    reg_raddr_2                                 ,
    reg_ren_2                                   ,
    reg_rdata_2                                 ,
    exu_stall                                   
);
// general signals
input                                       hclk                ;
input                                       hrstn               ;
input                   [3:0]               cycle_cnt           ;
// signals from decoder
input                                       dec_store_en        ;
input                                       dec_sb              ;
input                                       dec_sh              ;
input                                       dec_sw              ;
input                   [11:0]              dec_imm_type_s      ;
input                   [4:0]               dec_rs1             ;
input                   [4:0]               dec_rs2             ;
// siganls to mau
output reg              [31:0]              exu_store_addr      ;
output reg              [31:0]              exu_store_data      ;
output reg                                  exu_store_en        ;
output reg              [1:0]               exu_store_size      ;
// regfile signals
inout                   [4:0]               reg_raddr_1         ;
inout                                       reg_ren_1           ;
input                   [31:0]              reg_rdata_1         ;
inout                   [4:0]               reg_raddr_2         ;
inout                                       reg_ren_2           ;
input                   [31:0]              reg_rdata_2         ;
// exu_stall
input                                       exu_stall           ;
// middle signals
reg                     [4:0]               mid_reg_raddr_1     ;
reg                                         mid_reg_ren_1       ;
reg                     [4:0]               mid_reg_raddr_2     ;
reg                                         mid_reg_ren_2       ;
assign reg_raddr_1   = mid_reg_ren_1 ? mid_reg_raddr_1 : 'z     ;
assign reg_ren_1     = mid_reg_ren_1 ? mid_reg_ren_1   : 'z     ;
assign reg_raddr_2   = mid_reg_ren_2 ? mid_reg_raddr_2 : 'z     ;
assign reg_ren_2     = mid_reg_ren_2 ? mid_reg_ren_2   : 'z     ;
// load the base address
always@(posedge hclk or negedge hrstn) begin
    if(!hrstn) begin
        mid_reg_raddr_1 <= 0;
        mid_reg_ren_1   <= 0;

        mid_reg_raddr_2 <= 0;
        mid_reg_ren_2   <= 0;
    end else if(dec_store_en && !exu_stall)begin
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
// generate the signals to the mau
reg      [31:0]      exu_store_addr_buff        ;
reg      [31:0]      exu_store_data_buff        ;
reg                  exu_store_en_buff          ;
reg      [1:0]       exu_store_size_buff        ;
localparam STORE_BTYE = 0, STORE_HALFWORD = 1, STORE_WORD = 2, STORE_IDLE = 3;
always@(posedge hclk or negedge hrstn) begin
    if(!hrstn) begin
        exu_store_addr_buff <= 0;
        exu_store_data_buff <= 0;
        exu_store_en_buff   <= 0;
        exu_store_size_buff <= STORE_IDLE;
    end else if(dec_store_en && !exu_stall)begin
        if(cycle_cnt == 3)begin
            exu_store_addr_buff <= reg_rdata_1 + {{20{dec_imm_type_s[11]}}, dec_imm_type_s};
            exu_store_data_buff <= dec_sb ? {{24{1'b0}}, reg_rdata_2[ 7:0]} :
                                   dec_sh ? {{16{1'b0}}, reg_rdata_2[15:0]} :
                                   dec_sw ? reg_rdata_2                     :
                                   0;
            exu_store_en_buff   <= 1;
            exu_store_size_buff <= dec_sb ? STORE_BTYE      :
                                   dec_sh ? STORE_HALFWORD  :
                                   dec_sw ? STORE_WORD      :
                                   STORE_IDLE;
        end else if(cycle_cnt == 4)begin
            exu_store_addr_buff <= exu_store_addr_buff;
            exu_store_data_buff <= exu_store_data_buff;
            exu_store_en_buff   <= exu_store_en_buff;
            exu_store_size_buff <= exu_store_size_buff;
        end else begin
            exu_store_addr_buff <= 0;
            exu_store_data_buff <= 0;
            exu_store_en_buff   <= 0;
            exu_store_size_buff <= STORE_IDLE;
        end
    end else begin
        exu_store_addr_buff <= 0;
        exu_store_data_buff <= 0;
        exu_store_en_buff   <= 0;
        exu_store_size_buff <= STORE_IDLE;
    end
end
always@(posedge hclk or negedge hrstn) begin
    if(!hrstn) begin
        exu_store_addr      <= 0;
        exu_store_data      <= 0;
        exu_store_en        <= 0;
        exu_store_size_buff <= STORE_IDLE;
    end else if(cycle_cnt == 4)begin
        exu_store_addr      <= exu_store_addr_buff;
        exu_store_data      <= exu_store_data_buff;
        exu_store_en        <= exu_store_en_buff;
        exu_store_size_buff <= exu_store_size_buff;
    end else begin
        exu_store_addr      <= exu_store_addr;
        exu_store_data      <= exu_store_data;
        exu_store_en        <= exu_store_en;
        exu_store_size_buff <= exu_store_size_buff;
    end
end
endmodule