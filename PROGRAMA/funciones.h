/*
	Declaracion de las clases
*/

#ifndef FUNCIONES_H
#define FUNCIONES_H

/*
#include <cstdio>
#include <cstdlib>
#include <string>
#include <list>
#include <iostream>
#include <fstream>
*/
#include <iostream>
#include <cstring>
#include <list>
#define MAX 100
using namespace std;

/*
	Funciones clase paciente
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

		void addPaciente(Paciente& reg);
		
		string GetNombre(){return nombre;}
		void SetNombre(string cad){ nombre = cad; }

		string GetApellidos(){return apellidos;}
		void SetApellidos(string cad){ apellidos = cad; }

		string GetDireccion(){return direccion;}
		void SetDireccion(string cad){ direccion = cad; }

		string GetNacimiento(){return nacimiento;}
		void SetNacimiento(string cad){ nacimiento = cad; }

		string GetHospital(){return hospital;}
		void SetHospital(string cad){ hospital = cad; }

		string GetTelefono(){return telefono;}
		void SetTelefono(string cad){ telefono = cad;}

		string GetHistorial(){return historial;}
		void SetHistorial(string cad){ historial = cad; }

		bool BuscarPaciente(string cad);
		
		inline list <Paciente> GetPacientes(){ return Pacientes_;}

		/*	
		
		void AddTratamiento(string cad);
		void MostrarTratamiento(string cad);
		void EliminarPaciente(string cad);
		void MostrarListaPacientes();
		void MostrarCitasPaciente(string cad);
	*/
};
	
	/*
		Funciones clase Cita
		Clase cita hereda la clase paciente
	*/
/*
	// Obtener la hora de la cita
	inline string getHora() const { return hora_; }
	// Modificar la hora de la cita
	inline string setHora( string cad) { hora_ = cad; }
	// Obtener la fecha de la cita
	inline string getFecha() const { return fecha_; }
	// Modificar la fecha de la cita
	inline string setFecha( string cad) { fecha_ = cad; }
	// Obtener el motivo de la cita
	inline string getMotivo() const { return motivo_; }
	// Modificar motivo de la cita
	inline string setMotivo(string cad) { motivo_ = cad;}
*/
	/*
		Funciones clase tratamiento

		Clase tratamiento hereda la clase Persona
	*/
/*
	 // Obtener el nombre del tratamiento
	inline string getTratamiento() const { return tratamiento_; }
	// Modificar nombre tratamiento
	inline string setTratamiento( string cad) { tratamiento_ = cad; }
	// Obtener fecha comienzo tratamiento
	inline string getInicio() const { return inicio_; }
	// Obtener fecha fin tratamiento
	inline string getFin() const { return fin_; }
	// Obtener dosis tratamiento
	inline string getDosis() const { return dosis_; }
	// Modificar dosis tratamineto
	inline string setDosis( string cad){ dosis_ cad; }
	*/
#endif