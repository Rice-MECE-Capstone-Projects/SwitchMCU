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
        $display("-----------------------------------End---------------------------------")
    end
    
    ->end_of_simulation; //trigger event
    
    ->compared; //trigger event
    endfunction
//---------------------------------------------------------------------------------------
endclass
