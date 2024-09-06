module bridge_tb();


reg in_clkh, in_hreset, in_hsel, in_hwrite;
reg [1:0] in_htrans;
reg [2:0] in_hburst;
reg [3:0] in_hsize;
reg [31:0] in_haddr, in_hwdata, in_prdata;


wire out_hready, out_psel0, out_psel1, out_pwrite, out_penable;
wire [1:0] out_hresp;
wire [31:0] out_hrdata, out_paddr, out_pwdata;

AHB2APB_bridge bridge (
            .iHCLK (in_clkh),
            .iHRESETn (in_hreset),
            .iHSEL (in_hsel),
            .iHTRANS (in_htrans),
            .iHSIZE (in_hsize),
            .iHBURST (in_hburst),
            .iHWRITE (in_hwrite),
            .iHWDATA (in_hwdata),
            .iHADDR (in_haddr),
            .iPRDATA (in_prdata),

            .oHREADY (out_hready),
            .oHRESP (out_hresp),
            .oHRDATA (out_hrdata),
            .oPSEL0 (out_psel0),
            .oPSEL1 (out_psel1),
            .oPWRITE (out_pwrite),
            .oPENABLE (out_penable),
            .oPADDR (out_paddr),
            .oPWDATA (out_pwdata)
            );

initial
begin

//cycle 0

in_hreset = 1;
in_hsel = 0;
in_htrans = 0;
in_hsize = 0;
in_hburst = 0;
in_hwrite = 0;
in_hwdata = 0;
in_haddr = 0;
in_prdata = 0;
in_clkh = 0; #10;
in_clkh = 1; #10;
in_clkh = 0; #10;


in_hreset = 0;
in_clkh = 1; #10;
in_clkh = 0; #10;

in_hreset = 1;
in_clkh = 1; #10;
in_clkh = 0; #10;

in_hsel = 1;
in_clkh = 1; #10;
in_clkh = 0; #10;

//90 ns
in_hwrite = 1;
in_clkh = 1; #10;
//100 ns
in_haddr = 32'h0000000A;
in_clkh = 0; #10;

in_hwdata = 32'h0000000B;
in_hsel = 0;
in_clkh = 1; #10;
in_clkh = 0; #10;

in_hsel = 1;
in_hwdata = 32'h00000004;
in_clkh = 1; #10;
in_clkh = 0; #10;

//150 ns
in_clkh = 1; #10;
in_clkh = 0; #10;

in_hwdata = 32'h00000002;
in_clkh = 1; #10;
in_clkh = 0; #10;

in_hwdata = 32'h00000005;
in_hsel = 0;
in_clkh = 1; #10;
//200 ns
in_clkh = 0; #10;

in_clkh = 1; #10;
in_clkh = 0; #10;

in_hsel = 1;
in_clkh = 1; #10;
in_clkh = 0; #10;

in_clkh = 1; #10;
in_clkh = 0; #5;

in_prdata = 32'h0000000C; #5;

in_clkh = 1; #10;
in_clkh = 0; #10;

in_clkh = 1; #10;
in_clkh = 0; #10;

in_hsel = 0;
in_clkh = 1; #10;
in_clkh = 0; #10;

in_clkh = 1; #10;
in_clkh = 0; #10;

in_clkh = 1; #10;
in_clkh = 0; #10;

end
endmodule
