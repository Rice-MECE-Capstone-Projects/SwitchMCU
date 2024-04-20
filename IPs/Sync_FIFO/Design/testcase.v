`timescale 1ns / 1ps

module sfifo_testbench;

    // Parameters for the FIFO
    parameter FIFO_MEM_DATA_WIDTH = 16;

    // Inputs
    reg reset;
    reg clk_write_logic;
    reg clk_read_logic;
    reg read_request;
    reg write_request;
    reg [FIFO_MEM_DATA_WIDTH-1:0] w_data;

    // Outputs
    wire [FIFO_MEM_DATA_WIDTH-1:0] r_data;
    wire w_enable, r_enable;
    wire read_ack, write_ack;
    wire empty_fifo_status, full_fifo_status;
    wire halfempty_fifo_status, halffull_fifo_status;

    // Instantiate the Unit Under Test (UUT)
    SFIFO uut (
        .reset(reset),
        .clk_write_logic(clk_write_logic),
        .clk_read_logic(clk_read_logic),
        .read_request(read_request),
        .w_data(w_data),
        .write_request(write_request),
        .r_data(r_data),
        .read_ack(read_ack),
        .w_enable(w_enable),
        .r_enable(r_enable),
        .empty_fifo_status(empty_fifo_status),
        .halfempty_fifo_status(halfempty_fifo_status),
        .full_fifo_status(full_fifo_status),
        .halffull_fifo_status(halffull_fifo_status),
        .write_ack(write_ack),
        .scan_in0(1'b0),
        .scan_en(1'b0),
        .test_mode(1'b0)
    );

    // Clock generation
    initial begin
        clk_write_logic = 0;
        forever #5 clk_write_logic = ~clk_write_logic;
    end

    initial begin
        clk_read_logic = 0;
        forever #10 clk_read_logic = ~clk_read_logic;
    end

    // Test sequence
    initial begin
        // Initialize Inputs
        reset = 1;
        read_request = 0;
        write_request = 0;
        w_data = 0;

        // Setup the waveform dump
        $dumpfile("dump.vcd"); 
        $dumpvars(0, sfifo_testbench);

        // Reset the FIFO
        #100;
        reset = 0;
        #100;

        // Write data into FIFO
        write_request = 1;
        for (int i = 0; i < 10; i++) begin
            w_data = i + 1; // Write different data
            #10;
        end
        write_request = 0;

        // Wait some time before starting to read
        #50;

        // Read data from FIFO
        read_request = 1;
        for (int j = 0; j < 10; j++) begin
            #20;
        end
        read_request = 0;

        // Finish the simulation
        #100;
        $finish;
    end

endmodule