// ===============================================
// cache.v — ports aligned + robust fill path
// ===============================================
module cache (
    input  wire        clk,
    input  wire        reset,

    // CPU side
    input  wire [31:0] cpu_addr,
    input  wire [31:0] cpu_wdata,
    input  wire        data_req,
    input  wire        data_we,
    input  wire [3:0]  data_be,
    output reg  [31:0] cpu_rdata,
    output reg         data_rvalid,
    output reg         data_gnt,
    output reg         cpu_stall,

    // Cache → Interface (match TB/interface)
    output reg  [31:0] mem_addr_block,    //change: aligned base for burst
    output reg  [31:0] mem_addr,          //change: single-word addr (write-miss)
    output reg         mem_read,
    output reg         mem_write,
    output reg  [255:0] mem_wdata_block,
    output reg  [31:0]  miss_mem_wdata,

    // Interface → Cache
    input  wire [255:0] mem_rdata_array,  //change
    input  wire         mem_ready,        //change

    output reg  [2:0]   state
);

    // -------- Params --------
    localparam CACHE_SIZE      = 2048;   // bytes
    localparam BLOCK_SIZE      = 32;     // 8 words
    localparam WORDS_PER_BLOCK = 8;
    localparam WORD_OFF_W      = 3;
    localparam BYTE_OFF_W      = 2;
    localparam NUM_LINES       = CACHE_SIZE / BLOCK_SIZE; // 64
    localparam INDEX_W         = 6;
    localparam TAG_W           = 32 - INDEX_W - WORD_OFF_W - BYTE_OFF_W;

    // -------- Storage (keep names for TB) --------
    reg [TAG_W-1:0]  tag_table   [0:NUM_LINES-1];
    reg              valid_table [0:NUM_LINES-1];
    reg [31:0]       data_table  [0:NUM_LINES-1][0:WORDS_PER_BLOCK-1];

    // -------- Address fields --------
    wire [TAG_W-1:0]      tag   = cpu_addr[31 : 32-TAG_W];
    wire [INDEX_W-1:0]    index = cpu_addr[32-TAG_W-1 : WORD_OFF_W+BYTE_OFF_W];
    wire [WORD_OFF_W-1:0] woff  = cpu_addr[WORD_OFF_W+BYTE_OFF_W-1 : BYTE_OFF_W];

    // -------- FSM --------
    localparam S_IDLE    = 3'd0;
    localparam S_MISS_RD = 3'd1;
    localparam S_WB      = 3'd2;
    localparam S_MISS_WR = 3'd3;

    reg [2:0] cs, ns;

    // -------- Miss bookkeeping (SEQ-latched) --------
    reg [INDEX_W-1:0] miss_idx;       //change
    reg [TAG_W-1:0]   miss_tag;       //change
    reg [31:0]        base_addr;      //change (aligned 32B)
    reg               fill_pending;   //change
    reg               fill_committed; //change

    integer i;

    // Optional: debug task you can call from TB
    task automatic debug_dump_line(input [INDEX_W-1:0] idx);
        integer j;
        begin
            $write("Cache Line Index %0d (Tag %0h, Valid %0b): ",
                    idx, tag_table[idx], valid_table[idx]);
            for (j = 0; j < WORDS_PER_BLOCK; j = j + 1)
                $write("%08h ", data_table[idx][j]);
            $write("\n");
        end
    endtask


    always @(posedge clk) begin
        if (reset) begin
            cs              <= S_IDLE;
            state           <= S_IDLE;
            data_rvalid     <= 1'b0;
            data_gnt        <= 1'b0;
            cpu_stall       <= 1'b0;

            mem_read        <= 1'b0;
            mem_write       <= 1'b0;
            mem_addr_block  <= 32'b0;   //change
            mem_addr        <= 32'b0;   //change
            mem_wdata_block <= 256'b0;
            miss_mem_wdata  <= 32'b0;

            miss_idx        <= {INDEX_W{1'b0}}; //change
            miss_tag        <= {TAG_W{1'b0}};   //change
            base_addr       <= 32'b0;           //change
            fill_pending    <= 1'b0;            //change
            fill_committed  <= 1'b0;            //change
            cpu_rdata       <= 32'b0;
        end else begin
            cs    <= ns;
            state <= ns;

            //  Entering MISS_RD: latch miss context
            //change
            if (cs == S_IDLE && ns == S_MISS_RD) begin
                miss_idx     <= index;
                miss_tag     <= tag;
                base_addr    <= {cpu_addr[31:WORD_OFF_W+BYTE_OFF_W],
                                 {(WORD_OFF_W+BYTE_OFF_W){1'b0}}};
                fill_pending <= 1'b1;
                fill_committed <= 1'b0;
            end

            //Commit the 256-bit fill exactly when mem_ready
            //change
            if (cs == S_MISS_RD && mem_ready && fill_pending && !fill_committed) begin
                // write the 8 words into the cache line atomically
                for (i = 0; i < WORDS_PER_BLOCK; i = i + 1)
                    data_table[miss_idx][i] <= mem_rdata_array[(i*32) +: 32];
                tag_table[miss_idx]   <= miss_tag;
                valid_table[miss_idx] <= 1'b1;
                fill_committed        <= 1'b1;
            end

            //Leaving MISS_RD: clear flags
            //change
            if (cs == S_MISS_RD && ns != S_MISS_RD) begin
                fill_pending   <= 1'b0;
                fill_committed <= 1'b0;
            end
        end
    end

    always @* begin
        // defaults
        ns              = cs;
        data_rvalid     = 1'b0;
        data_gnt        = 1'b0;
        cpu_stall       = 1'b0;

        mem_read        = 1'b0;
        mem_write       = 1'b0;
        mem_addr_block  = 32'b0;     //change
        mem_addr        = 32'b0;     //change
        mem_wdata_block = 256'b0;
        miss_mem_wdata  = 32'b0;

        // pack current line for write-back/write-hit
        for (i = 0; i < WORDS_PER_BLOCK; i = i + 1)
            mem_wdata_block[(i*32)+:32] = data_table[index][i];

        case (cs)
            // ---------------- IDLE ----------------
            S_IDLE: begin
                if (data_req) begin
                    if (!data_we) begin
                        // READ
                        if (valid_table[index] && (tag_table[index] == tag)) begin
                            // hit
                            data_gnt    = 1'b1;
                            data_rvalid = 1'b1;
                            cpu_rdata   = data_table[index][woff];
                            ns          = S_IDLE;
                        end else begin
                            // miss → start burst read
                            cpu_stall      = 1'b1;
                            mem_read       = 1'b1;
                            mem_addr_block = {cpu_addr[31:WORD_OFF_W+BYTE_OFF_W],
                                              {(WORD_OFF_W+BYTE_OFF_W){1'b0}}}; //change
                            ns             = S_MISS_RD;
                        end
                    end else begin
                        // WRITE
                        if (valid_table[index] && (tag_table[index] == tag)) begin
                            // write hit → update array + write-back line
                            cpu_stall = 1'b1;

                            for (i = 0; i < WORDS_PER_BLOCK; i = i + 1)
                                mem_wdata_block[(i*32)+:32] = (i==woff) ? cpu_wdata : data_table[index][i];
                            for (i = 0; i < WORDS_PER_BLOCK; i = i + 1)
                                if (i==woff) data_table[index][i] = cpu_wdata;

                            mem_write      = 1'b1;
                            mem_addr_block = {cpu_addr[31:WORD_OFF_W+BYTE_OFF_W],
                                              {(WORD_OFF_W+BYTE_OFF_W){1'b0}}}; //change
                            ns             = S_WB;
                        end else begin
                            // write miss → no-write-allocate (single word)
                            cpu_stall      = 1'b1;
                            mem_write      = 1'b1;
                            mem_addr       = cpu_addr;       //change
                            miss_mem_wdata = cpu_wdata;
                            ns             = S_MISS_WR;
                        end
                    end
                end
            end

            //MISS READ (burst)
            S_MISS_RD: begin
                cpu_stall      = 1'b1;
                mem_read       = 1'b1;
                mem_addr_block = base_addr; //change

                // Serve load as soon as the block arrives (don’t wait a cycle)
                //change
                if (mem_ready) begin
                    data_gnt    = 1'b1;
                    data_rvalid = 1'b1;
                    // return directly from the packed block just received
                    cpu_rdata   = mem_rdata_array[(woff*32)+:32];
                    cpu_stall   = 1'b0;
                    ns          = S_IDLE;
                end
            end

            // WRITE-BACK (burst)
            S_WB: begin
                cpu_stall      = 1'b1;
                mem_write      = 1'b1;
                mem_addr_block = {cpu_addr[31:WORD_OFF_W+BYTE_OFF_W],
                                  {(WORD_OFF_W+BYTE_OFF_W){1'b0}}}; //change
                if (mem_ready) begin
                    data_gnt  = 1'b1;
                    cpu_stall = 1'b0;
                    ns        = S_IDLE;
                end
            end

            // MISS WRITE (single)
            S_MISS_WR: begin
                cpu_stall = 1'b1;
                mem_write = 1'b1;
                mem_addr  = cpu_addr; //change
                if (mem_ready) begin
                    data_gnt  = 1'b1;
                    cpu_stall = 1'b0;
                    ns        = S_IDLE;
                end
            end

            default: ns = S_IDLE;
        endcase
    end
endmodule
