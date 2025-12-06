module exu_store_swc (
    hclk                                        , //clock signal
    hrstn                                       , // Active low reset signal
    cycle_cnt                                   , // Cycle counter, used for timing control
    dec_store_en                                , // Store enable signal from the decoder
    dec_sb                                      , // Store byte enable signal
    dec_sh                                      , // Store halfword enable signal
    dec_sw                                      , // Store word enable signal
    dec_imm_type_s                              , // Immediate value for store instruction
    dec_rs1                                     , // Source register 1 from the decoder
    dec_rs2                                     , // Source register 2 from the decoder
    exu_store_addr                              , // Store address to memory access unit (MAU)
    exu_store_data                              , // Data to be stored
    exu_store_en                                , // Enable signal to the memory access unit
    exu_store_size                              , // Size of data to store (byte, halfword, word)
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
// siganls to MAU
output reg              [31:0]              exu_store_addr      ;
output reg              [31:0]              exu_store_data      ;
output reg                                  exu_store_en        ;
output reg              [1:0]               exu_store_size      ;
// register file signals
inout                   [4:0]               reg_raddr_1         ; //Register read address 1
inout                                       reg_ren_1           ; // Register read enable 1
input                   [31:0]              reg_rdata_1         ; // Register read data 1
inout                   [4:0]               reg_raddr_2         ; // Register read address 2
inout                                       reg_ren_2           ; // Register read enable 2
input                   [31:0]              reg_rdata_2         ; // Register read data 2
// exu_stall
input                                       exu_stall           ;
// Middle signals used internally to manage register file reads
reg                     [4:0]               mid_reg_raddr_1     ; 
reg                                         mid_reg_ren_1       ;
reg                     [4:0]               mid_reg_raddr_2     ;
reg                                         mid_reg_ren_2       ;
assign reg_raddr_1   = mid_reg_ren_1 ? mid_reg_raddr_1 : 'z     ;
assign reg_ren_1     = mid_reg_ren_1 ? mid_reg_ren_1   : 'z     ;
assign reg_raddr_2   = mid_reg_ren_2 ? mid_reg_raddr_2 : 'z     ;
assign reg_ren_2     = mid_reg_ren_2 ? mid_reg_ren_2   : 'z     ;
// assign reg_raddr_1   = mid_reg_ren_1 ? mid_reg_raddr_1 : 5'b0; // Using 0 instead of 'z
// assign reg_ren_1     = mid_reg_ren_1 ? mid_reg_ren_1   : 1'b0;
// assign reg_raddr_2   = mid_reg_ren_2 ? mid_reg_raddr_2 : 5'b0; 
// assign reg_ren_2     = mid_reg_ren_2 ? mid_reg_ren_2   : 1'b0; 
// load the base address
always@(posedge hclk or negedge hrstn) begin
    if(!hrstn) begin //If hrstn is not true
        mid_reg_raddr_1 <= 0;
        mid_reg_ren_1   <= 0;

        mid_reg_raddr_2 <= 0;
        mid_reg_ren_2   <= 0;
    end 
    else if(dec_store_en && !exu_stall)begin
        if(cycle_cnt == 1) begin
            mid_reg_raddr_1 <= dec_rs1; //  dec_rs1 is Source register 1 from the decoder
            mid_reg_ren_1   <= 1;
            mid_reg_raddr_2 <= dec_rs2;
            mid_reg_ren_2   <= 1;
        end else begin
            mid_reg_raddr_1 <= 0;
            mid_reg_ren_1   <= 0;
            mid_reg_raddr_2 <= 0;
            mid_reg_ren_2   <= 0;
        end
    end 
    else begin
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
                                   dec_sh ? {{16{1'b0}}, reg_rdata_2[15:0]} : // stores the least significant 16 bits
                                   dec_sw ? reg_rdata_2                     : 
                                   0;
            exu_store_en_buff   <= 1;
            exu_store_size_buff <= dec_sb ? STORE_BTYE      :
                                   dec_sh ? STORE_HALFWORD  :
                                   dec_sw ? STORE_WORD      :
                                   STORE_IDLE;
        end
    end
end

// Assign store size, address, data, and enable on cycle 4
always@(posedge hclk or negedge hrstn) begin
    if(!hrstn) begin
        exu_store_addr      <= 0;
        exu_store_data      <= 0;
        exu_store_en        <= 0;
        exu_store_size      <= STORE_IDLE;
    end 
    else if(cycle_cnt == 4) begin
        exu_store_addr      <= exu_store_addr_buff;
        exu_store_data      <= exu_store_data_buff;
        exu_store_en        <= exu_store_en_buff;
        exu_store_size      <= exu_store_size_buff; // Correct transfer of store size
    end
end

endmodule