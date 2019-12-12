#include "pacientes.h"
#ifndef TRATAMIENTO_H
#define TRATAMIENTO_H

class Tratamiento
{

	private:

		string paciente;
		string tratamiento;
		string inicio;
		int dosis;
		string fin;
		Paciente p;
		list <Tratamiento> t_;

	public:

		inline string GetNombreP() const { return paciente;}
		inline string SetNombreP(string cad) { paciente = cad; }
		inline string GetTratamiento() const { return tratamiento;}
		inline string SetTratamiento(string cad) { tratamiento = cad;}
		inline string GetInicio() const { return inicio;}
		inline string SetInicio(string cad) { inicio = cad;}
		inline string GetFin() const { return fin;}
		inline string SetFin(string cad) { fin = cad;}
		inline int GetDosis() const { return dosis;}
		inline int SetDosis(int d) { dosis = d; }

		inline Paciente getPaciente() const { return p;}

		void leeTratamientos(string f2, Paciente& P);

		void MostrarTratamientos();

		void addTratamiento(string nombre, string n1, string n2, Paciente& P);

		int buscarFichero(string n2, string aux);
		
		void mostrarTratamiento(string cad, Tratamiento &T);

		void ModificarTratamiento(string nombre, string n2, Tratamiento &T);

		void Lista_Fichero(string n2);

		int eliminarTratamiento(string nombre);

		Tratamiento(Paciente P, string t, string i, int d, string f):p(P)
		{
			tratamiento = t;
			inicio = i;
			dosis = d;
			fin = f;
		}	

};



#endif