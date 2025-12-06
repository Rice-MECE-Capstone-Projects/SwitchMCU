module exu_reg_swc (
    hclk                                        ,
    hrstn                                       ,
    cycle_cnt                                   ,
    en                                          ,
    dec_add                                     ,
	dec_sub                                     ,
	dec_sll                                     ,
	dec_slt                                     ,
	dec_sltu                                    ,
	dec_xor                                     ,
	dec_srl                                     ,
	dec_sra                                     ,
	dec_or                                      ,
	dec_and                                     ,
    dec_rs1                                     ,
    dec_rs2                                     ,
    dec_rd                                      ,
    pc                                          ,
    reg_waddr                                   ,
    reg_wen                                     ,
    reg_wdata                                   ,
    reg_rdata_1                                 ,
    reg_raddr_1                                 ,
    reg_ren_1                                   ,
    reg_rdata_2                                 ,
    reg_raddr_2                                 ,
    reg_ren_2                                   ,
    exu_stall                                   
);
/*
Performs Integer Register-Register Operations.

Reads the values from the dec_rs1 and dec_rs2 registers as source operands.
Writes the result into dec_rd.
*/
input                       hclk                ;
input                       hrstn               ;
input           [3:0]       cycle_cnt           ;
// signals from dec 
input                       en                  ;
input                       dec_add             ;
input                       dec_sub             ;
input                       dec_sll             ;
input                       dec_slt             ;
input                       dec_sltu            ;
input                       dec_xor             ;
input                       dec_srl             ;
input                       dec_sra             ;
input                       dec_or              ;
input                       dec_and             ;
input           [4:0]       dec_rs1             ;
input           [4:0]       dec_rs2             ;
input           [4:0]       dec_rd              ; 
// PC
input           [31:0]      pc                  ;
// regfile write port
inout           [4:0]       reg_waddr           ;
inout                       reg_wen             ;
inout           [31:0]      reg_wdata           ;
input           [31:0]      reg_rdata_1         ;
inout           [4:0]       reg_raddr_1         ;
inout                       reg_ren_1           ;
input           [31:0]      reg_rdata_2         ;
inout           [4:0]       reg_raddr_2         ;
inout                       reg_ren_2           ;
// exu_stall
input                       exu_stall           ;
// middle signals
reg             [4:0]       mid_reg_waddr       ;
reg                         mid_reg_wen         ;
reg             [31:0]      mid_reg_wdata       ;
reg             [4:0]       mid_reg_raddr_1     ;
reg                         mid_reg_ren_1       ;
reg             [4:0]       mid_reg_raddr_2     ;
reg                         mid_reg_ren_2       ;

assign reg_waddr   = mid_reg_wen   ? mid_reg_waddr    : 'z  ;
assign reg_wen     = mid_reg_wen   ? mid_reg_wen      : 'z  ;
assign reg_wdata   = mid_reg_wen   ? mid_reg_wdata    : 'z  ;
assign reg_raddr_1 = mid_reg_ren_1 ? mid_reg_raddr_1  : 'z  ;
assign reg_ren_1   = mid_reg_ren_1 ? mid_reg_ren_1    : 'z  ;
assign reg_raddr_2 = mid_reg_ren_2 ? mid_reg_raddr_2  : 'z  ;
assign reg_ren_2   = mid_reg_ren_2 ? mid_reg_ren_2    : 'z  ;

always@(posedge hclk or negedge hrstn) begin
    if(!hrstn) begin // on a reset clear all the temp read and write values
        mid_reg_raddr_1 <= 0;
        mid_reg_ren_1   <= 0;

        mid_reg_raddr_2 <= 0;
        mid_reg_ren_2   <= 0;
        
        mid_reg_waddr   <= 0;
        mid_reg_wen     <= 0;
        mid_reg_wdata   <= 0;
    end else if(en && !exu_stall)begin // if enabled and we are not stalling, continue
        if(cycle_cnt == 1) begin // on cycle 1, assign the read registers and enable them
            mid_reg_raddr_1 <= dec_rs1;
            mid_reg_ren_1   <= 1;

            mid_reg_raddr_2 <= dec_rs2;
            mid_reg_ren_2   <= 1;

            mid_reg_waddr   <= 0;
            mid_reg_wen     <= 0;
            mid_reg_wdata   <= 0;
        end else if(cycle_cnt == 2) begin // on cycle 2 clear all
            mid_reg_raddr_1 <= 0;
            mid_reg_ren_1   <= 0;

            mid_reg_raddr_2 <= 0;
            mid_reg_ren_2   <= 0;

            mid_reg_waddr   <= 0;
            mid_reg_wen     <= 0;
            mid_reg_wdata   <= 0;
        end else if(cycle_cnt == 3)begin // on cycle 3 assign the write address and enable it
            mid_reg_raddr_1 <= 0;
            mid_reg_ren_1   <= 0;

            mid_reg_raddr_2 <= 0;
            mid_reg_ren_2   <= 0;

            mid_reg_waddr   <= dec_rd;
            mid_reg_wen     <= 1;
            // perform the operation and assign the temp write data to the result of the operation
            if(dec_add)
                mid_reg_wdata <= reg_rdata_1 + reg_rdata_2;
            else if(dec_sub)
                mid_reg_wdata <= reg_rdata_1 - reg_rdata_2;
            else if(dec_sll)
                mid_reg_wdata <= reg_rdata_1 << reg_rdata_2[4:0];
            else if(dec_slt)
                mid_reg_wdata <= {31'b0, $signed(reg_rdata_1) < $signed(reg_rdata_2)};
            else if(dec_sltu)
                mid_reg_wdata <= {31'b0, reg_rdata_1 < reg_rdata_2};
            else if(dec_xor)
                mid_reg_wdata <= reg_rdata_1 ^ reg_rdata_2;
            else if(dec_srl)
                mid_reg_wdata <= reg_rdata_1 >> reg_rdata_2[4:0];
            else if(dec_sra)
                mid_reg_wdata <= $signed(reg_rdata_1) >>> reg_rdata_2[4:0];
            else if(dec_or)
                mid_reg_wdata <= reg_rdata_1 | reg_rdata_2;
            else if(dec_and)
                mid_reg_wdata <= reg_rdata_1 & reg_rdata_2;
            else
                mid_reg_wdata <= 0;
        end else begin // on cycle 4 clear all
            mid_reg_raddr_1 <= 0;
            mid_reg_ren_1   <= 0;

            mid_reg_raddr_2 <= 0;
            mid_reg_ren_2   <= 0;

            mid_reg_waddr   <= 0;
            mid_reg_wen     <= 0;
            mid_reg_wdata   <= 0;    
        end 
    end else begin
    mid_reg_raddr_1 <= 0;
    mid_reg_ren_1   <= 0;

    mid_reg_raddr_2 <= 0;
    mid_reg_ren_2   <= 0;

    mid_reg_waddr <= 0;
    mid_reg_wen   <= 0;
    mid_reg_wdata <= 0;
    end
end

endmodule
