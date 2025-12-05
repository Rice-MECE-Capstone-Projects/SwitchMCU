module ins_mem (
    input  wire         clk,
    input  wire         reset,
    input  wire [31:0]  pc_i,
    output wire [31:0]  instruction_o
);

    // Instruction memory array
    reg [31:0] instruction_memory [0:1023];
    
    // Output register
    reg [31:0] instruction_o_reg;
    
    // Assign output wire to output register
    assign instruction_o = instruction_o_reg;

    // Load instructions from a file on initialization
    initial begin
        $readmemh("program.hex", instruction_memory);
    end

    // Read logic
    always @(posedge clk) begin
        if (reset) begin
            instruction_o_reg <= 32'b0;
        end else begin
            // Read instruction from memory at the current PC address
            // The PC is byte-addressed, so we use bits [31:2] to get the word address
            instruction_o_reg <= instruction_memory[pc_i[31:2]];
        end
    end
endmodule

