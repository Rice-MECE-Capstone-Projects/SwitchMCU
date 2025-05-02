module ins_mem #(parameter MEM_SIZE = 10000000)(
    input  wire        clk,
    input  wire        reset,
    input  wire [31:0] pc_i,
    output wire [31:0] pc_o,
    output wire [31:0] instruction_o
);
    // param_module params ();

    reg  [31:0] memory [0:MEM_SIZE-1]; 
    reg  [31:0] instruction,pc_reg;
    wire [31:0] pc,address_index;
    assign pc   = pc_i;
    // assign pc_o = pc_reg;
    assign pc_o = 0;//pc_reg;
    // assign instruction_o = instruction;
    initial begin        // $readmemh("sanity.hex", memory);  // Load the program into memory
        $readmemh("program.hex", memory);  
        pc_reg = 32'h00000000;  
    end
    assign address_index = pc_i >> 2;
    assign instruction = memory[address_index];
    assign instruction_o = reset ?  32'h00000013 : instruction ;



    // always @(posedge clk or posedge reset) begin
    // always @(posedge clk) begin
    //     if (reset) begin
    //         pc_reg      <= 32'hFFFFFFFF;  // Reset PC to 0
    //         instruction <= 32'h00000013; // noOP  

    //     end else begin
    
    //         instruction = memory[pc >> 2];  
    //         pc_reg <= pc;
    //         // instruction = memory[pc];  // Divide PC by 4 to get word index (assuming 4-byte instructions)
    //         // $display("PC: %h, Instruction: %h, word in processor %h", pc, instruction,pc >> 2);
    //         // pc <= pc + 4;  // Assuming 32-bit (4-byte) instruc,tions
    //     end
    // end
endmodule
