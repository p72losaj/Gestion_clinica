
###	Clase: Paciente

**Descripción**: Esta clase contendrá las funciones de los pacientes.

**Datos**: 

	Variable: nP	Tipo: string			Descripcion: Nombre del paciente
	Variable: aP	Tipo: string			Descripcion: Apellidos del paciente
	Variable: dP	Tipo: string			Descripcion: Direccion del paciente
	Variable: fP	Tipo: fecha				Descripcion: Fecha nacimiento del paciente
	Variable: hP	Tipo: string			Descripcion: Tipo hospital procede el paciente
	Variable: tP 	Tipo: string			Descripcion: Telefono del paciente
	Variable: hP 	Tipo: texto				Descripcion: Historial medico del paciente

**Métodos**:

	- AñadirPaciente(): Funcion que añade un nuevo paciente
	- ListaPacientes():	Funcion que muestra la lista de los pacientes
	- BuscarPaciente(): Funcion que busca a un paciente
	- MostrarPaciente(): Funcion que muestra la informacion del paciente
	- ModificarPaciente(): Funcion que modifica los datos personales del paciente
	- EliminarPaciente(): Funcion que elimina a un paciente

###	Clase:	Cita

**Descripcion**: Clase que contiene las funciones de las citas

**Datos**: 
	
	Variable: hC	Tipo: hora 		Descripcion: Hora de la cita
	Variabe: fC 	Tipo: Fecha 	Descripcion: Fecha de la cita
	Variable: mC 	Tipo: texto		Descripcion: Motivo de la cita
	Variable: pC 	Tipo: string	Descripcion: Nombre del paciente citado

**Métodos**:

	- MostrarCitasF(): 	Funcion que muestra todas las citas en un día determinado
	- MostrarCitasP(): 	Funcion que muestra todas las citas de un paciente.
	- AñadirCita():		Funcion que añade una nueva cita
	- ModificarCita(): 	Funcion que modifica una cita
	- CancelarCita():	Funcion que cancela una cita


###	Clase: Tratamiento

**Descripción**: Clase que realiza las funciones sobre los tratamientos

**Datos**:

	Variable: nM 	Tipo: string 		Descripción: Nombre del tratamiento
	Variable: iM 	Tipo: Fecha 		Descripción: Fecha inicio del tratamiento
	Variable: dM 	Tipo: int			Descripción: Dosis del tratamiento
	Variable: fM 	Tipo: fecha 		Descripción: Fecha fin del tratamiento

**Métodos**:

	- AñadirTratamiento():		Funcion que añade a un paciente un nuevo tratamiento
	- MostrarTratamiento():		Fucnion que muestra un tratamiento
	- ModificarTratamiento():	Funcion que modifica un tratamiento
	- CancelarTratamiento():	Funcion que cancela un tratamiento
