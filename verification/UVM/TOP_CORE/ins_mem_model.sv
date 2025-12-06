module ins_mem_model (
    input  logic        clk,
    input  logic [31:0] addr,
    output logic [31:0] data
);

    // Simple word-addressable memory (8 KB)
    logic [31:0] mem [0:2047];

    initial begin
        $display("[IMEM] Loading program.hex ...");
        $readmemh("program.hex", mem);
    end

    always_ff @(posedge clk)
        data <= mem[addr >> 2];

endmodule
