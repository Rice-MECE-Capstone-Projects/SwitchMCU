module ahb_tb();

reg in_clkh, in_hreset, in_hready;
reg [1:0] in_hresp;
reg [31:0] in_hrdata;

wire out_hwrite;
wire [1:0] out_htrans;
wire [2:0] out_hsize, out_hburst;
wire [31:0] out_haddr, out_hwdata;

AHB_control_unit ahb (.iHCLK (in_clkh),
            .iHRESETn (in_hreset),
            .iHREADY (in_hready),
            .iHRESP (in_hresp),
            .iHRDATA (in_hrdata),
            
            .oHTRANS (out_htrans),
            .oHSIZE (out_hsize),
            .oHBURST (out_hburst),
            .oHWRITE (out_hwrite),
            .oHADDR (out_haddr),
            .oHWDATA (out_hwdata)
            );

initial
begin

//cycle 0

in_hreset = 1;
in_hready = 0;
in_hresp = 0;
in_hrdata = 0;
in_clkh = 0; #10;
in_clkh = 1; #10;
in_clkh = 0; #10;

in_hreset = 0;
in_clkh = 1; #10;
in_clkh = 0; #10;

in_hreset = 1;
in_clkh = 1; #10;
in_clkh = 0; #10;

in_hready = 1;
in_clkh = 1; #10;
in_clkh = 0; #10;

in_clkh = 1; #10;
//100 ns
in_clkh = 0;#10;

in_clkh = 1; #10;
in_clkh = 0; #10;

in_clkh = 1; #10;
in_clkh = 0; #10;

//150 ns
in_hrdata[3:0] = 4'b1011;
in_clkh = 1; #10;
in_clkh = 0; #10;

in_hready = 0;
in_clkh = 1; #10;
in_clkh = 0; #10;

in_clkh = 1; #10;
//200 ns
in_clkh = 0; #10;

in_clkh = 1; #10;
in_clkh = 0; #10;

in_clkh = 1; #10;
in_clkh = 0; #10;

//250 ns
in_hready = 1;
in_clkh = 1; #10;
in_clkh = 0; #10;

in_clkh = 1; #10;
in_clkh = 0; #10;

in_clkh = 1; #10;
in_clkh = 0; #10;

in_clkh = 1; #10;
in_clkh = 0; #10;


end
endmodule
