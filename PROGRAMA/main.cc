/*
	Programa principal

		1. Buscar Paciente
		2. Mostrar Informacion Paciente
		3. Añadir Paciente
		4. Modificar Datos Paciente
		5. Añadir Tratamiento al paciente
		6. Mostrar tratamiento Paciente
		7. Eliminar Paciente
		8. Mostrar Lista Pacientes
		9. Mostrar Citas Paciente
*/

#include "funciones.h"

int main(void){

	string cad;
	int opcion;

	do{

		cout<<"\tMENU"<<endl;
		cout<<" 0. Exit"<<endl;
		cout<<" 1. Buscar Paciente"<<endl;

		cout<<" Introduce una opcion: "<<endl;
		cin>>opcion;

		switch(opcion){

			case 1:

				cout<<" Nombre paciente a buscar: "<<endl;
				cin>> cad;
				

			break;
		}
	} while(opcion != 0);
	return 0;
}
