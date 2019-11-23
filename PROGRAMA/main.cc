#include <iostream>
#include <cstring>
#include <fstream>
#include "funciones.h"
using namespace std;

Paciente::Paciente(char *n, char* a, char *d, char* fn, char* ht, char* t, char* hm) {
   strcpy(nombre, n);
   strcpy(apellidos, a);
   strcpy(direccion, d);
   strcpy(nacimiento, fn);
   strcpy(hospital, ht);
   strcpy(telefono, t);
   strcpy(historial, hm);
}

ostream& operator<<(ostream &os, Paciente& reg) {
    os << "Nombre: " << reg.LeeNombre() << endl;
    os << "Apellidos: "<<reg.LeeApellidos()<<endl;
    os << "Direccion: "<<reg.LeeDireccion()<<endl;
    os << "Fecha_Nacimiento: "<<reg.LeeNacimiento()<<endl;
    os << "Hospital de procedencia: "<<reg.LeeHospital()<<endl;
    os << "Numero de telefono: "<<reg.LeeTelefono()<<endl;
    os << "Historial del paciente: "<<reg.LeeHistorial()<<endl;

    fstream file("pacientes.txt");
    if(!file.is_open() ){
      file.open("pacientes.txt", ios::out);
    }
    // guardamos los datos del paciente en el fichero
      file << "Nombre: " << reg.LeeNombre() << endl;
      file << "Apellidos: "<<reg.LeeApellidos()<<endl;
      file << "Direccion: "<<reg.LeeDireccion()<<endl;
      file << "Fecha_Nacimiento: "<<reg.LeeNacimiento()<<endl;
      file << "Hospital de procedencia: "<<reg.LeeHospital()<<endl;
      file << "Numero de telefono: "<<reg.LeeTelefono()<<endl;
      file << "Historial del paciente: "<<reg.LeeHistorial()<<endl;
      // Cerramos el fichero
      file.close(); 
   return os;
}

int main(void){

  Paciente p1( (char*)"Jaime",(char*)"Lorenzo Sanchez",(char*)"c/Alcala Zamora 18-2-3",
                (char*)"07/12/99",(char*)"Publico", (char*)"697264930", (char*) "Gripe" );

  int opcion, encontrado;
  string cad;

  do{

    cout<<"MENU\n"<<endl;
    cout<<"0. Salir del programa\n"<<endl;
    cout<<"1. Nuevo paciente\n"<<endl;

    cout<<"Introduce una opcion: "<<endl;
    cin>>opcion;
    
    switch(opcion){

      case 1:
      
      cout<<p1<<endl;

      break;
    }

  } while(opcion!=0);
  
  return 0;

}
