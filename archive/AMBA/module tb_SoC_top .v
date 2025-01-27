`timescale 1ns / 1ps
module tb_SoC_top ();

    reg        HCLK    ;
    reg        HRESETn ;
    reg  [3:0] FPGA_Key;
    wire [3:0] FPGA_LED;
    
    SoC_top u_test(
        .HCLK    (HCLK    ),
        .HRESETn (HRESETn ),
        .FPGA_Key(FPGA_Key),
        .FPGA_LED(FPGA_LED) 
    );
    
    initial begin
    	forever #10 HCLK = !HCLK; //50MHz
    end

    initial begin
        HCLK    = 0;
        HRESETn = 0;
        FPGA_Key = 4'b1111;

        #55
        HRESETn = 1;

        #1000
        FPGA_Key = 4'b0000;  //key1~4 pressed
        #100
        FPGA_Key = 4'b1111;  //key release

        #1000
        FPGA_Key = 4'b1110;   //key1 pressed
        #100
        FPGA_Key = 4'b1111;   //key release

        #1000
        FPGA_Key = 4'b1101;   //key2 pressed
        #100
        FPGA_Key = 4'b1111;   //key release

        #1000
        FPGA_Key = 4'b1011;   //key3 pressed
        #100
        FPGA_Key = 4'b1111;   //key release

        #1000
        FPGA_Key = 4'b1110;   //key3 pressed
        #100
        FPGA_Key = 4'b1111;   //key release
    end

endmodule
