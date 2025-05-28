#!/bin/bash

# Скрипт для установки Poetry и базовых зависимостей проекта

set -e  # Прерывать выполнение при ошибках

# Конфигурация зависимостей
declare -A DEPENDENCIES=(
    ["cocotb"]="^1.9.2"
    ["icecream"]="^2.1.4"
    ["pytest"]="^8.3.4"
    ["pytest-cov"]="^6.1.0"
    ["debugpy"]="^1.8.14"
)

# 1. Установка Poetry в .poetry
POETRY_DIR=".poetry"
mkdir -p "$POETRY_DIR"

echo "🔧 Устанавливаем Poetry в $POETRY_DIR..."
curl -sSL https://install.python-poetry.org | python3 - --yes --path "$POETRY_DIR"

# Добавляем .poetry в .gitignore
grep -qxF "$POETRY_DIR" .gitignore || echo "$POETRY_DIR" >> .gitignore

# 2. Инициализация pyproject.toml (если не существует)
if [ ! -f "pyproject.toml" ]; then
    echo "🛠 Создаём pyproject.toml..."
    "$POETRY_DIR/bin/poetry" init --no-interaction --python "^3.13"
fi

# 3. Добавление зависимостей
echo "📦 Добавляем зависимости в pyproject.toml..."
for pkg in "${!DEPENDENCIES[@]}"; do
    version="${DEPENDENCIES[$pkg]}"
    if ! grep -q "^$pkg =" pyproject.toml; then
        "$POETRY_DIR/bin/poetry" add "$pkg=$version" --no-interaction
        echo "  + $pkg $version"
    else
        echo "  ✓ $pkg (уже добавлен)"
    fi
done

# 4. Создаём алиас для удобства
echo -e "\nДобавьте в ваш shell-конфиг (.bashrc/.zshrc):"
echo "########################################################"
echo "alias poetry='$(pwd)/$POETRY_DIR/bin/poetry'"
echo "########################################################"

# 5. Установка зависимостей
echo -e "\n🚀 Устанавливаем зависимости..."
"$POETRY_DIR/bin/poetry" install

echo -e "\n🎉 Готово! Проект настроен с:"
"$POETRY_DIR/bin/poetry" show --tree

echo -e "\nИспользуйте:"
echo "  poetry run pytest       # запуск тестов"
echo "  poetry shell            # активация виртуального окружения"