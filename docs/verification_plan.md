# Verification Plan for UART Controller  

## 1. Goals  

- Проверить передачу/приём данных на скоростях 9600-115200 baud.  
- Убедиться в обработке ошибок (parity, framing).  

## 2. Testbench Architecture  

- **UVM-компоненты**: `uart_agent`, `scoreboard`, `coverage_collector`.  
- **Интерфейсы**: `uart_if` (clocking blocks).  

## 3. Test Cases  

| ID  | Название           | Описание                          | Метод        |  
|-----|--------------------|-----------------------------------|-------------|  
| TC1 | Reset Test         | Проверка сброса регистров         | UVM Sequence|  
| TC2 | Baud Rate Change   | Смена скорости на лету           | Direct Test |  