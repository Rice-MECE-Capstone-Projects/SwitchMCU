module ahb2apb_ahbs_swc (
    hclk            ,
    hrstn           ,
    haddr           ,
    hprot           ,
    hsize           ,
    htrans          ,
    hwdata          ,
    hrdata          ,
    hwrite          ,
    hready          ,
    hresp           ,
    wreq            ,
    wbuffdata       ,
    wbuffaddr       ,
    rreq            ,
    rbuffdata       ,
    rbuffaddr       ,
    done     
);
// AHB bus 5 signals
input                           hclk        ;
input                           hrstn       ;
input   reg     [31:0]          haddr       ;
input           [6:0]           hprot       ;
input           [2:0]           hsize       ;
input           [1:0]           htrans      ;
input           [31:0]          hwdata      ;
output  reg     [31:0]          hrdata      ;
input                           hwrite      ;
output  reg                     hready      ;
output                          hresp       ;
// APB control signals
output  reg                     wreq        ;
output  reg     [31:0]          wbuffdata   ;
output  reg     [31:0]          wbuffaddr   ;
output  reg                     rreq        ;
input           [31:0]          rbuffdata   ;
output  reg     [31:0]          rbuffaddr   ;
input                           done        ;
// HTRANS define
localparam  HTRANS_IDLE     = 0             ,
            HTRANS_BUSY     = 1             ,
            HTRANS_NONSEQ   = 2             ,
            HTRANS_SEQ      = 3             ;
// State machine signals
localparam  IDLE            = 0             ,
            WSATRT          = 1             ,
            WPAUSE          = 2             ,
            WWAIT           = 3             ,
            WDONE           = 4             ,
            RSTART          = 5             ,
            RWAIT           = 6             ,
            RDONE           = 7             ;
reg     [2:0]           state               ;
reg     [2:0]           nextstate           ;

// State machine
always @(posedge hclk) begin
    if(!hrstn) begin
        state <= IDLE;
    end else begin
        state <= nextstate;
    end
end

always @(*) begin
    case (state)
        IDLE: begin
            if(htrans == HTRANS_NONSEQ && hwrite) begin
                nextstate = WSATRT;
            end else if(htrans == HTRANS_NONSEQ && !hwrite) begin
                nextstate = RSTART;
            end else begin
                nextstate = IDLE;
            end
        end
        WSATRT: begin
            nextstate = WPAUSE;
        end
        WPAUSE: begin
            nextstate = WWAIT;
        end
        WWAIT: begin
            if(!done) begin
                nextstate = WWAIT;
            end else begin
                nextstate = WDONE;
            end
        end
        WDONE: begin
            if(htrans == HTRANS_NONSEQ && hwrite) begin
                nextstate = WSATRT;
            end else if(htrans == HTRANS_NONSEQ && !hwrite) begin
                nextstate = RSTART;
            end else begin
                nextstate = IDLE;
            end
        end
        RSTART: begin
            nextstate = RWAIT;
        end
        RWAIT: begin
            if(!done) begin
                nextstate = RWAIT;
            end else begin
                nextstate = RDONE;
            end
        end
        RDONE: begin
            if(htrans == HTRANS_NONSEQ && hwrite) begin
                nextstate = WSATRT;
            end else if(htrans == HTRANS_NONSEQ && !hwrite) begin
                nextstate = RSTART;
            end else begin
                nextstate = IDLE;
            end
        end
        default: nextstate = IDLE;
    endcase
end

// hready
always @(posedge hclk) begin
    if(!hrstn) begin
        hready <= 0;
    end else if(nextstate == IDLE) begin
        hready <= 1;
    end else if(nextstate == WDONE) begin
        hready <= 1;
    end else if(nextstate == RDONE) begin
        hready <= 1;
    end else begin
        hready <= 0;
    end
end

// wreq
always @(posedge hclk) begin
    if(!hrstn) begin
        wreq <= 0;
    end else if(nextstate == WPAUSE) begin
        wreq <= 1;
    end else begin
        wreq <= 0;
    end
end

// wbuffdata
always @(posedge hclk) begin
    if(!hrstn) begin
        wbuffdata <= 0;
    end else if(nextstate == WPAUSE) begin
        wbuffdata <= hwdata;
    end else if(nextstate == WWAIT) begin
        wbuffdata <= wbuffdata;
    end else begin
        wbuffdata <= 0;
    end
end

// wbuffaddr
always @(posedge hclk) begin
    if(!hrstn) begin
        wbuffaddr <= 0;
    end else if(nextstate == WSATRT) begin
        wbuffaddr <= haddr;
    end else if(nextstate == WPAUSE) begin
        wbuffaddr <= wbuffaddr;
    end else if(nextstate == WWAIT) begin
        wbuffaddr <= wbuffaddr;
    end else begin
        wbuffaddr <= 0;
    end
end

// rreq
always @(posedge hclk) begin
    if(!hrstn) begin
        rreq <= 0;
    end else if(nextstate == RSTART) begin
        rreq <= 1;
    end else begin
        rreq <= 0;
    end
end

// rbuffaddr
always @(posedge hclk) begin
    if(!hrstn) begin
        rbuffaddr <= 0;
    end else if(nextstate == RSTART) begin
        rbuffaddr <= haddr;
    end else if(nextstate == RWAIT) begin
        wbuffaddr <= wbuffaddr;
    end else begin
        rbuffaddr <= 0;
    end
end

// hrdata
always @(posedge hclk) begin
    if(!hrstn) begin
        hrdata <= 0;
    end else if(nextstate == RDONE) begin
        hrdata <= wbuffdata;
    end else begin
        hrdata <= 0;
    end
end

endmodule
