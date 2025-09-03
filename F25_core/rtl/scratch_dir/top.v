module timed_pulse #(
  parameter N = 2, // Number of cycles to capture ins_data_req_o
  parameter L = 3   // Number of cycles to wait after capture
) (
    input  clk,
    input  reset,
    input  ins_data_req_o,
    output reg value_o,
    output wire grant,
    output wire req_done,
    output wire bram_en
);

  reg [31:0] counter,counter_L;
  reg capture_done;
  reg delay_done;
  reg pulse_out;
  reg bram_read;
wire grant_w;
assign grant = grant_w;
assign grant_w = (counter == (N - 1)) && ins_data_req_o;
wire req_done_w;
assign req_done = req_done_w;
assign req_done_w = (counter_L == (L - 1));
assign bram_en = bram_read;

  initial begin 
    bram_read <=0;
  end 
  always @ (posedge clk ) begin 
    if (grant) begin
      bram_read <= 1;
    end else if (bram_read) begin
      bram_read <= 0;
    end

  end 


  always @(posedge clk) begin
    if (reset) begin
      counter       <= 0;
      counter_L       <= 0;
      capture_done  <= 0;
      delay_done    <= 0;
      value_o       <= 0;
      pulse_out     <= 0;
    end else begin
      if(!capture_done)
      begin
            pulse_out <= 0;

        if (ins_data_req_o) begin
          if (counter < N -1) begin
            counter <= counter + 1;
          end else begin
            capture_done <= 1;
            counter <= 0;
           end
        end
      end else begin//if (!delay_done) begin
          if (counter_L < L-1) begin
             counter_L <= counter_L + 1;
          end else begin
            counter_L <= 0;
            capture_done <= 0;
            pulse_out    <= 1;
          end
        // end else begin
        //    pulse_out <= 1;
        // end
    end
  end
  end
//   always @(posedge clk) begin
//     if(reset) begin
//        value_o <= 0;
//     end else begin
//         value_o <= pulse_out;
//         pulse_out <= 0;
//     end
//   end

endmodule


module timed_pulse_tb;

  // Parameters
  parameter N = 2;
  parameter L = 1;

  // Signals
  reg clk;
  reg reset;
  reg ins_data_req_o;
  wire value_o;
  wire grant;

  // Instantiate the DUT
  timed_pulse #(
    .N(N),
    .L(L)
  ) dut (
    .clk(clk),
    .reset(reset),
    .ins_data_req_o(ins_data_req_o),
    .value_o(value_o),
    .grant(grant),
    .req_done(req_done),
    .bram_en(bram_en)
  );

      initial begin
        $dumpfile("timed_pulse_tb.vcd"); // Specify the dump file name.
        $dumpvars(3, timed_pulse_tb);   // Dump all variables in tb_pulse_generator scope.
      end
  // Clock generation
  always begin
    #5 clk = ~clk;
  end

  // Test sequence
  initial begin
    // Initialize signals
    clk = 0;
    reset = 1;
    ins_data_req_o = 0;
        
    // Reset the DUT
    @(posedge clk);
    @(posedge clk);
    reset = 0;
    @(posedge clk);
        
    @(posedge clk);
    ins_data_req_o = 1;
    repeat(N) @(posedge clk);
    ins_data_req_o = 0;
    @(posedge clk);
    ins_data_req_o = 1;
    repeat(N) @(posedge clk);
    ins_data_req_o = 0;
    @(posedge clk);
    ins_data_req_o = 1;
    repeat(N) @(posedge clk);
    ins_data_req_o = 0;
    @(posedge clk);
    ins_data_req_o = 1;
    repeat(N) @(posedge clk);
    ins_data_req_o = 0;
    @(posedge clk);
    ins_data_req_o = 1;
    repeat(N) @(posedge clk);

    ins_data_req_o = 0;
    @(posedge clk);
    ins_data_req_o = 1;
    repeat(N) @(posedge clk);
    ins_data_req_o = 0;

    repeat(L) @(posedge clk);
    // ins_data_req_o = 0;
    
       repeat (10) @(posedge clk);
    @(posedge clk);
    ins_data_req_o = 1;
    repeat(N) @(posedge clk);
    ins_data_req_o = 0;
    repeat(L) @(posedge clk);
    ins_data_req_o = 0;

    
       repeat (10) @(posedge clk);
    @(posedge clk);
    ins_data_req_o = 1;
    repeat(N) @(posedge clk);
    ins_data_req_o = 0;
    repeat(L) @(posedge clk);
    ins_data_req_o = 0;
    // // Test case 2: Trigger the pulse again
    //    @(posedge clk);
    //       ins_data_req_o = 1;
    //     repeat(N+L+2) @(posedge clk);
    //    ins_data_req_o = 0;
       
     // Wait some extra cycles
       repeat(10) @(posedge clk);


    // End simulation
    $finish;
  end

  //Monitor signals
  initial begin
    $monitor("Time=%0t, clk=%b, reset=%b, ins_data_req_o=%b, value_o=%b, grant=%b",
      $time, clk, reset, ins_data_req_o, value_o, grant);
  end
endmodule
