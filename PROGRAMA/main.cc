

#include "funciones.h"

using namespace std;

void AddPaciente(Paciente paciente);

int main(){

  list <Paciente> pacientes_;
  
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
        cout<<" Hospital procedencia: "<<endl;
        cin>>cad;
        p.setHospital(cad);
        AddPaciente(p);
      break;
    }

  } while(opcion!=0);
  
  return 0;

}

void AddPaciente(Paciente paciente)
{

  list <Paciente> pacientes_;
  list <Paciente>:: iterator i;
  for(i=pacientes_.begin(); i!=pacientes_.end();i++){
    if(i->getNombre() == paciente.getNombre() ){
      cout<<" Paciente "<<i->getNombre()<<" encontrado\n"<<endl;
    }
  }
  pacientes_.push_back(paciente);
  string nomfich=(paciente.getNombre() + ".txt");
  ifstream fich(nomfich.c_str());
    if(!fich){
      ofstream fich(nomfich.c_str());
    }
  cout<<" Fichero "<<nomfich<<" añadido\n";
  fich.close();
  cout<<" Numero de pacientes: "<<paciente.getPacientes().size()<<endl;
} 



