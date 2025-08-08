#!/bin/bash
set -e

# 1. Активация Conda окружения (если нужно)
if [ -n "$CONDA_DEFAULT_ENV" ]; then
    echo "ℹ️  Используется Conda окружение: $CONDA_DEFAULT_ENV"
else
    echo "⚠️  Внимание: Conda окружение не активировано"
    echo "Активируйте его командой: conda activate <ваше_окружение>"
    exit 1
fi

# 2. Проверка наличия Poetry в текущем окружении
if ! command -v poetry &> /dev/null; then
    echo "❌ Poetry не найден в текущем Conda окружении"
    echo "Установите его командой:"
    echo "  conda install -c conda-forge poetry"
    exit 1
fi

# 3. Проверка конфигурационных файлов
if [ ! -f "configs/pyproject.toml" ] || [ ! -f "configs/poetry.lock" ]; then
    echo "❌ Ошибка: Не найдены pyproject.toml и/или poetry.lock в configs/"
    exit 1
fi

# 4. Копирование файлов
echo "📂 Копируем конфиги из configs/ в корень..."
cp configs/pyproject.toml configs/poetry.lock .

# 5. Проверка и установка
if poetry check; then
    echo "✅ Конфигурация верна. Устанавливаем зависимости..."
    poetry install --no-root
    
    # Для чистых машин может потребоваться явно указать Python
    if [ ! -d ".venv" ]; then
        PYTHON_PATH=$(which python)
        poetry env use "$PYTHON_PATH"
    fi
else
    echo "⚠️  Обнаружены проблемы в конфигурации. Исправляем..."
    poetry lock --no-update
    poetry install --sync
    cp pyproject.toml poetry.lock configs/
fi

# 6. Очистка
echo "🧹 Удаляем временные файлы..."
rm pyproject.toml poetry.lock

echo -e "\n🎉 Готово! Проект развёрнут в Conda окружении."
echo "Для активации виртуального окружения Poetry:"
echo "  poetry shell"