
module ASFIFO
	#(
		parameter WIDTH = 16,		// FIFO width
		parameter PTR   = 4			// FIFO depth
	)
	(
		// write interface
		input					wrclk	,		// 
		input					wr_rst_n,		// 
		input	[WIDTH-1:0]		wr_data	,		// 
		input					wr_en	,		// 
		output  reg				wr_full	,		// 
 
		//read interface
		input					rdclk	,		// 
		input					rd_rst_n,		// 
		input					rd_en	,		// 
		output	[WIDTH-1:0]		rd_data	,		// 
		output	reg				rd_empty		// 
    );

	reg	[PTR:0]	wr_bin;
	reg [PTR:0] wr_gray;
	reg [PTR:0] wr_gray_ff1;
	reg [PTR:0] wr_gray_ff2;
	reg [PTR:0] wr_bin_rd;

	reg [PTR:0]	rd_bin;
	reg [PTR:0] rd_gray;
	reg [PTR:0] rd_gray_ff1;
	reg [PTR:0] rd_gray_ff2;
	reg [PTR:0] rd_bin_wr;

	wire  				dpram_wr_en		 ;		
	wire [PTR-1:0]		dpram_wr_addr    ;		
	wire [WIDTH-1:0] 	dpram_wr_data	 ;		
	wire  				dpram_rd_en		 ;		
	wire [PTR-1:0]		dpram_rd_addr    ;		
	wire [WIDTH-1:0] 	dpram_rd_data	 ;		



	/************* wirte clock domain *********************/
	always @(posedge wrclk or negedge wr_rst_n) begin
		if (!wr_rst_n) begin
			wr_bin <= 'b0;
		end else if (wr_en == 1'b1 && wr_full == 1'b0) begin
			wr_bin <= wr_bin + 1'b1;
		end else begin
			wr_bin <= wr_bin;
		end
	end

	/************* read clock domain *********************/
	always @(posedge rdclk or negedge rd_rst_n) begin
		if (!rd_rst_n) begin
			rd_bin <= 'b0;
		end else if (rd_en == 1'b1 && rd_empty == 1'b0) begin
			rd_bin <= rd_bin + 1'b1;
		end else begin
			rd_bin <= rd_bin;
		end
	end



/**************** write bin to gray *********************************/
	always @(posedge wrclk or negedge wr_rst_n) begin
		if (!wr_rst_n) begin
			wr_gray <= 'b0;
		end
		else begin
			wr_gray <= { wr_bin[PTR], wr_bin[PTR:1] ^ wr_bin[PTR-1:0] };
		end
	end

/**************** read bin to gray **********************************/
	always @(posedge rdclk or negedge rd_rst_n) begin
		if (!rd_rst_n) begin
			rd_gray <= 'b0;
		end
		else begin
			rd_gray <= { rd_bin[PTR], rd_bin[PTR:1] ^ rd_bin[PTR-1:0] };
		end
	end



/**************** synchronize write ***********************************/
	always @(posedge wrclk or negedge wr_rst_n) begin
		if (!wr_rst_n) begin
			wr_gray_ff1 <= 'b0;
			wr_gray_ff2 <= 'b0;
		end else begin
			wr_gray_ff1 <= wr_gray;
			wr_gray_ff2 <= wr_gray_ff1;
		end
	end

/**************** synchronize read *************************************/
	always @(posedge rdclk or negedge rd_rst_n) begin
		if (!rd_rst_n) begin
			rd_gray_ff1 <= 'b0;
			rd_gray_ff2 <= 'b0;
		end else begin
			rd_gray_ff1 <= rd_gray;
			rd_gray_ff2 <= rd_gray_ff1;
		end
	end
 

	integer i ;
	integer j ;
 
 
    
	always @(*) begin
		wr_bin_rd[PTR] = wr_gray_ff2[PTR];
		for ( j=PTR-1; j>=0; j=j-1 )
			wr_bin_rd[j] = wr_bin_rd[j+1] ^ wr_gray_ff2[j];
	end
 

	
	always @(*) begin
		rd_bin_wr[PTR] = rd_gray_ff2[PTR];
		for ( i=PTR-1; i>=0; i=i-1 )
			rd_bin_wr[i] = rd_bin_wr[i+1] ^ rd_gray_ff2[i];
	end

	
	always @(*) begin
		if( (wr_bin[PTR] != rd_bin_wr[PTR]) && (wr_bin[PTR-1:0] == rd_bin_wr[PTR-1:0]) ) 
    begin
			wr_full = 1'b1;
		end
		else begin
			wr_full = 1'b0;
		end
	end
 
 

	always @(*) begin
		if( wr_bin_rd == rd_bin )
			rd_empty = 1'b1;
		else
			rd_empty = 1'b0;
	end

DPRAM
		# ( .WIDTH(16), .DEPTH(16), .ADDR(4) )
		U_DPRAM
		(
			.wrclk		(wrclk		 	),
			.rdclk		(rdclk			),
			.rd_rst_n   (rd_rst_n		),
			.wr_en 		(dpram_wr_en	),
			.rd_en 		(dpram_rd_en	),
			.wr_data 	(dpram_wr_data	),
			.rd_data 	(dpram_rd_data	),
			.wr_addr 	(dpram_wr_addr	),
			.rd_addr 	(dpram_rd_addr	)
		);

//control signal for 
assign dpram_wr_en = (wr_en == 1'b1 && wr_full == 1'b0) ? 1'b1 : 1'b0;
assign dpram_wr_addr = wr_bin[PTR-1:0];
assign dpram_wr_data = wr_data;

assign dpram_rd_addr = rd_bin[PTR-1:0];
assign dpram_rd_en = (rd_en == 1'b1 && rd_empty == 1'b0) ? 1'b1 : 1'b0;
assign rd_data = dpram_rd_data;

endmodule