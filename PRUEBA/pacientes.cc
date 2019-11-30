#include "funciones.h"
#include <iostream>
#include <cstring>
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
	for(i=Pacientes_.begin(); i!=Pacientes_.end(); i++)
	{
    	cout<<"\tNombre: "<<i->GetNombre()<<endl;
    	cout<<"\tApellidos: "<<i->GetApellidos()<<endl;
    	cout<<"\tDireccion: "<<i->GetDireccion()<<endl;
    	cout<<"\tNacimiento: "<<i->GetNacimiento()<<endl;
    	cout<<"\tHospital: "<<i->GetHospital()<<endl;
    	cout<<"\tTelefono: "<<i->GetTelefono()<<endl;
    	cout<<"\tHistorial: "<<i->GetHistorial()<<endl;
  	}

	fichero.close();	
}