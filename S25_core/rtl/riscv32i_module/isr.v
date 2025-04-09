module isr (
    input clk,
    input rst_n,

    // Request signal from interrupt sources
    input interrupt_req,

    // Input from the core to tell which interrupt ID is being handled (needs to be locked so it doesn't update mid update)
    input [4:0] current_irq_id,

    // Interrupt ID and acknowledgment signals
    output [4:0] irq_id,
    output irq_pending,
    input irq_ack
);
    reg [4:0] irq_id_reg;
    reg irq_pending_reg;

    assign irq_pending = irq_pending_reg;
    assign irq_id = irq_id_reg;

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            irq_pending_reg <= 0;
            irq_id <= 5'b0;
            irq_id_reg <= 5'b0;
        end else begin
            if (interrupt_req && !irq_pending_reg) begin
                // lets core know that an interrupt should happen
                irq_pending_reg <= 1;
                // this tells which part of mtvec to jump to
                irq_id <= current_irq_id;
            end
            // once interrupt happens signal sent back that jump was successful
            else if (irq_ack && irq_pending_reg) begin
                if (current_irq_id == irq_id) begin
                    irq_pending_reg <= 0;
                    irq_id_reg <= 5'b0;
                end
            end
        end
    end

endmodule