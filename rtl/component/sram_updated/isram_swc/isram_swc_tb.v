module isram_swc_tb;
    
    // Instantiate the I-SRAM module
    reg hclk;
    reg hrstn;
    reg [31:0] haddr;
    reg hmastlock;
    reg [6:0] hprot;
    reg [2:0] hsize;
    reg [1:0] htrans;
    reg [31:0] hwdata;
    reg hwrite;
    wire hready;
    wire [31:0] hrdata;

    // Instantiate the I-SRAM module
    ahbs_isram_swc isram_inst (
        .hclk(hclk),
        .hrstn(hrstn),
        .haddr(haddr),
        .hmastlock(hmastlock),
        .hprot(hprot),
        .hsize(hsize),
        .htrans(htrans),
        .hwdata(hwdata),
        .hwrite(hwrite),
        .hready(hready),
        .hresp(),
        .hrdata(hrdata)
    );

    // Clock generation
    always begin
        // Toggle the clock every 5 time units
        #5 hclk = ~hclk; 
    end

    initial begin
        // Generate VCD file for simulation waveform
        $dumpfile("sram_swc_tb.vcd");
        // Dump variables for waveform
        $dumpvars(0, sram_swc_tb);
        // Finish simulation after 15000 time units
        #15000 $finish;
    end

    // Test scenario
    initial begin
        // Initialize inputs
        hclk = 0;
        hrstn = 0;
        haddr = 0;
        hmastlock = 0;
        hprot = 0;
        hsize = 3'b000;
        // Idle state
        htrans = 2'b00; 
        hwdata = 0;
        hwrite = 0;

        // Release reset
        hrstn = 1;

        // Perform an instruction fetch operation
        // Address for instruction fetch
        haddr = 32'h10; 
        // Set transaction to FETCH
        htrans = 2'b10; 
        #10; // Wait for a few clock cycles

        // Reset instruction fetch operation
        // Set transaction back to IDLE
        htrans = 2'b00; 
        #10; // Wait for a few clock cycles

        // Finish simulation
        $finish;
    end

endmodule

