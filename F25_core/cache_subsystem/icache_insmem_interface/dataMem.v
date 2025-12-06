// change
// dataMem.v (revised) — ensure $readmemh occurs AFTER the memory declaration
// and keep a clean 1-cycle mem_valid handshake.

module dataMem #(parameter mem_size = 4096) (
    input  wire        clk,
    input  wire        reset,

    input  wire [31:0] mem_addr,
    input  wire        mem_read,
    input  wire        mem_write,
    input  wire [31:0] mem_wdata,
    output reg  [31:0] mem_rdata,
    output reg         mem_valid
);

    // change: memory declared before $readmemh
    reg [31:0] DMEM [0:mem_size-1];

    initial begin
        $readmemh("memory_dump.hex", DMEM); // change
        $display("DMEM[0]=%h DMEM[1]=%h DMEM[2]=%h", DMEM[0], DMEM[1], DMEM[2]);
    end

    wire [29:0] word_address = mem_addr[31:2];

    reg [31:0] read_data_reg;
    always @(*) begin
        if (mem_read) read_data_reg = DMEM[word_address];
        else          read_data_reg = 32'b0;
    end

    always @(posedge clk) begin
        if (reset) begin
            mem_rdata <= 32'b0;
            mem_valid <= 1'b0;
        end else begin
            // 1-cycle latency model
            mem_rdata <= read_data_reg;
            if (mem_write) DMEM[word_address] <= mem_wdata;
            mem_valid <= (mem_read || mem_write);
        end
    end
endmodule
