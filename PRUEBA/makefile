# Flags passed to the C++ compiler.
CXXFLAGS += -g -Wall -Wextra -pthread -std=gnu++11

main.exe: main.cc pacientes.cc funciones.h
	@echo Creando ejecutable main.exe...
	g++ main.cc pacientes.cc -o main.exe
	chmod u+x main.exe