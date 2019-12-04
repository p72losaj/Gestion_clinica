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

Cita::Cita(Paciente p,string h, string f, string m):paciente_(p){
  paciente_ = p;
  hora_ = h;
  fecha_ = f;
  motivo_ = m;
}

bool Paciente::BuscarPaciente(string cad){

  bool encontrado = false;

  list <Paciente>:: iterator i;
  if(Pacientes_.empty()==true) cout<<" Lista vacia"<<endl;

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
<<<<<<< HEAD

    // Leemos el fichero


        // añadimos el paciente a la lista
        Pacientes_.push_back(reg);

=======
>>>>>>> 38822ec7c87abdcfbcad6acb7c0d5d2072c5600b
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

void cargaLista(list <Paciente> p) {

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
}

int main(void){

  list <Paciente> Pacientes_;
  cargaLista (Pacientes_);
  string nombre, apellidos, direccion, nacimiento, hospital, telefono, historial, historial2;
  Paciente p1(nombre,apellidos,direccion, nacimiento,hospital,telefono,historial);
  Paciente P(p1);
  int opcion, opcion2;
  bool encontrado;
  string cad;

  do{

    cout<<"MENU"<<endl;
    cout<<"0. Salir del programa"<<endl;
    cout<<"1. Buscar Paciente"<<endl;
    cout<<"2. Mostrar informacion de un paciente"<<endl;
    cout<<"3. Añadir nuevo paciente"<<endl;
    cout<<"4. Modificar datos paciente"<<endl;

    cout<<"Introduce una opcion: "<<endl;
    cin>>opcion;

    switch(opcion){

      case 1:

<<<<<<< HEAD

        cout<<"Nombre paciente= "<<endl;
=======
  		cout<<"Nombre paciente= "<<endl;
>>>>>>> 38822ec7c87abdcfbcad6acb7c0d5d2072c5600b
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
<<<<<<< HEAD
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
=======
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
        	P.addPaciente(p1);
     	}

>>>>>>> 38822ec7c87abdcfbcad6acb7c0d5d2072c5600b
      break;

      case 4:

		cout<<"Nombre paciente= "<<endl;
        cin >> nombre;
        encontrado = P.BuscarPaciente(nombre);
        if(encontrado == true)
        {
<<<<<<< HEAD
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
            cout<<p1<<endl;
          } while(opcion2 != 0);
=======
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

            	cout<<p1<<endl;

          	} while(opcion2 != 0);
>>>>>>> 38822ec7c87abdcfbcad6acb7c0d5d2072c5600b
        }
        else cout<<"Error. Paciente no encontrado"<<endl;

      break;
    }

  } while(opcion!=0);

  return 0;
}
