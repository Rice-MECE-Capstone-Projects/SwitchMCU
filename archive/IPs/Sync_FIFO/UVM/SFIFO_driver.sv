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
