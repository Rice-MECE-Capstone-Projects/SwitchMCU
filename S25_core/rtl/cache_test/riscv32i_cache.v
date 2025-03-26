module cache (
    input wire clk, reset,

    // cpu interface
    input wire [63:0] Single_Instruction,
    input wire [31:0] cpu_addr,
    input wire [31:0] cpu_wdata,
    output reg [31:0] cpu_rdata,
    output reg cpu_stall,

    //mem interface
    output reg [31:0] mem_addr,
    output reg mem_read,
    output reg mem_write,
    output reg [255:0] mem_wdata_array,
    input wire [255:0] mem_rdata_array,
    input wire mem_ready
);

reg [1:0] current_state, next_state;

localparam idle_state = 2'b00, 
           fetch_mem_state = 2'b01, 
           write_mem_state = 2'b10;

localparam cache_size = 2048;    //2KB
localparam block_size = 32;      //8 blocks
localparam num_lines = cache_size / block_size;  //64 lines
localparam word_offset_width = 3;
localparam byte_offset_width = 2;
localparam index_width = 6;
localparam tag_width = 21;

reg [31:0] mem_wdata[0:((block_size/4)-1)];
reg [31:0] mem_rdata[0:((block_size/4)-1)];

always @(*) begin
    for (integer i = 0; i < (block_size/4); i++) begin
        mem_wdata[i] = mem_wdata_array[(i*32) +: 32];
        mem_rdata[i] = mem_rdata_array[(i*32) +: 32];
    end
end

wire cpu_read;
wire cpu_write;
wire stall_needed;

reg [tag_width-1:0] tag_table [0:num_lines-1];
reg [31:0]          data_table [0:num_lines-1][0:(block_size/4)-1];
reg                 valid_table [0:num_lines-1];

wire [word_offset_width-1:0] word_offset = cpu_addr[(word_offset_width + byte_offset_width - 1): byte_offset_width];
wire [byte_offset_width-1:0] byte_offset = cpu_addr[1:0];
wire [index_width-1:0] index = cpu_addr[(32-tag_width-1):(word_offset_width + byte_offset_width)];
wire [tag_width-1:0] tag = cpu_addr[31:(32-tag_width)];
wire [31:0] selected_word = data_table[index][word_offset];

assign cpu_read = ((Single_Instruction == 64'hLB)  ||
                 (Single_Instruction == 64'hLH)  ||
                 (Single_Instruction == 64'hLW)  ||
                 (Single_Instruction == 64'hLBU) ||
                 (Single_Instruction == 64'hLHU));

assign stall_needed = ((Single_Instruction == 64'hLB)  ||
                     (Single_Instruction == 64'hLH)  ||
                     (Single_Instruction == 64'hLW)  ||
                     (Single_Instruction == 64'hLBU) ||
                     (Single_Instruction == 64'hLHU));
                  
assign cpu_write = ((Single_Instruction == 64'hSB) ||
                  (Single_Instruction == 64'hSH) ||
                  (Single_Instruction == 64'hSW));   

always @(posedge clk) begin
    if (reset) begin
        current_state <= idle_state;
        cpu_stall <= 0;
        for (integer i = 0; i < num_lines; i++) begin
            tag_table[i] <= 21'b0;
            valid_table[i] <= 0;
            for (integer j = 0; j < (block_size/4); j++) begin
                data_table[i][j] <= 32'b0;
            end
        end
        mem_wdata_array <= 256'b0;
    end else begin
        current_state <= next_state;
    end 
end

always @(*) begin
    next_state = current_state;
    cpu_rdata = 32'b0;
    cpu_stall = 0;
    mem_addr = 32'b0;
    mem_read = 0;
    mem_write = 0;

    case (current_state)
        idle_state: begin
            if (cpu_read || cpu_write) begin
                if (valid_table[index] && (tag_table[index] == tag)) begin
                    if (cpu_read) begin
                        case (Single_Instruction)
                            64'hLB: begin
                                cpu_rdata = {{24{selected_word[(byte_offset*8)+7]}}, 
                                            selected_word[(byte_offset*8)+7:(byte_offset*8)]};
                            end
                            64'hLH: begin
                                cpu_rdata = {{16{selected_word[(byte_offset*16)+15]}}, 
                                            selected_word[(byte_offset*16)+15:(byte_offset*16)]};
                            end
                            64'hLW: begin
                                cpu_rdata = data_table[index][word_offset];
                            end
                            64'hLBU: begin
                                cpu_rdata = {24'b0, selected_word[(byte_offset*8)+7:(byte_offset*8)]};
                            end
                            64'hLHU: begin
                                cpu_rdata = {16'b0, selected_word[(byte_offset*16)+15:(byte_offset*16)]};
                            end
                            default: cpu_rdata = 32'b0;
                        endcase
                    end
                    else if (cpu_write) begin
                        case (Single_Instruction)
                            64'hSB: begin
                                data_table[index][word_offset] <= 
                                    (data_table[index][word_offset] & ~(32'hFF << (byte_offset*8))) | 
                                    ((cpu_wdata[7:0] & 32'hFF) << (byte_offset*8));
                                mem_addr = {cpu_addr[31:(word_offset_width+byte_offset_width)], 
                                           {(word_offset_width+byte_offset_width){1'b0}}};
                                for (integer i = 0; i < (block_size/4); i++) begin
                                    mem_wdata[i] = data_table[index][i];
                                end
                                mem_write = 1;
                                cpu_stall = 1;
                                next_state = write_mem_state;
                            end
                            64'hSH: begin
                                data_table[index][word_offset] <= 
                                    (data_table[index][word_offset] & ~(32'hFFFF << (byte_offset*16))) | 
                                    ((cpu_wdata[15:0] & 32'hFFFF) << (byte_offset*16));
                                mem_addr = {cpu_addr[31:(word_offset_width+byte_offset_width)], 
                                           {(word_offset_width+byte_offset_width){1'b0}}};
                                for (integer i = 0; i < (block_size/4); i++) begin
                                    mem_wdata[i] = data_table[index][i];
                                end
                                mem_write = 1;
                                cpu_stall = 1;
                                next_state = write_mem_state;
                            end
                            64'hSW: begin
                                data_table[index][word_offset] <= cpu_wdata;
                                mem_addr = {cpu_addr[31:(word_offset_width+byte_offset_width)], 
                                           {(word_offset_width+byte_offset_width){1'b0}}};
                                for (integer i = 0; i < (block_size/4); i++) begin
                                    mem_wdata[i] = data_table[index][i];
                                end
                                mem_write = 1;
                                cpu_stall = 1;
                                next_state = write_mem_state;
                            end
                            default: begin
                                mem_addr = 32'b0;
                                mem_write = 0;
                                cpu_stall = 0;
                                next_state = idle_state;
                            end
                        endcase
                    end
                end
                else begin
                    cpu_stall = 1;
                    if (cpu_read) begin
                        case (Single_Instruction)
                            64'hLB, 64'hLH, 64'hLW, 64'hLBU, 64'hLHU: begin
                                mem_addr = {cpu_addr[31:(word_offset_width+byte_offset_width)], 
                                           {(word_offset_width+byte_offset_width){1'b0}}};
                                mem_read = 1;
                                next_state = fetch_mem_state;
                            end
                            default: next_state = idle_state;
                        endcase
                    end
                    else if (cpu_write) begin
                        case (Single_Instruction)
                            64'hSB, 64'hSH, 64'hSW: begin
                                mem_addr = {cpu_addr[31:(word_offset_width+byte_offset_width)], 
                                           {(word_offset_width+byte_offset_width){1'b0}}};
                                for (integer i = 0; i < (block_size/4); i++) begin
                                    mem_wdata[i] = data_table[index][i];
                                end
                                mem_write = 1;
                                next_state = write_mem_state;
                            end
                            default: next_state = idle_state;
                        endcase
                    end
                end
            end
        end

        fetch_mem_state: begin
            cpu_stall = 1;
            mem_read = 1;
            mem_addr = {cpu_addr[31:(word_offset_width+byte_offset_width)], 
                       {(word_offset_width+byte_offset_width){1'b0}}};

            if (mem_ready) begin
                tag_table[index] <= tag;
                valid_table[index] <= 1;
                for (integer i = 0; i < (block_size/4); i++) begin
                    data_table[index][i] <= mem_rdata[i];
                end
                cpu_rdata = mem_rdata[word_offset];
                cpu_stall = 0;
                next_state = idle_state;
            end
        end

        write_mem_state: begin
            cpu_stall = 1;
            mem_write = 1;
            mem_addr = {cpu_addr[31:(word_offset_width+byte_offset_width)], 
                       {(word_offset_width+byte_offset_width){1'b0}}};
            for (integer i = 0; i < (block_size/4); i++) begin
                mem_wdata[i] = data_table[index][i];
            end
            if (mem_ready) begin
                cpu_stall = 0;
                next_state = idle_state;
            end
        end

        default: begin
            next_state = idle_state;
        end
    endcase
end
endmodule
