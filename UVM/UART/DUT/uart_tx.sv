module uart_tx(clk, rst, start, tx_data_in, tx, tx_active, done_tx);

// Define UART transmission parameters
parameter clk_freq = 50000000; // Clock frequency in MHz
parameter baud_rate = 19200;   // Transmission rate in bits per second

// Define module inputs and outputs
input clk, rst;               // Clock and reset signals
input start;                  // Start signal to initiate transmission
input [7:0] tx_data_in;       // 8-bit input data to be transmitted
output tx;                    // Serial output for transmission
output tx_active;             // Signal indicating if transmission is active
output logic done_tx;         // Signal indicating the transmission is done

// Calculate the clock divide value for baud rate generation
localparam clock_divide = (clk_freq / baud_rate);

// Define state encoding for FSM controlling UART transmission
enum bit [2:0] {
    tx_IDLE = 3'b000,        // Idle state
    tx_START = 3'b001,       // Start bit transmission state
    tx_DATA = 3'b010,        // Data transmission state
    tx_STOP = 3'b011,        // Stop bit transmission state
    tx_DONE = 3'b100         // Transmission done state
} tx_STATE, tx_NEXT;         // Current and next state variables

// Define internal registers for state, clock divider, data, output, and bit index
logic [11:0] clk_div_reg, clk_div_next;   // Clock divider register and next value
logic [7:0] tx_data_reg, tx_data_next;    // Data register and next value
logic tx_out_reg, tx_out_next;            // Output register and next value
logic [2:0] index_bit_reg, index_bit_next;// Bit index register and next value

// Assign active state and output signal
assign tx_active = (tx_STATE == tx_DATA); // Transmission active during tx_DATA state
assign tx = tx_out_reg;                   // Serial transmission output

// Sequential block to update registers on clock edge or reset
always_ff @(posedge clk) begin
    if (rst) begin
        // Initialize all registers to default values on reset
        tx_STATE <= tx_IDLE;
        clk_div_reg <= 0;
        tx_out_reg <= 1;                 // Idle line is high
        tx_data_reg <= 0;
        index_bit_reg <= 0;
    end else begin
        // Update registers with next state values
        tx_STATE <= tx_NEXT;
        clk_div_reg <= clk_div_next;
        tx_out_reg <= tx_out_next;
        tx_data_reg <= tx_data_next;
        index_bit_reg <= index_bit_next;
    end
end

// Combinational block to define next state and outputs based on current state
always @(*) begin
    // Default assignments to retain current values
    tx_NEXT = tx_STATE;
    clk_div_next = clk_div_reg;
    tx_out_next = tx_out_reg;
    tx_data_next = tx_data_reg;
    index_bit_next = index_bit_reg;
    done_tx = 0; // Default: transmission not done

    case (tx_STATE)
        // Idle state: wait for start signal
        tx_IDLE: begin
            tx_out_next = 1;            // Keep output high in idle
            clk_div_next = 0;           // Reset clock divider
            index_bit_next = 0;         // Reset bit index
            if (start) begin
                tx_data_next = tx_data_in; // Load input data for transmission
                tx_NEXT = tx_START;       // Transition to start bit state
            end
        end

        // Start bit state: transmit the start bit (low)
        tx_START: begin
            tx_out_next = 0;            // Start bit is low
            if (clk_div_reg < clock_divide - 1) begin
                clk_div_next = clk_div_reg + 1; // Increment clock divider
            end else begin
                clk_div_next = 0;       // Reset clock divider
                tx_NEXT = tx_DATA;      // Transition to data transmission state
            end
        end

        // Data transmission state: send 8 bits of data serially
        tx_DATA: begin
            tx_out_next = tx_data_reg[index_bit_reg]; // Output current data bit
            if (clk_div_reg < clock_divide - 1) begin
                clk_div_next = clk_div_reg + 1; // Increment clock divider
            end else begin
                clk_div_next = 0;       // Reset clock divider
                if (index_bit_reg < 7) begin
                    index_bit_next = index_bit_reg + 1; // Move to next bit
                end else begin
                    index_bit_next = 0; // Reset bit index
                    tx_NEXT = tx_STOP; // Transition to stop bit state
                end
            end
        end

        // Stop bit state: transmit the stop bit (high)
        tx_STOP: begin
            tx_out_next = 1;            // Stop bit is high
            if (clk_div_reg < clock_divide - 1) begin
                clk_div_next = clk_div_reg + 1; // Increment clock divider
            end else begin
                clk_div_next = 0;       // Reset clock divider
                tx_NEXT = tx_DONE;      // Transition to done state
            end
        end

        // Done state: indicate transmission completion
        tx_DONE: begin
            done_tx = 1;                // Signal transmission complete
            tx_NEXT = tx_IDLE;          // Return to idle state
        end

        // Default case: fallback to idle state
        default: tx_NEXT = tx_IDLE;
    endcase
end

endmodule
