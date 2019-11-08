## Añadir Cita a Paciente

**ID**: 04
**Descripción**: Se clickea en la función Modificar Datos Paciente, se introducen los datos de la nueva cita y se comprueba que no haya ningun error.

**Actores principales**: Usuario

**Precondiciones**:
* Ninguna.

**Flujo principal**:
1. El usuario clickea sobre la función Modificar Datos paciente y se abre una ventana.
1. El sistema muestra una ventana con dos botones, aceptar y cancelar, un campo vacío para introducir el nombre completo del paciente.  
1. El sistema muestra en una ventana con un boton de aceptar los datos del paciente.
1. El usuario modifica los Datos de la cita del paciente. Posteriormente pulsa aceptar.
1. El sistema muestra una nueva ventana, con un boton de aceptar y con un mensaje confirmando que "Los datos del paciente han sido modificados correctamente.".
1. El usuario pulsa aceptar, y el programa vuelve a la pantalla principal.
 
**Postcondiciones**:

* La cita no puede suplantar a otra cita en la misma fecha y hora a otro paciente.
* Una vez terminado el proceso de añadir cita, muestran al usuario el calendario y las funciones disponibles. (interfaz principal)

**Flujos alternativos**:

3.a. Si el sistema no encuentra el paciente, mostrará una ventana con un boton de aceptar y un mensaje de error "El paciente no existe.".  

5.a. Si la cita esta suplantando a otra cita de otro paciente, el sistema muestra una nueva ventana con un boton de aceptar y un mensaje "La fecha y hora de la cita introducida ya existe.". El usuario pulsa aceptar y el sistema vuelve a mostrar la ventana de añadir cita.   
