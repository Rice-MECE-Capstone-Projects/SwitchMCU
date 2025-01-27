class test extends uvm_test;
//------------------------------------------------------------------------------------------
`uvm_component_utils (test)
//------------------------------------------------------------------------------------------
function new (string name="test", uvm_component parent=null);
super.new (name, parent);
endfunction : new
//------------------------------------------------------------------------------------------
Environment t_env;
SFIFO_sequence seq;
SFIFO_sequence_items seq_items;
//-----------------------------------------------------------------------------------------
virtual function void build_phase(uvm_phase phase);
super.build_phase(phase);
`uvm_info(get_full_name(),  "Build  phase  called  in  test",  UVM_LOW)
t_env  =  Environment::type_id::create(.name("t_env"), .parent(this));
 
seq  =  SFIFO_sequence::type_id::create(.name("seq"),  .parent(this));
uvm_config_db#(uvm_object_wrapper)::set(this,"*",
"default_sequence",  SFIFO_sequence::type_id::get());
endfunction: build_phase
//-----------------------------------------------------------------------------------------
virtual function void connect_phase(uvm_phase phase);
super.connect_phase(phase);
`uvm_info(get_full_name(),  "Connect  phase  called  in  test",  UVM_LOW)

endfunction:  connect_phase
//----------------------------------------------------------------------------------------
virtual function void end_of_elaboration_phase(uvm_phase phase);
uvm_top.print_topology();
endfunction:  end_of_elaboration_phase
//----------------------------------------------------------------------------------------
function void start_of_simulation_phase(uvm_phase phase);
super.start_of_simulation_phase  (phase);
endfunction: start_of_simulation_phase
//----------------------------------------------------------------------------------------
virtual task run_phase(uvm_phase phase);
`uvm_info(get_full_name(), "in main phase", UVM_LOW)
phase.raise_objection(.obj(this));
seq.start(t_env.agent.sequencer);
phase.drop_objection(.obj(this));
endtask:  run_phase

//---------------------------------------------------------------------------------------
endclass: test
