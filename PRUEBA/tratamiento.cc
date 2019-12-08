#include "funciones.h"

#include <iostream>
#include <cstring>
#include <fstream>
#include <list>
#include <stdio.h>

using namespace std;

void Tratamiento::addTratamiento(Paciente p, Tratamiento t)
{
	
	string aux, cad;
	
	ifstream file("pacientes.txt");
	ofstream file2("tratamiento.txt");
	if(!file or !file2) cout<<"Error acceso fichero"<<endl;

	else{
    	while(getline(file,aux,',') && !file.eof())
    	{
			if(aux == p.GetNombre() )
			{
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

      		getline(file,aux);
    	} 
    	file.close();
    	

   }

}
  
  
  