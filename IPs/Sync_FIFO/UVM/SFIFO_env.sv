class Environment extends uvm_env;
//--------------------------------------------------------------------------------------------
`uvm_component_utils(Environment)
uvm_tlm_analysis_fifo #(SFIFO_sequence_items) to_refmod;
//--------------------------------------------------------------------------------------------
function new(string name="Environment", uvm_component parent=null);
super.new(name,parent);
to_refmod = new("to_refmod", this);
endfunction:  new
//-------------------------------------------------------------------------------------------
SFIFO_agent agent;
refmod_exec reference_mod;
SFIFO_agent_out agent_out;
SFIFO_scoreboard #(SFIFO_sequence_items_out) scoreboard;
//-------------------------------------------------------------------------------------------
virtual function void build_phase(uvm_phase phase);
super.build_phase(phase);
uvm_report_info(get_full_name(),"Build phase called in Environment", UVM_LOW);
agent  =  SFIFO_agent::type_id::create(.name("agent"),  .parent(this));
agent_out  =  SFIFO_agent_out::type_id::create(.name("agent_out"), .parent(this));
reference_mod   =   refmod_exec::type_id::create(.name("reference_mod"), .parent(this));
scoreboard = SFIFO_scoreboard
#(SFIFO_sequence_items_out)::type_id::create(.name("scoreboard"), .parent(this));
uvm_report_info(get_full_name(),"Build phase in Environment ends", UVM_LOW);
endfunction:  build_phase
//-------------------------------------------------------------------------------------------
virtual function void connect_phase(uvm_phase phase);
super.connect_phase(phase);
uvm_report_info(get_full_name(),"START of connect phase in Environment",UVM_LOW);
//Connect agent to FIFO
agent.item_collected_port.connect(to_refmod.analysis_export);
//Connect  FIFO  to  REFMOD
reference_mod.in.connect(to_refmod.get_export);
//Connect scoreboard
reference_mod.out.connect(scoreboard.from_refmod);
agent_out.item_collected_port.connect(scoreboard.from_dut);
uvm_report_info(get_full_name(),"END of connect phase in Environment",UVM_LOW);
endfunction:  connect_phase
//--------------------------------------------------------------------------------------------
virtual function void end_of_elaboration_phase(uvm_phase phase);
super.end_of_elaboration_phase(phase);
endfunction:  end_of_elaboration_phase
//--------------------------------------------------------------------------------------------
virtual function void report_phase(uvm_phase phase);
super.report_phase(phase);
`uvm_info(get_type_name(),
$sformatf("Reporting matched %0d",
scoreboard.m_matches),  UVM_NONE)
if (scoreboard.m_mismatches) begin
`uvm_error(get_type_name(),
$sformatf("Saw %0d mismatched samples",	scoreboard.m_mismatches))
end
endfunction:  report_phase
//-------------------------------------------------------------------------------------------
endclass:  Environment
