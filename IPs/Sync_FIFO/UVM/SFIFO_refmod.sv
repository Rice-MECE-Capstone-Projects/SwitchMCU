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
