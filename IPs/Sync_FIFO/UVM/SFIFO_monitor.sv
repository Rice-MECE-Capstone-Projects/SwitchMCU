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
