module DPRAM 
	#(
		parameter WIDTH = 16 ,					
		parameter DEPTH = 16 ,					
		parameter ADDR  = 4 					
 
	)
	(
		input					wrclk	,		
		input					rdclk	,		
		input					rd_rst_n,		
		input					wr_en	,		
		input					rd_en	,		
		input		[WIDTH-1:0]	wr_data	,		
		output	reg [WIDTH-1:0] rd_data	,		
		input	    [ADDR-1:0]  wr_addr	,		
		input	    [ADDR-1:0]  rd_addr			
    );
 
 
	reg [WIDTH-1:0] DPRAM [DEPTH-1:0];
 
 
	always @(posedge wrclk) begin
		if (wr_en)
			DPRAM[wr_addr] <= wr_data;
	end
 
 
	always @(posedge rdclk or negedge rd_rst_n) begin
		if(!rd_rst_n)
			rd_data <= 'b0;
		else if (rd_en)
			rd_data <= DPRAM[rd_addr];
	end
endmodule