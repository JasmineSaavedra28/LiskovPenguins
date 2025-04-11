# 🐧 Liskov Penguins - Principio de Sustitución de Liskov

Este proyecto en C++ muestra cómo aplicar el principio L de SOLID (Liskov Substitution Principle) con clases de pingüinos y águilas 🐧🦅.

## 📁 Estructura del Proyecto

- `include/`: headers (`.hpp`)
- `src/`: implementación (`.cpp`)
- `output/`: binario generado (`main.exe`)

## 🚀 Clases

- `Bird`: clase base
- `FlyingBird`: interfaz abstracta para aves que vuelan
- `SwimmingBird`: interfaz abstracta para aves que nadan
- `Eagle`: vuela 🦅
- `Penguin`: nada 🐧

## ⚙️ Cómo compilar

```bash
g++ -Iinclude src/*.cpp main.cpp -o output/main.exe
./output/main.exe
