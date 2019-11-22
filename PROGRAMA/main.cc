

#include "funciones.h"

using namespace std;

int main(){

  list <Paciente> pacientes_;
  list <Paciente>:: iterator i;
  
  int opcion;
  string cad;

  do{

    cout<<"MENU\n"<<endl;
    cout<<"0. Salir del programa\n"<<endl;
    cout<<"1. Añadir un paciente\n"<<endl;

    cout<<"Introduce una opcion: "<<endl;
    cin>>opcion;
    
    switch(opcion){

      case 1:
      
        cout<<" Nombre: "<<endl;
        cin>>cad;
        Paciente p(cad);
        cout<<" Apellido: "<<endl;
        cin>>cad;
        p.setApellido1(cad);
        cout<<" Apellido: "<<endl;
        cin>>cad;
        p.setApellido2(cad);
        cout<<" Direccion sin espacios: "<<endl;
        cin>>cad;
        p.setDireccion(cad);
        cout<<" Nacimiento: "<<endl;
        cin>>cad;
        p.setNacimiento(cad);
        cout<<" Telefono: "<<endl;
        cin>>cad;
        p.setTelefono(cad);
        cout<<" Historial sin espacios: "<<endl;
        cin>>cad;
        p.setHistorial(cad);

        cout<<" Nombre del paciente: "<<p.getNombre()<<endl;
        cout<<" Apellidos del paciente: "<<p.getApellidos()<<endl;
        cout<<" Direccion del paciente: "<<p.getDireccion()<<endl;
        cout<<" Nacimiento del paciente: "<<p.getNacimiento()<<endl;
        cout<<" Telefono del paciente: "<<p.getTelefono()<<endl;
        cout<<" Historial del paciente: "<<p.getHistorial()<<endl;
      break;
    }

  } while(opcion!=0);
  
  return 0;

}



