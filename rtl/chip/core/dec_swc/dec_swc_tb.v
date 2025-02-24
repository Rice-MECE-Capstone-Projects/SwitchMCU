module dec_swc_tb;

// general signals
reg hclk;
reg hrstn;
reg [3:0] cycle_cnt;
reg [31:0] inst_in;
reg [31:0] inst_out;
reg ifu_dec_stall;
reg dec_lui;
reg dec_auipc;
reg dec_jal;
reg dec_jalr;
reg dec_beq;
reg dec_bne;
reg dec_blt;
reg dec_bge;
reg dec_bltu;


dec_swc dec_swc_inst (
	.hclk (hclk),
	.hrstn (hrstn),
	.inst_in (inst_in),
	.cycle_cnt (cycle_cnt),
	.ifu_dec_stall (ifu_dec_stall)
);

always #5 hclk = !hclk;
always @(posedge hclk) begin
	if(!hrstn)
		cycle_cnt <= 0;
	else if(cycle_cnt == 4)
		cycle_cnt <= 1;
	else
		cycle_cnt <= cycle_cnt + 1;
end

initial begin	
	hrstn = 0;
	hclk = 0;
	inst_in = 'h00000000;
	ifu_dec_stall = 0;
	#20;
	hrstn = 1;
	#20;
	ifu_dec_stall = 1;
	#20;
	$dumpfile("dec_swc_tb.vcd");
	$dumpvars(0, dec_swc_tb);
end

endmodule
