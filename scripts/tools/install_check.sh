#!/bin/bash
# chmod +x install_check.sh

# Colors for output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
NC='\033[0m' # No Color

# Function to check if command exists
check_command() {
    local cmd=$1
    local name=$2
    local install_hint=$3
    
    if command -v $cmd &> /dev/null; then
        echo -e "${GREEN}[✓] $name установлен${NC} ($(which $cmd))"
        return 0
    else
        echo -e "${RED}[✗] $name не установлен${NC}"
        if [ -n "$install_hint" ]; then
            echo -e "${YELLOW}Подсказка: $install_hint${NC}"
        fi
        return 1
    fi
}

echo "Проверка установленных программ:"

# Check each tool
check_command "conda" "Anaconda/Miniconda" "Установите с https://docs.conda.io/en/latest/miniconda.html"
check_command "d2" "D2 (diagrams)" "Установите через: curl -fsSL https://d2lang.com/install.sh | sh -s --"
check_command "pandoc" "Pandoc" "Установите через: sudo apt-get install pandoc или brew install pandoc"
check_command "poetry" "Poetry" "Установите через: curl -sSL https://install.python-poetry.org | python3 -"
check_command "surfer" "Surfer" "Установите через скрипт install_surfer.sh из репозитория"
check_command "verilator" "Verilator" "Установите через: sudo apt-get install verilator или brew install verilator"
check_command "iverilog" "Icarus Verilog" "Установите через: sudo apt-get install iverilog или brew install icarus-verilog"

# Additional checks for specific tools
echo -e "\nДополнительные проверки:"

# Check conda initialization
if command -v conda &> /dev/null; then
    if [[ -z "$CONDA_DEFAULT_ENV" ]]; then
        echo -e "${YELLOW}[!] Conda не инициализирована в текущей сессии${NC}"
        echo -e "  Выполните: conda init <your-shell> и перезапустите терминал"
    else
        echo -e "${GREEN}[✓] Conda инициализирована (env: $CONDA_DEFAULT_ENV)${NC}"
    fi
fi

# Check poetry initialization
if command -v poetry &> /dev/null; then
    if ! poetry config virtualenvs.create &> /dev/null; then
        echo -e "${YELLOW}[!] Poetry не настроен${NC}"
        echo -e "  Выполните: poetry config virtualenvs.create true"
    fi
fi

# Check verilator version
if command -v verilator &> /dev/null; then
    echo -e "${GREEN}[✓] Версия Verilator: $(verilator --version)${NC}"
fi

# Check iverilog version
if command -v iverilog &> /dev/null; then
    echo -e "${GREEN}[✓] Версия Icarus Verilog: $(iverilog -v 2>&1 | head -n 1)${NC}"
fi

exit 0