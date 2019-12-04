#include <iostream>
#include <cstring>
#include <fstream>
#include <list>
#include "funciones.h"
using namespace std;

/*
Cita::Cita(Paciente p,string h, string f, string m):paciente_(p){
  paciente_ = p;
  hora_ = h;
  fecha_ = f;
  motivo_ = m;
}
*/

/*
list <Paciente> cargaLista() {

  list <Paciente> p;
  string nombre, apellidos, direccion, nacimiento, hospital, telefono, historial,aux;
  ifstream fichero;
  fichero.open("pacientes.txt");
  while (getline(fichero,aux,',') && !fichero.eof()) {
    nombre = aux;
    getline(fichero,aux,',');
    apellidos = aux;
    getline(fichero,aux,',');
    direccion = aux;
    getline(fichero,aux,',');
    nacimiento = aux;
    getline(fichero,aux,',');
    hospital = aux;
    getline(fichero,aux,',');
    telefono = aux;
    getline(fichero,aux,'\n');
    historial = aux;
    Paciente p1(nombre,apellidos,direccion,nacimiento,hospital,telefono,historial);
    p.push_back(p1);
  }

  fichero.close();
  
  return p;
}
*/


int main(void){

  string nombre, apellidos, direccion, nacimiento, hospital, telefono, historial, historial2;
  Paciente p1( "Jaime","Lorenzo_Sanchez","c/AlcalaZamora-18/2/3",
                "07/12/99","privado","697264930","gripe");
  Paciente P(p1);
  P.leePacientes();
  int opcion, opcion2;
  bool encontrado;

  do{

    system("clear");
    cout<<"MENU"<<endl;
    cout<<"0. Salir del programa"<<endl;
    cout<<"1. Buscar Paciente"<<endl;
    cout<<"2. Mostrar informacion de un paciente"<<endl;
    cout<<"3. Añadir nuevo paciente"<<endl;
    cout<<"4. Modificar datos paciente"<<endl;
    cout<<"5. Mostrar lista pacientes"<<endl;
    cout<<"Introduce una opcion: "<<endl;
    cin>>opcion;
    
    switch(opcion){

      case 1:

      cout<<"Nombre paciente= ";
      cin>> nombre;
      cin.get();
      encontrado = P.BuscarPaciente(nombre);
      if(encontrado == true) cout<<"Paciente encontrado"<<endl;
      else cout<<"Error. Paciente no encontrado"<<endl;

      break;

      case 2:

        cout<<"Nombre paciente= "<<endl;
        cin>> nombre;
        encontrado = P.BuscarPaciente(nombre);
        /*
        if(encontrado == true)
        {
          cout<<P<<endl;
        } 
        */
        else cout<<"Error. Paciente no encontrado"<<endl;

      break;

      case 3:

        cout<<"Nombre paciente= "<<endl;
        cin>> nombre;
        encontrado = P.BuscarPaciente(nombre);
        if(encontrado == true) cout<<"Error. Paciente ya existente"<<endl;
        else
        {
          P.SetNombre(nombre);
          cout<<"Apellidos sin espacios: ";
          cin>> apellidos;
          P.SetApellidos(apellidos);
          cout<<"Direccion sin espacios: ";
          cin>> direccion;
          P.SetDireccion(direccion);
          cout<<"Nacimiento paciente: ";
          cin >> nacimiento;
          P.SetNacimiento(nacimiento);
          cout<<"Hospital privado/publico: ";
          cin >> hospital;
          P.SetHospital(hospital);
          cout<<"Numero telefono= ";
          cin >> telefono;
          P.SetTelefono(telefono);
          cout<<"Historial = ";
          cin >> historial;
          P.SetHistorial(historial);
          P.addPaciente(P);
          P.leePacientes();
        }

      break;

      case 4:
        
        cout<<"Nombre paciente= "<<endl;
        cin >> nombre;
        encontrado = P.BuscarPaciente(nombre);
        if(encontrado == true) 
        {
          do
          {
            cout<<"0. Volver al menu" <<endl;
            cout<<"1. Modificar nombre"<<endl;
            cout<<"2. Modificar apellidos"<<endl;
            cout<<"3. Modificar direccion"<<endl;
            cout<<"4. Modificar fecha nacimiento"<<endl;
            cout<<"5. Modificar hospital procedencia"<<endl;
            cout<<"6. Modificar numero de telefono"<<endl;
            cout<<"7. Modificar historial del paciente"<<endl;
            cout<<"Selecciona opcion: "<<endl;
            cin >> opcion2;
              
            if( opcion2 == 1)
              {
                cout<< "Nombre (sin espacios): ";
                cin >> nombre;
                p1.SetNombre(nombre);
              }
            
            if( opcion2 == 2 )
              {
                cout<<"Apellidos (sin espacios): ";
                cin >> apellidos;
                p1.SetApellidos(apellidos);
              }
            
            if( opcion2 == 3 )
              {
                cout<<" Nueva direccion sin espacios: ";
                cin >> direccion;
                p1.SetDireccion(direccion);
              }
           
            if( opcion2 == 4 )
            {
                cout <<" Nueva fecha de nacimiento sin espacios: ";
                  cin >> nacimiento;
                  p1.SetNacimiento(nacimiento);
              }
            
            if( opcion2==5 )
              {
                cout<<" Nuevo hospital de procedencia (privado/publico): ";
                cin>>hospital;
                p1.SetHospital(hospital);
              }
                
            if( opcion2==6 )
              {
                cout<<" Nuevo numero de telefono: ";
                cin>>telefono;
                p1.SetTelefono(telefono);
              }
              
            if( opcion2 == 7)
              {
                historial2 = p1.GetHistorial();
                cout<<" Nuevo historial del paciente: ";
                cin>>historial;
                p1.SetHistorial( (historial2 + ',' + historial));
              }

            } while(opcion2 != 0);

            Paciente P(p1);
            cout<<"Mostrando paciente modificado\n"<<endl;
            cout<<P<<endl;
            P.modificarFichero(P);
            P.leePacientes();
        }
        else cout<<"Error. Paciente no encontrado"<<endl;
        
      break;

      case 5:

        cout<<"Mostrando pacientes en la lista\n"<<endl;
        P.MostrarPacientes();

      break;

    }

    cout<<"Pulsa cualquier tecla para continuar.";
    cin.get();
    cin.get();

  } while(opcion!=0);
  
  return 0;
}