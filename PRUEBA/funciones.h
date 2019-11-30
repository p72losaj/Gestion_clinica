/*
	Declaracion de las clases
*/

#ifndef FUNCIONES_H
#define FUNCIONES_H
#include <iostream>
#include <cstring>
#include <list>
#define MAX 100
using namespace std;

/*
	Clase paciente
*/

class Paciente{

	private:

		string nombre;
		string apellidos;
		string direccion;
		string nacimiento;
		string hospital;
		string telefono;
		string historial; 
		list <Paciente> Pacientes_;

	public:

		/*
		Constructor de la clase
		nombre, apellidos, direccion, nacimiento, hospital, telefono, historial
		*/
		Paciente(string, string, string, string, string, string, string);
		// Añadimos un paciente al fichero
		void addPaciente(Paciente& reg);
		// Mostramos la lista de pacientes
		void MostrarPacientes();
		// Funciones del nombre
		string GetNombre(){return nombre;}
		void SetNombre(string cad){ nombre = cad; }
		// Funciones apellidos
		string GetApellidos(){return apellidos;}
		void SetApellidos(string cad){ apellidos = cad; }
		// Funciones direccion
		string GetDireccion(){return direccion;}
		void SetDireccion(string cad){ direccion = cad; }
		// Funciones nacimiento
		string GetNacimiento(){return nacimiento;}
		void SetNacimiento(string cad){ nacimiento = cad; }
		// Funciones hospital
		string GetHospital(){return hospital;}
		void SetHospital(string cad){ hospital = cad; }
		// Funciones telefono
		string GetTelefono(){return telefono;}
		void SetTelefono(string cad){ telefono = cad;}
		// Funciones historial
		string GetHistorial(){return historial;}
		void SetHistorial(string cad){ historial = cad; }
		// Buscar paciente por nombre
		bool BuscarPaciente(string cad);
		// Guardamos el fichero pacientes.txt en la lista de pacientes
		void leePacientes();
		// Obtener numero de pacientes en la lista de pacientes
		inline list <Paciente> GetPacientes(){ return Pacientes_;}
		
};
#endif