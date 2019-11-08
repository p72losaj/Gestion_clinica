## Modificar Datos Paciente

**ID**: 10
**Descripción**: Se clickea en la función Modificar Datos Paciente dentro del menu principal, se introducen los nuevos datos del paciente y se comprueba que no haya ningun error.

**Actores principales**: Usuario

**Precondiciones**:
* El paciente al que debemos modificar los datos, debe existir.

**Flujo principal**:
1. El usuario clickea sobre la función Modificar datos paciente y se abre una ventana.
1. El sistema muestra una ventana con dos botones, aceptar y cancelar, y un campo vacio para introducir el nombre o los apellidos del paciente que se desea modificar los datos.  
1. Es usuario introduce el nombre o los apellidos del paciente. Posteriormente pulsa aceptar.
1. El sistema muestra una nueva ventana con dos botones, aceptar y cancelar, y una lista de los pacientes que tengan ese nombre o apellido.
1. El usuario selecciona el paciente deseado y pulsa en aceptar.
1. El sistema muestra una nueva ventana con los campos rellenados con los datos del paciente y dos botones, aceptar y cancelar.
1. EL usuario modifica los campos y pulsa en aceptar.
1. EL sistema comprueba si existe algun fallo, y si todo es correcto, mostrará un recuadro con el mensaje "Datos modificados correctamente para el paciente." y un boton de aceptar.
1. EL usuario pulsa en aceptar, y el sistema vuelve a la interfaz principal.
 
**Postcondiciones**:

* Los datos del paciente no pueden duplicarse con otros de otros pacientes.
* Los datos introducidos tiene que tener los campos obligatorios completos.
* Los datos introducidos tienen que ser correctos, no pueden tener un formato diferente.

**Flujos alternativos**:

1.a. Si aún no hay ningún paciente, el programa devolverá un mensaje de error "No existen pacientes." y un botón de aceptar. El usuario pulsara en aceptar y el sistema volverá a la interfaz principal.   

4.a. Si no se encuentra ningún paciente con los datos introducidos, el sistema mostrará una ventana con un boton de aceptar y el mensaje "No se ha encontrado ningún paciente con esos datos". El usuario pulsará en aceptar y el sistema volvera automáticamente a la interfaz principal.   

8.a. Si los datos introducidos no son correctos, el sistema devuelve una ventana con un mensaje de error "Los datos no son válidos" y un boton de aceptar. EL usuario pulsará en aceptar y el sistema volverá al menú principal, sin modificar los datos.   
