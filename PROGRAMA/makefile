# Flags passed to the C++ compiler.
CXXFLAGS += -g -Wall -Wextra -pthread -std=gnu++11

main.exe: main.cc funciones.cc funciones.h
	@echo Creando ejecutable main.exe...
	g++ main.cc funciones.cc -o main.exe