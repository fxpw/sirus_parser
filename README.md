# README

## Описание

Данный проект использует систему сборки `Make` для автоматизации установки и конфигурации проекта. Программа настраивает зависимости через `vcpkg` и компилирует проект с использованием `CMake`.

## Структура проекта

- `Makefile` — основной файл для сборки и управления зависимостями.
- `.env` — файл с переменными окружения (например, `APP_NAME`, `CMAKE_TOOLCHAIN_FILE`, `VCPKG_TARGET_TRIPLET` и др.).
- `build/` — директория для сборки проекта.
- `vcpkg_installed/` — директория для установленных пакетов vcpkg.

## Установка и использование

1. **Клонировать репозиторий**:
    ```bash
    git clone <url_репозитория>
    cd <имя_директории>
    ```

2. **Проверка vcpkg**:
    ```bash
    make i_all
    ```

3. **Сборка проекта**:
   - Для режима отладки:
     ```bash
     make pre_build_debug
     ```
   - Для релизного режима:
     ```bash
     make pre_build_release
     ```

4. **Запуск программы**:
    ```bash
    make pre_run
    ```

## Очистка сборки

Для очистки ранее собранных файлов выполните:
```bash
make clean
