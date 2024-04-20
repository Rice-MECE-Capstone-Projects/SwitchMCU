//FIFO parameters
`define FIFO_DEPTH 64
`define FIFO_MEM_ADDR_WIDTH 6
`define FIFO_MEM_DATA_WIDTH 16
`define FIFO_HALFEMPTY 4
`define FIFO_HALFFULL 4

module SFIFO (
reset,
clk_write_logic,
clk_read_logic,
read_request,
w_data,
write_request,
r_data,
read_ack,
w_enable,
r_enable,
empty_fifo_status,
halfempty_fifo_status,
full_fifo_status,
halffull_fifo_status,
write_ack,
scan_in0,
scan_en,
test_mode,
scan_out0
);

input	    reset,	// system reset
            clk_read_logic,
            clk_write_logic,
            read_request,
            write_request;
input [`FIFO_MEM_DATA_WIDTH-1:0] w_data;
input       scan_in0,	// test scan mode data input
            scan_en,	// test scan mode enable
            test_mode;	// test mode select
output      [`FIFO_MEM_DATA_WIDTH-1:0] r_data;
output      w_enable, r_enable;
output      read_ack;
output      empty_fifo_status,  full_fifo_status;
output      halfempty_fifo_status,
            halffull_fifo_status,
            write_ack;
output      scan_out0;	// test scan mode data output

wire  [`FIFO_MEM_ADDR_WIDTH:0]  read_pointer;
wire  [`FIFO_MEM_ADDR_WIDTH:0]  write_pointer;

wire [`FIFO_MEM_ADDR_WIDTH-1:0] w_addr;
wire [`FIFO_MEM_ADDR_WIDTH-1:0] r_addr;

assign w_addr = write_pointer [`FIFO_MEM_ADDR_WIDTH-1:0];
assign r_addr = read_pointer [`FIFO_MEM_ADDR_WIDTH-1:0];

read_control READ_CONTROL_MOD (
    .reset(reset),
    .clk_read_logic(clk_read_logic),
    .write_pointer(write_pointer),
    .read_request(read_request),
    .r_enable(r_enable),
    .read_ack(read_ack),
    .read_pointer(read_pointer),
    .empty_fifo_status(empty_fifo_status),
    .halfempty_fifo_status(halfempty_fifo_status),
    .rc_scan_in0(scan_in0),
    .rc_scan_en(scan_en),
    .rc_test_mode(test_mode),
    .rc_scan_out0(scan_out0)
);

write_control WRITE_CONTROL_MOD (
    .reset(reset),
    .clk_write_logic(clk_write_logic),
    .read_pointer(read_pointer),
    .write_request(write_request),
    .w_enable(w_enable),
    .write_ack(write_ack),
    .write_pointer(write_pointer),
    .full_fifo_status(full_fifo_status),
    .halffull_fifo_status(halffull_fifo_status),
    .wc_scan_in0(scan_in0),
    .wc_scan_en(scan_en),
    .wc_test_mode(test_mode),
    .wc_scan_out0(scan_out0)
);
		
		
memory_array MEM_ARRAY_MOD (
    .clk_write_logic(clk_write_logic),
    .clk_read_logic(clk_read_logic),
    .w_addr(w_addr),
    .r_addr(r_addr),
    .w_enable(w_enable),
    .r_enable(r_enable),
    .w_data(w_data),
    .r_data(r_data),
    .mem_scan_in0(scan_in0),
    .mem_scan_en(scan_en),
    .mem_test_mode(test_mode),
    .mem_scan_out0(scan_out0)	
);
		
endmodule
