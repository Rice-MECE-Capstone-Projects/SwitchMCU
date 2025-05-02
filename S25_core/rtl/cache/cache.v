module cache (
    input wire clk, reset,

    // cpu interface
    input wire [31:0] cpu_addr,
    input wire [31:0] cpu_wdata,
    output reg [31:0] cpu_rdata,
    input wire data_req,
    input wire data_we,
    input wire [3:0] data_be,
    output reg data_rvalid,
    output reg data_gnt,
    output reg cpu_stall,

    //mem interface
    output reg [31:0] mem_addr_block,
    output reg [31:0] mem_addr,
    output reg mem_read,
    output reg mem_write,
    output reg [255:0] mem_wdata_block,
    output reg [31:0] miss_mem_wdata,
    input wire [255:0] mem_rdata_array,
    input wire mem_ready,
    output reg [2:0] state
);

// FSM state variables
reg [2:0] current_state, next_state;
localparam idle_state = 3'b000, fetch_mem_state = 3'b001, write_mem_state = 3'b010, miss_write_mem_state = 3'b011, wait_store_state = 3'b100;
// Instruction type decoding
localparam inst_LB = 4'b0000, inst_LH = 4'b0001, inst_LW = 4'b0010, inst_LBU = 4'b0011, inst_LHU = 4'b0100, inst_SB = 4'b0101, inst_SH = 4'b0110, inst_SW = 4'b0111; 

localparam cache_size = 2048; // 2KB
localparam block_size = 32; // 8 blocks
localparam num_lines = cache_size / block_size;  // 64 lines
localparam word_offset_width = 3; // log2(8) 
localparam byte_offset_width = 2; // log2(4)
localparam index_width = 6; // log2(64)
localparam tag_width = 21; // 32 - 6 - 3 - 2

reg [31:0] mem_wdata[0:((block_size/4) - 1)];
reg [31:0] mem_rdata[0:((block_size/4) - 1)];

always @(*) begin
    for (integer i = 0; i < (block_size/4); i++) begin
        mem_wdata_block[(i * 32) +: 32] = mem_wdata[i];
        mem_rdata[i] = mem_rdata_array[(i * 32) +: 32];
    end
end

wire cpu_read;
wire cpu_write;
reg [3:0] save_store_inst;
reg [31:0] save_store_addr;
wire new_inst_req;
wire new_addr_req;
wire data_req_in;

// Cache structures
reg [tag_width-1:0] tag_table [0:num_lines-1];
reg [31:0]          data_table [0:num_lines-1][0:(block_size/4) - 1];
reg                 valid_table [0:num_lines-1];

// Address decomposition
wire [tag_width-1:0] tag;
wire [index_width-1:0] index;
wire [word_offset_width-1:0] word_offset;
wire [byte_offset_width-1:0] byte_offset;
wire [31:0] selected_word;
assign tag = cpu_addr[31:(32-tag_width)];
assign index = cpu_addr[(32-tag_width-1):(word_offset_width + byte_offset_width)];
assign word_offset = cpu_addr[(word_offset_width + byte_offset_width - 1): byte_offset_width];
assign byte_offset = cpu_addr[1:0];
assign selected_word = data_table[index][word_offset];

always @(posedge clk) begin
        save_store_inst <= data_be;
        save_store_addr <= cpu_addr;
end

assign new_inst_req = (data_be != save_store_inst);
assign new_addr_req = (cpu_addr != save_store_addr);

// Detect valid data request (new address or instruction, or any store)
assign data_req_in = data_req && (new_addr_req || new_inst_req) || data_be == inst_SW || data_be == inst_SH || data_be == inst_SB;

// Sequential block for state transition and cache reset
always @(posedge clk) begin
    if (reset) begin
        current_state <= idle_state;
        cpu_stall <= 0;
        miss_mem_wdata <= 32'b0;
        state <= 3'b000;
        data_rvalid <= 0;
        data_gnt <= 0;
        for (integer i = 0; i < num_lines; i++) begin
        tag_table[i] <= 21'b0;
        valid_table[i] <= 0;
            for (integer j = 0; j < (block_size/4); j++) begin
                data_table[i][j] <= 32'b0;
                mem_wdata[j] <= 32'b0;
            end
        end
    end else begin
        current_state <= next_state;
    end 
end

// FSM logic: decode current state and generate next state and outputs
always @(*) begin

    next_state = current_state;
    cpu_rdata = 32'b0;
    cpu_stall = 0;
    mem_addr_block = 32'b0;
    mem_addr = 32'b0;
    mem_read = 0;
    mem_write = 0;
    data_rvalid = 0;
    data_gnt = 0;

    case (current_state) 
    idle_state: begin
        state = idle_state;
        if (data_req_in || data_be == inst_LB || data_be == inst_LH || data_be == inst_LW || data_be == inst_LBU || data_be == inst_LHU ) begin
          
          // cache hit
            if (valid_table[index] && (tag_table[index] == tag)) begin
                if (data_we == 0) begin
                    case (data_be)
                        inst_LB: begin
                            cpu_rdata = {{24{selected_word[(byte_offset * 8) + 7]}}, selected_word[(byte_offset * 8) +: 8 ]};
                            data_rvalid = 1;
                            data_gnt = 1;
                            next_state = idle_state;
                        end
                        inst_LH: begin
                            cpu_rdata = {{16{selected_word[(byte_offset * 16) + 15]}}, selected_word[(byte_offset * 16) +: 16 ]};
                            data_rvalid = 1;
                            data_gnt = 1;
                            next_state = idle_state;
                        end
                        inst_LW: begin
                            cpu_rdata = data_table[index][word_offset];
                            data_rvalid = 1;
                            data_gnt = 1;
                            next_state = idle_state;
                        end
                        inst_LBU: begin
                            cpu_rdata = {24'b0, selected_word[(byte_offset * 8) +: 8 ]};
                            data_rvalid = 1;
                            data_gnt = 1;
                            next_state = idle_state;
                        end
                        inst_LHU: begin
                            cpu_rdata = {16'b0, selected_word[(byte_offset * 16) +: 16 ]};
                            data_rvalid = 1;
                            data_gnt = 1;
                            next_state = idle_state;
                        end
                        default: begin
                            cpu_rdata = 32'b0;
                            data_rvalid = 0;
                            data_gnt = 0;
                        end
                    endcase
                end
                
                else if (data_we == 1) begin
                    case (data_be)
                        inst_SB: begin
                            data_table[index][word_offset] = (data_table[index][word_offset] & ~(32'hFF << (byte_offset * 8))) | ((cpu_wdata[7:0] & 32'hFF) << (byte_offset * 8)); 
                            mem_addr_block = {cpu_addr[31:(word_offset_width + byte_offset_width)], {(word_offset_width + byte_offset_width){1'b0}}};
                            mem_addr = cpu_addr;
                            for (integer i = 0; i < (block_size/4); i++) begin
                                mem_wdata[i] = data_table[index][i];
                            end
                            mem_write = 1;
                            cpu_stall = 1;
                            data_gnt = 0;
                            next_state = write_mem_state;
                        end
                        inst_SH: begin
                            data_table[index][word_offset] = (data_table[index][word_offset] & ~(32'hFFFF << (byte_offset * 16))) | ((cpu_wdata[15:0] & 32'hFFFF) << (byte_offset * 16)); 
                            mem_addr_block = {cpu_addr[31:(word_offset_width + byte_offset_width)], {(word_offset_width + byte_offset_width){1'b0}}};
                            mem_addr = cpu_addr;
                            for (integer i = 0; i < (block_size/4); i++) begin
                                mem_wdata[i] = data_table[index][i];
                            end
                            mem_write = 1;
                            cpu_stall = 1;
                            data_gnt = 0;
                            next_state = write_mem_state;
                        end
                        inst_SW: begin
                            data_table[index][word_offset] = cpu_wdata;
                            mem_addr_block = {cpu_addr[31:(word_offset_width + byte_offset_width)], {(word_offset_width + byte_offset_width){1'b0}}};
                            mem_addr = cpu_addr;
                            for (integer i = 0; i < (block_size/4); i++) begin
                                mem_wdata[i] = data_table[index][i];
                            end
                            mem_write = 1;
                            cpu_stall = 1;
                            data_gnt = 0;
                            next_state = write_mem_state;
                        end
                        default: begin
                            for (integer i = 0; i < num_lines; i++) begin
                                tag_table[i] = 21'b0;
                                valid_table[i] = 0;
                                for (integer j = 0; j < (block_size/4); j++) begin
                                    data_table[i][j] = 32'b0;
                                    mem_wdata[j] = 32'b0;
                                end
                            end
                            mem_addr_block = 32'b0;
                            mem_addr = 32'b0;
                            mem_write = 0;
                            cpu_stall = 0;
                            data_gnt = 0;
                            next_state = idle_state;
                        end
                    endcase
                end

            // cache miss
            end else begin
                cpu_stall = 1;
                if (data_we == 0) begin
                    case (data_be)
                        inst_LB: begin
                            mem_addr_block = {cpu_addr[31:(word_offset_width + byte_offset_width)], {(word_offset_width + byte_offset_width){1'b0}}};
                            mem_addr = cpu_addr;
                            mem_read = 1;
                            data_rvalid = 0;
                            data_gnt = 0;
                            next_state = fetch_mem_state;
                        end
                        inst_LH: begin
                            mem_addr_block = {cpu_addr[31:(word_offset_width + byte_offset_width)], {(word_offset_width + byte_offset_width){1'b0}}};
                            mem_addr = cpu_addr;
                            mem_read = 1;
                            data_rvalid = 0;
                            data_gnt = 0;
                            next_state = fetch_mem_state;
                        end
                        inst_LW: begin
                            mem_addr_block = {cpu_addr[31:(word_offset_width + byte_offset_width)], {(word_offset_width + byte_offset_width){1'b0}}};
                            mem_addr = cpu_addr;
                            mem_read = 1;
                            data_rvalid = 0;
                            data_gnt = 0;
                            next_state = fetch_mem_state;
                        end
                        inst_LBU: begin
                            mem_addr_block = {cpu_addr[31:(word_offset_width + byte_offset_width)], {(word_offset_width + byte_offset_width){1'b0}}};
                            mem_addr = cpu_addr;
                            mem_read = 1;
                            data_rvalid = 0;
                            data_gnt = 0;
                            next_state = fetch_mem_state;
                        end
                        inst_LHU: begin
                            mem_addr_block = {cpu_addr[31:(word_offset_width + byte_offset_width)], {(word_offset_width + byte_offset_width){1'b0}}};
                            mem_addr = cpu_addr;
                            mem_read = 1;
                            data_rvalid = 0;
                            data_gnt = 0;
                            next_state = fetch_mem_state;
                        end
                        default: begin
                            mem_addr_block = 32'b0;
                            mem_addr = 32'b0;
                            mem_read = 0;
                            data_rvalid = 0;
                            data_gnt = 0;
                            next_state = idle_state;
                        end
                    endcase
                    
                end else if (data_we == 1) begin
                    case (data_be)
                        inst_SB: begin
                            mem_addr_block = {cpu_addr[31:(word_offset_width + byte_offset_width)], {(word_offset_width + byte_offset_width){1'b0}}};
                            mem_addr = cpu_addr;
                            mem_write = 1;
                            cpu_stall = 1;
                            data_gnt = 0;
                            if (byte_offset == 2'b00) begin
                                miss_mem_wdata = (32'hFF & cpu_wdata);
                            end else if (byte_offset == 2'b01) begin
                                miss_mem_wdata = (32'hFF00 & cpu_wdata);
                            end else if (byte_offset == 2'b10) begin
                                miss_mem_wdata = (32'hFF0000 & cpu_wdata);
                            end else if (byte_offset == 2'b11) begin
                                miss_mem_wdata = (32'hFF000000 & cpu_wdata);
                            end
                            next_state = miss_write_mem_state;
                        end
                        inst_SH: begin
                            mem_addr_block = {cpu_addr[31:(word_offset_width + byte_offset_width)], {(word_offset_width + byte_offset_width){1'b0}}};
                            mem_addr = cpu_addr;
                            mem_write = 1;
                            cpu_stall = 1;
                            data_gnt = 0;
                            if (byte_offset == 2'b00) begin
                                miss_mem_wdata = (32'hFFFF & cpu_wdata);
                            end else if (byte_offset == 2'b01) begin
                                miss_mem_wdata = (32'hFFFF0000 & cpu_wdata);
                            end else begin
                                miss_mem_wdata = 32'd0;
                            end
                            next_state = miss_write_mem_state;
                        end
                        inst_SW: begin
                            mem_addr_block = {cpu_addr[31:(word_offset_width + byte_offset_width)], {(word_offset_width + byte_offset_width){1'b0}}};
                            mem_addr = cpu_addr;
                            mem_write = 1;
                            cpu_stall = 1;
                            data_gnt = 0;
                            miss_mem_wdata = cpu_wdata;
                            next_state = miss_write_mem_state;
                        end
                        default: begin
                            mem_addr_block = 32'b0;
                            mem_addr = 32'b0;
                            miss_mem_wdata = 32'b0;
                            mem_write = 0;
                            cpu_stall = 0;
                            data_gnt = 0;
                            next_state = idle_state;
                        end
                    endcase
                end
            end
        end else begin
            next_state = idle_state;
        end
    end

// Cache miss: Fetch block from memory
    fetch_mem_state: begin
        cpu_stall = 1;
        mem_read = 1;
        mem_addr_block = {cpu_addr[31:(word_offset_width + byte_offset_width)], {(word_offset_width + byte_offset_width){1'b0}}};
        mem_addr = cpu_addr;
        state = fetch_mem_state;
        data_rvalid = 0;
        data_gnt = 0;

        if (mem_ready) begin
            mem_read = 0;
            tag_table[index] = tag;
            valid_table[index] = 1;
            for (integer i = 0; i < (block_size/4); i++) begin
                data_table[index][i] = mem_rdata[i];
            end
            next_state = idle_state;
        end
    end

// Cache write-back
    write_mem_state: begin
        cpu_stall = 1;
        mem_write = 1;
        mem_addr_block = {cpu_addr[31:(word_offset_width + byte_offset_width)], {(word_offset_width + byte_offset_width){1'b0}}};
        mem_addr = cpu_addr;
        state = write_mem_state;
        data_gnt = 0;
        for (integer i = 0; i < (block_size/4); i++) begin
                mem_wdata[i] = data_table[index][i];
        end
        if (mem_ready) begin
            mem_write = 0;
            cpu_stall = 1;
            for (integer i = 0; i < num_lines; i++) begin
                for (integer j = 0; j < (block_size/4); j++) begin
                    mem_wdata[j] = 32'b0;
                end
            end
            next_state = wait_store_state;
        end
    end

// No-write-allocate policy: Write the value directly to memory on store miss
    miss_write_mem_state: begin
        state = miss_write_mem_state;
        cpu_stall = 1;
        mem_write = 1;
        data_gnt = 0;
        mem_addr_block = {cpu_addr[31:(word_offset_width + byte_offset_width)], {(word_offset_width + byte_offset_width){1'b0}}};
        mem_addr = cpu_addr;
        
        if(mem_ready) begin
            mem_write = 0;
            cpu_stall = 1;
            miss_mem_wdata <= 32'b0;
            next_state = wait_store_state;
        end
    end

// CPU can proceed after store/memory write is done
    wait_store_state: begin
        cpu_stall = 0;
        data_gnt = 1;
        state = wait_store_state;
        if (new_inst_req || new_addr_req) begin
            cpu_stall = 1;
            data_gnt = 0;
            next_state = idle_state;
        end else begin
            next_state = wait_store_state;
        end
    end 

    default: begin
        cpu_rdata = 32'b0;
        cpu_stall = 0;
        mem_addr = 32'b0;
        mem_addr_block = 32'b0;
        mem_read = 0;
        mem_write = 0;
        data_rvalid = 0;
        data_gnt = 0;
        for (integer i = 0; i < (block_size/4); i++) begin
        mem_wdata[i] = 32'b0;
        end
        next_state = idle_state;
    end
    endcase 
end
endmodule