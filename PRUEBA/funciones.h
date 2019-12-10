/*
	Declaracion de las clases
*/

#ifndef FUNCIONES_H
#define FUNCIONES_H
#include <iostream>
#include <cstring>
#include <list>

using namespace std;

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
	
	void addCita(string, string, string);
	
	int buscaCita(string, string, string, string);
	
	void mostrarCitaDia(string,string);
	void mostrarCitaPaciente(string,string);
	//void modificarCita();
	//void mostrarCita();

};

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
