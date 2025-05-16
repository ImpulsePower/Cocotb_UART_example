/*
* Author: ImpulsePower
* Date of creation: 14/05/2025
* Description: Hardware description of UART interface receiver, 
* License:
* Language: SystemVerilog 2012
* History:

*/

module uart_rx_fifo #(
    parameter DATA_WIDTH = 8,     // ширина данных (обычно 8 бит для UART)
    parameter FIFO_DEPTH = 16,    // глубина FIFO (должна быть степенью 2)
    parameter LOG2_DEPTH = $clog2(FIFO_DEPTH)  // автоматический расчет
) (
    input  logic                    CLKip,
    input  logic                    RSTi,      // активный низкий сброс
    // Интерфейс записи (со стороны UART RX)
    input  logic                    WEi,       // сигнал записи нового байта
    input  logic [DATA_WIDTH-1:0]   WDi,     // принятые данные
    output logic                    FULLo,        // флаг переполнения
    output logic                    AFULLo, // флаг почти полного (на 1 меньше)
    // Интерфейс чтения (со стороны системы)
    input  logic                    REi,       // запрос на чтение
    output logic [DATA_WIDTH-1:0]   RDo,     // прочитанные данные
    output logic                    EMPTYo,       // флаг пустого FIFO
    output logic                    AEMPTYo // флаг почти пустого (1 элемент)
);

    // Внутренние сигналы
    logic [LOG2_DEPTH:0]    wr_ptr, rd_ptr; // указатели (на бит больше для обнаружения FULLo/EMPTYo)
    logic [DATA_WIDTH-1:0]  mem [FIFO_DEPTH-1:0]; // память FIFO

    // Логика указателей
    always_ff @(posedge CLKip or posedge RSTi) begin
        if (RSTi) begin
            wr_ptr <= '0;
            rd_ptr <= '0;
        end else begin
            // Запись
            if (WEi && !FULLo) begin
                mem[wr_ptr[LOG2_DEPTH-1:0]] <= WDi;
                wr_ptr <= wr_ptr + 1;
            end
            // Чтение
            if (REi && !EMPTYo) begin
                rd_ptr <= rd_ptr + 1;
            end
        end
    end

    // Чтение данных (комбинационная логика)
    assign RDo = mem[rd_ptr[LOG2_DEPTH-1:0]];

    // Флаги состояния
    assign FULLo = (wr_ptr[LOG2_DEPTH] != rd_ptr[LOG2_DEPTH]) && 
                  (wr_ptr[LOG2_DEPTH-1:0] == rd_ptr[LOG2_DEPTH-1:0]);
    assign EMPTYo = (wr_ptr == rd_ptr);
    assign AFULLo = (wr_ptr - rd_ptr) >= (FIFO_DEPTH - 1);
    assign AEMPTYo = (wr_ptr - rd_ptr) <= 1;

endmodule