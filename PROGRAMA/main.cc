#include <iostream>
#include <cstring>
#include <fstream>
#include <list>
#include "funciones.h"
using namespace std;



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

  for(i=Pacientes_.begin(); i!= Pacientes_.end(); i++){

    if(i->GetNombre() == cad){
      encontrado = true;
    }
  }
  
  return encontrado;  
}
ostream& operator<<(ostream &os, Paciente& reg) {
    os << "Nombre: " << reg.GetNombre() << endl;
    os << "Apellidos: "<<reg.GetApellidos()<<endl;
    os << "Direccion: "<<reg.GetDireccion()<<endl;
    os << "Fecha_Nacimiento: "<<reg.GetNacimiento()<<endl;
    os << "Hospital de procedencia: "<<reg.GetHospital()<<endl;
    os << "Numero de telefono: "<<reg.GetTelefono()<<endl;
    os << "Historial del paciente: "<<reg.GetHistorial()<<endl;
   return os;
}

void Paciente::addPaciente(Paciente& reg)
{
  string aux;
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

    // Leemos el fichero
      while( !file.eof() ){
        getline(file, aux);
        
        // añadimos el paciente a la lista
        Pacientes_.push_back(reg);
      }
    // Cerramos el fichero
    file.close(); 
  }

  // Mostramos la lista por pantalla
  cout<<" Leyendo lista"<<endl;
  for(i=Pacientes_.begin(); i!=Pacientes_.end(); i++){
    cout<<"\tNombre: "<<i->GetNombre()<<endl;
    cout<<"\tApellidos: "<<i->GetApellidos()<<endl;
    cout<<"\tDireccion: "<<i->GetDireccion()<<endl;
    cout<<"\tNacimiento: "<<i->GetNacimiento()<<endl;
    cout<<"\tHospital: "<<i->GetHospital()<<endl;
    cout<<"\tTelefono: "<<i->GetTelefono()<<endl;
    cout<<"\tHistorial: "<<i->GetHistorial()<<endl;
  }
}


int main(void){

  list <Paciente> Pacientes_;
  string nombre, apellidos, direccion, nacimiento, hospital, telefono, historial;
  Paciente p1( nombre,apellidos,direccion, nacimiento,hospital,telefono,historial);
  Paciente P(p1);
  remove("pacientes.txt");
  int opcion, nr;
  bool encontrado;
  string cad;

  do{

    cout<<"MENU"<<endl;
    cout<<"0. Salir del programa"<<endl;
    cout<<"1. Buscar Paciente"<<endl;
    cout<<"2. Mostrar informacion de un paciente"<<endl;
    cout<<"3. Añadir nuevo paciente"<<endl;

    cout<<"Introduce una opcion: "<<endl;
    cin>>opcion;
    
    switch(opcion){

      case 1:

        cout<<"Nombre paciente= "<<endl;
        cin>> nombre;
        encontrado = P.BuscarPaciente(nombre);
        if(encontrado == true) cout<<"Paciente encontrado"<<endl;
        else cout<<"Error. Paciente no encontrado"<<endl;

      break;

      case 2:

        cout<<"Nombre paciente= "<<endl;
        cin>> nombre;
        encontrado = P.BuscarPaciente(nombre);
        if(encontrado == true) cout<<p1<<endl;
        else cout<<"Error. Paciente no encontrado"<<endl;

      break;

      case 3:
        
        cout<<"Nombre paciente= "<<endl;
        cin>> nombre;
        encontrado = P.BuscarPaciente(nombre);
        if(encontrado == true) cout<<"Error. Paciente ya existente"<<endl;
        else{
          p1.SetNombre(nombre);
          cout<<"Apellidos sin espacios: ";
          cin>> apellidos;
          p1.SetApellidos(apellidos);
          cout<<"Direccion sin espacios: ";
          cin>> direccion;
          p1.SetDireccion(direccion);
          cout<<"Nacimiento paciente: ";
          cin >> nacimiento;
          p1.SetNacimiento(nacimiento);
          cout<<"Hospital privado/publico: ";
          cin >> hospital;
          p1.SetHospital(hospital);
          cout<<"Numero telefono= ";
          cin >> telefono;
          p1.SetTelefono(telefono);
          cout<<"Historial = ";
          cin >> historial;
          p1.SetHistorial(historial);
          P.addPaciente(p1);
      }
      break;
    }

  } while(opcion!=0);
  
  return 0;
}
