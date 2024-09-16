module asyncfifo_swc_tb;
    
    reg 						      rstn  ;
								
	reg 						      wclk  ;
	reg 						      wen   ;
	reg 	      [15:0]	          wdata ;
	wire						      full  ;
				
	reg 						      rclk  ;
	reg 						      ren   ;
	wire	      [15:0]	          rdata ;
	wire	 					      empty ;

    asyncfifo_swc asyncfifo_swc_inst
	(
		  .rstn         (rstn)  ,
								
		  .wclk         (wclk)  ,
		  .wen          (wen)   ,
		  .wdata        (wdata) ,
		  .full         (full)  ,
				
		  .rclk         (rclk)  ,
		  .ren          (ren)   ,
		  .rdata        (rdata) ,
		  .empty        (empty)
);
    
    initial wclk = 0;
    always#10 wclk = ~wclk;
    
    initial rclk = 0;
    always#30 rclk = ~rclk;
    
    always@(posedge wclk or negedge rstn)begin
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
        $dumpfile("asyncfifo_swc_tb.vcd");
        $dumpvars(0, asyncfifo_swc_tb);
        #50000 $finish;
    end
    
endmodule
