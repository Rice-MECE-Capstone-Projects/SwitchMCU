module mau_swc (
    hclk                                                        ,
    hrstn                                                       ,
    haddr                                                       ,
    hwrite                                                      ,
    hwdata                                                      ,
    hsize                                                       ,
    hburst                                                      ,
    hprot                                                       ,
    htrans                                                      ,
    hmastlock                                                   ,
    hready                                                      ,
    hresp                                                       ,
    hrdata                                                      ,
    cycle_cnt                                                   ,
    exu_load_rd                                                 ,
    exu_load_base_addr                                          ,
    exu_load_offset                                             ,
    exu_load_sext                                               ,
    exu_load_size                                               ,
    exu_load_en                                                 ,
    exu_store_addr                                              ,
    exu_store_data                                              ,
    exu_store_en                                                ,
    exu_store_size                                              ,
    mau_load_rd                                                 ,
    mau_load_data                                               ,
    mau_load_en                                                 
);

// general signals
input                                       hclk                ;
input                                       hrstn               ;
// control signals
input                   [3:0]               cycle_cnt           ;
// AHB bus signals
localparam  HTRANS_IDLE     = 0                                 ,
            HTRANS_BUSY     = 1                                 ,
            HTRANS_NONSEQ   = 2                                 ,
            HTRANS_SEQ      = 3                                 ;
output      reg         [31:0]              haddr               ;
output      reg                             hwrite              ;
output      reg         [31:0]              hwdata              ;
output      reg         [2:0]               hsize               ;
output      reg         [2:0]               hburst              ;
output      reg         [6:0]               hprot               ;
output      reg         [1:0]               htrans              ;
output      reg                             hmastlock           ;
input                                       hready              ;
input                                       hresp               ;
input                   [31:0]              hrdata              ;
// signals from exu
input                   [4:0]               exu_load_rd         ;
input                   [31:0]              exu_load_base_addr  ;
input                   [31:0]              exu_load_offset     ;
input                                       exu_load_sext       ;
input                   [1:0]               exu_load_size       ;
input                                       exu_load_en         ;
input                   [31:0]              exu_store_addr      ;
input                   [31:0]              exu_store_data      ;
input                                       exu_store_en        ;
input                   [1:0]               exu_store_size      ;
// signals to wbu
output reg              [4:0]               mau_load_rd         ;
output reg              [31:0]              mau_load_data       ;
output reg                                  mau_load_en         ;

// state machine
localparam  IDLE          = 0   ,
            READ_START    = 1   ,
            READ_WAIT1    = 2   ,
            READ_WAIT2    = 3   ,
            WRITE_START   = 4   ,
            WRITE_WAIT    = 5   ;
reg [2:0] state                 ;
reg [2:0] nextstate             ;
parameter CNT_MAX = 4;

always@(posedge hclk) begin
    if(!hrstn) begin
        state <= IDLE;
        //also updates htrans to idle
    end else begin
        state <= nextstate;
    end
end

always @(*) begin
    case(state)
    IDLE: begin
        // on any nextstate == START updates htrans to NONSEQUENTIAL (NONSEQ)
        if(cycle_cnt == 1 && exu_load_en) begin
            nextstate = READ_START;
        end else if(cycle_cnt == 1 && exu_store_en) begin
            nextstate = WRITE_START;
        end else begin
            nextstate = IDLE;
        end
    end
    READ_START: begin
        // htrans == NONSEQ
        if(hready) begin
            nextstate = READ_WAIT2;
        end else begin
            nextstate = READ_WAIT1;
        end
    end
    READ_WAIT1: begin
        if(hready) begin
            nextstate = READ_WAIT2;
        end else begin
            nextstate = READ_WAIT1;
        end
    end
    READ_WAIT2: begin
        if(hready) begin
            nextstate = IDLE;
        end else begin
            nextstate = READ_WAIT2;
        end
    end
    WRITE_START: begin
        // htrans == NONSEQ
        if(hready) begin
            nextstate = WRITE_WAIT;
        end else begin
            nextstate = WRITE_START;
        end
    end
    WRITE_WAIT: begin
        if(hready) begin
            nextstate = IDLE;
        end else begin
            nextstate = WRITE_WAIT;
        end
    end
    default: begin
        nextstate = IDLE;
    end
    endcase
end

// htrans
// only upload one word at a time (no need for sequential/busy)
always@(posedge hclk) begin
    if(!hrstn) begin
        htrans <= HTRANS_IDLE;
    end else if(nextstate == READ_START || nextstate == WRITE_START) begin
        // NONSEQ: transfer of single signal/burst and address/control signals are unrelated to previous transfer
        htrans <= HTRANS_NONSEQ;
    end else begin
        // 
        htrans <= HTRANS_IDLE;
    end
end

// hmastlock
// How is this driven by an assign statement??????
assign hmastlock = 0;

// hwrite
always@(posedge hclk) begin
    if(!hrstn) begin
        hwrite <= 0;
    end else if(nextstate == WRITE_START) begin
        hwrite <= 1;
    end else begin
        hwrite <= 0;
    end
end

// hsize
assign hsize = hrstn ? 2 : 0;

// hburst
assign hburst = 0;

// haddr
always@(posedge hclk) begin
    if(!hrstn) begin
        haddr <= 0;
    end else if(nextstate == READ_START) begin
        haddr <= exu_load_base_addr + exu_load_offset;
    end else if(nextstate == WRITE_START) begin
        haddr <= 0;
    end
end

// hwdata
always@(posedge hclk) begin
    if(!hrstn) begin
        hwdata <= 0;
    end else if(nextstate == WRITE_START) begin
        hwdata <= exu_store_data;
    end else begin
        hwdata <= 0;
    end
end

// mau_load_data_buff
reg [31:0]  mau_load_data_buff;
reg [4:0]   mau_load_rd_buff;
localparam LOAD_IDLE = 0, LOAD_BTYE = 1, LOAD_HALFWORD = 2, LOAD_WORD = 3;
always@(posedge hclk) begin
    if(!hrstn) begin
        mau_load_data_buff <= 0;
        mau_load_rd_buff   <= 0;
    end else if(state == READ_WAIT2 && nextstate == IDLE) begin
        // Largest value to load in is 32 bits AKA one word
        // Data seems signed?
        // Need some info from lindsey about EXU outputs to figure out exactly what the last two are used for
        mau_load_data_buff <=   (exu_load_size  == LOAD_BTYE      &&  exu_load_sext) ? {{24{hrdata[ 7]}}, hrdata[ 7:0] }    :
                                (exu_load_size  == LOAD_HALFWORD  &&  exu_load_sext) ? {{16{hrdata[15]}}, hrdata[15:0] }    :
                                (exu_load_size  == LOAD_WORD      &&  exu_load_sext) ? hrdata                               :
                                (exu_load_size  == LOAD_BTYE      && !exu_load_sext) ? {{24{      1'b0}}, hrdata[ 7:0] }    :
                                (exu_load_size  == LOAD_HALFWORD  && !exu_load_sext) ? {{16{      1'b0}}, hrdata[15:0] }    :
                                0                                                                                           ;
        mau_load_rd_buff   <= exu_load_rd;
    // This could mess with data being transferred correctly in next posedge hclk block
    end else if(cycle_cnt == CNT_MAX) begin
        mau_load_data_buff <= 0;
        mau_load_rd_buff   <= 0;
    end else begin
        mau_load_data_buff <= mau_load_data_buff;
        mau_load_rd_buff   <= mau_load_rd_buff;
    end
end

// mau_load_data
// Time limited by Cycle Count (seesm to also be present in other modules)
always@(posedge hclk) begin
    if(!hrstn) begin
        mau_load_data <= 0;
        mau_load_rd   <= 0;
        mau_load_en   <= 0;
    // Need to check if data is being properly transferred on this condition bc of previous block (timing might be an issue)
    // Also this entirely takes away the point of having a five stage system (you can't pipeline with this)
    end else if(cycle_cnt == CNT_MAX) begin
        mau_load_data <= mau_load_data_buff;
        mau_load_rd   <= mau_load_rd_buff;
        mau_load_en   <= exu_load_en;
    // Unsure what the point of this is?
    // Seems to literally just hold the value but it should already do that (just seems like unecessary code)
    end else begin
        mau_load_data <= mau_load_data;
        mau_load_rd   <= mau_load_rd;
        mau_load_en   <= mau_load_en;
    end
end

endmodule