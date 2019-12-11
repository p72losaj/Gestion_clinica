#include "pacientes.h"
#ifndef TRATAMIENTO_H
#define TRATAMIENTO_H

class Tratamiento
{

	private:

		string tratamiento;
		string inicio;
		string dosis;
		string fin;
		Paciente p;

	public:

		inline string GetTratamiento() const { return tratamiento;}
		inline string SetTratamiento(string cad) { tratamiento = cad;}
		inline string GetInicio() const { return inicio;}
		inline string SetInicio(string cad) { inicio = cad;}
		inline string GetFin() const { return fin; }
		inline string SetFin(string cad) { fin = cad; }
		inline string GetDosis() const { return dosis;}
		inline string SetDosis(int d) { dosis = d; }

		inline Paciente getPaciente() const { return p;}

		void addTratamiento(string nombre, string n1, string n2);

		int buscarFichero(string n2, string aux);
		
		void mostrarTratamiento(string cad, string n2);

		void ModificarTratamiento(string nombre, string n2);

		void eliminarTratamiento(string nombre,string n2);

		Tratamiento(Paciente P, string t, string i, string d, string f):p(P)
		{
			tratamiento = t;
			inicio = i;
			dosis = d;
			fin = f;
		}	

};



#endif