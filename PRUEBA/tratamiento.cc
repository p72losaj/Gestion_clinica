#include "funciones.h"

#include <iostream>
#include <cstring>
#include <fstream>
#include <list>
#include <stdio.h>

using namespace std;


int Tratamiento::buscarFichero(string cad, string aux)
{
	int encontrado = 0;
	string aux2;
	ifstream file(cad);
	if(!file) cout<<"Error abrir fichero "<<cad<<" en formato lectura"<<endl;
	else
	{
		while(getline(file,aux2,',') && !file.eof())
		{

			if(aux2 == aux )
			{
				encontrado=1;
			}

			getline(file,aux2);
		}
	}
	file.close();
	return encontrado;
}

void Tratamiento::addTratamiento(Paciente& p, Tratamiento t)
{
	
	string aux, cad;
	string n1 = "pacientes.txt";
	string n2 = "tratamiento.txt";
	int encontrado;
	ifstream file(n1);
	fstream file2(n2, ios::app);
	if(!file or !file2) cout<<"Error acceso fichero"<<endl;

	else{

    	while(getline(file,aux,',') && !file.eof())
    	{
    		
			if(aux == p.GetNombre() )
			{

				encontrado = buscarFichero(n2, aux);


				if(encontrado == 0)
				{
					cout<<"Paciente "<<p.GetNombre()<<" no encontrado en "<<n2<<endl;
					file2<<aux + ",";
					cout<<"Nombre del tratamiento: ";
					cin>>cad;
					file2<<cad+",";
					cout<<"Fecha de inicio del tratamiento: ";
					cin>>cad;
					file2<<cad+",";
					cout<<"Dosis del tratamiento: ";
					cin>>cad;
					file2<<cad+",";
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

void Tratamiento::mostrarTratamiento(string cad)
{
	string nf = "tratamiento.txt";
	string aux;
	int encontrado;
	ifstream file(nf);
	if(!file) cout<<"Error acceso fichero "<<nf<<endl;
	else
	{
		encontrado = buscarFichero(nf,cad);
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
  
  
  