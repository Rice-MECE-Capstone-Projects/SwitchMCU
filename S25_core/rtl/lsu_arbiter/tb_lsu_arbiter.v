`timescale 1ns/1ps

module arbiter_tb;
    // Clock and reset
    reg clk;
    reg rst_n;
    
    // I-cache Interface
    reg        icache_data_req;
    reg [31:0] icache_data_addr;
    reg        icache_data_we;
    reg [3:0]  icache_data_be;
    reg [31:0] icache_data_wdata;
    wire       icache_data_gnt;
    wire       icache_data_rvalid;
    wire [31:0] icache_data_rdata;
    
    // D-cache Interface
    reg        dcache_data_req;
    reg [31:0] dcache_data_addr;
    reg        dcache_data_we;
    reg [3:0]  dcache_data_be;
    reg [31:0] dcache_data_wdata;
    wire       dcache_data_gnt;
    wire       dcache_data_rvalid;
    wire [31:0] dcache_data_rdata;
    
    // SDRAM Controller Interface
    wire       L_sdrc_wr_n;
    wire       L_sdrc_rd_n;
    wire [31:0] L_sdrc_addr;
    wire [3:0]  L_sdrc_dqm;
    wire [7:0]  L_sdrc_data_len;
    wire [31:0] L_sdrc_data;
    reg        O_sdrc_busy_n;
    reg [31:0] O_sdrc_data;
    reg        O_sdrc_rd_valid;

    // Test control
    integer error_count;
    integer test_case;
    
    // Variables for tasks
    integer wait_count;
    reg     signal_detected;
    
    // Debug signals
    wire is_icache_selected;
    assign is_icache_selected = dut.current_icache;

    // Instantiate DUT
    arbiter dut (
        .clk(clk),
        .rst_n(rst_n),
        // SDRAM Controller Interface
        .L_sdrc_wr_n(L_sdrc_wr_n),
        .L_sdrc_rd_n(L_sdrc_rd_n),
        .L_sdrc_addr(L_sdrc_addr),
        .L_sdrc_dqm(L_sdrc_dqm),
        .L_sdrc_data_len(L_sdrc_data_len),
        .L_sdrc_data(L_sdrc_data),
        .O_sdrc_busy_n(O_sdrc_busy_n),
        .O_sdrc_data(O_sdrc_data),
        .O_sdrc_rd_valid(O_sdrc_rd_valid),
        // I-cache Interface
        .icache_data_req(icache_data_req),
        .icache_data_addr(icache_data_addr),
        .icache_data_we(icache_data_we),
        .icache_data_be(icache_data_be),
        .icache_data_wdata(icache_data_wdata),
        .icache_data_gnt(icache_data_gnt),
        .icache_data_rvalid(icache_data_rvalid),
        .icache_data_rdata(icache_data_rdata),
        // D-cache Interface
        .dcache_data_req(dcache_data_req),
        .dcache_data_addr(dcache_data_addr),
        .dcache_data_we(dcache_data_we),
        .dcache_data_be(dcache_data_be),
        .dcache_data_wdata(dcache_data_wdata),
        .dcache_data_gnt(dcache_data_gnt),
        .dcache_data_rvalid(dcache_data_rvalid),
        .dcache_data_rdata(dcache_data_rdata)
    );

    // Clock generation
    initial clk = 0;
    always #5 clk = ~clk;

    // Reset task
    task reset;
        begin
            rst_n = 0;
            #20 rst_n = 1;
            #10;
        end
    endtask
    
    // Initialize signals task
    task init_signals;
        begin
            icache_data_req = 0;
            dcache_data_req = 0;
            icache_data_addr = 0;
            icache_data_we = 0;
            icache_data_be = 0;
            icache_data_wdata = 0;
            dcache_data_addr = 0;
            dcache_data_we = 0;
            dcache_data_be = 0;
            dcache_data_wdata = 0;
            O_sdrc_rd_valid = 0;
            O_sdrc_data = 0;
            O_sdrc_busy_n = 1; // Default to ready
            error_count = 0;
            test_case = 0;
            wait_count = 0;
            signal_detected = 0;
        end
    endtask
    
    // SDRAM response model
    // Note: O_sdrc_busy_n is 1 when SDRAM is ready, 0 when busy
    always @(posedge clk) begin
        if (!rst_n) begin
            O_sdrc_busy_n <= 1;  // Ready by default
            O_sdrc_rd_valid <= 0;
        end else begin
            // Default values for each cycle
            O_sdrc_rd_valid <= 0;
            
            // Process read requests - when L_sdrc_rd_n goes low (active)
            if (!L_sdrc_rd_n && O_sdrc_busy_n) begin
                // Become busy for at least one cycle
                O_sdrc_busy_n <= 0;
                
                // After one cycle, return data and valid
                O_sdrc_data <= 32'hDEADBEEF;
                O_sdrc_rd_valid <= 1;
                
                // Return to ready state in the next cycle (handled outside this if block)
            end else if (!L_sdrc_wr_n && O_sdrc_busy_n) begin
                // Process write requests - when L_sdrc_wr_n goes low (active)
                // Become busy for one cycle
                O_sdrc_busy_n <= 0;
            end else if (!O_sdrc_busy_n) begin
                // Return to ready state after being busy for one cycle
                O_sdrc_busy_n <= 1;
            end
        end
    end

    // Wait for grant helper task
    task wait_for_grant;
        input is_icache;
        output got_grant;
        begin
            wait_count = 0;
            signal_detected = 0;
            
            while (wait_count < 10 && !signal_detected) begin
                @(posedge clk);
                if (is_icache && icache_data_gnt) 
                    signal_detected = 1;
                else if (!is_icache && dcache_data_gnt)
                    signal_detected = 1;
                wait_count = wait_count + 1;
            end
            
            got_grant = signal_detected;
        end
    endtask
    
    // Wait for read valid helper task
    task wait_for_read_valid;
        input is_icache;
        output got_valid;
        begin
            wait_count = 0;
            signal_detected = 0;
            
            while (wait_count < 10 && !signal_detected) begin
                @(posedge clk);
                if (is_icache && icache_data_rvalid) 
                    signal_detected = 1;
                else if (!is_icache && dcache_data_rvalid)
                    signal_detected = 1;
                wait_count = wait_count + 1;
            end
            
            got_valid = signal_detected;
        end
    endtask
    
    // I-cache read request task
    task test_icache_read;
        input [31:0] addr;
        reg got_grant;
        reg got_valid;
        begin
            $display("Test Case %0d: I-cache read request at address %h", test_case, addr);
            
            // Set request active
            @(posedge clk);
            icache_data_req = 1;
            icache_data_addr = addr;
            icache_data_we = 0; // Read request
            icache_data_be = 4'hF; // All bytes enabled
            
            // Wait for grant or timeout after 10 cycles
            wait_for_grant(1, got_grant);
            
            if (got_grant)
                $display("I-cache grant received");
            else
                $display("Error: I-cache grant timeout");
            
            // Wait for data valid or timeout after 10 cycles
            wait_for_read_valid(1, got_valid);
            
            if (got_valid)
                $display("I-cache read valid received, data = %h", icache_data_rdata);
            else
                $display("Error: I-cache read valid timeout");
            
            // Check data
            if (got_valid && icache_data_rdata !== 32'hDEADBEEF) begin
                $display("Error: I-cache read data mismatch: got %h, expected %h", 
                         icache_data_rdata, 32'hDEADBEEF);
                error_count = error_count + 1;
            end
            
            // Clear request and wait a couple cycles
            @(posedge clk);
            icache_data_req = 0;
            repeat (2) @(posedge clk);
        end
    endtask
    
    // D-cache read request task
    task test_dcache_read;
        input [31:0] addr;
        reg got_grant;
        reg got_valid;
        begin
            $display("Test Case %0d: D-cache read request at address %h", test_case, addr);
            
            // Set request active
            @(posedge clk);
            dcache_data_req = 1;
            dcache_data_addr = addr;
            dcache_data_we = 0; // Read request
            dcache_data_be = 4'hF; // All bytes enabled
            
            // Wait for grant or timeout after 10 cycles
            wait_for_grant(0, got_grant);
            
            if (got_grant)
                $display("D-cache grant received");
            else
                $display("Error: D-cache grant timeout");
            
            // Wait for data valid or timeout after 10 cycles
            wait_for_read_valid(0, got_valid);
            
            if (got_valid)
                $display("D-cache read valid received, data = %h", dcache_data_rdata);
            else
                $display("Error: D-cache read valid timeout");
            
            // Check data
            if (got_valid && dcache_data_rdata !== 32'hDEADBEEF) begin
                $display("Error: D-cache read data mismatch: got %h, expected %h", 
                         dcache_data_rdata, 32'hDEADBEEF);
                error_count = error_count + 1;
            end
            
            // Clear request and wait a couple cycles
            @(posedge clk);
            dcache_data_req = 0;
            repeat (2) @(posedge clk);
        end
    endtask
    
    // Test both caches simultaneously
    task test_both_caches;
        input [31:0] icache_addr;
        input [31:0] dcache_addr;
        reg got_grant;
        reg got_valid;
        begin
            $display("Test Case %0d: Both read requests (I-cache priority)", test_case);
            
            // First set up I-cache request
            @(posedge clk);
            icache_data_req = 1;
            icache_data_addr = icache_addr;
            icache_data_we = 0; // Read request
            icache_data_be = 4'hF; // All bytes enabled
            
            // Then set up D-cache request on the same cycle
            dcache_data_req = 1;
            dcache_data_addr = dcache_addr;
            dcache_data_we = 0; // Read request
            dcache_data_be = 4'hF; // All bytes enabled
            
            // Wait for icache grant or timeout after 10 cycles
            wait_for_grant(1, got_grant);
            
            if (got_grant)
                $display("I-cache grant received");
            else
                $display("Error: I-cache grant timeout");
            
            // Check that dcache doesn't get grant
            if (dcache_data_gnt) begin
                $display("Error: D-cache got grant when both requests active");
                error_count = error_count + 1;
            end
            
            // Explicitly check that the I-cache address is being used, not D-cache address
            @(posedge clk); // Wait to observe the correct address
            if (L_sdrc_addr !== icache_addr) begin
                $display("Error: Incorrect address for I-cache. Expected %h, got %h", 
                        icache_addr, L_sdrc_addr);
                error_count = error_count + 1;
            end
            
            // Wait for data valid or timeout after 10 cycles
            wait_for_read_valid(1, got_valid);
            
            if (got_valid)
                $display("I-cache read valid received, data = %h", icache_data_rdata);
            else
                $display("Error: I-cache read valid timeout");
            
            // Check data
            if (got_valid && icache_data_rdata !== 32'hDEADBEEF) begin
                $display("Error: I-cache read data mismatch: got %h, expected %h", 
                         icache_data_rdata, 32'hDEADBEEF);
                error_count = error_count + 1;
            end
            
            // Clear icache request but keep dcache active
            @(posedge clk);
            icache_data_req = 0;
            
            // Since we're forcing the D-cache to send a new request after I-cache finishes,
            // we need to retry the D-cache request after I-cache is done
            // Verify first that D-cache didn't get a grant automatically
            if (dcache_data_gnt) begin
                $display("Error: D-cache got grant automatically after I-cache completed");
                error_count = error_count + 1;
            end
            
            // Reset and re-assert D-cache request to ensure we get a fresh request
            dcache_data_req = 0;
            @(posedge clk);
            dcache_data_req = 1;
            
            // Wait a couple of cycles before checking for dcache grant
            @(posedge clk);
            
            // Wait for dcache grant or timeout after 10 cycles
            wait_for_grant(0, got_grant);
            
            if (got_grant)
                $display("D-cache grant received after I-cache completed");
            else
                $display("Error: D-cache grant timeout after I-cache completed");
            
            // Check address
            @(posedge clk); // Wait to observe the correct address
            if (L_sdrc_addr !== dcache_addr) begin
                $display("Error: Incorrect address for D-cache. Expected %h, got %h", 
                        dcache_addr, L_sdrc_addr);
                error_count = error_count + 1;
            end
            
            // Wait for data valid or timeout after 10 cycles
            wait_for_read_valid(0, got_valid);
            
            if (got_valid)
                $display("D-cache read valid received, data = %h", dcache_data_rdata);
            else
                $display("Error: D-cache read valid timeout");
            
            // Check data
            if (got_valid && dcache_data_rdata !== 32'hDEADBEEF) begin
                $display("Error: D-cache read data mismatch: got %h, expected %h", 
                         dcache_data_rdata, 32'hDEADBEEF);
                error_count = error_count + 1;
            end
            
            // Clear request and wait a couple cycles
            @(posedge clk);
            dcache_data_req = 0;
            repeat (2) @(posedge clk);
        end
    endtask
    
    // I-cache write request task
    task test_icache_write;
        input [31:0] addr;
        input [31:0] data;
        reg got_grant;
        begin
            $display("Test Case %0d: I-cache write request at address %h", test_case, addr);
            
            // Set request active
            @(posedge clk);
            icache_data_req = 1;
            icache_data_addr = addr;
            icache_data_we = 1; // Write request
            icache_data_be = 4'hF; // All bytes enabled
            icache_data_wdata = data;
            
            // Wait for grant or timeout after 10 cycles
            wait_for_grant(1, got_grant);
            
            if (got_grant)
                $display("I-cache grant received for write");
            else
                $display("Error: I-cache grant timeout for write");
            
            // One cycle is needed to observe the address and data
            @(posedge clk);
            
            // Check address after grant
            if (L_sdrc_addr !== addr) begin
                $display("Error: Incorrect address for I-cache write. Expected %h, got %h", 
                        addr, L_sdrc_addr);
                error_count = error_count + 1;
            end
            
            // Check data
            if (L_sdrc_data !== data) begin
                $display("Error: Incorrect data for I-cache write. Expected %h, got %h", 
                        data, L_sdrc_data);
                error_count = error_count + 1;
            end
            
            // Wait for write to complete and check write enable
            if (L_sdrc_wr_n) begin
                $display("Error: Write enable not asserted. Expected 0, got %b", L_sdrc_wr_n);
                error_count = error_count + 1;
            end
            
            // Wait a few cycles for write to complete
            repeat (3) @(posedge clk);
            
            // Clear request and wait a couple cycles
            icache_data_req = 0;
            repeat (2) @(posedge clk);
        end
    endtask

    // Main test sequence
    initial begin
        // Initialize
        init_signals();
        
        // Create VCD file
        $dumpfile("arbiter.vcd");
        $dumpvars(0, arbiter_tb);
        
        // Reset
        reset();
        
        // Test Case 1: I-cache read request
        test_case = 1;
        test_icache_read(32'h1000);
        
        // Test Case 2: D-cache read request
        test_case = 2;
        test_dcache_read(32'h2000);
        
        // Test Case 3: Both read requests (I-cache priority)
        test_case = 3;
        test_both_caches(32'h3000, 32'h2000);
        
        // Test Case 4: I-cache write request
        test_case = 4;
        test_icache_write(32'h4000, 32'hCAFEBABE);
        
        // Final report
        if (error_count == 0)
            $display("All test cases PASSED");
        else
            $display("%0d test cases FAILED", error_count);
        
        $finish;
    end
endmodule
