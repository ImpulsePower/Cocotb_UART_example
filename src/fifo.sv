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

// `define FIFO_MODE_2PORT

// `ifdef FIFO_MODE_SYNC

module fifo #(
    parameter DATA_WIDTH = 8,
    parameter FIFO_DEPTH = 16,
    parameter LOG2_DEPTH = $clog2(FIFO_DEPTH)
) (
    input  logic                     CLKip,
    input  logic                     RSTi,
    input  logic                     WEi,
    input  logic [DATA_WIDTH-1:0]    DATAi,
    input  logic                     RDi,
    output logic [DATA_WIDTH-1:0]    DATAo,
    output logic                     FULLo,
    output logic                     EMPTYo
);

    logic [DATA_WIDTH-1:0] memory [0:FIFO_DEPTH-1];
    logic [LOG2_DEPTH:0]   count;
    logic [LOG2_DEPTH-1:0] wr_ptr;
    logic [LOG2_DEPTH-1:0] rd_ptr;
    logic [1:0] count_state;

    always_ff @(posedge CLKip or posedge RSTi) begin
        if (RSTi) begin
            wr_ptr  <= '0;
            rd_ptr  <= '0;
            count   <= '0;
            count_state <= '0;
            memory[0] <= 0;
        end 
        else begin
            // Write operation
            if (WEi && !FULLo) begin
                memory[wr_ptr] <= DATAi;
                wr_ptr <= (wr_ptr == '1) ? 0 : wr_ptr + 1;
            end

            // Read operation
            if (RDi && !EMPTYo) begin
                DATAo <= memory[rd_ptr];
                rd_ptr <= (rd_ptr == '1) ? 0 : rd_ptr + 1;

            end
            
            // Update count
            case ({WEi && !FULLo, RDi && !EMPTYo})
                2'b01:   count <= count - 1;
                2'b10:   count <= count + 1;
                2'b11:   count <= count;
                default: count <= count;
            endcase
        end
    end

    always_comb begin
        FULLo  = (count == FIFO_DEPTH);
        EMPTYo = (count == 0);
    end

    initial begin
        $dumpfile("test/dump/fifo.fst");
        $dumpvars(0, fifo);
    end
endmodule : fifo


// `endif

// `ifdef FIFO_MODE_ASYNC

// module fifo #(
//     parameter DATA_WIDTH = 8,     // ширина данных (обычно 8 бит для UART)
//     parameter FIFO_DEPTH = 16,    // глубина FIFO (должна быть степенью 2)
//     parameter LOG2_DEPTH = $clog2(FIFO_DEPTH)  // автоматический расчет
// ) (
//     // Write domain (UART RX side)
//     input  logic                    WCLK,     // тактовый сигнал записи
//     input  logic                    WRST,     // сброс домена записи (активный низкий)
//     input  logic                    WEi,      // сигнал записи нового байта
//     input  logic [DATA_WIDTH-1:0]   WDi,      // принятые данные
//     output logic                    FULLo,    // флаг переполнения
//     output logic                    AFULLo,   // флаг почти полного (на 1 меньше)
    
//     // Read domain (system side)
//     input  logic                    RCLK,     // тактовый сигнал чтения
//     input  logic                    RRST,     // сброс домена чтения (активный низкий)
//     input  logic                    REi,      // запрос на чтение
//     output logic [DATA_WIDTH-1:0]   RDo,      // прочитанные данные
//     output logic                    EMPTYo,   // флаг пустого FIFO
//     output logic                    AEMPTYo   // флаг почти пустого (1 элемент)
// );

//     // Внутренние сигналы
//     logic [LOG2_DEPTH:0]    wr_ptr, wr_ptr_gray, wr_ptr_sync1, wr_ptr_sync2;
//     logic [LOG2_DEPTH:0]    rd_ptr, rd_ptr_gray, rd_ptr_sync1, rd_ptr_sync2;
//     logic [DATA_WIDTH-1:0]  mem [FIFO_DEPTH-1:0]; // память FIFO

//     //=============================================
//     // Write domain logic
//     //=============================================
//     always_ff @(posedge WCLK or posedge WRST) begin
//         if (WRST) begin
//             wr_ptr <= '0;
//         end 
//         else begin
//             if (WEi && !FULLo) begin
//                 mem[wr_ptr[LOG2_DEPTH-1:0]] <= WDi;
//                 wr_ptr <= wr_ptr + 1;
//             end
//         end
//     end

//     // Convert binary to gray code for clock domain crossing
//     assign wr_ptr_gray = wr_ptr ^ (wr_ptr >> 1);

//     // Synchronize read pointer to write clock domain
//     always_ff @(posedge WCLK or posedge WRST) begin
//         if (WRST) begin
//             rd_ptr_sync1 <= '0;
//             rd_ptr_sync2 <= '0;
//         end 
//         else begin
//             rd_ptr_sync1 <= rd_ptr_gray;
//             rd_ptr_sync2 <= rd_ptr_sync1;
//         end
//     end

//     // Convert gray code back to binary for comparison
//     logic [LOG2_DEPTH:0] rd_ptr_sync_bin;
//     generate
//         assign rd_ptr_sync_bin[LOG2_DEPTH] = rd_ptr_sync2[LOG2_DEPTH];
//         for (genvar i = LOG2_DEPTH-1; i >= 0; i--) begin : gray_to_bin
//             assign rd_ptr_sync_bin[i] = rd_ptr_sync_bin[i+1] ^ rd_ptr_sync2[i];
//         end
//     endgenerate

//     // Write domain flags
//     assign FULLo = (wr_ptr[LOG2_DEPTH] != rd_ptr_sync_bin[LOG2_DEPTH]) && 
//                   (wr_ptr[LOG2_DEPTH-1:0] == rd_ptr_sync_bin[LOG2_DEPTH-1:0]);
//     assign AFULLo = (wr_ptr - rd_ptr_sync_bin) >= (FIFO_DEPTH - 1);

//     //=============================================
//     // Read domain logic
//     //=============================================
//     always_ff @(posedge RCLK or posedge RRST) begin
//         if (RRST) begin
//             rd_ptr <= '0;
//         end 
//         else begin
//             if (REi && !EMPTYo) begin
//                 rd_ptr <= rd_ptr + 1;
//             end
//         end
//     end

//     // Convert binary to gray code for clock domain crossing
//     assign rd_ptr_gray = rd_ptr ^ (rd_ptr >> 1);

//     // Synchronize write pointer to read clock domain
//     always_ff @(posedge RCLK or posedge RRST) begin
//         if (RRST) begin
//             wr_ptr_sync1 <= '0;
//             wr_ptr_sync2 <= '0;
//         end 
//         else begin
//             wr_ptr_sync1 <= wr_ptr_gray;
//             wr_ptr_sync2 <= wr_ptr_sync1;
//         end
//     end

//     // Convert gray code back to binary for comparison
//     logic [LOG2_DEPTH:0] wr_ptr_sync_bin;
//     generate
//         if (LOG2_DEPTH >= 0) begin : sync_conv
//             assign wr_ptr_sync_bin[LOG2_DEPTH] = wr_ptr_sync2[LOG2_DEPTH];
//             for (genvar i = LOG2_DEPTH-1; i >= 0; i--) begin : bit_conv
//                 assign wr_ptr_sync_bin[i] = wr_ptr_sync_bin[i+1] ^ wr_ptr_sync2[i];
//             end
//         end
//     endgenerate

//     // Read domain flags
//     assign EMPTYo = (wr_ptr_sync_bin == rd_ptr);
//     assign AEMPTYo = (wr_ptr_sync_bin - rd_ptr) <= 1;

//     // Read data (combinational)
//     assign RDo = mem[rd_ptr[LOG2_DEPTH-1:0]];

// endmodule: fifo

// `endif

// `ifdef FIFO_MODE_2PORT

// module fifo #(
//     parameter DATA_WIDTH = 8,   // Ширина данных
//     parameter FIFO_DEPTH = 16  // Глубина FIFO
// )(
//     // Общие сигналы
//     input  logic                    CLKip,      // Тактовый сигнал
//     input  logic                    RSTi,       // Сигнал сброса
    
//     // Порт записи
//     input  logic [DATA_WIDTH-1:0]   DATAi, // Входные данные
//     input  logic                    WEi,     // Разрешение записи
//     output logic                    FULLo,   // Флаг переполнения
    
//     // Порт чтения
//     output logic [DATA_WIDTH-1:0]   DATAo, // Выходные данные
//     input  logic                    RDi,     // Разрешение чтения
//     output logic                    EMPTYo   // Флаг пустоты
// );
//     // Внутренняя память FIFO
//     logic [DATA_WIDTH-1:0] fifo_mem [0:FIFO_DEPTH-1];
    
//     // Указатели и счетчик
//     logic [$clog2(FIFO_DEPTH)-1:0] wr_ptr = 0;
//     logic [$clog2(FIFO_DEPTH)-1:0] rd_ptr = 0;
//     logic [$clog2(FIFO_DEPTH):0] count = 0;  // На 1 бит шире для учета переполнения
    
//     // Основная логика FIFO
//     always_ff @(posedge CLKip or posedge RSTi) begin
//         if (RSTi) begin
//             wr_ptr <= 0;
//             rd_ptr <= 0;
//             count <= 0;
//         end else begin
//             // Логика записи
//             if (WEi && !FULLo) begin
//                 fifo_mem[wr_ptr] <= DATAi;
//                 wr_ptr <= (wr_ptr == FIFO_DEPTH-1) ? 0 : wr_ptr + 1;
//             end
            
//             // Логика чтения
//             if (RDi && !EMPTYo) begin
//                 DATAo <= fifo_mem[rd_ptr];
//                 rd_ptr <= (rd_ptr == FIFO_DEPTH-1) ? 0 : rd_ptr + 1;
//             end
            
//             // Обновление счетчика
//             case ({WEi && !FULLo, RDi && !EMPTYo})
//                 2'b01: count <= count - 1; // Только чтение
//                 2'b10: count <= count + 1; // Только запись
//                 2'b11: count <= count;     // Одновременные запись и чтение
//                 default: ;                // Ничего не делать
//             endcase
//         end
//     end
    
//     // Управление флагами состояния
//     assign FULLo = (count == FIFO_DEPTH);
//     assign EMPTYo = (count == 0);

// endmodule: fifo

// `endif
