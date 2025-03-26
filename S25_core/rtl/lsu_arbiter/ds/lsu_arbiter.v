module lsu_arbiter (
    input         clk,
    input         rst_n,
    
    // LSU Interface
    output        data_req_o,
    output [31:0] data_addr_o,
    output        data_we_o,
    output [3:0]  data_be_o,
    output [31:0] data_wdata_o,
    input  [31:0] data_rdata_i,
    input         data_rvalid_i,
    input         data_gnt_i,

    // Instruction Cache
    input         icache_req,
    input  [31:0] icache_addr,
    input         icache_we,
    input  [3:0]  icache_be,
    input  [31:0] icache_wdata,
    output        icache_gnt,

    // Data Cache
    input         dcache_req,
    input  [31:0] dcache_addr,
    input         dcache_we,
    input  [3:0]  dcache_be,
    input  [31:0] dcache_wdata,
    output        dcache_gnt
);

parameter [1:0] 
    IDLE       = 2'b00,
    GRANT_WAIT = 2'b01,
    DATA_WAIT  = 2'b10;

reg [1:0] state;
reg select_icache;
reg [31:0] latched_addr;
reg        latched_we;
reg [3:0]  latched_be;
reg [31:0] latched_wdata;
reg [3:0]  wait_counter;

always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        state <= IDLE;
        select_icache <= 0;
        {latched_addr, latched_we, latched_be, latched_wdata} <= 0;
        wait_counter <= 0;
    end else begin
        case (state)
            IDLE: begin
                wait_counter <= 0;
                if (icache_req) begin  // Strict i-cache priority
                    select_icache <= 1'b1;
                    {latched_addr, latched_we, latched_be, latched_wdata} 
                        <= {icache_addr, icache_we, icache_be, icache_wdata};
                    state <= GRANT_WAIT;
                end else if (dcache_req) begin
                    select_icache <= 1'b0;
                    {latched_addr, latched_we, latched_be, latched_wdata} 
                        <= {dcache_addr, dcache_we, dcache_be, dcache_wdata};
                    state <= GRANT_WAIT;
                end
            end
            
            GRANT_WAIT: begin
                if (data_gnt_i) begin
                    state <= DATA_WAIT;
                    wait_counter <= 0;
                end else if (wait_counter == 4'd10) begin  // Timeout
                    state <= IDLE;
                    $display("Warning: Grant timeout");
                end else begin
                    wait_counter <= wait_counter + 1;
                end
            end
            
            DATA_WAIT: begin
                if (data_rvalid_i) begin
                    state <= IDLE;
                end
            end
        endcase
    end
end

assign data_req_o = (state == GRANT_WAIT);
assign data_addr_o = latched_addr;
assign data_we_o = latched_we;
assign data_be_o = latched_be;
assign data_wdata_o = latched_wdata;

assign icache_gnt = select_icache & (state == GRANT_WAIT);
assign dcache_gnt = ~select_icache & (state == GRANT_WAIT);

endmodule
