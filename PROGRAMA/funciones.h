/*
	Declaracion de las funciones
*/

#ifndef PERSONA_H
#define PERSONA_H

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
#define MAX 100
using namespace std;

/*
	Funciones clase paciente
*/

class Paciente{

	private:

		char nombre[MAX];
		char apellidos[MAX];
		char direccion[MAX];
		char nacimiento[MAX];
		char hospital[MAX];
		char telefono[MAX];
		char historial[MAX]; 
		

	public:

		/*
		Constructor de la clase
		nombre, apellidos, direccion, nacimiento, hospital, telefono, historial
		*/
		Paciente(char *, char *, char *, char *, char *, char *, char *);
		// Leemos el nombre del paciente
		const char* LeeNombre(){return nombre;}
		// Leemos los apellidos del paciente
		const char* LeeApellidos(){return apellidos;}
		// Leemos la direccion del paciente
		const char* LeeDireccion(){return direccion;}
		// Leemos la fecha de nacimiento del paciente
		const char* LeeNacimiento(){return nacimiento;}
		// Leemos el tipo de hospital de procedencia del paciente
		const char* LeeHospital(){return hospital;}
		// Leemos el numero de telefono del paciente
		const char* LeeTelefono(){return telefono;}
		// Leemos el historial del paciente
		const char* LeeHistorial(){return historial;}
		
		//inline list <Paciente> getPacientes(){ return pacientes_;}

		/*
		void AddPaciente(Paciente p);
		void LeerPaciente(Paciente p);	
		int BuscarPaciente(string cad);
		void MostrarHistorial(string cad);
		void MostrarPaciente(string cad);
		void ModificarPaciente(string cad);
		void AddTratamiento(string cad);
		void MostrarTratamiento(string cad);
		void EliminarPaciente(string cad);
		void MostrarPacientes();
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