class SFIFO_agent_out extends uvm_agent;
//----------------------------------------------------------------------------------------
    `uvm_component_utils(SFIFO_agent_out)
        SFIFO_monitor_out	mon_out;
        uvm_analysis_port #(SFIFO_sequence_items_out) item_collected_port;
//----------------------------------------------------------------------------------------
    function new(string name = "SFIFO_agent_out", uvm_component parent = null);
        super.new(name, parent);
        item_collected_port = new("item_collected_port", this);
    endfunction
//----------------------------------------------------------------------------------------
    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        mon_out = SFIFO_monitor_out::type_id::create("mon_out", this);
    endfunction
//----------------------------------------------------------------------------------------
    virtual function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        mon_out.item_collected_port.connect(item_collected_port);
    endfunction
//----------------------------------------------------------------------------------------
endclass:  SFIFO_agent_out
