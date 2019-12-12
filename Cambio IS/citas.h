#ifndef FUNCIONES_H
#define FUNCIONES_H
#include <iostream>
#include <cstring>
#include <list>

using namespace std;


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
#endif