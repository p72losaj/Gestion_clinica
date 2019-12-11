#include <iostream>
#include <cstring>
#include <fstream>

#include <list>

#include "pacientes.h"

#include "tratamiento.h"

using namespace std;

void CrearMenu();

int main()
  {
    int opcion, opcion2, encontrado;
    string f1 = "pacientes.txt";
    string f2 = "tratamiento.txt";

    Paciente P( " "," "," "," "," "," "," ");
    P.leePacientes(f1);

    do
      {
        CrearMenu();
        cout<<" Introduce una opcion: ";
        cin >> opcion;
        if(opcion == 1) P.Menu(P,f1,encontrado);
        if(opcion == 3) P.MenuT(P,f1,f2,encontrado);
        
      } while(opcion!=0);

  return 0;
}

void CrearMenu()
  {
      system("clear");
      cout<<"\tMENU PRINCIPAL"<<endl;
      cout<<"0. Salir del programa"<<endl;
      cout<<"1. Clase Paciente"<<endl;
      cout<<"2. Clase Citas"<<endl;
      cout<<"3. Clase Tratamiento"<<endl;
  }

