module cache (
    input wire clk, reset,
    input wire [63:0] Single_Instruction,
    input wire [31:0] cpu_addr,
    input wire [31:0] cpu_wdata,
    output reg [31:0] cpu_rdata,
    output reg cpu_stall,
    output reg [31:0] mem_addr,
    output reg mem_read,
    output reg mem_write,
    output reg [255:0] mem_wdata_array,
    input wire [255:0] mem_rdata_array,
    input wire mem_ready
);

// State definitions
reg [1:0] current_state, next_state;
localparam 
    idle_state      = 2'b00,
    fetch_mem_state = 2'b01,
    write_mem_state = 2'b10;

// Cache parameters
localparam 
    cache_size          = 2048,
    block_size          = 32,
    num_lines           = cache_size / block_size,
    word_offset_width   = 3,
    byte_offset_width   = 2,
    index_width         = 6,
    tag_width           = 21;

// Memory data buffers
reg [31:0] mem_wdata [0:(block_size/4)-1];
reg [31:0] mem_rdata [0:(block_size/4)-1];

// Cache storage
reg [tag_width-1:0] tag_table [0:num_lines-1];
reg [31:0] data_table [0:num_lines-1][0:(block_size/4)-1];
reg valid_table [0:num_lines-1];

// Address decomposition
wire [word_offset_width-1:0] word_offset;
wire [byte_offset_width-1:0] byte_offset;
wire [index_width-1:0] index;
wire [tag_width-1:0] tag;
wire [31:0] selected_word;

// Instruction decoding
wire cpu_read, cpu_write;

integer i, j; // Declare loop variables outside blocks

assign word_offset = cpu_addr[(word_offset_width + byte_offset_width)-1:byte_offset_width];
assign byte_offset = cpu_addr[1:0];
assign index = cpu_addr[(32-tag_width-1):(word_offset_width + byte_offset_width)];
assign tag = cpu_addr[31:(32-tag_width)];
assign selected_word = data_table[index][word_offset];

assign cpu_read = (Single_Instruction[6:0] == 7'b0000011); // Load
assign cpu_write = (Single_Instruction[6:0] == 7'b0100011);  // Store

// Memory data packing
always @(*) begin
    for (i = 0; i < (block_size/4); i = i+1) begin
        mem_wdata_array[(i*32)+:32] = mem_wdata[i];
        mem_rdata[i] = mem_rdata_array[(i*32)+:32];
    end
end

// State machine
always @(posedge clk) begin
    if (reset) begin
        current_state <= idle_state;
        cpu_stall <= 0;
        for (i = 0; i < num_lines; i = i+1) begin
            tag_table[i] <= 0;
            valid_table[i] <= 0;
            for (j = 0; j < (block_size/4); j = j+1) begin
                data_table[i][j] <= 0;
            end
        end
    end else begin
        current_state <= next_state;
    end
end

// Combinational logic
always @(*) begin
    // Default assignments
    next_state = current_state;
    cpu_rdata = 32'b0;
    cpu_stall = 1'b0;
    mem_addr = 32'b0;
    mem_read = 1'b0;
    mem_write = 1'b0;

    case (current_state)
        idle_state: begin
            if (cpu_read || cpu_write) begin
                if (valid_table[index] && (tag_table[index] == tag)) begin
                    cpu_stall = 1'b0;
                    if (cpu_read) begin
                        case (Single_Instruction[14:12])
                            3'b000: cpu_rdata = $signed(selected_word[(byte_offset*8) +:8]);
                            3'b001: cpu_rdata = $signed(selected_word[(byte_offset*16) +:16]);
                            3'b010: cpu_rdata = selected_word;
                            3'b100: cpu_rdata = $unsigned(selected_word[(byte_offset*8) +:8]);
                            3'b101: cpu_rdata = $unsigned(selected_word[(byte_offset*16) +:16]);
                            default: cpu_rdata = 32'b0;
                        endcase
                    end else if (cpu_write) begin
                        case (Single_Instruction[14:12])
                            3'b000: data_table[index][word_offset] = 
                                (selected_word & ~(32'hFF << (byte_offset*8))) | 
                                (cpu_wdata[7:0] << (byte_offset*8));
                            3'b001: data_table[index][word_offset] = 
                                (selected_word & ~(32'hFFFF << (byte_offset*16))) | 
                                (cpu_wdata[15:0] << (byte_offset*16));
                            3'b010: data_table[index][word_offset] = cpu_wdata;
                        endcase
                        mem_addr = {cpu_addr[31:5], 5'b0};
                        mem_write = 1'b1;
                        cpu_stall = 1'b1;
                        next_state = write_mem_state;
                    end
                end else begin
                    mem_addr = {cpu_addr[31:5], 5'b0};
                    mem_read = 1'b1;
                    cpu_stall = 1'b1;
                    next_state = fetch_mem_state;
                end
            end
        end

        fetch_mem_state: begin
            mem_read = 1'b1;
            cpu_stall = 1'b1;
            if (mem_ready) begin
                for (i = 0; i < (block_size/4); i = i+1) begin
                    data_table[index][i] = mem_rdata[i];
                end
                tag_table[index] = tag;
                valid_table[index] = 1'b1;
                cpu_stall = 1'b0;
                next_state = idle_state;
            end
        end

        write_mem_state: begin
            mem_write = 1'b1;
            cpu_stall = 1'b1;
            if (mem_ready) begin
                cpu_stall = 1'b0;
                next_state = idle_state;
            end
        end

        default: begin
            next_state = idle_state;
        end
    endcase
end

endmodule
