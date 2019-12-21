
###	Clase: Paciente

**Descripción**: Esta clase contendrá las funciones de los pacientes.

**Datos**: 

	Variable: NombrePaciente	Tipo: string		Descripcion: Nombre del paciente
	Variable: Apellidos			Tipo: string		Descripcion: Apellidos del paciente
	Variable: Direccion			Tipo: string		Descripcion: Direccion del paciente
	Variable: FechaNacimiento	Tipo: string		Descripcion: Fecha nacimiento paciente
	Variable: Hospital			Tipo: string		Descripcion: Hospital procedencia paciente
	Variable: Telefono		 	Tipo: string		Descripcion: Telefono del paciente
	Variable: HistorialMedico 	Tipo: string		Descripcion: Historial medico del paciente

**Métodos**:

	- AñadirPaciente():		Funcion que añade un nuevo paciente.
	- MostrarPacientes(): 	Funcion que muestra la lista de los pacientes.
	- BuscarPaciente(): 	Funcion que busca a un paciente.
	- MostrarPaciente(): 	Funcion que muestra la informacion del paciente.
	- ModificarPaciente(): 	Funcion que modifica los datos personales del paciente.
	- EliminarPaciente(): 	Funcion que elimina a un paciente.

###	Clase:	Cita

**Descripcion**: Clase que contiene las funciones de las citas

**Datos**: 
	
	Variable: Hora				Tipo: string 	Descripcion: Hora de la cita
	Variabe: Fecha 				Tipo: string 	Descripcion: Fecha de la cita
	Variable: Motivo 			Tipo: string	Descripcion: Motivo de la cita
	Variable: NombrePaciente 	Tipo: string	Descripcion: Nombre del paciente citado

**Métodos**:

	- MostrarCitasF():	Funcion que muestra todas las citas en un día determinado
	- MostrarCitasP():	Funcion que muestra todas las citas de un paciente.
	- AñadirCita():		Funcion que añade una nueva cita
	- ModificarCita():	Funcion que modifica una cita
	- CancelarCita():	Funcion que cancela una cita


###	Clase: Tratamiento

**Descripción**: Clase que realiza las funciones sobre los tratamientos

**Datos**:

	Variable: NombreTratamiento 	Tipo: string 		Descripción: Nombre del tratamiento
	Variable: FechaInicio 			Tipo: string 		Descripción: Fecha inicio del tratamiento
	Variable: Dosis				 	Tipo: int			Descripción: Dosis del tratamiento
	Variable: FechaFinalizacion 	Tipo: string 		Descripción: Fecha fin del tratamiento

**Métodos**:

	- AddTratamiento():			Funcion que añade a un paciente un nuevo tratamiento.
	- mostrarTratamiento():		Funcion que muestra un tratamiento.
	- ModificarTratamiento():	Funcion que modifica un tratamiento.
	- CancelarTratamiento():	Funcion que cancela un tratamiento.
