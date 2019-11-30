#include <iostream>
#include <cstring>
#include <fstream>
#include <list>
#include "funciones.h"
using namespace std;

// Mostrar datos de un paciente. No pasar a otro fichero. Funcion definitiva
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
// Mantener en este fichero
void modificarFichero(Paciente p)
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

int main(void){

  list <Paciente> Pacientes_;
  string nombre, apellidos, direccion, nacimiento, hospital, telefono, historial, historial2;
  Paciente p1( "Jaime","Lorenzo_Sanchez","c/AlcalaZamora-18/2/3",
                "07/12/99","privado","697264930","gripe");
  Paciente P(p1);
  P.leePacientes();
  int opcion, opcion2;
  bool encontrado;

  do{

    cout<<"MENU"<<endl;
    cout<<"0. Salir del programa"<<endl;
    cout<<"1. Buscar Paciente"<<endl;
    cout<<"2. Mostrar informacion de un paciente"<<endl;
    cout<<"3. Añadir nuevo paciente"<<endl;
    cout<<"4. Modificar datos paciente"<<endl;
    cout<<"5. Añadir a lista pacientes"<<endl;
    cout<<"6. Mostrar lista pacientes"<<endl;
    cout<<"Introduce una opcion: "<<endl;
    cin>>opcion;
    
    switch(opcion){

      case 1:

  		cout<<"Nombre paciente= ";
      cin>> nombre;
      encontrado = P.BuscarPaciente(nombre);
      if(encontrado == true) cout<<"Paciente encontrado"<<endl;
      else cout<<"Error. Paciente no encontrado"<<endl;

      break;

      case 2:

        cout<<"Nombre paciente= "<<endl;
        cin>> nombre;
        encontrado = P.BuscarPaciente(nombre);
        if(encontrado == true) cout<<P<<endl;
        else cout<<"Error. Paciente no encontrado"<<endl;

      break;

      case 3:

        cout<<"Nombre paciente= "<<endl;
        cin>> nombre;
        encontrado = P.BuscarPaciente(nombre);
        if(encontrado == true) cout<<"Error. Paciente ya existente"<<endl;
        else
        {
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
          Paciente P(p1);
          P.addPaciente(p1);
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
            modificarFichero(P);
        }
        else cout<<"Error. Paciente no encontrado"<<endl;
        
      break;

      case 5:
          cout<<"Añadiendo fichero pacientes.txt a lista"<<endl;
          P.leePacientes();
      break;

      case 6:
        cout<<"Mostrando pacientes en la lista\n"<<endl;
        P.MostrarPacientes();
      break;
    }

  } while(opcion!=0);
  
  return 0;
}