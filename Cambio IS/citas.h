#ifndef FUNCIONES_H
#define FUNCIONES_H
#include <iostream>
#include <cstring>
#include <list>

using namespace std;


class Cita{

private:

	Paciente paciente_;
	string npaciente;
	string hora_;
	string fecha_;
	string motivo_;
	list <Cita> c_;

public:

	Cita(Paciente P,string h,string f,string m): paciente_(P)
	{
		hora_ = h;
		fecha_ = f;
		motivo_ = m;
	}

	Paciente& getPaciente(){return paciente_;}

	// Obtener el nombre del paciente al que se le asigna la cita
	inline string GetNombreP() const { return npaciente;}
	// Modificar el nombre del paciente 
	inline string SetNombreP(string cad) { npaciente = cad; }
	// Obtener la hora de la cita
	inline string GetHora() const { return hora_; }
	// Modificar la hora de la cita
	inline string SetHora( string cad) { hora_ = cad; }
	// Obtener la fecha de la cita
	inline string GetFecha() const { return fecha_; }
	// Modificar la fecha de la cita
	inline string SetFecha( string cad) { fecha_ = cad; }
	// Obtener el motivo de la cita
	inline string GetMotivo() const { return motivo_; }
	// Modificar motivo de la cita
	inline string SetMotivo(string cad) { motivo_ = cad;}

	void leeCitas(string nf, Paciente &P);
	
	void addCita(string, string, string);
	
	int buscaCita(string nombre, string hora, string fecha);

	void mostrarCitaDia(string cad);

	void mostrarCitaPaciente(string);

	void ModificarCita(string cad);

	void ModificarFichero(string cad);

	int CancelarCita(string cad);

};
#endif