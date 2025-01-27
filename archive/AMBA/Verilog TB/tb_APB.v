module apb_testbench();

reg in_clkp, in_preset, in_psel, in_pwrite, in_penable;
reg [31:0] in_paddr, in_pwdata, in_gpio;

wire [31:0] out_prdata, out_gpio;

APB_GPIO apb (.iPCLK (in_clkp),
            .iPRESETn (in_preset),
            .iPSEL (in_psel),
            .iPWRITE (in_pwrite),
            .iPENABLE (in_penable),
            .iPADDR (in_paddr),
            .iPWDATA (in_pwdata),
            .iGPIOin (in_gpio),

            .oPRDATA (out_prdata),
            .oGPIOout (out_gpio)
            );

initial
begin

//cycle 0

in_preset = 1;
in_psel = 0;
in_pwrite = 0;
in_penable = 0;
in_paddr = 0;
in_pwdata = 0;
in_gpio = 0; 
in_clkp = 0; #10;
in_clkp = 1; #10;
in_clkp = 0; #10;


in_preset = 0;
in_clkp = 1; #10;
in_clkp = 0; #10;

in_preset = 1;
in_clkp = 1; #10;
in_clkp = 0; #10;

in_clkp = 1; #10;
in_clkp = 0; #10;

in_pwrite = 1;
in_clkp = 1; #10;
in_clkp = 0;#10;

in_penable = 1;
in_pwdata = 32'h0000000F;
in_clkp = 1; #10;
in_clkp = 0; #10;

in_paddr = 32'h00000004;
in_clkp = 1; #10;
in_clkp = 0; #10;

in_paddr = 32'h00000008;
in_clkp = 1; #10;
in_clkp = 0; #10;

in_paddr = 32'h0000000C;
in_clkp = 1; #10;
in_clkp = 0; #10;

in_paddr = 0;
in_clkp = 1; #10;
in_clkp = 0; #10;

in_clkp = 1; #10;
in_clkp = 0; #10;

end
endmodule
