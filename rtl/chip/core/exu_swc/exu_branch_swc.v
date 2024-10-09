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

/*
This module compares two registers, dec_rs1 and dec_rs2, and may branch depending on the condition of those two registers, and which type of branch is being performed.
BEQ and BNE branch if the registers are equal or unequal, respectively. BLT and BLTU branch if rs1 is less than rs2 for signed or unsigned values, respectively. BGE AND BGEU branch if rs1 is greater than rs2 for signed or unsigned values, respectively. If the branch occurs, the pc will jump ahead by dec_imm_type_b. 
*/

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

// assign the register values to their temporary values if enabled.
assign reg_raddr_1 = mid_reg_ren_1 ? mid_reg_raddr_1  : 'z  ;
assign reg_ren_1   = mid_reg_ren_1 ? mid_reg_ren_1    : 'z  ;
assign reg_raddr_2 = mid_reg_ren_2 ? mid_reg_raddr_2  : 'z  ;
assign reg_ren_2   = mid_reg_ren_2 ? mid_reg_ren_2    : 'z  ;

// sign extends the imm_type_b from 13 to 32 digits
assign sext_imm_type_b = {{19{dec_imm_type_b[11]}}, dec_imm_type_b};

always@(posedge hclk or negedge hrstn) begin
    if(!hrstn) begin
    	// reset the temporary regfile values to 0
        mid_reg_raddr_1 <= 0;
        mid_reg_ren_1   <= 0;

        mid_reg_raddr_2 <= 0;
        mid_reg_ren_2   <= 0;
    end else if(dec_branch_en)begin
        if(cycle_cnt == 1) begin
       	    // During the first cycle, assign the temporary regfile addresses to the decoded addresses, and enable the regfiles
            mid_reg_raddr_1 <= dec_rs1;
            mid_reg_ren_1   <= 1;

            mid_reg_raddr_2 <= dec_rs2;
            mid_reg_ren_2   <= 1;
        end else begin
            // otherwise reset the values 
            mid_reg_raddr_1 <= 0;
            mid_reg_ren_1   <= 0;

            mid_reg_raddr_2 <= 0;
            mid_reg_ren_2   <= 0;   
        end 
    end else begin
    	// otherwise reset the values (seems like this could be combined with the !hrstn)
        mid_reg_raddr_1 <= 0;
        mid_reg_ren_1   <= 0;

        mid_reg_raddr_2 <= 0;
        mid_reg_ren_2   <= 0;
    end
end

// create temp values to update the program counter
wire [31:0] pc_real = pc - 8; // pc is already updated, so subtract 8 to get actual value
wire [31:0] pc_next = pc_real  + sext_imm_type_b; // add the imm
wire        branch  = dec_beq  ? (reg_rdata_1 == reg_rdata_2) :
                      dec_bne  ? (reg_rdata_1 != reg_rdata_2) :
                      dec_blt  ? ($signed(reg_rdata_1) <  $signed(reg_rdata_2)) :
                      dec_bge  ? ($signed(reg_rdata_1) >= $signed(reg_rdata_2)) :
                      dec_bltu ? (reg_rdata_1 <  reg_rdata_2) :
                      dec_bgeu ? (reg_rdata_1 >= reg_rdata_2) :
                      0; // assign the branch value depending on the data comparisons

always@(posedge hclk or negedge hrstn) begin
    if(!hrstn) begin // at the reset, assign the temp pc values to zero
        mid_pc_write <= 0;
        mid_pc_wdata <= 0;
    end else if(dec_branch_en) begin
        if(cycle_cnt == 3) begin
        /*
        For cycle 3, if we are branching to a line 4 or 8 away, we assign the temp values of pc_write and pc_wdata to 0. If we are branching to a different value line, then we assign the temp value of pc_write to 1 and the temp value of pc_wdata to the program counter value we are branching to. (figure out why this is)
        */
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
        /*
        For cycle 4, maintain temp values. (What is the purpose of this??)
        */
            mid_pc_write <= mid_pc_write;
            mid_pc_wdata <= mid_pc_wdata;
        end else begin
        /*
        Otherwise reset the temp values.
        */
            mid_pc_write <= 0;
            mid_pc_wdata <= 0;
        end
    end else begin // Otherwise reset the temp values (feels like could be combined with !hrstn)
        mid_pc_write <= 0;
        mid_pc_wdata <= 0;
    end
end
// update the pc_write and pc_wdata values
assign pc_write = dec_branch_en ? mid_pc_write : 'z;
assign pc_wdata = dec_branch_en ? mid_pc_wdata : 'z;

localparam FLUSH_DISABLE = 0, FLUSH_CYCLE_1 = 1, FLUSH_CYCLE_2 = 2;
reg [1:0] mid_flush;


/*
Assigning the flush control signal. On a reset with disable the flush. On cycle 3 if we are branching forward by 4, we disable the flush. If we are branching forward by 8 we engage flush cycle 1. If we are branching forward by any other value, ew engage flush cycle 2. If we are not branching we disable the flush. On cycle 4 we hold the temporary flush value, and on cycles 1 and 2 we disable the flush, so the flushing occurs on cycle 3/4.
*/

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
