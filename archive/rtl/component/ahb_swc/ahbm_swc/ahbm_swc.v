module ahbm_swc (
    hclk      ,
    hrstn     ,
    haddr     ,
    hmastlock ,
    hprot     ,
    hsize     ,
    htrans    ,
    hwdata    ,
    hrdata    ,
    hwrite    ,
    hready    ,
    hresp     ,
    wbuffread ,
    wreq      ,
    wbuffdata ,
    wbuffaddr ,
    rbuffwrite,
    rreq      ,
    rbuffdata ,
    rbuffaddr ,
    done      ,
    resp      
);
// AHB bus 5 signals
input                           hclk        ;
input                           hrstn       ;
output  reg     [31:0]          haddr       ;
output  reg                     hmastlock   ;
output          [6:0]           hprot       ;
output          [2:0]           hsize       ;
output  reg     [1:0]           htrans      ;
output  reg     [31:0]          hwdata      ;
input           [31:0]          hrdata      ;
output  reg                     hwrite      ;
input                           hready      ;
input                           hresp       ;
// Buffer(FIFO) signals
output reg                      wbuffread   ;
input                           wreq        ;
input           [31:0]          wbuffdata   ;
input           [31:0]          wbuffaddr   ;
output reg                      rbuffwrite  ;
input                           rreq        ;
output reg      [31:0]          rbuffdata   ;
input           [31:0]          rbuffaddr   ;
// feedback signals
output reg                      done        ;
output reg                      resp        ;
// State machine signals
localparam  IDLE            = 0             ,
            STEUP           = 1             ,
            WAIT            = 2             ;
localparam  HTRANS_IDLE     = 0             ,
            HTRANS_BUSY     = 1             ,
            HTRANS_NONSEQ   = 2             ,
            HTRANS_SEQ      = 3             ;
reg     [1:0]           state               ;
reg     [1:0]           nextstate           ;
// delay for hw/rdata
reg     [31:0]          hwdatabuff          ;
reg                     wpendingflag        ;
reg                     wpendingflagdly     ;
reg                     rpendingflag        ;
reg                     rpendingflagdly     ;

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
            if(hresp) begin
                nextstate = IDLE;
            end else if(wreq || rreq) begin
                nextstate = STEUP;
            end else begin
                nextstate = IDLE;
            end
        end
        STEUP: begin
            if(hresp) begin
                nextstate = IDLE;
            end else if(!hready) begin
                nextstate = WAIT;
            end else if(wreq || rreq) begin
                nextstate = STEUP;
            end else begin
                nextstate = IDLE;
            end
        end
        WAIT: begin
            if(hresp) begin
                nextstate = IDLE;
            end else if(!hready) begin
                nextstate = WAIT;
            end else if(wreq || rreq) begin
                nextstate = STEUP;
            end else begin
                nextstate = IDLE;
            end
        end
        default: nextstate = IDLE;
    endcase
end

// haddr
always @(posedge hclk) begin
    if(!hrstn) begin
        haddr <= 0;
    end else if(nextstate == IDLE) begin
        haddr <= 0;
    end else if(nextstate == STEUP) begin
        if(wreq) begin
            haddr <= wbuffaddr;
        end else if(rreq) begin
            haddr <= rbuffaddr;
        end
    end else if(nextstate == WAIT) begin
        haddr <= haddr;
    end else begin
        haddr <= 0;
    end
end

// hwrite
always @(posedge hclk) begin
    if(!hrstn) begin
        hwrite <= 0;
    end else if(nextstate == IDLE) begin
        hwrite <= 0;
    end else if(nextstate == STEUP) begin
        if(wreq) begin
            hwrite <= 1;
        end else if(rreq) begin
            hwrite <= 0;
        end else begin
            hwrite <= 0;
        end
    end else if(nextstate == WAIT) begin
        hwrite <= hwrite;
    end else begin
        hwrite <= 0;
    end
end

// hwdatabuff
always @(posedge hclk) begin
    if(!hrstn) begin
        hwdatabuff <= 0;
    end else if(nextstate == IDLE) begin
        hwdatabuff <= 0;
    end else if(nextstate == STEUP) begin
        if(wreq) begin
            hwdatabuff <= wbuffdata;
        end else begin
            hwdatabuff <= 0;
        end
    end else if(nextstate == WAIT) begin
        hwdatabuff <= hwdatabuff;
    end else begin
        hwdatabuff <= 0;
    end
end

// wpendingflag
always @(posedge hclk) begin
    if(!hrstn) begin
        wpendingflag <= 0;
    end else if(nextstate == IDLE) begin
        if(hresp) begin
            wpendingflag <= wpendingflag;
        end else begin
            wpendingflag <= 0;
        end
        wpendingflag <= 0;
    end else if(nextstate == STEUP) begin
        if(wreq) begin
            wpendingflag <= 1;
        end else begin
            wpendingflag <= 0;
        end
    end else if(nextstate == WAIT) begin
        wpendingflag <= wpendingflag;
    end else begin
        wpendingflag <= 0;
    end
end

// wpendingflagdly
always @(posedge hclk) begin
    if(!hrstn) begin
        wpendingflagdly <= 0;
    end else if(hready) begin
        wpendingflagdly <= wpendingflag;
    end else begin
        wpendingflagdly <= wpendingflagdly;
    end
end

// hwdata
always @(posedge hclk) begin
    if(!hrstn) begin
        hwdata <= 0;
    end else if(hready) begin
        hwdata <= hwdatabuff;
    end else begin
        hwdata <= hwdata;
    end
end

// rpendingflag
always @(posedge hclk) begin
    if(!hrstn) begin
        rpendingflag <= 0;
    end else if(nextstate == IDLE) begin
        if(hresp) begin
            rpendingflag <= rpendingflag;
        end else begin
            rpendingflag <= 0;
        end
    end else if(nextstate == STEUP) begin
        if(rreq) begin
            rpendingflag <= 1;
        end else begin
            rpendingflag <= 0;
        end
    end else if(nextstate == WAIT) begin
        rpendingflag <= rpendingflag;
    end else begin
        rpendingflag <= 0;
    end
end

// rpendingflagdly
always @(posedge hclk) begin
    if(!hrstn) begin
        rpendingflagdly <= 0;
    end else if(hready) begin
        rpendingflagdly <= rpendingflag;
    end else begin
        rpendingflagdly <= rpendingflagdly;
    end
end

// rbuffdata
always @(posedge hclk) begin
    if(!hrstn) begin
        rbuffdata <= 0;
    end else if(hready && rpendingflagdly) begin
        rbuffdata <= hrdata;
    end else begin
        rbuffdata <= rbuffdata;
    end
end

// htrans
always @(posedge hclk) begin
    if(!hrstn) begin
        htrans <= HTRANS_IDLE;
    end else if(nextstate == IDLE) begin
        htrans <= HTRANS_IDLE;
    end else if(nextstate == STEUP) begin
        htrans <= HTRANS_NONSEQ;
    end else if(nextstate == WAIT) begin
        htrans <= htrans;
    end else begin
        htrans <= HTRANS_IDLE;
    end
end

// done
always @(posedge hclk) begin
    if(!hrstn) begin
        done <= 0;
    end else if(hready && (rpendingflagdly || wpendingflagdly)) begin
        done <= 1;
    end else begin
        done <= 0;
    end
end

// resp
always @(posedge hclk) begin
    if(!hrstn) begin
        resp <= 0;
    end else if(hready && (rpendingflagdly || wpendingflagdly)) begin
        if(hready && hresp) begin
            resp <= 1;
        end else begin
            resp <= 0;
        end
    end else begin
        resp <= 0;
    end
end

endmodule