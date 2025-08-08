#!/bin/bash
set -e  # Выход при ошибке

ENV_FILE="configs/environment.yml"
ENV_DIR="./.env"

echo "Проверяем наличие $ENV_FILE..."
if [ ! -f "$ENV_FILE" ]; then
    echo "Ошибка: Файл $ENV_FILE не найден!"
    exit 1
fi

echo "Создаём Conda-среду в $ENV_DIR..."
conda env create --prefix "$ENV_DIR" -f "$ENV_FILE" || {
    echo "Ошибка при создании среды! Проверьте файл $ENV_FILE и установку Conda."
    exit 1
}

echo "✅ Готово! Среда создана в $ENV_DIR."