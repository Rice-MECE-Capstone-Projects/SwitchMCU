package SFIFO_package;
    import uvm_pkg::*;
    `include "uvm_macros.svh"
///////////////////////////////////////////////////////////////////////////////////////////////////////////
`define FIFO_MEM_DATA_WIDTH 16
//---------------------------------------------------------------------------------------
class SFIFO_sequence_items extends uvm_sequence_item;
    rand bit read_request;
    rand bit write_request;
    rand bit [`FIFO_MEM_DATA_WIDTH-1:0] w_data;
    `uvm_object_utils_begin(SFIFO_sequence_items)
    `uvm_field_int(read_request, UVM_ALL_ON|UVM_DEFAULT)
    `uvm_field_int(write_request, UVM_ALL_ON|UVM_DEFAULT)
    `uvm_field_int(w_data,  UVM_ALL_ON|UVM_DEFAULT)
    `uvm_object_utils_end

    function new (string name = "SFIFO_sequence_items");
        super.new(name);
    endfunction

endclass:  SFIFO_sequence_items
//--------------------------------------------------------------------------------------
class SFIFO_sequence_items_out extends uvm_sequence_item;
    bit [`FIFO_MEM_DATA_WIDTH-1:0] r_data;
    bit fifo_full_status;
    bit halffull_fifo_status;
    bit fifo_empty_status;
    bit halfempty_fifo_status;
    bit [15:0]  write_read_q[$];
    `uvm_object_utils_begin(SFIFO_sequence_items_out)
    `uvm_field_int(fifo_full_status,     UVM_ALL_ON|UVM_DEFAULT)
    `uvm_field_int(fifo_empty_status,   UVM_ALL_ON|UVM_DEFAULT)
    `uvm_field_int(halffull_fifo_status,     UVM_ALL_ON|UVM_DEFAULT)
    `uvm_field_int(halfempty_fifo_status,    UVM_ALL_ON|UVM_DEFAULT)
    `uvm_field_int(r_data,   UVM_ALL_ON|UVM_DEFAULT)
    `uvm_field_queue_int(write_read_q,   UVM_ALL_ON|UVM_DEFAULT)
    `uvm_object_utils_end

    function new (string name = "SFIFO_sequence_items_out");
        super.new(name);
    endfunction

endclass:  SFIFO_sequence_items_out
//--------------------------------------------------------------------------------------
class  coverage;
    SFIFO_sequence_items seq;
    covergroup switch_coverage;
        read_request: coverpoint seq.read_request;
        write_request: coverpoint seq.write_request;
        w_data: coverpoint seq.w_data { bins range[] = {[0:$]}; }
    endgroup

    function new();
        switch_coverage = new();
    endfunction:  new

    task sample(SFIFO_sequence_items seq);
        switch_coverage.sample();
    endtask:  sample
endclass:  coverage
//-------------------------------------------------------------------------------------
class SFIFO_sequencer extends uvm_sequencer #(SFIFO_sequence_items);
    `uvm_object_utils(SFIFO_sequencer)

    function new (string name="SFIFO_sequencer", uvm_component parent=null);
        super.new(name, parent);
    endfunction:  new
endclass:  SFIFO_sequencer
//-------------------------------------------------------------------------------------
class SFIFO_sequence extends uvm_sequence #(SFIFO_sequence_items);
    `uvm_object_utils(SFIFO_sequence)
    coverage cov;
    SFIFO_sequence_items req;

    function new(string name="SFIFO_sequence");
        super.new(name);
    endfunction:  new

    virtual task pre_body ();
        if (starting_phase != null)
            starting_phase.raise_objection  (this);
    endtask

    virtual task body();
        forever begin
            repeat(5)  begin
                req = SFIFO_sequence_items::type_id::create("req");
                start_item(req);
                assert(req.randomize());
                cov.sample(req);
                finish_item(req);
            end
        end
    endtask:  body

    virtual task post_body();
        if (starting_phase != null)
            starting_phase.drop_objection  (this);
    endtask

endclass:  SFIFO_sequence

///////////////////////////////////////////////////////////////////////////////////////////////////////////////



class SFIFO_monitor extends uvm_monitor;
//--------------------------------------------------------------------------------------------
    `uvm_component_utils(SFIFO_monitor)
    SFIFO_sequence_items seq_item;
    uvm_analysis_port #(SFIFO_sequence_items) item_collected_port;
//--------------------------------------------------------------------------------------------
    function new(string name="SFIFO_monitor", uvm_component parent=null);
        super.new(name, parent);
        item_collected_port = new ("item_collected_port", this);
    endfunction:  new
//------------------------------------------------------------------------------------------
    virtual write_control_intf w_ctrl;
    virtual read_control_intf r_ctrl;
    virtual mem_array_intf memory_intf;
    event begin_record, end_record;
//-------------------------------------------------------------------------------------------
    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        uvm_report_info(get_full_name(),"Build phase starts in monitor", UVM_LOW);
        assert(uvm_config_db#(virtual  write_control_intf)::get(this,  "", "w_ctrl", w_ctrl));	
        assert(uvm_config_db#(virtual read_control_intf)::get(this, "", "r_ctrl", r_ctrl));
        assert(uvm_config_db#(virtual mem_array_intf)::get(this, "", "memory_intf", memory_intf));
        seq_item = SFIFO_sequence_items::type_id::create("seq_item", this);
        uvm_report_info(get_full_name(),"Build phase ends in monitor", UVM_LOW);
    endfunction:  build_phase
//------------------------------------------------------------------------------------------
    virtual task run_phase(uvm_phase phase);
        super.run_phase(phase);
        uvm_report_info(get_full_name(),"Run phase starts in monitor", UVM_LOW);
        collect_transactions(phase);
        uvm_report_info(get_full_name(),"Run phase ends in monitor", UVM_LOW);
    endtask:  run_phase
//------------------------------------------------------------------------------------------
    task collect_transactions(uvm_phase phase);
        wait(w_ctrl.reset === 1);
        @(negedge w_ctrl.reset);
        forever begin 
            -> begin_record;
            @(posedge w_ctrl.clk_write_logic) begin
                seq_item.write_request = w_ctrl.write_request;
                seq_item.w_data = memory_intf.w_data;
            end
            @(posedge r_ctrl.clk_read_logic)
                seq_item.read_request = r_ctrl.read_request;
                item_collected_port.write(seq_item);
            -> end_record;
        end
    endtask: collect_transactions

//----------------------------------------------------------------------------------------
    task record_tr;
        forever begin
            @(begin_record);
            begin_tr(seq_item,  "SFIFO_monitor");
            @(end_record);
            end_tr(seq_item);
        end
    endtask: record_tr
//---------------------------------------------------------------------------------------
endclass:  SFIFO_monitor

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

class SFIFO_monitor_out extends uvm_monitor;
//-------------------------------------------------------------------------------------------
        `uvm_component_utils(SFIFO_monitor_out)
        uvm_analysis_port #(SFIFO_sequence_items_out) item_collected_port;
        SFIFO_sequence_items_out seq_item;
//-------------------------------------------------------------------------------------------
    function new(string name="SFIFO_monitor_out", uvm_component parent=null);
        super.new(name, parent);
        item_collected_port = new ("item_collected_port", this);
    endfunction
//------------------------------------------------------------------------------------------
    virtual write_control_intf w_ctrl;
    virtual read_control_intf r_ctrl;
    virtual mem_array_intf memory_intf;
    event begin_record, end_record;
//------------------------------------------------------------------------------------------
    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        uvm_report_info(get_full_name(),"Build phase starts in monitor_out", UVM_LOW);
        assert(uvm_config_db#(virtual  write_control_intf)::get(this,  "", "w_ctrl", w_ctrl));
        assert(uvm_config_db#(virtual  read_control_intf)::get(this,  "", "r_ctrl", r_ctrl));
        assert(uvm_config_db#(virtual mem_array_intf)::get(this, "", "memory_intf", memory_intf));
        seq_item = SFIFO_sequence_items_out::type_id::create("seq_item", this);
        uvm_report_info(get_full_name(),"Build phase ends in monitor_out", UVM_LOW);
    endfunction:  build_phase
//------------------------------------------------------------------------------------------
    virtual task run_phase(uvm_phase phase);
        super.run_phase(phase);
        uvm_report_info(get_full_name(),"Run phase starts in monitor_out", UVM_LOW);
        collect_transactions(phase);
        uvm_report_info(get_full_name(),"Run phase ends in monitor_out", UVM_LOW);
    endtask:  run_phase
//-----------------------------------------------------------------------------------------
    task collect_transactions(uvm_phase phase);
        wait(w_ctrl.reset === 1);
        @(negedge w_ctrl.reset);
        forever begin
        -> begin_record;
        @(posedge w_ctrl.clk_write_logic) begin
            seq_item.fifo_full_status = w_ctrl.full_fifo_status;
            seq_item.halffull_fifo_status = w_ctrl.halffull_fifo_status;   
        end
        @(posedge  r_ctrl.clk_read_logic)  begin
            seq_item.halfempty_fifo_status = r_ctrl.halfempty_fifo_status;
            seq_item.fifo_empty_status  =  r_ctrl.empty_fifo_status;
        if(r_ctrl.read_request)
            seq_item.r_data = memory_intf.r_data;
        end
            item_collected_port.write(seq_item);
        -> end_record;
        end	
    endtask: collect_transactions

    task record_tr;	
        forever begin
            @(begin_record);
            begin_tr(seq_item, "SFIFO_monitor_out");
            @(end_record);
            end_tr(seq_item);
        end
    endtask: record_tr
//---------------------------------------------------------------------------------------
endclass:  SFIFO_monitor_out

//////////////////////////////////////////////////////////////////////////////////////////////////////

class SFIFO_driver extends uvm_driver #(SFIFO_sequence_items);
//-------------------------------------------------------------------------------------------
    `uvm_component_utils(SFIFO_driver)
//------------------------------------------------------------------------------------------
    //Constructor
    function new (string name = "SFIFO_driver", uvm_component parent=null);
        super.new(name, parent);
    endfunction:  new
//------------------------------------------------------------------------------------------
    //Virtual  interfaces  declaration
    virtual write_control_intf w_ctrl;
    virtual read_control_intf r_ctrl;
    virtual mem_array_intf memory_intf;
//------------------------------------------------------------------------------------------
    virtual function void build_phase(uvm_phase phase);
        `uvm_info(get_full_name(), "Build phase called in driver", UVM_LOW)
        super.build_phase(phase);
        assert(uvm_config_db#(virtual write_control_intf)::get(this,  "", "w_ctrl", w_ctrl));
        assert(uvm_config_db#(virtual read_control_intf)::get(this, "", "r_ctrl", r_ctrl));
        assert(uvm_config_db#(virtual mem_array_intf)::get(this, "", "memory_intf", memory_intf));
        `uvm_info(get_full_name(), "Build phase ends in driver", UVM_LOW)
    endfunction:  build_phase
//------------------------------------------------------------------------------------------
    //runs the necessary methods of the driver
    virtual task run_phase(uvm_phase phase);
        super.run_phase(phase);
        `uvm_info(get_full_name(), "Run phase called in driver", UVM_LOW)
        fork
            reset_dut;
            drive(phase);
        join
        `uvm_info(get_full_name(), "Run phase called in driver", UVM_LOW)
    endtask:  run_phase
//-----------------------------------------------------------------------------------------
    //Resets the DUT
    virtual protected task reset_dut;
    uvm_report_info(get_full_name(),"Start of reset_dut() method in driver", UVM_LOW);
    wait(w_ctrl.reset==1);
    forever begin
        w_ctrl.write_ack <= '0;
        w_ctrl.write_pointer <= '0;
        w_ctrl.full_fifo_status  <=  '0;
        w_ctrl.halffull_fifo_status  <=  '0;
        w_ctrl.write_request <= '0;
        memory_intf.r_data <= 'x;
        memory_intf.w_data <= 'x;
        r_ctrl.read_ack <= '0;
        r_ctrl.read_request <= '0;
        r_ctrl.halfempty_fifo_status <= '0;
        r_ctrl.empty_fifo_status <= '0;
        r_ctrl.read_pointer <= '0;
    @(posedge w_ctrl.reset);
    end
    uvm_report_info(get_full_name(),"End of reset_dut() method in driver", UVM_LOW);
    endtask : reset_dut
//-------------------------------------------------------------------------------------------
    //Drives the stimulus to the DUT

    virtual protected task drive(uvm_phase phase);
        SFIFO_sequence_items stim;
        wait(w_ctrl.reset == 1);
        @(negedge w_ctrl.reset);
        @(posedge  w_ctrl.clk_write_logic);
        forever begin
            seq_item_port.get_next_item(stim);
            uvm_report_info(get_full_name(),"Driving  packet  ...",UVM_LOW);
            @(posedge w_ctrl.clk_write_logic) begin
                memory_intf.w_data = stim.w_data;
                w_ctrl.write_request = stim.write_request;
            end
            @(posedge  r_ctrl.clk_read_logic)
                r_ctrl.read_request=stim.read_request;
            @(posedge  w_ctrl.clk_write_logic);
            seq_item_port.item_done();
        end
    endtask: drive
//------------------------------------------------------------------------------------------
endclass:  SFIFO_driver

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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
//Debug
//monitor = SFIFO_monitor::type_id::create("monitor");
//sequencer = SFIFO_sequencer::type_id::create("sequencer");
//driver = SFIFO_driver::type_id::create("driver");


`uvm_info(get_full_name(),"Build phase ends in agent", UVM_LOW)
endfunction:  build_phase
//------------------------------------------------------------------------------------------
virtual function void connect_phase(uvm_phase phase);
super.connect_phase(phase);
`uvm_info(get_full_name(),"Connect phase called in agent", UVM_LOW)
monitor.item_collected_port.connect(item_collected_port); 
driver.seq_item_port.connect(sequencer.seq_item_export);
 
`uvm_info(get_full_name(),"Connect phase ends in agent", UVM_LOW)
endfunction:  connect_phase
//------------------------------------------------------------------------------------------
endclass:  SFIFO_agent

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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


//////////////////////////////////////////////////////////////////////////////////////////////////
`define FIFO_DEPTH 64
`define FIFO_MEM_ADDR_WIDTH 6
`define FIFO_HALFFULL 4
`define FIFO_HALFEMPTY 4
//------------------------------------------------------------------------------------------
class SFIFO_refmod extends uvm_object;
//------------------------------------------------------------------------------------------
    SFIFO_sequence_items seq_in;
    `uvm_object_utils(SFIFO_refmod)
    bit [15:0] write_read_q[$];
    bit full,empty,almost_full,almost_empty;
    integer	read_counter, write_counter;
    bit [15:0] rd;
    typedef bit [15:0] queue_of_int[$];
    virtual write_control_intf w_ctrl;
    virtual read_control_intf r_ctrl;
    virtual mem_array_intf memory_intf;
//---------------------------------------------------------------------------------------
    function new (string name = "SFIFO_refmod");
        super.new(name);
        assert(uvm_config_db#(virtual write_control_intf)::get(uvm_root::get(), "*", "w_ctrl", w_ctrl));
        assert(uvm_config_db#(virtual read_control_intf)::get(uvm_root::get(), "*", "r_ctrl", r_ctrl));
        assert(uvm_config_db#(virtual mem_array_intf)::get(uvm_root::get(), "*", "memory_intf", memory_intf));
        seq_in = SFIFO_sequence_items::type_id::create("seq_in");
    endfunction:  new
//-----------------------------------------------------------------------------------------
    task refmod_reset;
        full = 0;
        empty = 0;
        almost_full = 0;
        almost_empty = 0;
        read_counter = 0;
        write_counter = 0;
    endtask:  refmod_reset
//----------------------------------------------------------------------------------------
    function int full_almostfull_status_check();
        if(write_counter == `FIFO_DEPTH - 1)
            return 1;
        else if((`FIFO_DEPTH - write_counter) <= `FIFO_HALFFULL)
            return 2;
        else
            return 0;
    endfunction: full_almostfull_status_check
//---------------------------------------------------------------------------------------
    function int empty_almostempty_status_check();
        if(write_counter == 0)
            return 1;
        else  if(read_counter  <=  `FIFO_HALFEMPTY)
            return 2;
        else
            return 0;
    endfunction:  empty_almostempty_status_check
//-------------------------------------------------------------------------------------
    task flag_update;
        if(full_almostfull_status_check()==1)
            begin
                full = 1;
                almost_full = 1;
            end
        else if(full_almostfull_status_check()==2)
            begin
                full = 0;
                almost_full = 1;
            end
        else
            begin
                full = 0;
                almost_full = 0;
            end

        if(empty_almostempty_status_check()==1)
            begin
                empty = 1;
                almost_empty = 0;
            end
        else if(empty_almostempty_status_check()==2)
            begin
                empty=0;
                almost_empty = 1;
            end
        else 
            begin
                empty=0;
                almost_empty = 0;
            end
    endtask
//-------------------------------------------------------------------------------------
    function void push(bit wr, bit [15:0] wd);
        if(full==0)  begin
            if(wr) begin
                write_read_q.push_front(wd);
                write_counter += 1;
            end
        end
    endfunction
//------------------------------------------------------------------------------------
    function bit [15:0] pop(bit rr);
        if(empty==0) begin
            if(rr)  begin
                rd = write_read_q.pop_back();
                read_counter += 1;
            end
        return rd;
        end
    endfunction
//-------------------------------------------------------------------------------------
endclass:  SFIFO_refmod
//-------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
class refmod_exec extends uvm_component;
//-------------------------------------------------------------------------------------
    `uvm_component_utils(refmod_exec)
    SFIFO_sequence_items seq_in;
    SFIFO_sequence_items_out seq_out;
    virtual write_control_intf w_ctrl;
    virtual read_control_intf r_ctrl;
    virtual mem_array_intf memory_intf;
    SFIFO_refmod mod_ref;
//------------------------------------------------------------------------------------
    uvm_get_port #(SFIFO_sequence_items)  in;
    uvm_put_port #(SFIFO_sequence_items_out) out;
//------------------------------------------------------------------------------------
    function new(string name = "refmod_exec", uvm_component parent);
        super.new(name, parent);
        mod_ref = new();
        in = new("in", this);
        out = new("out", this);
    endfunction
//------------------------------------------------------------------------------------
    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        uvm_report_info(get_full_name(), "Build phase called in Reference model", UVM_LOW); 

        seq_out = SFIFO_sequence_items_out::type_id::create("seq_out", this);

        seq_in  =  SFIFO_sequence_items::type_id::create("seq_in",  this);

        assert(uvm_config_db#(virtual write_control_intf)::get(uvm_root::get(), "*", "w_ctrl", w_ctrl));
        assert(uvm_config_db#(virtual read_control_intf)::get(uvm_root::get(), "*", "r_ctrl", r_ctrl));
        assert(uvm_config_db#(virtual mem_array_intf)::get(uvm_root::get(), "*", "memory_intf", memory_intf));
        uvm_report_info(get_full_name(),"Build phase ends in Reference model", UVM_LOW);
    endfunction:  build_phase
    //-----------------------------------------------------------------------------------
    virtual task run_phase(uvm_phase phase);
        super.run_phase(phase);
        uvm_report_info(get_full_name(),"Run phase called in Reference model", UVM_LOW);
        mod_ref.refmod_reset;
        forever begin
            in.get(seq_in);
            mod_ref.push(seq_in.write_request, seq_in.w_data);
            seq_out.r_data = mod_ref.pop(seq_in.read_request);
            out.put(seq_out);
            mod_ref.flag_update;
            seq_out.fifo_full_status  =  mod_ref.full;
            seq_out.halffull_fifo_status  =  mod_ref.almost_full;
            seq_out.fifo_empty_status = mod_ref.empty;
            seq_out.halfempty_fifo_status  =  mod_ref.almost_empty;
        end
        uvm_report_info(get_full_name(),"Run phase ends in Reference model", UVM_LOW);
    endtask:  run_phase
    //-----------------------------------------------------------------------------------
endclass:  refmod_exec


//////////////////////////////////////////////////////////////////////////////////////////////////
class SFIFO_scoreboard #(type T = SFIFO_sequence_items_out) extends uvm_scoreboard;
//----------------------------------------------------------------------------------------
    typedef SFIFO_scoreboard #(T) this_type;
    `uvm_component_param_utils(this_type)
    const static string type_name = "SFIFO_scoreboard #(T)";
    uvm_put_imp #(T, this_type) from_refmod;
    uvm_analysis_imp #(T, this_type) from_dut;
    typedef uvm_built_in_converter #( T ) convert;

        int m_matches, m_mismatches;
        T exp;
        bit free;
        event compared, end_of_simulation;
        integer count;
//-----------------------------------------------------------------------------------------
    function new(string name="SFIFO_scoreboard", uvm_component parent=null);
        super.new(name, parent);
        from_refmod = new("from_refmod", this);
        from_dut = new("from_dut", this);
        m_matches = 0;
        count = 0;
        m_mismatches = 0;
        exp = new("exp");
        free = 0;
    endfunction
//---------------------------------------------------------------------------------------
    virtual function string get_type_name();
        return  type_name;
    endfunction
//---------------------------------------------------------------------------------------
    task run_phase(uvm_phase phase);
        phase.raise_objection(this);
        @(end_of_simulation);
        $finish;
        phase.drop_objection(this);
    endtask
//---------------------------------------------------------------------------------------
    virtual task put(T t);
        if(!free)  @compared;
        exp.copy(t);
        free = 0;
        @compared;
        free = 1;
    endtask
//---------------------------------------------------------------------------------------
    virtual function bit try_put(T t);
        if(free)  begin
            exp.copy(t);
            free = 0;
            return 1;
        end
        else
            return 0;
    endfunction
//---------------------------------------------------------------------------------------
    virtual function bit can_put();
        return free;
    endfunction
//---------------------------------------------------------------------------------------
    virtual function void write(T rec);
    if (free)
        uvm_report_fatal("No expect transaction to compare with", "");
    if (exp.compare(rec)) begin
        uvm_report_info("Comparator match", "");
        m_matches++;
    end
    else begin
        uvm_report_warning("Comparator Mismatch", "");
        m_mismatches++;
    end

    if(m_matches+m_mismatches > 1000)	begin
        $display("-----------------------------------End---------------------------------");
    end
    
    ->end_of_simulation; //trigger event
    
    ->compared; //trigger event
    endfunction
//---------------------------------------------------------------------------------------
endclass

////////////////////////////////////////////////////////////////////////////////////////////////////////////

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


///////////////////////////////////////////////////////////////////////////////////////////////////

class test extends uvm_test;
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

///////////////////////////////////////////////////////////////////////////////////////////////

endpackage: SFIFO_package