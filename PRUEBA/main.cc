#include <iostream>

#include <cstring>

#include <fstream>

#include <list>

#include "funciones.h"

using namespace std;

int main(void){

  string cad, cad2;

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

    cout<<"6. Eliminar paciente"<<endl;
    
    cout<<"Introduce una opcion: "<<endl;
    
    cin>>opcion;

    cin.get();
    
    switch(opcion){

      case 1:

  		  cout<<"Nombre paciente= ";
    
        cin>> cad;
    
        cin.get();
    
        encontrado = P.BuscarPaciente(cad);
    
        if(encontrado == true) cout<<"Paciente encontrado"<<endl;
    
        else cout<<"Error. Paciente no encontrado"<<endl;

      break;

      case 2:

        cout<<"Nombre paciente= "<<endl;

        cin>> cad;

        cin.get();

        encontrado = P.BuscarPaciente(cad);
        
        if(encontrado == true)
        {

          P.CambiarDatos(cad, P);

          cout<<P<<endl;

        } 

        else cout<<"Error. Paciente no encontrado"<<endl;
        
      break;

      case 3:

        cout<<"Nombre paciente= "<<endl;
    
        cin>> cad;
    
        cin.get();

        encontrado = P.BuscarPaciente(cad);
    
        if(encontrado == true) cout<<"Error. Paciente ya existente"<<endl;
    
        else
        {
    
          P.SetNombre(cad);
    
          cout<<"Apellidos sin espacios: ";
    
          cin>> cad;

          cin.get();
    
          P.SetApellidos(cad);
    
          cout<<"Direccion sin espacios: ";
    
          cin>> cad;
      
          cin.get();

          P.SetDireccion(cad);
    
          cout<<"Nacimiento paciente: ";
    
          cin >> cad;

          cin.get();
    
          P.SetNacimiento(cad);
    
          cout<<"Hospital privado/publico: ";
    
          cin >> cad;

          cin.get();
    
          P.SetHospital(cad);
    
          cout<<"Numero telefono= ";
    
          cin >> cad;

          cin.get();
    
          P.SetTelefono(cad);
    
          cout<<"Historial = ";
    
          cin >> cad;

          cin.get();
    
          P.SetHistorial(cad);
    
          P.addPaciente(P);
    
          P.leePacientes();
    
     	  }

      break;

      case 4:
        
		    cout<<"Nombre paciente= "<<endl;
    
        cin >> cad;

        cin.get();
    
        encontrado = P.BuscarPaciente(cad);
    
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
    
            		cin >> cad;

                cin.get();
    
            		p1.SetNombre(cad);
    
            	}
            
           	if( opcion2 == 2 )
              {
    
            		cout<<"Apellidos (sin espacios): ";
    
            		cin >> cad;

                cin.get();
    
            		p1.SetApellidos(cad);
    
              }
            
            if( opcion2 == 3 )
              {
    
                cout<<" Nueva direccion sin espacios: ";
    
            		cin >> cad;

                cin.get();
    
            		p1.SetDireccion(cad);
    
              } 
           
            if( opcion2 == 4 )
	        	  {
    
    	    	    cout <<" Nueva fecha de nacimiento sin espacios: ";
    
           	  	cin >> cad;

                cin.get();
    
            	 	p1.SetNacimiento(cad);
            	
              }
            
            if( opcion2==5 )
            	{
            	
              	cout<<" Nuevo hospital de procedencia (privado/publico): ";
				      
              	cin>>cad;

                cin.get();
            	
              	p1.SetHospital(cad);
            	
              }
            		
            if( opcion2==6 )
            	{
            	
              	cout<<" Nuevo numero de telefono: ";
            	
              	cin>>cad;

                cin.get();
            	
              	p1.SetTelefono(cad);
            	
              }
            	
            if( opcion2 == 7)
            	{
            	
                cad = p1.GetHistorial();
            	
                cout<<" Nuevo historial del paciente: ";
            	
                cin>>cad2;

                cin.get();
            	
                p1.SetHistorial( (cad + ',' + cad2));
            	
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

      case 6:

        cout<<"Nombre paciente: ";

        cin>>cad;

        cin.get();

      break;

    }

    cout<<"Pulsa cualquier tecla para continuar.";
    
    cin.get();
    
    cin.get();

  } while(opcion!=0);
  
  return 0;

}