module riscv_lsu_arbiter #(
    parameter XLEN = 32
)(
    input  wire        clk,
    input  wire        rst_n,

    // Instruction Fetch Interface
    input  wire        if_req_i,
    input  wire [XLEN-1:0] if_addr_i,
    output reg         if_gnt_o,
    output reg         if_valid_o,
    output reg [XLEN-1:0] if_rdata_o,

    // Load/Store Interface
    input  wire        lsu_req_i,
    input  wire [XLEN-1:0] lsu_addr_i,
    input  wire        lsu_we_i,
    input  wire [2:0]  lsu_size_i,
    input  wire [XLEN-1:0] lsu_wdata_i,
    output reg         lsu_gnt_o,
    output reg         lsu_valid_o,
    output reg [XLEN-1:0] lsu_rdata_o,

    // Memory Interface
    output reg         mem_req_o,
    output reg [XLEN-1:0] mem_addr_o,
    output reg         mem_we_o,
    output reg [XLEN-1:0] mem_wdata_o,
    output reg [3:0]   mem_be_o,
    input  wire        mem_gnt_i,
    input  wire        mem_valid_i,
    input  wire [XLEN-1:0] mem_rdata_i
);

    // State Enumeration
    typedef enum logic [1:0] {
        IDLE,
        FETCH_ACTIVE,
        LSU_ACTIVE
    } state_t;

    // State Registers
    state_t current_state, next_state;

    // Byte Enable Generation Function
    function automatic logic [3:0] get_byte_enable(
        input [2:0] size,
        input [1:0] addr_offset
    );
        case (size)
            3'b000, 3'b100:  // Byte (signed/unsigned)
                return 4'b0001 << addr_offset;
            3'b001, 3'b101:  // Half-word (signed/unsigned)
                return 4'b0011 << addr_offset;
            3'b010:  // Word
                return 4'b1111;
            default: 
                return 4'b1111;
        endcase
    endfunction

    // State Transition
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            current_state <= IDLE;
        end else begin
            current_state <= next_state;
        end
    end

    // Next State and Output Logic
    always_comb begin
        // Default Outputs
        next_state = current_state;
        
        mem_req_o = 1'b0;
        mem_addr_o = {XLEN{1'b0}};
        mem_we_o = 1'b0;
        mem_wdata_o = {XLEN{1'b0}};
        mem_be_o = 4'b0;

        if_gnt_o = 1'b0;
        if_valid_o = 1'b0;
        if_rdata_o = {XLEN{1'b0}};

        lsu_gnt_o = 1'b0;
        lsu_valid_o = 1'b0;
        lsu_rdata_o = {XLEN{1'b0}};

        // Arbitration Logic
        case (current_state)
            IDLE: begin
                // Prioritize Instruction Fetch
                if (if_req_i) begin
                    next_state = FETCH_ACTIVE;
                    mem_req_o = 1'b1;
                    mem_addr_o = if_addr_i;
                    mem_be_o = 4'b1111;  // Full word for fetches
                end
                // Fall back to Load/Store
                else if (lsu_req_i) begin
                    next_state = LSU_ACTIVE;
                    mem_req_o = 1'b1;
                    mem_addr_o = lsu_addr_i;
                    mem_we_o = lsu_we_i;
                    mem_wdata_o = lsu_wdata_i;
                    mem_be_o = get_byte_enable(lsu_size_i, lsu_addr_i[1:0]);
                end
            end

            FETCH_ACTIVE: begin
                if (mem_gnt_i) begin
                    if_gnt_o = 1'b1;
                end

                if (mem_valid_i) begin
                    if_valid_o = 1'b1;
                    if_rdata_o = mem_rdata_i;
                    next_state = IDLE;
                end
            end

            LSU_ACTIVE: begin
                if (mem_gnt_i) begin
                    lsu_gnt_o = 1'b1;
                end

                if (mem_valid_i) begin
                    lsu_valid_o = 1'b1;
                    lsu_rdata_o = mem_rdata_i;
                    next_state = IDLE;
                end
            end

            default: begin
                next_state = IDLE;
            end
        endcase
    end

endmodule
