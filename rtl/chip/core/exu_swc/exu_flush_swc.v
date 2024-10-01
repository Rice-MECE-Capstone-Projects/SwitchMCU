module ex_flush_swc (
    hclk                                        ,
    hrstn                                       ,
    cycle_cnt                                   ,
    flush                                       ,
    flush_stall                                                         
);
input                       hclk                ;
input                       hrstn               ;
input           [3:0]       cycle_cnt           ;
input           [1:0]       flush               ;
output reg                  flush_stall         ;
/*
Outputs a flush_stall value based on inputs. The states only update during the 4th clock cycle.
If we are in flush cycle 2 we stay with flush_stall high until the flush cycle 2 signal ends, and then we stay in high for one more cycle and then return to IDLE.
If we are in flush cycle 1 we stay in high for one cycle and then return to IDLE.
*/

// state machine values
localparam FLUSH_DISABLE = 0, FLUSH_CYCLE_1 = 1, FLUSH_CYCLE_2 = 2;
localparam IDLE = 0, STATE_1 = 1, STATE_2 = 2;
reg  [1:0] state;
reg  [1:0] nextstate;

always @(posedge hclk) begin
    if(!hrstn) begin
        state <= IDLE;
    end else begin
        state <= nextstate;
    end
end

// state machine cases
always @(*) begin
    case (state)
        IDLE: begin
            if(cycle_cnt == 4) begin
                if(flush == FLUSH_CYCLE_1) begin
                    nextstate = STATE_1;
                end else if(flush == FLUSH_CYCLE_2) begin
                    nextstate = STATE_2;
                end else begin
                    nextstate = IDLE;
                end
            end else begin
                nextstate = IDLE;
            end
        end
        STATE_2: begin
            if(cycle_cnt == 4) begin
                nextstate = STATE_1;
            end else begin
                nextstate = STATE_2;
            end
        end
        STATE_1: begin
            if(cycle_cnt == 4) begin
                if(flush == FLUSH_CYCLE_2) begin
                    nextstate = STATE_2;
                end else begin
                    nextstate = IDLE;
                end
            end else begin
                nextstate = STATE_1;
            end
        end
    endcase
end

// flush_stall
always @(posedge hclk) begin
    if(!hrstn) begin
        flush_stall <= 0;
    end else if(nextstate == IDLE) begin
        flush_stall <= 0;
    end else begin
        flush_stall <= 1;
    end
end

endmodule
