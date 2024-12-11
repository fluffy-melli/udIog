@echo off
g++ -o test ./src/main.cpp ./src/gdi/GDI.cpp ./src/gdi/DC.cpp ./src/gdi/utils/fill.cpp -lgdi32 -lgdiplus