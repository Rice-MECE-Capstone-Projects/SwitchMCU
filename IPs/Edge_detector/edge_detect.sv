// NAME : Lechuan Sun
//-------------------------------------------------------------------------
// SPECIFICATION: Create a bital circuit that detects the edge of a
// signal and reports which edge--a rising edge or falling edge-
// accounting for starting and reset events.
//
// Note: If there is no edge change, no signal flag(s) should be asserted.
//-------------------------------------------------------------------------
// DUT Description :
//
// PARAMETERS:
// clk: clock signal.
// rstn: active_low reset signal.
// sig_prev: previous signal value.
// sig_now: current signal value.
// rising_edge: flag that indicates a rising edge.
// falling_edge: flag that indicates a falling edge.
//
// HOW IT WORK:
// 1. "sig_prev" is a flip-flop that stores the previous value of the signal
// before the edge; It can be reset to 0;
// 2. The "always" block checks for a rising edge of the clock or a falling 
// edge of the reset signal
// 3. The last two "assign" lines indicate that:
// 4. The "rising_edge" signal is asserted when "sig_now" is high and "sig_prev"
// is low, indicating a rising edge.
// 5. The "falling_edge" signal is asserted when "sig_now" is low and "sig_prev"
// is high, indicating a falling edge.
// 6. When there is no edge change, "sig_now" is equal to "sig_prev", so that
// both "rising_edge", "falling_edge" signals are not asserted.
//
//-------------------------------------------------------------------------
// Describe all your assumptions
// 
// 1. The "clk" is a stable, periodic clock signal.
// 2. The "rstn" is an active-low asynchronous reset.
// 3. The detection of edges is limited to the rising edge of the "clk".
// 4. The "sig_now" input signal is without glitches or bounces
// 5. The output flags (rising_edge, falling_edge) are not latched and will only 
// be asserted for half clock cycle after the edge is detected.
// 6. There might be a fake rising_edge when "rstn" is asserted, this is because 
// "rstn" will reset "sig_prev" to 0
//-------------------------------------------------------------------------

// Code your DUT here
module edge_detect (clk, rstn, sig_now, rising_edge, falling_edge);
  input bit clk;
  input bit rstn;
  input bit sig_now;
  output bit rising_edge;
  output bit falling_edge;
  
  bit sig_prev;//introduce temp sig_prev signal to help calculate the edge
  
  always @ (posedge clk or negedge rstn) begin
    if (!rstn)
      sig_prev <= 1'b0;
    else
      sig_prev <= sig_now;
  end
  
  assign rising_edge = sig_now & (~sig_prev);
  assign falling_edge = (~sig_now) & sig_prev;
  
endmodule
    