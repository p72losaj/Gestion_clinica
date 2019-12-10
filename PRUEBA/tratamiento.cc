#include "funciones.h"

#include <iostream>
#include <cstring>
#include <fstream>
#include <list>
#include <stdio.h>

using namespace std;


int Tratamiento::buscarFichero(string n2, string aux)
{
	int encontrado = 0;
	string aux2;
	ifstream file(n2);
	if(!file) cout<<"Error abrir fichero "<<n2<<" en formato lectura"<<endl;
	else
	{
		while(getline(file,aux2,',') && !file.eof())
		{

			if(aux2 == aux )
			{
				cout<<"Paciente "<<aux<<" encontrado"<<endl;
				encontrado=1;
			}

			getline(file,aux2);
		}
	}
	file.close();
	return encontrado;
}

void Tratamiento::addTratamiento(string nombre, string n1, string n2)
{
	
	string aux, cad;
	int encontrado;
	ifstream file(n1);
	fstream file2(n2, ios::app);
	if(!file or !file2) cout<<"Error acceso fichero"<<endl;

	else{

    	while(getline(file,aux,',') && !file.eof())
    	{
    		
			if(aux == nombre)
			{

				encontrado = buscarFichero(n2, aux);


				if(encontrado == 0)
				{
					cout<<"Paciente "<<nombre<<" no encontrado en "<<n2<<endl;
					file2<<aux + ",";
					cout<<"Nombre del tratamiento: ";
					cin>>cad;
					file2<<cad+",";
					cout<<"Fecha de inicio del tratamiento: ";
					cin>>cad;
					file2<<cad+",";
					cout<<"Dosis del tratamiento en mg: ";
					cin>>cad;
					file2<<cad+"mg"+",";
					cout<<"Fecha de finalizacion del tratamiento: ";
					cin>>cad;
					file2<<cad<<endl;
				}

				else cout<<"Paciente encontrado en fichero "<<n2<<endl;

			} 
			
      		getline(file,aux);
    	} 

    	file.close();
    	

   }

}

void Tratamiento::mostrarTratamiento(string cad, string n2)
{
	string aux;
	int encontrado;
	ifstream file(n2);
	if(!file) cout<<"Error acceso fichero "<<n2<<endl;
	else
	{
		encontrado = buscarFichero(n2,cad);
		if(encontrado == 1)
		{
			while(getline(file,aux,',') && !file.eof())
			{
				
				if(aux == cad)
				{
					cout<<"\nNombre Paciente= "<<aux<<endl;
					getline(file,aux,',');
					cout<<"Nombre tratamiento=  "<<aux<<endl;
					getline(file,aux,',');
					cout<<"Fecha inicio tratamiento= "<<aux<<endl;
					getline(file,aux,',');
					cout<<"Dosis tratamiento= "<<aux<<endl;
					getline(file,aux);
					cout<<"Fin tratamiento= "<<aux<<endl;
					cout<<endl;
				}

				else getline(file,aux);
			}
		}
	file.close();
	}
}

void Tratamiento::ModificarTratamiento(string nombre, string n2)
{
	string aux, aux2;
	int encontrado;
	ofstream file2("fichero.txt");
	ifstream file(n2);
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
					file2<<aux + ",";
					getline(file,aux,',');
					file2<<aux+",";
					getline(file,aux,',');
					file2<<aux+",";
					getline(file,aux,',');
					cout<<"¿Desea modificar la dosis del tratamiento: y/n?"<<endl;
					cin >> aux2;
					if(aux2 == "y")
					{
						cout<<"Nueva dosis del tratamiento (en mg): ";
						cin >> aux;
					}
					file2<<aux+"mg"+",";
					getline(file,aux);
					cout<<"¿Desea modificar la fecha de finalizacion del tratamiento: y/n?"<<endl;
					cin >> aux2;
					if(aux2 == "y")
					{
						cout<<"Nueva fecha de finalizacion del tratamiento: ";
						cin >> aux;
					}

					file2 << aux <<endl;
					cout<<endl;					
				}
				else
				{
					file2<<aux + ",";
					getline(file,aux,',');
					file2<<aux+",";
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

void Tratamiento::eliminarTratamiento(string nombre,string n2)
{
	string aux;
	int encontrado;
	ofstream file2("fichero.txt");
	ifstream file(n2);
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
}


  
  
  