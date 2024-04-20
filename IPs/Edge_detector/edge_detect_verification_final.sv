// CANDIDATE NAME : Lechuan Sun
//--------------------------------------------------------------------
// Testbench here to verify the DUT.
// Provide a verification plan also detailing the strategy & testbench.
// Include checks, coverage and stimulus
//--------------------------------------------------------------------
// below is the initial test case to test if the design works: 
//--------------------------------------------------------------------
//module edge_detect_tb ();
//  bit clk;
//  bit rstn;
//  bit sig_now;
//  bit rising_edge;
//  bit falling_edge;
//
// edge_detect DUT (
//    .clk(clk),
//    .rstn(rstn),
//    .sig_now(sig_now),
//    .rising_edge(rising_edge),
//	.falling_edge(falling_edge)
//);
//
//always begin
//#5 clk = ~ clk;
//end  
//  
//initial begin
//  clk = 1'b0; rstn = 1'b0; sig_now = 1'b0;
//  
//$dumpfile ("edge_detect_tb.vcd"); 
//$dumpvars; 
//  
//  #10 rstn = 1'b1;
//  #10 sig_now = 1'b1;
//  #20 sig_now = 1'b0;
//  #30 sig_now = 1'b1;
//  #10 rstn = 1'b0;
//  #10 rstn = 1'b1;
//  #20 sig_now = 1'b0;
//  #30 sig_now = 1'b1;
//
//#20 $finish;
//end 
//
//endmodule
//--------------------------------------------------------------
// Here is the detailed verification plan

// Defines a Packet class that represents a stimulus packet with randomizable properties.
class Packet;
  rand bit rstn;   //random signal
  rand bit sig_now;
  bit rising_edge;
  bit falling_edge;

  // Distribution constraint to ensure sig_now toggles between 0 and 1 with equal probability.
  constraint sig_now_toggle {
    sig_now dist {1'b0 := 1, 1'b1 := 1};
  }

  // Computes expected rising and falling edges based on the previous and current sig_now values.
  function void compute_expected_edges(bit prev_sig_now);
    this.rising_edge = sig_now & (~prev_sig_now);
    this.falling_edge = (~sig_now) & prev_sig_now;
  endfunction

  // Prints packet information, useful for debugging and tracking simulation progress.
  function void print(string tag="");
    $display("T=%0t %s sig_now=%b rising_edge=%b falling_edge=%b",
              $time, tag, sig_now, rising_edge, falling_edge);
  endfunction
endclass

// Defines a coverage group to measure coverage of signal transitions and edges.
covergroup Cov_sig_now_with_edges with function sample(bit sig_now, bit rising_edge, bit falling_edge);
  coverpoint sig_now {
    bins sig_now_0 = {0}; // Bin for signal being low.
    bins sig_now_1 = {1}; // Bin for signal being high.
  }
  coverpoint rising_edge {
    bins rising_edge_detected = {1};
    bins no_rising_edge = {0};
  }
  coverpoint falling_edge {
    bins falling_edge_detected = {1};
    bins no_falling_edge = {0};
  }
endgroup

// The driver class is responsible for driving the stimulus onto the DUT interface.
class driver;
  virtual edge_if vif; // Virtual interface to connect with the DUT.
  event drv_done; // Event to signal when driving is done.
  mailbox drv_mbx; // Mailbox for receiving Packet instances to drive.

  task run();
    $display("T=%0t [Driver] starting ...", $time);
    forever begin
      Packet item;

      $display("T=%0t [Driver] waiting for item ...", $time);
      drv_mbx.get(item); // Retrieves a Packet from the mailbox.
      @ (posedge vif.clk); // Waits for the next clock edge to drive signals.
      item.print("Driver"); // Prints the current packet for debugging.
      vif.rstn <= item.rstn; // Drives the reset signal.
      vif.sig_now <= item.sig_now; // Drives the current signal value.
      ->drv_done; // Signals that driving is complete.
    end
  endtask
endclass


// The monitor has a virtual interface handle with which it can monitor
// the events happening on the interface. It sees new transactions and then
// captures information into a packet and sends it to the scoreboard
// using another mailbox.
class monitor;
  virtual edge_if vif; // Virtual interface for observing signal transitions.

  // Mailbox connected to scoreboard
  mailbox scb_mbx;

  task run();
    $display("T=%0t [Monitor] starting ...", $time);
    forever begin
      Packet m_pkt = new();
      @ (posedge vif.clk);
      #1;
        m_pkt.rising_edge = vif.rising_edge;// Captures the rising edge.
        m_pkt.falling_edge = vif.falling_edge;
        m_pkt.print("Monitor");
      scb_mbx.put(m_pkt); // Sends the captured packet to the scoreboard.
    end
  endtask
endclass

// The scoreboard class checks the correctness of the DUT's behavior against expected results.
class scoreboard;
  virtual edge_if vif; // Virtual interface to access actual signal values.
  mailbox scb_mbx; // Mailbox for receiving packets to check.

  function void set_vif(virtual edge_if vif);
    this.vif = vif; // Sets the virtual interface.
  endfunction

  task run();
    forever begin
      Packet item;
      scb_mbx.get(item); // Retrieves a Packet from the mailbox for checking.
      item.print("Scoreboard"); // Prints the packet for debugging.

      // Compares the expected and actual rising edge signals.
      if (vif.rising_edge !== item.rising_edge) begin
        $display("[%0t] Scoreboard Error! Rising edge mismatch expected=%0b, actual=%0b", $time, item.rising_edge, vif.rising_edge);
      end else begin
        $display("[%0t] Scoreboard Pass! Rising edge match", $time);
      end

      // Compares the expected and actual falling edge signals.
      if (vif.falling_edge !== item.falling_edge) begin
        $display("[%0t] Scoreboard Error! Falling edge mismatch expected=%0b, actual=%0b", $time, item.falling_edge, vif.falling_edge);
      end else begin
        $display("[%0t] Scoreboard Pass! Falling edge match", $time);
      end
    end
  endtask
endclass


// The generator class is responsible for generating test packets and sending them to the driver.
class generator;
  int loop = 20; // Number of packets to generate.
  event drv_done; // Event to synchronize with the driver task completion.
  mailbox drv_mbx; // Mailbox to send generated packets to the driver.

  task run();
    Packet prev_item = new; // Creates an initial packet with default values.
    prev_item.sig_now = 0; // Initializes the signal value for the first packet.

    for (int i = 0; i < loop; i++) begin
      Packet item = new; // Creates a new packet instance for each loop iteration.
      if (!item.randomize()) $fatal("Failed to randomize Packet"); // Ensures packet is randomized, else terminates simulation.

      item.compute_expected_edges(prev_item.sig_now); // Computes the expected edges based on the previous packet's sig_now.

      $display("T=%0t [Generator] Loop:%0d/%0d create next item", $time, i+1, loop); // Debugging message indicating packet creation.
      drv_mbx.put(item); // Sends the generated packet to the driver via mailbox.
      prev_item = item; // Updates the previous item reference for the next iteration.

      $display("T=%0t [Generator] Wait for driver to be done", $time); // Indicates waiting for driver completion.
      @(drv_done); // Waits for the driver to signal completion before proceeding.
    end
  endtask
endclass


// The environment class encapsulates all components of the test environment.
class env;
  generator g0; // Instance of the generator class.
  driver d0; // Instance of the driver class.
  monitor m0; // Instance of the monitor class.
  scoreboard scb; // Instance of the scoreboard class.
  mailbox scb_mbx; // Mailbox used for communication between monitor and scoreboard.
  virtual edge_if vif; // Virtual interface instance for signal connections.

  event drv_done; // Event used for synchronization between generator and driver.
  mailbox drv_mbx; // Mailbox used for communication between generator and driver.

  function new();
    // Constructor initializes all environment components and mailboxes.
    g0 = new;
    d0 = new;
    m0 = new;
    scb = new;
    scb_mbx = new();
    drv_mbx = new();
  endfunction

  virtual task run();
    // Connects all environment components and starts their execution.
    d0.vif = vif;
    m0.vif = vif;
    g0.drv_mbx = drv_mbx;
    d0.drv_mbx = drv_mbx;
    m0.scb_mbx = scb_mbx;
    scb.scb_mbx = scb_mbx;
    d0.drv_done = drv_done;
    g0.drv_done = drv_done;
    scb.set_vif(vif);

    fork // Starts all tasks in parallel.
      g0.run();
      d0.run();
      m0.run();
      scb.run();
    join_any // Waits for any of the tasks to complete.
  endtask
endclass


// The test class is the class that instantiates the environment.
class test;
  env e0; // Instance of the environment.
  mailbox drv_mbx; // Mailbox for communication between test and driver.

  function new();
    drv_mbx = new(); // Initializes the mailbox.
    e0 = new(); // Instantiates the environment.
  endfunction

  virtual task run();
    e0.d0.drv_mbx = drv_mbx; // Connects the driver mailbox.
    e0.run(); // Starts the environment execution.
  endtask
endclass

// Defines a virtual interface for connecting the DUT with the test environment.
interface edge_if(input bit clk);
  logic rstn;
  logic sig_prev;
  logic sig_now;
  logic rising_edge;
  logic falling_edge;
endinterface

// Top-level module for the testbench.
module tb;
  bit clk = 0;
  always #10 clk = ~clk;

  edge_if vif(clk);// Instantiates the virtual interface with the clock signal.

  edge_detect DUT (
    .clk(clk),
    .rstn(vif.rstn),
    .sig_now(vif.sig_now),
    .rising_edge(vif.rising_edge),
    .falling_edge(vif.falling_edge)
  );

  Cov_sig_now_with_edges ck; // Instantiates the coverage group.

  test t0;

  initial begin
    ck = new(); // Initializes the coverage group.
    t0 = new(); // Initializes the test.
    
    clk <= 0;
    vif.rstn <= 0;
    vif.sig_now <= 0;
    #20 vif.rstn <= 1; 

    t0.e0.vif = vif; // Connects the virtual interface to the environment.
    t0.run(); // Starts the test execution.

    #200; // Wait for test to run
    $finish; 
  end

  initial begin
    // Continuously samples coverage at every positive clock edge.
    forever begin
      @(posedge clk);
      ck.sample(vif.sig_now, vif.rising_edge, vif.falling_edge);
    end
  end

  initial begin
    $dumpfile("dump.vcd"); // Specifies the VCD file for waveform dumping.
    $dumpvars; // Dumps all variables for waveform analysis.
  end
endmodule

//See the Simulation Log for Scoreboard and Verification details
//In Mentor Graphics QuestaSim or ModelSim, use "+cover=bcesfx" for simulation and "vcover report" to generate coverage reports.