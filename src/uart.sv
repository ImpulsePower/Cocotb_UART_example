`timescale 1ns/1ps

module uart #(
    parameter CLK_FREQ = 100_000_000,  // Частота тактового сигнала (100 MHz)
    parameter DATA_WIDTH = 8,          // Ширина данных (8 бит)
    parameter FIFO_DEPTH = 16          // Глубина FIFO
) (
    // Общие сигналы
    input  logic                    CLKip,       // Тактовый сигнал
    input  logic                    RSTi,        // Сброс (активный высокий)
    // UART интерфейс
    input  logic                    RXi,         // Вход последовательных данных
    input  logic [31:0]             BAUD_RATEi,  // Скорость передачи (бод)
    input  logic                    BAUD_RATE_WEi, // Разрешение записи скорости
    input  logic                    BAUD_RATE_RDi, // Разрешение чтения скорости
    // FIFO интерфейс
    output logic                    DONEo,
    // input  logic                    RDi,    // Разрешение чтения из FIFO
    output logic [DATA_WIDTH-1:0]   DATAo, // Данные из FIFO
    output logic                    EMPTYo,  // Флаг пустоты FIFO
    output logic                    FULLo    // Флаг переполнения FIFO

);

    // Сигналы соединения UART_RX и FIFO
    logic [DATA_WIDTH-1:0] data;
    logic done;
    logic ready;

    logic RDi;
    always_ff @(posedge CLKip) begin
        RDi <= 1;
        DONEo <=done;
    end

    // Экземпляр UART приемника
    uart_rx #(
        .FREQ_CLK       (CLK_FREQ),
        .DATA_WDTH      (DATA_WIDTH)
    ) uart_rx_inst (
        .CLKip          (CLKip),
        .RSTi           (RSTi),
        .RXi            (RXi),
        .BAUD_RATEi     (BAUD_RATEi),
        .BAUD_RATE_WEi  (BAUD_RATE_WEi),
        .BAUD_RATE_RDi  (BAUD_RATE_RDi),
        .DONEo          (done),
        .READYo         (ready),
        .DATAo          (data)
    );

    // Экземпляр FIFO (синхронная версия)
    fifo #(
        .DATA_WIDTH     (DATA_WIDTH),
        .FIFO_DEPTH     (FIFO_DEPTH)
    ) fifo_inst (
        .CLKip          (CLKip),
        .RSTi           (RSTi),
        // Порт записи (подключен к UART)
        .WEi            (done),       // Запись при завершении приема байта
        .DATAi          (data),     // Данные от UART
        // Порт чтения (внешний интерфейс)
        .RDi            (RDi),         // Разрешение чтения извне
        .DATAo          (DATAo),     // Выходные данные
        .FULLo          (FULLo),     // Флаг переполнения
        .EMPTYo         (EMPTYo)    // Флаг пустоты
    );

    
endmodule: uart