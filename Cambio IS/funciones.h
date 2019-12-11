/*
	Declaracion de las clases
*/

#ifndef FUNCIONES_H
#define FUNCIONES_H
#include <iostream>
#include <cstring>
#include <list>
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

		Paciente(string, string, string, string, string, string, string);

		void modificarFichero(Paciente p);

		void addPaciente(Paciente& reg);

		void MostrarPacientes();

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

		void leePacientes();

		inline list <Paciente> GetPacientes(){ return Pacientes_;}

		void CambiarDatos(string nombre, Paciente& reg);

		void EliminarPaciente(string cad,Paciente p);
		
};

ostream& operator<<(ostream &os, Paciente& reg);

class Cita{

private:

	Paciente paciente_;
	string hora_;
	string fecha_;
	string motivo_;

public:

	Cita(Paciente,string,string,string);

	Paciente& getPaciente(){return paciente_;}

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

};

#endif