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
