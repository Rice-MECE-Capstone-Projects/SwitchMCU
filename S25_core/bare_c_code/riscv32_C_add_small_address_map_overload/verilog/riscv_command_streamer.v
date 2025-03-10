module riscv_command_streamer #(parameter MEM_SIZE = 10000000)(
    input wire clk,
    input wire reset,
    output wire [31:0] instruction_o
);
    reg [31:0] memory [0:MEM_SIZE-1]; 
    reg [31:0] pc;
    reg [31:0] instruction;

    initial begin
        $readmemh("program.hex", memory);  // Load the program into memory
        pc = 32'h00000000;  // Initialize PC to zero at the beginning
    end
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            pc <= 32'h00000000;  // Reset PC to 0 on reset
        end else begin
            instruction = memory[pc >> 2];  // Divide PC by 4 to get word index (assuming 4-byte instructions)
            // instruction = memory[pc];  // Divide PC by 4 to get word index (assuming 4-byte instructions)
            $display("PC: %h, Instruction: %h, word in processor %h", pc, instruction,pc >> 2);
            pc <= pc + 4;  // Assuming 32-bit (4-byte) instruc,tions
        end
    end
endmodule



