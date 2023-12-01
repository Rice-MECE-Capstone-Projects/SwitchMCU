module ahbs_dsram_swc (
   
    input hclk, // Clock signal
    input hrstn, // Reset signal
    input [31:0] haddr, // Address AHB bus
    input hmastlock, // Master lock signal
    input [6:0] hprot, // Protection signal
    input [2:0] hsize, // Size signal
    input [1:0] htrans, // Transaction signal
    input [31:0] hwdata, // Write data signal
    input hwrite, // Write enable signal
    output hready, // Ready signal
    output reg hresp, // Response signal
    output reg [31:0] hrdata // Load/Read data signal
);
    
    // Parameter to specify the size of the data memory
    // Set the data memory size 1024
    parameter DATA_MEMORY_SIZE = 1024; 

    // Data SRAM (D-SRAM) memory array
    reg [31:0] data_sram [0:DATA_MEMORY_SIZE-1]; 

    // Define State and next_state register 
    reg [3:0] state; 
    reg [3:0] next_state; 

    // Define states for the D-SRAM state machine
    parameter IDLE = 4'b0000; 
    parameter READ = 4'b0001; 
    parameter WRITE = 4'b0010; 

    always @ (posedge hclk or negedge hrstn) begin
        if (!hrstn)
            // Set state to IDLE upon reset
            state <= IDLE; 
        else
            // Update state based on next state
            state <= next_state; 
    end

    // State transition logic
    always @(*) begin
        // Initialize next state to IDLE
        next_state = IDLE; 
        
        casez ({hresp, hrstn, htrans, hwrite})
            // Transition to LOAD/READ state
			5'b0_1_10_0: next_state = READ; 
            // Transition to STORE/WRITE state
			5'b0_1_10_1: next_state = WRITE; 

            // Handle unhandled cases by going to IDLE
			default: next_state = IDLE; 
        endcase
    end

    // Output generation logic
    always @(posedge hclk) begin
        if ((!hrstn) || (next_state == IDLE))
        begin
            // Do Nothing if in reset or IDLE state
            // Initialize read data to 0
            hrdata <= 0; 
        end

        else if (next_state == READ)
        begin
            // LOAD/READ FROM D-SRAM
            // Read data from D-SRAM at specified address
            hrdata <= data_sram[haddr]; 
        end

        else if (next_state == WRITE)
        begin
            // STORE/WRITE TO D-SRAM
            // Write data to D-SRAM at specified address
            data_sram[haddr] <= hwdata; 
        end
    end

endmodule

