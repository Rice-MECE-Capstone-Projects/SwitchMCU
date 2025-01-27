`timescale 1ns / 1ns
module ASFIFO_tb;
	parameter WIDTH = 16;
	parameter PTR   = 4;
	reg					wrclk		;
	reg					wr_rst_n	;
	reg	[WIDTH-1:0]		wr_data		;
	reg 				wr_en		;
	wire				wr_full		;

	reg					rdclk		;
	reg					rd_rst_n	;
	wire [WIDTH-1:0]	rd_data		;
	reg					rd_en		;
	wire				rd_empty	;

	reg					init_done	;		

	initial	begin
		
		wr_rst_n  = 1	;
		rd_rst_n  = 1	;
		wrclk 	  = 0	;
		rdclk 	  = 0	;
		wr_en 	  = 0	;
		rd_en 	  = 0	;
		wr_data   = 'b0 ;
		init_done = 0	;
 
		
		#30 wr_rst_n = 0;
			rd_rst_n = 0;
		#30 wr_rst_n = 1;
			rd_rst_n = 1;
 
		
		#30 init_done = 1;
	end
 
 
 
	always
		#2 wrclk = ~wrclk;
 

	always
		#4 rdclk = ~rdclk;
 
 
 

	always @(*) begin
		if(init_done) begin
		
			if( wr_full == 1'b1 )begin
				wr_en = 0;
			end
			else begin
				wr_en = 1;
			end
		end
	end
	always @(*) begin
		if(init_done) begin
		
			if( rd_empty == 1'b1 )begin
				rd_en = 0;
			end
			else begin
				rd_en = 1;
			end
		end
	end
 
 
 
	always @(posedge wrclk) begin
		if(init_done) begin
			if( wr_full == 1'b0 )
				wr_data <= wr_data + 1;
			else
				wr_data <= wr_data;
		end
		else begin
			wr_data <= 'b0;
		end
	end
 
 
	ASFIFO
		# ( .WIDTH(16), .PTR(4) )
		U_ASFIFO
		(
			.wrclk	 	(wrclk		),
			.wr_rst_n	(wr_rst_n	),
			.wr_data	(wr_data	),
			.wr_en		(wr_en		),
			.wr_full	(wr_full	),
 
			.rdclk		(rdclk		),
			.rd_rst_n	(rd_rst_n	),
			.rd_data	(rd_data	),
			.rd_en		(rd_en		),
			.rd_empty	(rd_empty	)
		);
 
 
endmodule
