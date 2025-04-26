module arbiter (
    input clk,
    input rst_n,
    // SDRAM Controller Interface
    output       L_sdrc_wr_n,
    output       L_sdrc_rd_n,
    output [31:0] L_sdrc_addr,
    output [3:0]  L_sdrc_dqm,
    output [7:0]  L_sdrc_data_len,
    output [31:0] L_sdrc_data,
    input        O_sdrc_busy_n,
    input [31:0] O_sdrc_data,
    input        O_sdrc_rd_valid,
    
    // I-cache LSU Interface
    input        icache_data_req,
    input [31:0] icache_data_addr,
    input        icache_data_we,
    input [3:0]  icache_data_be,
    input [31:0] icache_data_wdata,
    output       icache_data_gnt,
    output       icache_data_rvalid,
    output [31:0] icache_data_rdata,
    
    // D-cache LSU Interface
    input        dcache_data_req,
    input [31:0] dcache_data_addr,
    input        dcache_data_we,
    input [3:0]  dcache_data_be,
    input [31:0] dcache_data_wdata,
    output       dcache_data_gnt,
    output       dcache_data_rvalid,
    output [31:0] dcache_data_rdata
);

// FSM States
parameter IDLE = 1'b0;
parameter BUSY = 1'b1;
reg state, next_state;
reg current_icache; // 1: I-cache, 0: D-cache

// Latch addresses and control signals when request is granted
reg [31:0] selected_addr;
reg selected_we;
reg [3:0] selected_be;
reg [31:0] selected_wdata;

// FSM Transition Logic
always @(*) begin
    next_state = state;
    
    case (state)
        IDLE: begin
            // Check if we have requests and SDRAM is ready
            if (O_sdrc_busy_n) begin // When SDRAM is ready (not busy)
                if (icache_data_req)
                    next_state = BUSY;
                else if (dcache_data_req)
                    next_state = BUSY;
            end
        end
        BUSY: begin
            // For read operations, wait for read valid
            // For write operations, complete immediately
            if (O_sdrc_rd_valid || selected_we) 
                next_state = IDLE;
        end
    endcase
end

// FSM State Update and Current Request Latching
always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        state <= IDLE;
        current_icache <= 1'b0;
        selected_addr <= 32'h0;
        selected_we <= 1'b0;
        selected_be <= 4'h0;
        selected_wdata <= 32'h0;
    end else begin
        state <= next_state;
        
        // Latch cache and request details when granting
        if (state == IDLE && next_state == BUSY) begin
            if (icache_data_req) begin
                current_icache <= 1'b1;
                selected_addr <= icache_data_addr;
                selected_we <= icache_data_we;
                selected_be <= icache_data_be;
                selected_wdata <= icache_data_wdata;
            end else if (dcache_data_req) begin
                current_icache <= 1'b0;
                selected_addr <= dcache_data_addr;
                selected_we <= dcache_data_we;
                selected_be <= dcache_data_be;
                selected_wdata <= dcache_data_wdata;
            end
        end
    end
end

// Grant Signals - when SDRAM is ready (O_sdrc_busy_n = 1) and in IDLE state
assign icache_data_gnt = (state == IDLE) && O_sdrc_busy_n && icache_data_req;
assign dcache_data_gnt = (state == IDLE) && O_sdrc_busy_n && !icache_data_req && dcache_data_req;

// SDRAM Controller Interface Signals - Use latched values once in BUSY state
// Write enable signal (active low)
assign L_sdrc_wr_n = (state == IDLE && next_state == BUSY) ? 
                     (icache_data_req ? (icache_data_we ? 1'b0 : 1'b1) : (dcache_data_we ? 1'b0 : 1'b1)) : 
                     ((state == BUSY) ? (selected_we ? 1'b0 : 1'b1) : 1'b1);

// Read enable signal (active low)
assign L_sdrc_rd_n = (state == IDLE && next_state == BUSY) ? 
                    (icache_data_req ? (icache_data_we ? 1'b1 : 1'b0) : (dcache_data_we ? 1'b1 : 1'b0)) : 
                    ((state == BUSY) ? (selected_we ? 1'b1 : 1'b0) : 1'b1);

// SDRAM Controller Interface Signals - Use latched values once in BUSY state
// Address, data, and data mask connections
assign L_sdrc_addr = (state == IDLE && next_state == BUSY) ? 
                     (icache_data_req ? icache_data_addr : dcache_data_addr) : 
                     ((state == BUSY) ? selected_addr : 32'h0);

assign L_sdrc_dqm = (state == IDLE && next_state == BUSY) ? 
                   ~(icache_data_req ? icache_data_be : dcache_data_be) : 
                   ((state == BUSY) ? ~selected_be : 4'hF); // DQM is active low, BE is active high

assign L_sdrc_data = (state == IDLE && next_state == BUSY) ? 
                    (icache_data_req ? icache_data_wdata : dcache_data_wdata) : 
                    ((state == BUSY) ? selected_wdata : 32'h0);

// Fixed data length for 32-bit (4 byte) transfers
assign L_sdrc_data_len = 8'd4;

// Read Data and Valid Forwarding
assign icache_data_rvalid = current_icache && O_sdrc_rd_valid;
assign dcache_data_rvalid = !current_icache && O_sdrc_rd_valid;
assign icache_data_rdata = O_sdrc_data;
assign dcache_data_rdata = O_sdrc_data;

endmodule
