/*
	Declaracion de las funciones
*/

#ifndef PERSONA_H
#define PERSONA_H

#include <cstdio>
#include <cstdlib>
#include <string>
#include <list>
#include <iostream>
#include <fstream>

using namespace std;

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
		inline string getNombre(){return nombre_;}
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
		int BuscarPaciente(string cad);
		void MostrarHistorial(string cad);
		void MostrarPaciente(string cad);
		void AñadirPaciente(string cad);
		void ModificarPaciente(string cad);
		void AñadirTratamiento(string cad);
		void MostrarTratamiento(string cad);
		void EliminarPaciente(string cad);
		void MostrarPacientes();
		void MostrarCitasPaciente(string cad);

};

#endif