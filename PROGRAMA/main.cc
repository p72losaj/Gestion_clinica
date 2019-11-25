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
    // guardamos los datos del paciente en el fichero

    file<<reg.GetNombre()+",";
    file<<reg.GetApellidos()+",";
    file<<reg.GetDireccion()+",";
    file<<reg.GetNacimiento()+",";
    file<<reg.GetHospital()+",";
    file<<reg.GetTelefono()<<+",";
    file<<reg.GetHistorial()<<endl;

    // Leemos el fichero
    //while( (getline(file,aux,',') ) && (!file.eof() ) ){
      while( !file.eof() ){
        getline(file, aux);
        /*
        reg.SetNombre(aux);
        cout<<" Nombre= "<<reg.GetNombre()<<endl;
        getline(file, aux, ',');
        reg.SetApellidos(aux);
        getline(file, aux, ',');
        reg.SetDireccion(aux);
        getline(file, aux, ',');
        reg.SetNacimiento(aux);
        getline(file, aux, ',');
        reg.SetHospital(aux);
        getline(file, aux, ',');
        reg.SetTelefono(aux);
        getline(file, aux, '\n');
        reg.SetHistorial(aux);
  */
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
  Paciente p1( "Jaime","LorenzoSanchez","c/AlcalaZamora18/2/3",
    "07/12/99","Publico","697264930","Gripe");
  Paciente P(p1);
  remove("pacientes.txt");
  int opcion, nr;
  bool encontrado;
  string cad;

  do{

    cout<<"MENU\n"<<endl;
    cout<<"0. Salir del programa\n"<<endl;
    cout<<"1. Nuevo paciente\n"<<endl;

    cout<<"Introduce una opcion: "<<endl;
    cin>>opcion;
    
    switch(opcion){

      case 1:
      
      cout<<" Nombre paciente= "<<endl;
      cin>>cad;
      encontrado = P.BuscarPaciente(cad);
      if(encontrado == true) cout<<" Paciente "<<P.GetNombre()<<" encontrado"<<endl;
      else{
          cout<< "Paciente no encontrado"<<endl;
          P.addPaciente(p1);
      }
      if(Pacientes_.empty()==false){
        cout<<" Lista  vacia"<< endl;  
      }
      else{
        cout<<" Lista no vacia"<<endl;
      }

      nr = P.GetPacientes().size();
      cout<<" Numero registros = "<<nr<<endl;
      break;
    }

  } while(opcion!=0);
  
  return 0;
}
