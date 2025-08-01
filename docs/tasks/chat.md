1. Параметры:
   - DATA_WIDTH: ширина данных (положительное целое)
   - FIFO_DEPTH: глубина FIFO (степень двойки > 4)
   - FWFT_MODE: режим First-Word Fall-Through (0 - стандартный, 1 - FWFT)
   - ASYNC_RESET: тип сброса (0 - синхронный, 1 - асинхронный)
   - SHOW_COUNT: вывод счетчика элементов (0/1)
   - ALMOST_FULL_THRESH: порог almost_full (по умолчанию FIFO_DEPTH-2)
   - ALMOST_EMPTY_THRESH: порог almost_empty (по умолчанию 2)

2. Интерфейс:
   input  logic                     clk,
   input  logic                     rst_n,       // Активный 0
   input  logic [DATA_WIDTH-1:0]    data_in,
   input  logic                     wr_en,
   input  logic                     rd_en,
   output logic [DATA_WIDTH-1:0]    data_out,
   output logic                     full,
   output logic                     empty,
   output logic                     almost_full,
   output logic                     almost_empty,
   output logic [clog2(FIFO_DEPTH):0] count    // Только если SHOW_COUNT=1

3. Требования к реализации:
   - Использовать двухпортовую RAM с циклическими указателями
   - Gray-кодирование указателей для защиты от метастабильности
   - Логика full/empty на основе сравнения указателей в Gray-коде
   - Реализация двух режимов: стандартный и FWFT
   - Параметризуемые пороги almost_full/almost_empty
   - Счетчик элементов при SHOW_COUNT=1
   - Проверка параметров (FIFO_DEPTH - степень 2, пороги в допустимых пределах)
   - Оптимизация для синтеза (без latch, timing-friendly)
   - Поддержка Synopsys/Cadence/Siemens EDA tools

4. Архитектура:
   - Память: регистровый файл [0:FIFO_DEPTH-1]
   - Указатели: бинарные + Gray-кодированные версии
   - Двойная синхронизация для указателей
   - Отдельные always-блоки для:
     * Управления памятью
     * Обновления указателей
     * Формирования флагов состояния
     * Реализации FWFT логики

5. Особые функции:
   - bin2gray: преобразование бинарного кода в Gray-код
   - clog2: вычисление log2 с округлением вверх
   - Проверка параметров в initial блоке:
     if (2**ADDR_WIDTH != FIFO_DEPTH) $error("FIFO_DEPTH должна быть степенью 2");
     if (FIFO_DEPTH <= 4) $error("FIFO_DEPTH должна быть >4");

6. Тестовое покрытие (добавить self-checking testbench):
   - Инициализация и сброс
   - Последовательная запись/чтение
   - Одновременная запись и чтение
   - Тесты переполнения/недополнения
   - Проверка всех флагов (full/empty/almost_full/almost_empty)
   - Тестирование обоих режимов (FWFT/стандартный)
   - Проверка работы счетчика
   - Тесты синхронного/асинхронного сброса
   - Автоматическая проверка с использованием assert

7. Стиль кодирования:
   - Использовать SystemVerilog: always_ff, always_comb
   - Четкие комментарии для всех критических секций
   - Генерация через generate для режимов FWFT/SHOW_COUNT
   - Именование в стиле snake_case
   - Параметр ADDR_WIDTH = clog2(FIFO_DEPTH)

Сгенерируй полный код модуля и тестбенча в одном файле. Код должен быть готов к компиляции и симуляции без дополнительных правок. Предусмотреть обработку всех граничных случаев.
