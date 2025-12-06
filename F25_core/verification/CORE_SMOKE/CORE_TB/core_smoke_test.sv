//==============================================================
// core_smoke_test.sv
// Very simple bring-up test: just start core and wait for STOP_sim
//==============================================================
class core_smoke_test extends uvm_test;

  `uvm_component_utils(core_smoke_test)

  virtual core_if vif;
  int unsigned cycles_timeout = 8000;

  function new(string name = "core_smoke_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);

    if (!uvm_config_db#(virtual core_if)::get(this, "", "vif", vif)) begin
      `uvm_fatal("NO_VIF", "core_if virtual interface not set")
    end
  endfunction

  task run_phase(uvm_phase phase);
    phase.raise_objection(this);

    `uvm_info("CORE_TEST", "Starting core smoke test", UVM_LOW)

    // Default GPIO settings (mirrors the legacy TB)
    vif.GPIO0_R0_CH1 = 32'b0;          // control signals
    vif.GPIO0_R0_CH2 = 32'h0000_0600;  // memory_offset
    vif.GPIO0_R1_CH1 = 32'h0000_0384;  // initial PC
    vif.GPIO0_R1_CH2 = 32'hDEAD_BEEF;  // success code

    // Give the core some idle clocks before asserting control
    repeat (10) @(posedge vif.clk);

    // This pattern comes from the original TB:
    // GPIO0_R0_CH1 <= 32'b10; then later back to 0.
    // In your RTL, control_signals_in[0] = start, [1] = reset.
    // So 2'b10 means reset=1, start=0, which your pulse_generator
    // converts into the proper start/reset behavior.
    vif.GPIO0_R0_CH1 = 32'b10;

    // Small delay, then clear control back to 0
    repeat (1) @(posedge vif.clk);
    #7000;
    repeat (10) @(posedge vif.clk);
    vif.GPIO0_R0_CH1 = 32'b0;

    // Now wait for STOP_sim or timeout
    int unsigned cycles = 0;
    forever begin
      @(posedge vif.clk);
      cycles++;

      if (vif.STOP_sim === 1'b1) begin
        `uvm_info("CORE_TEST", 
                  $sformatf("Core asserted STOP_sim after %0d cycles", cycles),
                  UVM_LOW)
        break;
      end

      if (cycles >= cycles_timeout) begin
        `uvm_error("CORE_TEST", 
                   $sformatf("Timeout: core did not assert STOP_sim after %0d cycles",
                             cycles_timeout))
        break;
      end
    end

    phase.drop_objection(this);
  endtask

endclass

