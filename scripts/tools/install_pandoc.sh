#!/bin/bash

# Установка pandoc и зависимостей для работы с LaTeX
# Даем права на выполнение: chmod +x install_pandoc.sh

sudo apt install -y \
    pandoc \
    texlive-latex-base \
    texlive-fonts-recommended \
    texlive-extra-utils \
    texlive-latex-extra