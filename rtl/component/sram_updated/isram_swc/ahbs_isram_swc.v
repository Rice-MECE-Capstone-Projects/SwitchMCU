module ahbs_isram_swc (
    
    input hclk, // Clock input
    input hrstn, // Reset input
    input [31:0] haddr, // Address AHB bus
    input hmastlock, // Master lock input
    input [6:0] hprot, // Protection input
    input [2:0] hsize, // Size input
    input [1:0] htrans, // Transaction input
    input [31:0] hwdata, // Write data input
    input hwrite, // Write enable input
    output hready, // Ready output
    output reg hresp, // Response output
    output reg [31:0] hrdata // Read data output
);

    // Parameter to specify the size of the instruction memory
    // Set the size 1024
    parameter INSTRUCTION_MEMORY_SIZE = 1024; 

    // Instruction SRAM (I-SRAM) memory array
    reg [31:0] instruction_sram [0:INSTRUCTION_MEMORY_SIZE-1];

    // State and next_state register definitions
    reg [3:0] state;
    reg [3:0] next_state;

    // Define states for the I-SRAM state machine
    parameter IDLE = 4'b0000;
    parameter FETCH = 4'b0001;

    // State transition logic
    always @ (posedge hclk or negedge hrstn) begin
        if (!hrstn)
            // Reset state to IDLE on reset
            state <= IDLE;
        else
            // Update state based on next_state
            state <= next_state;
    end

    // State transition logic
    always @(*) begin
        // Default state is IDLE
        next_state = IDLE;
        casez ({hresp, hrstn, htrans, hwrite})
            // Move to FETCH state on valid condition
            5'b0_1_10_0: next_state = FETCH; 
            
            // Handle any other unhandled cases
            default: next_state = IDLE; 
        endcase
    end

    // Output generation logic
    always @(posedge hclk) begin
        if ((!hrstn) || (next_state == IDLE))
        begin
            // Do Nothing during IDLE or reset state
            // Set output data to zero
            hrdata <= 0; 
        end

        else if (next_state == FETCH)
        begin
            // INSTRUCTION FETCH FROM I-SRAM
            // Fetch instruction based on address
            hrdata <= instruction_sram[haddr]; 
        end
    end

endmodule

