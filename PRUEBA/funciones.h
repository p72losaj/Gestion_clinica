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
		// Modificamos los datos del fichero
		void modificarFichero(Paciente p);
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
		void CambiarDatos(string nombre, Paciente& reg);
		
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