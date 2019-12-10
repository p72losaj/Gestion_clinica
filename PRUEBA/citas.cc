#include "funciones.h"

#include <fstream>

void Cita::addCita(string nombre, string n1, string n2)
{
	
	string aux,fecha,hora,motivo;
	ifstream file(n1.c_str());
	fstream file2(n2.c_str(), ios::app);
	if(!file or !file2) cout<<"Error acceso fichero"<<endl;

	else{

    		while(getline(file,aux,',') && !file.eof())
    		{
    		
			if(aux == nombre)
			{
					
					cout<<"Hora de la cita: ";
					cin>>hora;
					cout<<"Fecha de la cita: ";
					cin>>fecha;
					cout<<"Motivo de la cita: ";
					cin>>motivo;
				
				if(!buscaCita(nombre,hora,fecha,n2)) {
					
					file2<<aux+",";
					file2<<hora+",";
					file2<<fecha+",";
					file2<<motivo<<endl;
					
				}
				
				else cout<<"Ya existe una cita en la fecha especificada."<<endl;	
			}

			else cout<<"Paciente no encontrado en fichero "<<n2<<endl;
			
      		getline(file,aux);
      		
    		} 

    	file.close();
    	file2.close();
    	
	}

}

int Cita::buscaCita(string nombre, string hora, string fecha,string f) {

	ifstream file(f.c_str());
	
	string n,fe,h,m;
	
	while(getline(file,n,',') && !file.eof()) {
	
		getline(file,fe,',');
		getline(file,h,',');
		getline(file,m);
		
		if(strcmp(nombre.c_str(),n.c_str()) == 0 && strcmp(fecha.c_str(),fe.c_str()) == 0 && strcmp(hora.c_str(),h.c_str()) == 0) {
		
			return 1;
			
		}
		
	}
	
	file.close();
	
	return 0;
	
}

void Cita::mostrarCitaDia(string cad, string f)
{

	int encontrado = 0;
	
	ifstream file(f.c_str());
	
	string n,fe,h,m;
	
	cout<<"Fecha elegida: "<<cad.c_str()<<endl;
	
	while(getline(file,n,',') && !file.eof()) {
	
		getline(file,fe,',');
		getline(file,h,',');
		getline(file,m);
		
		if(strcmp(cad.c_str(),fe.c_str()) == 0) {
		
			cout<<"Hora: "<<h.c_str()<<endl;
			cout<<"Paciente: "<<n.c_str()<<endl;
			cout<<"Motivo: "<<m.c_str()<<endl;
			
			encontrado=1;
			
		}
		
	}
	
	file.close();
	
	if (encontrado==0) {
	
		cout<<"No hay citas para la fecha especificada."<<endl;
		
	}
}

void Cita::mostrarCitaPaciente(string cad, string f)
{

	int encontrado = 0;
	
	ifstream file(f.c_str());
	
	string n,fe,h,m;
	
	cout<<"Nombre del paciente: "<<cad.c_str()<<endl;
	
	while(getline(file,n,',') && !file.eof()) {
	
		getline(file,fe,',');
		getline(file,h,',');
		getline(file,m);
		
		if(strcmp(cad.c_str(),n.c_str()) == 0) {
		
			cout<<"Fecha: "<<fe.c_str()<<endl;
			cout<<"Hora: "<<h.c_str()<<endl;
			cout<<"Motivo: "<<m.c_str()<<endl;
			
			encontrado=1;
			
		}
		
	}
	
	file.close();
	
	if (encontrado==0) {
	
		cout<<"No hay citas para el paciente especificado."<<endl;
		
	}
}

void Cita::ModificarCita(string paciente,string hora,string fecha,string f)
{
	string aux, aux2;
	int encontrado;
	ofstream file2("fichero.txt");
	ifstream file(f.c_str());
	if(!file or !file2) cout<<"Error acceso ficheros "<<endl;
	else
	{
		encontrado = buscaCita(paciente,hora,fecha,f);
		if(encontrado == 1)
		{
			while(getline(file,aux,',') && !file.eof())
			{
				if(aux == nombre)
				{
					cout<<"¿Desea modificar el paciente de la cita: y/n?"<<endl;
					cin >> aux2;
					if(aux2 == "y")
					{
						cout<<"Nuevo paciente de la cita: ";
						cin >> aux;
					}
					file2<<aux+",";
					getline(file,aux,',');
					cout<<"¿Desea modificar la fecha de la cita: y/n?"<<endl;
					cin >> aux2;
					if(aux2 == "y")
					{
						cout<<"Nueva fecha de la cita (dd/mm/yyyy): ";
						cin >> aux;
					}
					file2<<aux+",";
					getline(file,aux,",");
					cout<<"¿Desea modificar la hora de la cita: y/n?"<<endl;
					cin >> aux2;
					if(aux2 == "y")
					{
						cout<<"Nueva hora de la cita (hh:mm): ";
						cin >> aux;
					}
					file2<<aux+",";
					getline(file,aux);
					cout<<"¿Desea modificar el motivo de la cita: y/n?"<<endl;
					cin >> aux2;
					if(aux2 == "y")
					{
						cout<<"Nuevo motivo: ";
						cin >> aux;
					}
					file2 << aux <<endl;				
				}
				else
				{
					file2<<aux + ",";
					getline(file,aux,',');
					file2<<aux+",";
					getline(file,aux,',');
					file2<<aux+",";
					getline(file,aux);
					file2 << aux <<endl;
				}
			}
		}

		file.close();
		file2.close();
		rename("fichero.txt","tratamiento.txt");
	}
}
/*
void Cita::eliminarCita(string nombre,string n2)
{
	string aux;
	int encontrado;
	ofstream file2("fichero.txt");
	ifstream file(n2.c_str());
	if(!file or !file2) cout<<"Error acceso ficheros "<<endl;
	else
	{
		encontrado = buscarFichero(n2,nombre);
		if(encontrado == 1)
		{
			while(getline(file,aux,',') && !file.eof())
			{
				if(aux == nombre)
				{
					cout<<"Eliminando paciente"<<endl;
					getline(file,aux);
				}
				else
				{
					file2<<aux + ",";
					getline(file,aux);
					file2<<aux<<endl;
				}
			}
		}

		file.close();
		file2.close();
		rename("fichero.txt","tratamiento.txt");
	}
}*/
