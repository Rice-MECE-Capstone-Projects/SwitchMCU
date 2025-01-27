module syncfifo_swc_tb;
    
    reg 						      rstn  ;
	reg 						      clk   ;

	reg 						      wen   ;
	reg 	      [31:0]	          wdata ;
	wire						      full  ;
				
	reg 						      ren   ;
	wire	      [31:0]	          rdata ;
	wire	 					      empty ;

    syncfifo_swc syncfifo_swc_inst
	(
		  .rstn         (rstn)  ,
		  .clk          (clk)  ,
		  .wen          (wen)   ,
		  .wdata        (wdata) ,
		  .full         (full)  ,
		  .ren          (ren)   ,
		  .rdata        (rdata) ,
		  .empty        (empty)
);
    
    initial clk = 0;
    always#10 clk = ~clk;
    
    always@(posedge clk or negedge rstn)begin
        if(!rstn)
            wdata <= 0;
        else if(wen && !full)
            wdata <= wdata + 1;
        else
            wdata <= wdata;
    end
    
    initial begin
        rstn = 0;
        wen = 0;
        ren = 0;
        #200;
        rstn = 1;
        wen = 1;
        #20000;
        wen = 0;
        ren = 1;
        #20000;
        ren = 0;
        $finish; 
    end

    initial begin
        $dumpfile("syncfifo_swc_tb.vcd");
        $dumpvars(0, syncfifo_swc_tb);
        #50000 $finish;
    end
    
endmodule
