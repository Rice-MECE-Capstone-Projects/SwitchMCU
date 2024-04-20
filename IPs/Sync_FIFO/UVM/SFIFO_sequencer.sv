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
