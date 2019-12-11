
#ifndef PACIENTES_H
#define PACIENTES_H
#include <iostream> 
#include <cstring>
#include <list>
#include <fstream>

using namespace std;

class Paciente
	{

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
			
			void Menu(Paciente& P, string f1, int encontrado); 

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
		
			bool BuscarPaciente(string nombre);
		
			void leePacientes(string f1);

			void CambiarDatos(string nombre, Paciente& reg);

			int EliminarPaciente(string nombre);

			void ModificarLista(string f1, Paciente p);

			void AddPaciente(Paciente& reg, string f1);

			void MostrarPaciente(Paciente& reg);

			int Menu2();

			void MenuT(Paciente& P,string f1,string f2,int encontrado);

			void ModificarFichero(string f1);

			void MostrarPacientes();

};

// INTRODUCIR DATOS PACIENTE
istream& operator>>(istream &is, Paciente& reg);

#endif