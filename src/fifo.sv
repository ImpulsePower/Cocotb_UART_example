/*
* Author: ImpulsePower
* Date of creation: 14/05/2025
* Description: Various FIFO for UART interface receiver
* License:
* Language: SystemVerilog 2012
* History:

*/
// `include "defines.svh"
`timescale 1ns/1ps

`define FIFO_MODE_SYNC

`ifdef FIFO_MODE_SYNC

module fifo #(
    parameter DATA_WIDTH = 8,               // ширина данных
    parameter FIFO_DEPTH = 16,              // глубина FIFO (степень 2)
    parameter LOG2_DEPTH = $clog2(FIFO_DEPTH)  // автоматический расчет глубины
) (
    input  logic                     CLKip,      // тактовый сигнал
    input  logic                     RSTi,    // асинхронный сброс (активный 0)
    input  logic                     WEi,    // разрешение записи
    input  logic [DATA_WIDTH-1:0]    DATAi,  // входные данные
    input  logic                     RDi,    // разрешение чтения
    output logic [DATA_WIDTH-1:0]    DATAo, // выходные данные
    output logic                     FULLo,     // флаг заполненности
    output logic                     EMPTYo    // флаг пустоты
);
    logic [LOG2_DEPTH:0] cnt;
    // Внутренняя память FIFO
    logic [DATA_WIDTH-1:0] mem [0:FIFO_DEPTH-1];
    
    // Указатели записи и чтения
    logic [LOG2_DEPTH-1:0] wr_ptr;
    logic [LOG2_DEPTH-1:0] rd_ptr;
    
    // Счетчик элементов
    logic [LOG2_DEPTH:0] next_count;
    
    // Логика указателей и счетчика
    always_ff @(posedge CLKip or negedge RSTi) begin
        if (!RSTi) begin
            wr_ptr  <= '0;
            rd_ptr  <= '0;
            cnt   <= '0;
        end else begin
            // Обновление указателей и счетчика
            case ({WEi, RDi})
                2'b01: begin // только чтение
                    rd_ptr  <= rd_ptr + 1;
                    cnt   <= cnt - 1;
                end
                2'b10: begin // только запись
                    wr_ptr  <= wr_ptr + 1;
                    cnt   <= cnt + 1;
                end
                2'b11: begin // одновременная запись и чтение
                    wr_ptr  <= wr_ptr + 1;
                    rd_ptr  <= rd_ptr + 1;
                    // cnt остается прежним
                end
                default: ; // ничего не делать
            endcase
        end
    end
    
    // Запись данных
    always_ff @(posedge CLKip) begin
        if (WEi && !FULLo) begin
            mem[wr_ptr] <= DATAi;
        end
    end
    
    // Чтение данных
    always_ff @(posedge CLKip or negedge RSTi) begin
        if (!RSTi) begin
            DATAo <= '0;
        end else if (RDi && !EMPTYo) begin
            DATAo <= mem[rd_ptr];
        end
    end
    
    // Логика флагов состояния
    assign FULLo  = (cnt == FIFO_DEPTH);
    assign EMPTYo = (cnt == 0);
    
endmodule: fifo

`endif

`ifdef FIFO_MODE_ASYNC

module async_fifo #(
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

endmodule: async_fifo

`endif

`ifdef FIFO_MODE_2PORT
module fifo_2port #(
    parameter DATA_WIDTH = 8,
    parameter FIFO_DEPTH = 16
)(
    input wire CLKi,
    input wire RSTi,
    
    // Write interface
    input wire WR_ENi,
    input wire [DATA_WIDTH-1:0] DATAi,
    output wire FULLo,
    
    // Read interface
    input wire RD_ENi,
    output wire [DATA_WIDTH-1:0] DATAo,
    output wire EMPTYo
);

    localparam ADDR_WIDTH = $clog2(FIFO_DEPTH);
    
    reg [DATA_WIDTH-1:0] mem [0:FIFO_DEPTH-1];
    reg [ADDR_WIDTH:0] wr_ptr, rd_ptr;
    
    // FIFO control logic
    always_ff @(posedge CLKi or posedge RSTi) begin
        if (RSTi) begin
            wr_ptr <= 0;
            rd_ptr <= 0;
        end else begin
            // Write pointer update
            if (WR_ENi && !FULLo) begin
                mem[wr_ptr[ADDR_WIDTH-1:0]] <= DATAi;
                wr_ptr <= wr_ptr + 1;
            end
            
            // Read pointer update
            if (RD_ENi && !EMPTYo) begin
                rd_ptr <= rd_ptr + 1;
            end
        end
    end
    
    // Status flags
    assign FULLo  = (wr_ptr[ADDR_WIDTH-1:0] == rd_ptr[ADDR_WIDTH-1:0]) && 
                    (wr_ptr[ADDR_WIDTH] != rd_ptr[ADDR_WIDTH]);
    assign EMPTYo = (wr_ptr == rd_ptr);
    
    // Data output
    assign DATAo = mem[rd_ptr[ADDR_WIDTH-1:0]];

endmodule
`endif
