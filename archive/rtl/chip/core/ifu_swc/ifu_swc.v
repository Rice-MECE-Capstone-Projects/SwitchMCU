module ifu_swc (
    hclk                                                    ,
    hrstn                                                   ,
    haddr                                                   ,
    hwrite                                                  ,
    hwdata                                                  ,
    hsize                                                   ,
    hburst                                                  ,
    hprot                                                   ,
    htrans                                                  ,
    hmastlock                                               ,
    hready                                                  ,
    hresp                                                   ,
    hrdata                                                  ,
    itcm_ready                                              ,
    ifu_idle                                                ,
    ifu_dec_stall                                           ,
    cycle_cnt                                               ,
    pc_write                                                ,
    pc_wdata                                                ,
    pc                                                      ,
    inst_out
);

// general signals
input                                       hclk            ;
input                                       hrstn           ;
// AHB bus signals
output      reg         [31:0]              haddr           ;
output                                      hwrite          ;
output      reg         [31:0]              hwdata          ;
output      reg         [2:0]               hsize           ;
output      reg         [2:0]               hburst          ;
output      reg         [6:0]               hprot           ;
output      reg         [1:0]               htrans          ;
output      reg                             hmastlock       ;
input                                       hready          ;
input                                       hresp           ;
input                   [31:0]              hrdata          ;
localparam  HTRANS_IDLE                     = 0             ,
            HTRANS_BUSY                     = 1             ,
            HTRANS_NONSEQ                   = 2             ,
            HTRANS_SEQ                      = 3             ;
// control signals
input                                       itcm_ready      ;
output      reg                             ifu_idle        ;
input                                       ifu_dec_stall   ;
input       reg         [3:0]               cycle_cnt       ;
input                                       pc_write        ;
input                   [31:0]              pc_wdata        ;
output      reg         [31:0]              pc              ;
// instruction output
output      reg         [31:0]              inst_out        ;

// pc
always@(posedge hclk) begin
    if(!hrstn) begin
        pc <= 0;
    end else if(ifu_dec_stall) begin
        pc <= pc;
    end else if(cycle_cnt == 4) begin
        if(pc_write) begin
            pc <= pc_wdata;
        end else begin
            pc <= pc + 4;
        end
    end else begin
        pc <= pc;
    end
end

// state mchine
localparam  IDLE     = 0        ,
            START    = 1        ,
            WAIT1    = 2        ,
            WAIT2    = 3        ;
reg     [1:0]       state       ;
reg     [1:0]       nextstate   ;

always@(posedge hclk) begin
    if(!hrstn) begin
        state <= IDLE;
    end else begin
        state <= nextstate;
    end
end

always @(*) begin
    case(state)
    IDLE: begin
        if(cycle_cnt == 1) begin
            nextstate = START;
        end else begin
            nextstate = IDLE;
        end
    end
    START: begin
        if(hready) begin
            nextstate = WAIT2;
        end else begin
            nextstate = WAIT1;
        end
    end
    WAIT1: begin
        if(hready) begin
            nextstate = WAIT2;
        end else begin
            nextstate = WAIT1;
        end
    end
    WAIT2: begin
        if(hready) begin
            nextstate = IDLE;
        end else begin
            nextstate = WAIT2;
        end
    end
    endcase
end

// htrans
always@(posedge hclk) begin
    if(!hrstn) begin
        htrans <= HTRANS_IDLE;
    end else if(nextstate == START) begin
        htrans <= HTRANS_NONSEQ;
    end else begin
        htrans <= HTRANS_IDLE;
    end
end

// hmastlock
assign hmastlock = 0;

// hwrite
assign hwrite = 0;

// hsize
assign hsize = 2;

// hburst
assign hburst = 0;

// haddr
always@(posedge hclk) begin
    if(!hrstn) begin
        haddr <= 0;
    end else if(nextstate == START) begin
        haddr <= pc;
    end
end

// inst_out_buff
reg   [31:0]    inst_out_buff;
always@(posedge hclk) begin
    if(!hrstn) begin
        inst_out_buff <= 0;
    end else if(state == WAIT2 && nextstate == IDLE) begin
        inst_out_buff <= hrdata;
    end else begin
        inst_out_buff <= inst_out_buff;
    end
end

// inst_out
always@(posedge hclk) begin
    if(!hrstn || ifu_dec_stall) begin
        inst_out <= 0;
    end else if(cycle_cnt == 4) begin
        inst_out <= inst_out_buff;
    end else begin
        inst_out <= inst_out;
    end
end

// ifu_idle
always@(posedge hclk) begin
    if(!hrstn) begin
        ifu_idle <= 0;
    end else if(nextstate == IDLE) begin
        ifu_idle <= 1;
    end else begin
        ifu_idle <= 0;
    end
end

endmodule
