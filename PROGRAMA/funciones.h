/*
	Declaracion de las funciones
*/

#ifndef PERSONA_H
#define PERSONA_H
#include <cstdio>
#include <cstdlib>
#include <string>
#include <fstream>
#include <list>
#include <iostream>

	/*
		Funciones clase paciente
	*/

class Paciente{

	private:

		string nombre_;
		string apellidos_;
		string direccion_;
		string nacimiento_;
		string hospital_;
		string telefono_;
		string historial_;

	public:

		//Constructor de la clase

		Paciente(string nombre, string apellidos="", string direccion= "", string nacimiento= "",
					string hospital="", string telefono="", string historial="")
		{
			nombre_ = nombre;
			apellidos_ = apellidos;
			direccion_ = direccion;
			nacimiento_ = nacimiento;
			hospital_ = hospital;
			telefono_ = telefono;
			historial_ = historial;
		}

		// Obtener nombre del paciente
		inline string getNombre() const { return nombre_; }
		// Modificar nombre del paciente
		inline string setNombre(string cad) { nombre_ = cad; }
		// Obtener apellidos del paciente
		inline string getApellidos() const { return apellidos_; }
		// Modificar apellidos del paciente
		inline string setApellidos(string cad) { apellidos_ = cad; }
		// Obtener direccion del paciente
		inline string getDireccion() const { return direccion_; }
		// Modificar direccion del paciente
		inline string setDireccion( string cad) { direccion_ = cad; }
		// Obtener fecha_nacimiento del paciente
		inline string getNacimiento() const { return nacimiento_; }
		// Modificar fecha_nacimiento del paciente
		inline string setNacimiento(string cad) { nacimiento_ = cad; }
		// Obtener tipo hospital de procedencia del paciente
		inline string getHospital() const { return hospital_; }
		// Modificar tipo hospital de procedencia del paciente
		inline string setHospital(string cad) { hospital_ = cad;}
		// Obtener telefono del paciente
		inline string getTelefono() const { return telefono_; }
		// Modificar telefono del paciente
		inline string setTelefono(string cad) { telefono_ = cad;}
		// Obtener el historial del paciente
		inline string getHistorial() const { return historial_; }
		// Modificar el historial del paciente
		inline string setHistorial(string cad){ historial_ = cad; }	
		void MostrarHistorial(string cad);
		/*
		Buscar Paciente	
		cad: Nombre del paciente
		Retorna 1 si lo encuentra, 0 en caso contrario
		*/
		int BuscarPaciente(string cad);
		/*
		Mostrar Paciente
		Parametro: Nombre paciente
		*/
		void MostrarPaciente(string cad);
		/*
		Añadir Paciente
		Parametro: Nombre paciente
		*/
		void AñadirPaciente(string cad);
		/*
		Modificar Datos Paciente
		Parametro: Nombre Paciente
		*/
		void ModificarPaciente(string cad);
		/*
		Añadir tratamiento al paciente
		cad1: Nombre del paciente
		*/
		void AñadirTratamiento(string cad);
		/*
		Mostrar tratamiento del paciente
		Parametro: Nombre del paciente
		*/
		void MostrarTratamiento(string cad);
		/*
		Eliminar Paciente
		cad: Nombre paciente
		*/
		void EliminarPaciente(string cad);
		/*
		Mostrar Lista de pacientes
		*/
		void MostrarPacientes();
		/*
		Mostrar citas de un paciente
		cad: Nombre del paciente
		*/
		void MostrarCitasPaciente(string cad);

}
	
	/*
		Funciones clase Cita
		Clase cita hereda la clase paciente
	*/

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

	/*
		Funciones clase tratamiento

		Clase tratamiento hereda la clase Persona
	*/
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
#endif