module ahbs_swc(
input                           hclk        ,
input                           hrstn       ,

input   reg     [31:0]          haddr       ,
input   reg                     hmastlock   ,
input           [6:0]           hprot       ,
input           [2:0]           hsize       ,
input   reg     [1:0]           htrans      ,
input   reg     [31:0]          hwdata      ,
output          [31:0]          hrdata      ,
input   reg                     hwrite      ,
output                          hready      ,
output                          hresp       ,
// Buffer(FIFO) signals
output                          wreq        ,
output          [31:0]          wbuffdata   ,
output          [31:0]          wbuffaddr   ,
output                          rreq        ,
input 	reg     [31:0]          rbuffdata   ,
output          [31:0]          rbuffaddr   ,
// feedback signals
output reg                      done        ,
output reg                      resp        
);

	// TODO: Define States as values i.e., IDLE as 2'b01, READ as 2'bXX, so on so forth
	// parameter READ_DONE = 4'b0000;
	// parameter WRITE_DONE = 4'b0000;
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
	
	always @ (posedge hclk) begin
		if (!hrstn)
			state <= IDLE;
		else 
			state <= next_state;
	end
	
	// next_state generation logic
	// Check current state and any and all necessary inputs to get the next state
	// Do we need these as functions of the state? These should be direct functions of the inputs
	//always @(*) begin
	//	case ({hresp, hrstn, htrans, hwrite})
	//		7'b0000000: next_state <= IDLE;
	//		7'b0000000: next_state <= READ;
	//		7'b0000000: next_state <= WRITE;
	//	endcase
	//end
	
	always @(*) begin
		case (state)
		IDLE: begin
			if (hresp || hrstn || (htrans == HTRANS_IDLE)) 
				next_state = IDLE;
			else if ((~hwrite) && (htrans == HTRANS_NONSEQ))
				next_state = READ;
			else if ((hwrite) && (htrans == HTRANS_NONSEQ))
				next_state = WRITE;
			else
				next_state = IDLE;
		end
		READ: begin
			if (hresp || hrstn || (htrans == HTRANS_IDLE)) 
				next_state = IDLE;
			else if ((~hwrite) && (htrans == HTRANS_NONSEQ))
				next_state = READ;
			else if ((hwrite) && (htrans == HTRANS_NONSEQ))
				next_state = WRITE;
			else
				next_state = IDLE;
		end
		WRITE: begin
			if (hresp || hrstn || (htrans == HTRANS_IDLE)) 
				next_state = IDLE;
			else if ((~hwrite) && (htrans == HTRANS_NONSEQ))
				next_state = READ;
			else if ((hwrite) && (htrans == HTRANS_NONSEQ))
				next_state = WRITE;
			else
				next_state = IDLE;
		end
		default: next_state = IDLE;
		endcase
	end
	
	// Output Generation Logic (from current state)
	always @(posedge hclk) begin
		if ((!hrstn) || (next_state == IDLE))
		begin
			wreq <= 0;
			rreq <= 0;
			wbuffaddr <= 0;
			rbuffaddr <= 0;
			wbuffdata <= 0;
		end
		else if (next_state == READ)
		begin
			wreq <= 0;
			rreq <= 1;
			wbuffaddr <= 0;
			rbuffaddr <= haddr;
			wbuffdata <= 0;
			hrdata <= rbuffdata;
		end
		else if (next_state == WRITE)
		begin
			wreq <= 1;
			rreq <= 0;
			wbuffaddr <= haddr;
			rbuffaddr <= 0;
			wbuffdata <= hwdata;
		end
	end

endmodule