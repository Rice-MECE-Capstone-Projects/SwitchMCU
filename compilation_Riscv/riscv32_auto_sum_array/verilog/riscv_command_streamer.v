module riscv_command_streamer #(parameter MEM_SIZE = 10000000)(
    input wire clk,
    input wire reset
);

    // Memory to store instructions (4 bytes per word)
    reg [31:0] memory [0:MEM_SIZE-1]; 

    // Program Counter (PC) - to stream commands sequentially
    reg [31:0] pc;

    // Register to hold the current instruction
    reg [31:0] instruction;

    // Signal to load memory from a HEX file
    initial begin
        $readmemh("program.hex", memory);  // Load the program into memory
        pc = 32'h00000000;  // Initialize PC to zero at the beginning
    end

    // Sequential logic to stream instructions
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            pc <= 32'h00000000;  // Reset PC to 0 on reset
        end else begin
            // Fetch the instruction from memory
            instruction = memory[pc >> 2];  // Divide PC by 4 to get word index (assuming 4-byte instructions)
            // instruction = memory[pc];  // Divide PC by 4 to get word index (assuming 4-byte instructions)

            // Print the instruction as it is fetched
            $display("PC: %h, Instruction: %h, word in processor %h", pc, instruction,pc >> 2);

            // Increment PC to fetch the next instruction
            pc <= pc + 4;  // Assuming 32-bit (4-byte) instruc,tions
        end
    end
endmodule



