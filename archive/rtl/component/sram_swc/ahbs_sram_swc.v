module ahbs_sram_swc(
    hclk,
    hrstn,
    haddr,
    hmastlock,
    hprot,
    hsize,
    htrans,
    hwdata,
    hwrite,
    hready,
    hresp,
    hrdata
);
    //TODO: Parametrize the widths
    input hclk,
    input hrstn,
    input [31:0] haddr,
    input hmastlock,
    input [6:0] hprot,
    input [2:0] hsize,
    input [1:0] htrans,
    input [31:0] hwdata,
    input hwrite,
    output hready,
    output reg hresp,
    output reg [31:0] hrdata

    parameter DATA_WIDTH = 32;
    parameter ADDR_WIDTH = 12;
    //parameter ROM_PATH = "rom.hex";

	parameter IDLE = 4'b0000;
	parameter READ = 4'b0001;
	parameter WRITE = 4'b0010;
	
	// TODO: Define HTRANS states as output by the AHBM (IDLE, NONSEQ, SEQ, BUSY) - Need only IDLE and NONSEQ
	parameter HTRANS_IDLE = 2'b00;	
	parameter HTRANS_BUSY = 2'b01;
	parameter HTRANS_NONSEQ = 2'b10;
	parameter HTRANS_SEQ = 2'b11;

	// State and next_state register definitions
	reg     [3:0]           state;
	reg     [3:0]           next_state;
	
    // Register Array
    reg [DATA_WIDTH-1:0] reg_array[(2**ADDR_WIDTH)-1:0];

	always @ (posedge hclk or negedge hrstn) begin
	if (!hrstn)
		state <= IDLE;
	else 
		state <= next_state;
	end
	
	/* verilator lint_off CASEINCOMPLETE */
	// next_state generation logic
	// Check current state and any and all necessary inputs to get the next state
	always @(*) begin
		next_state = IDLE;
		casez ({hresp, hrstn, htrans, hwrite})
			5'b1_1_??_?: next_state = IDLE; // Error Case 
			5'b?_0_??_?: next_state = IDLE; // Reset Case
			5'b0_1_00_?: next_state = IDLE; // htrans = IDLE Case
			5'b0_1_10_0: next_state = READ;
			5'b0_1_10_1: next_state = WRITE;
		endcase
	end
	/* verilator lint_on CASEINCOMPLETE */
	
	// Output Generation Logic (from current state)
	always @(posedge hclk) begin
		if ((!hrstn) || (next_state == IDLE))
		begin
            //Do Nothing
            hrdata <= 0;
		end
		else if (next_state == READ)
		begin
			//READ FROM SRAM
            //TODO: Check if the address is valid
            hrdata <= reg_array[haddr];
            
		end
		else if (next_state == WRITE)
		begin
			//WRITE TO SRAM
            //TODO: Check if the address is valid
            reg_array[haddr] <= hwdata;
		end
	end

    // load initial data
    initial begin
        #30;
        $readmemb(ROM_PATH, reg_array);
    end
endmodule