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
)

	// TODO: Define States as values i.e., IDLE as 2'b01, READ as 2'bXX, so on so forth
	// parameter IDLE = 4'b0000;
	// parameter READ = 4'b0000;
	// parameter WRITE = 4'b0000;
	// parameter READ_DONE = 4'b0000;
	// parameter WRITE_DONE = 4'b0000;
	
	// TODO: Define HTRANS states as output by the AHBM (IDLE, NONSEQ, SEQ, BUSY) - Need only IDLE and NONSEQ
	
	// TODO: Define state and next_state registers
	
	always @ (posedge hclk) begin
		if (!hrstn)
			state <= IDLE;
		else 
			state <= next_state
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
			if (hresp || hrstn || (htrans == IDLE)) 
				next_state <= IDLE;
			else if ((~hwrite) && (htrans == NONSEQ))
				next_state <= READ;
			else if ((hwrite) && (htrans == NONSEQ))
				next_state <= WRITE;
			else
				next_state <= IDLE;
		end
		READ: begin
			if (hresp || hrstn || (htrans == IDLE)) 
				next_state <= IDLE;
			else if ((~hwrite) && (htrans == NONSEQ))
				next_state <= READ;
			else if ((hwrite) && (htrans == NONSEQ))
				next_state <= WRITE;
			else
				next_state <= IDLE;
		end
		WRITE: begin
			if (hresp || hrstn || (htrans == IDLE)) 
				next_state <= IDLE;
			else if ((~hwrite) && (htrans == NONSEQ))
				next_state <= READ;
			else if ((hwrite) && (htrans == NONSEQ))
				next_state <= WRITE;
			else
				next_state <= IDLE;
		end
	end
	
	// Output Generation Logic (from current state)
	always @(posedge hclk) begin
		if ((!hrstn) || (next_state == IDLE))
			wreq <= 0;
			rreq <= 0;
			wbuffaddr <= 0;
			rbuffaddr <= 0;
			wbuffdata <= 0;
		else if  (next_state == READ)
			wreq <= 0;
			rreq <= 1;
			wbuffaddr <= 0;
			rbuffaddr <= haddr;
			wbuffdata <= 0;
		else if (next_state == WRITE)
			wreq <= 1;
			rreq <= 0;
			wbuffaddr <= haddr;
			rbuffaddr <= 0;
			wbuffdata <= hwdata;
	end
	
	//TODO: READ Operations