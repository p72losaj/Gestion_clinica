#include "funciones.h"
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <fstream>
#include <list>
using namespace std;

void Paciente::leePacientes()
{

	list <Paciente>::iterator i;
	ifstream fichero;
	fichero.open("pacientes.txt");
	string cadaux;
	Paciente aux("nombre","apellidos", "direccion", "nacimiento","hospital","telefono","historial");
	Pacientes_.clear();
	while(getline(fichero,cadaux,',') && !fichero.eof()){
		aux.SetNombre(cadaux);
		getline(fichero, cadaux, ',');
		aux.SetApellidos(cadaux);
		getline(fichero, cadaux, ',');
		aux.SetDireccion(cadaux);
		getline(fichero, cadaux, ',');
		aux.SetNacimiento(cadaux);
		getline(fichero, cadaux, ',');
		aux.SetHospital(cadaux);
		getline(fichero, cadaux, ',');
		aux.SetTelefono(cadaux);
		getline(fichero, cadaux, '\n');
		aux.SetHistorial(cadaux);
		Pacientes_.push_back(aux);
	}
	fichero.close();	
}