/*
* Author: ImpulsePower
* Date of creation: 14/05/2025
* Description: Asynchronous FIFO for UART interface receiver
* License:
* Language: SystemVerilog 2012
* History:
*/

module uart_rx_async_fifo #(
    parameter DATA_WIDTH = 8,     // ширина данных (обычно 8 бит для UART)
    parameter FIFO_DEPTH = 16,    // глубина FIFO (должна быть степенью 2)
    parameter LOG2_DEPTH = $clog2(FIFO_DEPTH)  // автоматический расчет
) (
    // Write domain (UART RX side)
    input  logic                    WCLK,     // тактовый сигнал записи
    input  logic                    WRST,     // сброс домена записи (активный низкий)
    input  logic                    WEi,      // сигнал записи нового байта
    input  logic [DATA_WIDTH-1:0]   WDi,      // принятые данные
    output logic                    FULLo,    // флаг переполнения
    output logic                    AFULLo,   // флаг почти полного (на 1 меньше)
    
    // Read domain (system side)
    input  logic                    RCLK,     // тактовый сигнал чтения
    input  logic                    RRST,     // сброс домена чтения (активный низкий)
    input  logic                    REi,      // запрос на чтение
    output logic [DATA_WIDTH-1:0]   RDo,      // прочитанные данные
    output logic                    EMPTYo,   // флаг пустого FIFO
    output logic                    AEMPTYo   // флаг почти пустого (1 элемент)
);

    // Внутренние сигналы
    logic [LOG2_DEPTH:0]    wr_ptr, wr_ptr_gray, wr_ptr_sync1, wr_ptr_sync2;
    logic [LOG2_DEPTH:0]    rd_ptr, rd_ptr_gray, rd_ptr_sync1, rd_ptr_sync2;
    logic [DATA_WIDTH-1:0]  mem [FIFO_DEPTH-1:0]; // память FIFO

    //=============================================
    // Write domain logic
    //=============================================
    always_ff @(posedge WCLK or posedge WRST) begin
        if (WRST) begin
            wr_ptr <= '0;
        end 
        else begin
            if (WEi && !FULLo) begin
                mem[wr_ptr[LOG2_DEPTH-1:0]] <= WDi;
                wr_ptr <= wr_ptr + 1;
            end
        end
    end

    // Convert binary to gray code for clock domain crossing
    assign wr_ptr_gray = wr_ptr ^ (wr_ptr >> 1);

    // Synchronize read pointer to write clock domain
    always_ff @(posedge WCLK or posedge WRST) begin
        if (WRST) begin
            rd_ptr_sync1 <= '0;
            rd_ptr_sync2 <= '0;
        end 
        else begin
            rd_ptr_sync1 <= rd_ptr_gray;
            rd_ptr_sync2 <= rd_ptr_sync1;
        end
    end

    // Convert gray code back to binary for comparison
    logic [LOG2_DEPTH:0] rd_ptr_sync_bin;
    generate
        assign rd_ptr_sync_bin[LOG2_DEPTH] = rd_ptr_sync2[LOG2_DEPTH];
        for (genvar i = LOG2_DEPTH-1; i >= 0; i--) begin : gray_to_bin
            assign rd_ptr_sync_bin[i] = rd_ptr_sync_bin[i+1] ^ rd_ptr_sync2[i];
        end
    endgenerate

    // Write domain flags
    assign FULLo = (wr_ptr[LOG2_DEPTH] != rd_ptr_sync_bin[LOG2_DEPTH]) && 
                  (wr_ptr[LOG2_DEPTH-1:0] == rd_ptr_sync_bin[LOG2_DEPTH-1:0]);
    assign AFULLo = (wr_ptr - rd_ptr_sync_bin) >= (FIFO_DEPTH - 1);

    //=============================================
    // Read domain logic
    //=============================================
    always_ff @(posedge RCLK or posedge RRST) begin
        if (RRST) begin
            rd_ptr <= '0;
        end 
        else begin
            if (REi && !EMPTYo) begin
                rd_ptr <= rd_ptr + 1;
            end
        end
    end

    // Convert binary to gray code for clock domain crossing
    assign rd_ptr_gray = rd_ptr ^ (rd_ptr >> 1);

    // Synchronize write pointer to read clock domain
    always_ff @(posedge RCLK or posedge RRST) begin
        if (RRST) begin
            wr_ptr_sync1 <= '0;
            wr_ptr_sync2 <= '0;
        end 
        else begin
            wr_ptr_sync1 <= wr_ptr_gray;
            wr_ptr_sync2 <= wr_ptr_sync1;
        end
    end

    // Convert gray code back to binary for comparison
    logic [LOG2_DEPTH:0] wr_ptr_sync_bin;
    generate
        if (LOG2_DEPTH >= 0) begin : sync_conv
            assign wr_ptr_sync_bin[LOG2_DEPTH] = wr_ptr_sync2[LOG2_DEPTH];
            for (genvar i = LOG2_DEPTH-1; i >= 0; i--) begin : bit_conv
                assign wr_ptr_sync_bin[i] = wr_ptr_sync_bin[i+1] ^ wr_ptr_sync2[i];
            end
        end
    endgenerate

    // Read domain flags
    assign EMPTYo = (wr_ptr_sync_bin == rd_ptr);
    assign AEMPTYo = (wr_ptr_sync_bin - rd_ptr) <= 1;

    // Read data (combinational)
    assign RDo = mem[rd_ptr[LOG2_DEPTH-1:0]];

endmodule: uart_rx_async_fifo