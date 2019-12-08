#include <iostream>

#include <cstring>

#include <fstream>

#include <list>

#include "funciones.h"

using namespace std;

int main(void){

  string cad;

  string tr, in, d, f;

  Paciente p1( "Jaime","Lorenzo_Sanchez","c/AlcalaZamora-18/2/3",
                "07/12/99","privado","697264930","gripe");

  Paciente P(p1);

  P.leePacientes();

  //Cita c(P, "16:30-18:00", "07/12/2019", "revision");

  Tratamiento T(P,tr,in,d,f);

  bool encontrado;

  int opcion, i=0;

  do
  {

    cout<<"0.Exit; 1. Citas; 2. Tratamiento"<<endl;

    cin>> opcion;

    cin.get();

    switch(opcion)
    {

      case 1:

        cout<<"Mostrando lista pacientes\n"<<endl;

        T.getPaciente().MostrarPacientes();


      break;

      case 2:

        cout<<" Nombre paciente a buscar: ";
        cin >> cad;

        encontrado = T.getPaciente().BuscarPaciente(cad);

        if(encontrado==true)
        {

          T.getPaciente().CambiarDatos(cad,P);
          cout<<"Nombre paciente encontrado en fichero pacientes.txt"<<endl;

          T.addTratamiento(P,T);
        }

        else cout<<"Paciente no encontrado en fichero pacientes.txt"<<endl;

        cout<<"Numero de tratamientos: "<<T.GetTratamiento().size()<<endl;

      break;

    }

  } while(opcion!=0);
  
  return 0;

}