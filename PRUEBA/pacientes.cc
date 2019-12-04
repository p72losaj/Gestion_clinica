// Funciones clase paciente

#include <iostream>
#include <cstring>
#include <fstream>
#include <list>
#include <stdio.h>
#include "funciones.h"

using namespace std;


void Paciente::CambiarDatos(string nombre, Paciente& reg)
{
  list<Paciente>:: iterator i;
  for(i=Pacientes_.begin();i!=Pacientes_.end();i++)
    {

      if(i->GetNombre() == nombre)
      {

        reg.SetNombre(nombre);
        nombre = i->GetApellidos();
        reg.SetApellidos(nombre);
        nombre = i->GetDireccion();
        reg.SetDireccion(nombre);
        nombre = i->GetNacimiento();
        reg.SetNacimiento(nombre);
        nombre = i->GetHospital();
        reg.SetHospital(nombre);
        nombre = i->GetTelefono();
        reg.SetTelefono(nombre);
        nombre = i->GetHistorial();
        reg.SetHistorial(nombre);

      }
      
    } 
}
ostream& operator<<(ostream &os, Paciente& reg) 
{
    os << "Nombre: " << reg.GetNombre() << endl;
    os << "Apellidos: "<<reg.GetApellidos()<<endl;
    os << "Direccion: "<<reg.GetDireccion()<<endl;
    os << "Fecha_Nacimiento: "<<reg.GetNacimiento()<<endl;
    os << "Hospital de procedencia: "<<reg.GetHospital()<<endl;
    os << "Numero de telefono: "<<reg.GetTelefono()<<endl;
    os << "Historial del paciente: "<<reg.GetHistorial()<<endl;
   return os;
}

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

bool Paciente::BuscarPaciente(string cad)
{
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
        cout<<endl;
      }   
}

void Paciente::addPaciente(Paciente& reg)
{
  list <Paciente>::iterator i;
  fstream file("pacientes.txt", ios::app);
  if(!file) cout<<"Error acceso fichero"<<endl;
  else{

    file<<reg.GetNombre()+",";
    file<<reg.GetApellidos()+",";
    file<<reg.GetDireccion()+",";
    file<<reg.GetNacimiento()+",";
    file<<reg.GetHospital()+",";
    file<<reg.GetTelefono()<<+",";
    file<<reg.GetHistorial()<<endl;

    // Cerramos el fichero
    file.close(); 
  }
}

void Paciente::modificarFichero(Paciente p)
{
  string aux;
  // fichero principal
  ifstream file("pacientes.txt");
  // Creamos un fichero auxiliar
  ofstream file2("aux.txt");
  if(!file2 or !file) cout<<"Error acceso fichero"<<endl;
  else
  {

    // Recorremos file y guardamos en file2
    while(getline(file,aux,',') && !file.eof())
    {
      if(aux != p.GetNombre()) file2<<p.GetNombre()+",";
      else
      {
        p.SetNombre(aux);
        file2<<p.GetNombre()+",";
      } 
      getline(file,aux,',');
      if(aux != p.GetApellidos()) file2<<p.GetApellidos()+",";
      else
      {
        p.SetApellidos(aux);
        file2<<p.GetApellidos()+",";
      } 
      getline(file,aux,',');
      if(aux != p.GetDireccion()) file2<<p.GetDireccion()+",";
      else
      {
        p.SetDireccion(aux);
        file2<<p.GetDireccion()+",";
      } 
      getline(file,aux,',');
      if(aux != p.GetNacimiento()) file2<<p.GetNacimiento()+",";
      else
      {
        p.SetNacimiento(aux);
        file2<<p.GetNacimiento()+",";
      } 
      getline(file,aux,',');
      if(aux != p.GetHospital()) file2<<p.GetHospital()+",";
      else
      {
        p.SetHospital(aux);
        file2<<p.GetHospital()+",";
      }
      getline(file,aux,',');
      if(aux != p.GetTelefono()) file2<<p.GetTelefono()+",";
      else
      {
        p.SetTelefono(aux);
        file2<<p.GetTelefono()+",";
      }
      getline(file,aux,'\n');
      if(aux != p.GetHistorial()) file2<<p.GetHistorial()<<endl;
      else
      {
        p.SetHistorial(aux);
        file2<<p.GetHistorial()<<endl;
      }
    }
    // Cerramos los ficheros
    file.close();
    file2.close();
    //Renombramos file2
    rename("aux.txt", "pacientes.txt");
  }
}