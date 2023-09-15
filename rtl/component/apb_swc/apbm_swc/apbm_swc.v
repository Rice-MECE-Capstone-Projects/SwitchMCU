module apbm_swc (
    pclk        ,
    prstn       ,
    paddr       ,
    pselx       ,
    penable     ,
    pwrite      ,
    pwdata      ,
    pready      ,
    prdata      ,
    pslverr     ,
    wbuffread   ,
    wreq        ,
    wbuffdata   ,
    wbuffaddr   ,
    rbuffwrite  ,
    rreq        ,
    rbuffdata   ,
    rbuffaddr   
);
// APB Bus Signals
parameter PD_NUM = 3;   // Peripherals devices number
input                           pclk        ;
input                           prstn       ;
output  reg     [31:0]          paddr       ;
output  reg     [PD_NUM-1:0]    pselx       ;
output  reg                     penable     ;
output  reg                     pwrite      ;
output  reg     [31:0]          pwdata      ;
input                           pready      ;
input           [31:0]          prdata      ;
input                           pslverr     ;
// Read buff signals
output  reg                     wbuffread   ;
input                           wreq        ;
input           [31:0]          wbuffdata   ;
input           [31:0]          wbuffaddr   ;
output reg                      rbuffwrite  ;
input                           rreq        ;
output reg      [31:0]          rbuffdata   ;
input           [31:0]          rbuffaddr   ;
// State machine signals
localparam  IDLE     = 0                    ,
            STEUP    = 1                    ,
            ACCESS   = 2                    ;
reg     [1:0]           state               ;
reg     [1:0]           nextstate           ;

// State machine
always @(posedge pclk) begin
    if(!prstn) begin
        state <= IDLE;
    end else begin
        state <= nextstate;
    end
end

always @(*) begin
    case (state)
        IDLE: begin
            if(wreq || rreq) begin
                nextstate = STEUP;
            end else begin
                nextstate = IDLE;
            end
        end
        STEUP: begin
            nextstate = ACCESS;
        end
        ACCESS: begin
            if(!pready) begin
                nextstate = ACCESS;
            end else if(pready && (wreq || rreq)) begin
                nextstate = STEUP;
            end else begin
                nextstate = IDLE;
            end
        end
        default: nextstate = IDLE;
    endcase
end

// pselx
always @(posedge pclk) begin
    if(!prstn) begin
        pselx <= 0;
    end else if(nextstate == IDLE) begin
        pselx <= 0;
    end else if(nextstate == STEUP) begin
        pselx <= 1;
    end else if(nextstate == ACCESS) begin
        pselx <= 1;
    end else begin
        pselx <= 0;
    end
end

// penable
always @(posedge pclk) begin
    if(!prstn) begin
        penable <= 0;
    end else if(nextstate == IDLE) begin
        penable <= 0;
    end else if(nextstate == STEUP) begin
        penable <= 0;
    end else if(nextstate == ACCESS) begin
        penable <= 1;
    end else begin
        penable <= 0;
    end
end

// pwdata
always @(posedge pclk) begin
    if(!prstn) begin
        pwdata <= 0;
    end else if(nextstate == IDLE) begin
        pwdata <= 0;
    end else if(nextstate == STEUP) begin
        if(wreq) begin
            pwdata <= wbuffdata;
        end else begin
            pwdata <= 0;
        end
    end else if(nextstate == ACCESS) begin
        pwdata <= pwdata;
    end else begin
        pwdata <= 0;
    end
end

// paddr
always @(posedge pclk) begin
    if(!prstn) begin
        paddr <= 0;
    end else if(nextstate == IDLE) begin
        paddr <= 0;
    end else if(nextstate == STEUP) begin
        if(wreq) begin
            paddr <= wbuffaddr;
        end else if(rreq) begin
            paddr <= rbuffaddr;
        end else begin
            paddr <= 0;
        end
    end else if(nextstate == ACCESS) begin
        paddr <= paddr;
    end else begin
        paddr <= 0;
    end
end

// wbuffread
always @(posedge pclk) begin
    if(!prstn) begin
        wbuffread <= 0;
    end else if(nextstate == IDLE) begin
        wbuffread <= 0;
    end else if(nextstate == STEUP) begin
        if(wreq) begin
            wbuffread <= 1;
        end else begin
            wbuffread <= 0;
        end
    end else if(nextstate == ACCESS) begin
        wbuffread <= 0;
    end else begin
        wbuffread <= 0;
    end
end

//pwrite
always @(posedge pclk) begin
    if(!prstn) begin
        pwrite <= 0;
    end else if(nextstate == IDLE) begin
        pwrite <= 0;
    end else if(nextstate == STEUP) begin
        if(wreq) begin
            pwrite <= 1;
        end else if(rreq) begin
            pwrite <= 0;
        end else begin
            pwrite <= 0;
        end
    end else if(nextstate == ACCESS) begin
        pwrite <= pwrite;
    end else begin
        pwrite <= 0;
    end
end

// rbuffdata
always @(posedge pclk) begin
    if(!prstn) begin
        rbuffdata <= 0;
    end else if(state == ACCESS) begin
        if(!pwrite && pready) begin
            rbuffdata <= prdata;
        end else begin
            rbuffdata <= 0;
        end
    end else begin
        rbuffdata <= 0;
    end
end

// rbuffwrite
always @(posedge pclk) begin
    if(!prstn) begin
        rbuffwrite <= 0;
    end else if(state == ACCESS) begin
        if(!pwrite && pready) begin
            rbuffwrite <= 1;
        end else begin
            rbuffwrite <= 0;
        end
    end else begin
        rbuffwrite <= 0;
    end
end
    
endmodule
