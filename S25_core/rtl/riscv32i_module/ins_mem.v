module ins_mem #(parameter mem_size = 10000000)(
    input  wire        clk,
    input  wire        reset,
    input  wire [31:0] pc_i,
    output wire [31:0] pc_o,
    output wire [31:0] instruction_o
);
    // param_module params ();

    reg  [31:0] memory [0:mem_size-1]; 
    reg  [31:0] instruction;
    wire [31:0] pc,address_index;
    assign pc   = pc_i;
    // assign pc_o = pc_reg;
    assign pc_o = 0;//pc_reg;
    // assign instruction_o = instruction;
    initial begin        // $readmemh("sanity.hex", memory);  // Load the program into memory
        $readmemh("program.hex", memory);  
    end
    assign address_index = pc_i >> 2;
    assign instruction = memory[address_index];
    assign instruction_o = reset ?  32'h00000013 : instruction ;



endmodule
