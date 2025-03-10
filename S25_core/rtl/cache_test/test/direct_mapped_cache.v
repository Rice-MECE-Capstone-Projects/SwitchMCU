module direct_mapped_cache #(
    parameter ADDRESS_WIDTH = 32,
    parameter CACHE_SIZE_BYTES = 4096,
    parameter BLOCK_SIZE_BYTES = 32
) (
    input clk,
    input rst,
    input [ADDRESS_WIDTH-1:0] cpu_addr,
    input [BLOCK_SIZE_BYTES*8-1:0] cpu_wdata,
    input cpu_read,
    input cpu_write,
    output reg [BLOCK_SIZE_BYTES*8-1:0] cpu_rdata,
    output cache_hit,
    output [ADDRESS_WIDTH-1:0] mem_addr,
    output [BLOCK_SIZE_BYTES*8-1:0] mem_wdata,
    output mem_read,
    output mem_write
);

    // Calculate cache parameters
    localparam OFFSET_BITS = $clog2(BLOCK_SIZE_BYTES);
    localparam NUM_SETS = CACHE_SIZE_BYTES / BLOCK_SIZE_BYTES;
    localparam INDEX_BITS = $clog2(NUM_SETS);
    localparam TAG_BITS = ADDRESS_WIDTH - INDEX_BITS - OFFSET_BITS;

    // Cache memory
    reg [BLOCK_SIZE_BYTES*8-1:0] cache_data [NUM_SETS-1:0];
    reg [TAG_BITS-1:0] cache_tag [NUM_SETS-1:0];
    reg valid [NUM_SETS-1:0];

    // Address decomposition
    wire [TAG_BITS-1:0] tag = cpu_addr[ADDRESS_WIDTH-1:ADDRESS_WIDTH-TAG_BITS];
    wire [INDEX_BITS-1:0] index = cpu_addr[ADDRESS_WIDTH-TAG_BITS-1:OFFSET_BITS];
    wire [OFFSET_BITS-1:0] offset = cpu_addr[OFFSET_BITS-1:0];

    // Cache hit/miss logic
    assign cache_hit = valid[index] && (cache_tag[index] == tag) && cpu_read;

    // Memory interface signals
    assign mem_addr = {tag, index, {OFFSET_BITS{1'b0}}}; // Memory address is block aligned
    assign mem_wdata = cpu_wdata; // Write through: write data to memory
    assign mem_read = cpu_read && !cache_hit; // Read from memory on miss
    assign mem_write = cpu_write; // Write to memory on every cpu write

    // Cache update logic
    always @(posedge clk) begin
        if (rst) begin
            for (integer i = 0; i < NUM_SETS; i = i + 1) begin
                valid[i] <= 1'b0;
            end
        end else begin
            if (cpu_read && !cache_hit) begin // Cache miss on read
                cache_data[index] <= mem_read_data; // Load data from memory
                cache_tag[index] <= tag;
                valid[index] <= 1'b1;
            end
            if (cpu_read && cache_hit) begin
                cpu_rdata <= cache_data[index];
            end
        end
    end

    reg [BLOCK_SIZE_BYTES*8-1:0] mem_read_data;

    // Memory simulation is now in the testbench.
    // The cache module should not have direct access to memory.

endmodule
