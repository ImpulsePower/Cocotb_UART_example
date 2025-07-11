/*
* Author: ImpulsePower
* Date of creation: 03/02/2025
* Description: Hardware description of UART interface transmitter, 
* License:
* Language: SystemVerilog 2012
* History:

*/
`timescale 1ns/1ps

module uart_tx 
    # (
    parameter FREQ_CLK  = 100000000,
    parameter DATA_WDTH = 8
    ) (
    input   wire                    CLKip, // Clock signal
    input   wire                    RSTi, // Reset signal
    input   wire [DATA_WDTH-1:0]    TXi, // Transmit data bus
    input   wire                    TX_ENi, // Transmit enable signal
    input   logic [31:0]            BAUD_RATEi, // Baud rate
    output  logic                   BUSYo, // Busy signal
    output  logic                   DONEo, // Done signal
    output  logic                   DATAo // Output data
    );

    // Variables
    // ===========================================================================
    int unsigned                    baud_rate; // var for BAUD_RATEi
    int unsigned                    bit_cntr; // var for counter (rx_strb)
    int unsigned                    tx_strb; // var for strobe bit
    logic [$clog2(DATA_WDTH)-1:0]   bit_idx; // var for bit counter (index)
    int unsigned                    clk_count; // var for counter
    logic                           data; // var for DATAo
    logic                           done; // var for DONEo
    logic                           tx_en; // var for BUSYo
    logic                           busy; // var for BUSYo
    logic                           rst; // var for RSTi
    // ===========================================================================

    // Synchronizers for asynchronous input signals
    sync tx_en_stab (.CLKip (CLKip), .SIGi (TX_ENi), .SIGo (tx_en));
    sync rst_stab (.CLKip (CLKip), .SIGi (RSTi), .SIGo (rst));
    
    // FSM for UART transmitter
    typedef enum logic [1:0] {       
        IDLE        = 2'h0,
        START       = 2'h1,
        TRANSMIT    = 2'h2,
        STOP        = 2'h3
    } statetype;
    statetype STATE;

    // Combinational calculation of the number of clock pulses per bit
    always_comb begin: calc_bit_value
        baud_rate = BAUD_RATEi;
        bit_cntr = FREQ_CLK / baud_rate;
    end

    // Strobe logic
    always @(posedge CLKip) begin: strobe_logic       
        case (STATE)
            IDLE: begin
                clk_count       <= 0;
                // half_tx_strb    <= 0;
                // tx_strb         <= 0;
                bit_idx         <= 0;
            end
            START: begin
                if (clk_count == bit_cntr) begin
                    tx_strb     <= 1;
                    clk_count   <= 0;
                end
                else begin
                    tx_strb <= 0;
                    clk_count <= ++clk_count;
                end                
            end
            TRANSMIT: begin
                if (clk_count == bit_cntr) begin
                    tx_strb     <= 1;
                    clk_count   <= 0;
                end
                else begin
                    tx_strb <= 0;
                    clk_count <= ++clk_count;
                end                  
            end
            STOP: begin
                if (clk_count == bit_cntr) begin
                    tx_strb     <= 1;
                    clk_count   <= 0;
                end
                else begin
                    tx_strb <= 0;
                    clk_count <= ++clk_count;
                end                  
            end  
            default: begin
                clk_count <= 0;
                STATE <= IDLE;
            end
        endcase
    end

    // Implementation of the UART transmitter operation logic
    always_ff @(posedge CLKip) begin: fsm_uart_tx
        if (rst) begin
            bit_idx     <= 0;
            clk_count   <= 0;
        end
        else begin 
            case (STATE)
                // Waiting for TX EN bit 
                IDLE: begin
                    data        <= 1;
                    done        <= 0;
                    bit_idx     <= 0;
                    if (tx_en == 1'b1) begin
                        busy <= 1'b1;
                        STATE <= START;
                    end
                    else begin 
                        STATE <= IDLE;
                    end
                end
                // Transmit start bit
                START: begin
                    data    <= 0;
                    if (tx_strb) STATE <= tx_strb ? TRANSMIT : START;
                end
                // Transmit process
                TRANSMIT: begin
                    data <= TXi[bit_idx];
                    if (tx_strb) begin
                        if (bit_idx < DATA_WDTH - 1) bit_idx = bit_idx + 1;
                        else begin
                            bit_idx <= 0;
                            STATE <= STOP;
                        end    
                    end
                    else begin
                        STATE <= TRANSMIT;
                    end    
                end
                // Transmit stop bit
                STOP: begin
                    data    <= 1;
                    if (tx_strb) begin
                        done        <= 1;
                        busy        <= 1'b0;
                        STATE       <= IDLE;
                    end
                    else begin
                        STATE <= STOP;
                    end
                end
                // Default state
                default: STATE <= IDLE;        
            endcase
        end
    end   
    // Combinational logic 
    always_comb begin: set_out
        BUSYo = busy;
        DONEo = done;
        DATAo = data;
    end

    initial begin
        $dumpfile("test/dump/uart_tx.fst");
        $dumpvars(0, uart_tx);
    end
endmodule: uart_tx