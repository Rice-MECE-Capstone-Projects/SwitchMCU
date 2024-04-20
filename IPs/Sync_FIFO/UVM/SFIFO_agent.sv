class SFIFO_agent extends uvm_agent;
//---------------------------------------------------------------------------------------------
`uvm_component_utils(SFIFO_agent)
SFIFO_sequencer sequencer;
SFIFO_driver driver;
SFIFO_monitor monitor;
uvm_analysis_port#(SFIFO_sequence_items)   item_collected_port;
//----------------------------------------------------------------------------------------
function new(string name = "SFIFO_agent", uvm_component parent);
super.new(name, parent);
item_collected_port = new("item_collected_port", this);
endfunction:  new
//-------------------------------------------------------------------------------------------
virtual function void build_phase(uvm_phase phase);
super.build_phase(phase);
`uvm_info(get_full_name(),"Build  phase  called  in  agent",  UVM_LOW)
monitor = SFIFO_monitor::type_id::create("monitor", this);
sequencer  =  SFIFO_sequencer::type_id::create(.name("sequencer"), .parent(this));
driver  =  SFIFO_driver::type_id::create(.name("driver"),  .parent(this));
`uvm_info(get_full_name(),"Build phase ends in agent", UVM_LOW)
endfunction:  build_phase
//------------------------------------------------------------------------------------------
virtual function void connect_phase(uvm_phase phase);
super.connect_phase(phase);
`uvm_info(get_full_name(),"Connect phase called in agent", UVM_LOW)
monitor.item_collected_port.connect(item_collected_port); driver.seq_item_port.connect(sequencer.seq_item_export);
 
`uvm_info(get_full_name(),"Connect phase ends in agent", UVM_LOW)
endfunction:  connect_phase
//------------------------------------------------------------------------------------------
endclass:  SFIFO_agent
