module riscv32i_cache (
    input  wire        clk,          // Clock
    input  wire        reset,        // Reset

    // CPU Interface
    input  wire [31:0] cpu_addr,     // CPU Address
    input  wire        cpu_read,     // CPU Read Request
    input  wire        cpu_write,    // CPU Write Request
    input  wire [31:0] cpu_wdata,    // CPU Write Data
    output reg  [31:0] cpu_rdata,    // CPU Read Data
    output reg         cpu_stall,    // Stall CPU on miss

    // Memory Interface
    output reg  [31:0] mem_addr,     // Memory Address
    output reg         mem_read,     // Memory Read Request
    output reg         mem_write,    // Memory Write Request
    output reg  [31:0] mem_wdata,    // Memory Write Data
    input  wire [31:0] mem_rdata,    // Memory Read Data
    input  wire        mem_ready     // Memory Ready
);

// Cache Parameters (1KB cache, 32-byte blocks)
localparam CACHE_SIZE  = 1024;        // 1KB Cache
localparam BLOCK_SIZE  = 32;          // 32-byte blocks
localparam NUM_LINES   = CACHE_SIZE / BLOCK_SIZE; // 32 lines
localparam INDEX_BITS  = 5;           // log2(32)
localparam OFFSET_BITS = 5;           // log2(32)
localparam TAG_WIDTH   = 22;          // 32 - 5 - 5 = 22

// FSM States
parameter IDLE         = 2'b00;
parameter FETCH_BLOCK  = 2'b01;
parameter WRITE_MEM    = 2'b10;

reg [1:0] current_state, next_state;

// Cache Storage
reg [TAG_WIDTH-1:0]   tag_table [0:NUM_LINES-1];
reg [31:0]            data_table [0:NUM_LINES-1][0:(BLOCK_SIZE/4)-1]; // 8 words per line
reg                   valid_table [0:NUM_LINES-1];

// Address Breakdown
wire [TAG_WIDTH-1:0]   tag         = cpu_addr[31:10];    // 22-bit tag
wire [INDEX_BITS-1:0]  index       = cpu_addr[9:5];      // 5-bit index
wire [OFFSET_BITS-1:0] offset      = cpu_addr[4:0];     // 5-bit byte offset
wire [2:0]             word_offset = offset[4:2];       // 3-bit word offset (8 words per block)

// Internal Signals
reg [31:0] saved_addr;
reg [31:0] saved_wdata;
reg [2:0]  fetch_count; // Counter to track words fetched in a block

// Initialize cache
always @(posedge clk) begin
    if (reset) begin
        for (integer i = 0; i < NUM_LINES; i++) begin
            valid_table[i] <= 0;
        end
        current_state <= IDLE;
        cpu_stall <= 0;
        fetch_count <= 0;
    end else begin
        current_state <= next_state;
        // Update fetch_count during FETCH_BLOCK
        if (current_state == FETCH_BLOCK && mem_ready) begin
            fetch_count <= (fetch_count == 3'b111) ? 3'b0 : fetch_count + 1;
        end else if (current_state != FETCH_BLOCK) begin
            fetch_count <= 0;
        end
    end
end

// Cache FSM
always @(*) begin
    next_state = current_state;
    mem_read = 0;
    mem_write = 0;
    mem_addr = 0;
    mem_wdata = 0;
    cpu_rdata = 0;
    cpu_stall = 0;

    case (current_state)
        IDLE: begin
            if (cpu_read || cpu_write) begin
                if (valid_table[index] && (tag_table[index] == tag)) begin
                    // Cache hit
                    if (cpu_read) begin
                        cpu_rdata = data_table[index][word_offset];
                    end
                    if (cpu_write) begin
                        data_table[index][word_offset] <= cpu_wdata;
                        mem_addr = cpu_addr;
                        mem_wdata = cpu_wdata;
                        mem_write = 1;
                        cpu_stall = 1;
                        next_state = WRITE_MEM;
                    end
                end else begin
                    // Cache miss
                    cpu_stall = 1;
                    saved_addr = cpu_addr;
                    saved_wdata = cpu_wdata;
                    if (cpu_read) begin
                        mem_addr = {cpu_addr[31:5], 5'b0}; // Block-aligned address
                        mem_read = 1;
                        next_state = FETCH_BLOCK;
                    end else if (cpu_write) begin
                        mem_addr = cpu_addr;
                        mem_wdata = cpu_wdata;
                        mem_write = 1;
                        next_state = WRITE_MEM;
                    end
                end
            end
        end

        FETCH_BLOCK: begin
            cpu_stall = 1;
            mem_read = 1;
            mem_addr = {saved_addr[31:5], 5'b0} + (fetch_count * 4);

            if (mem_ready) begin
                data_table[index][fetch_count] <= mem_rdata;
                if (fetch_count == 3'b111) begin // All 8 words fetched
                    tag_table[index] <= tag;
                    valid_table[index] <= 1;
                    cpu_rdata <= mem_rdata; // Return last word (or adjust as needed)
                    next_state <= IDLE;
                end else begin
                    next_state <= FETCH_BLOCK;
                end
            end
        end

        WRITE_MEM: begin
            cpu_stall = 1;
            mem_write = 1;
            mem_addr = saved_addr;
            mem_wdata = saved_wdata;

            if (mem_ready) begin
                cpu_stall = 0;
                next_state = IDLE;
            end
        end

        default: next_state = IDLE;
    endcase
end

endmodule
