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

  //Cita c(P, "16:30-18:00", "07/12/2019", "revision");

  Tratamiento t(P, "respibien", " ")

  P.leePacientes();

  bool encontrado;

  int opcion;

  cout<<"1. Citas; 2. Tratamiento"<<endl;

  cin>> opcion;

  cin.get();

  if(opcion==1)
  {
    cout<<"Clase cita"<<endl;
  }

  else
  {
    cout<<"Clase tratamiento"<<endl;
  }

  cout<<"Pulsa cualquier tecla para continuar.";
    
  cin.get();
    
  cin.get();
  
  return 0;

}