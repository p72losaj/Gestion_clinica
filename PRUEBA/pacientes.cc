// Funciones definitivas

#include <iostream>
#include <cstring>
#include <fstream>
#include <list>
#include "funciones.h"

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

Paciente::Paciente(string n, string a, string d, string fn, string ht, string t, string hm) { 
   nombre = n;
   apellidos = a;
   direccion = d;
   nacimiento = fn;
   hospital = ht;
   telefono = t;
   historial = hm;
}

bool Paciente::BuscarPaciente(string cad){
  bool encontrado = false;
  list <Paciente>:: iterator i;
  if(Pacientes_.empty()==true) cout<<" Lista vacia"<<endl;
  for(i=Pacientes_.begin(); i!= Pacientes_.end(); i++)
  {
    if(i->GetNombre() == cad){
      encontrado = true;
    }
  }
  return encontrado;  
}

void Paciente::MostrarPacientes()
{
  list<Paciente>:: iterator i;
    for(i=Pacientes_.begin();i!=Pacientes_.end();i++)
      {
        cout <<"Nombre paciente: "<<i->GetNombre()<<endl;
        cout<<"Apellidos paciente: "<<i->GetApellidos()<<endl;
        cout<<"Direccion paciente: "<<i->GetDireccion()<<endl;
        cout<<"Fecha nacimiento paciente: "<<i->GetNacimiento()<<endl;
        cout<<"Hoispital procedencia paciente: "<<i->GetHospital()<<endl;
        cout<<"Telefono paciente: "<<i->GetTelefono()<<endl;
        cout<<"Historia paciente: "<<i->GetHistorial()<<endl;
      }   
}
