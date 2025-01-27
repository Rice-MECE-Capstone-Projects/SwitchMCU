module dsram_swc_tb;
    
    // Instantiate the D-SRAM module
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
    wire hresp; // Additional wire to monitor hresp

    // Instantiate the D-SRAM module
    ahbs_dsram_swc dsram_inst (
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
        .hresp(hresp),
        .hrdata(hrdata)
    );

    // Clock generation
    always begin
        // Toggle the clock every 5 time units
        #5 hclk = ~hclk; 
    end

    initial begin
        // Output VCD file for waveform
        $dumpfile("sram_swc_tb.vcd");
        // Dump variables for simulation
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
        // Initialize size
        hsize = 3'b000;
        // Set to idle state
        htrans = 2'b00; 
        hwdata = 0;
        hwrite = 0;

        // Release reset after initializations
        hrstn = 1;

        // Perform a write operation
        // Set address
        haddr = 32'h10; 
        // Set data to be written
        hwdata = 32'h12345678; 
        hwrite = 1; // Assert write signal
        // Set transaction to WRITE
        htrans = 2'b10; 
        #10; // Wait for a few clock cycles

        // Reset write operation
        hwrite = 0; // Deassert write signal
        htrans = 2'b00; // Set transaction back to IDLE
        #10; // Wait for a few clock cycles

        // Perform a read operation
        // Set address
        haddr = 32'h10; 
        // Ensure write is deasserted (read operation)
        hwrite = 0; 
        // Set transaction to READ
        htrans = 2'b10; 
        #10; // Wait for a few clock cycles

        // Reset read operation
        // Set transaction back to IDLE
        htrans = 2'b00; 
        #10; // Wait for a few clock cycles

        // Finish simulation
        $finish;
    end

endmodule

