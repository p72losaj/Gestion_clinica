## Proceso Añadir Cita a Paciente

**ID**: 02
**Descripción**: Se clickea en la función, se introducen los datos de la nueva cita y se comprueba que no haya ningun error.

**Actores principales**: Usuario

**Precondiciones**:
* Ninguna.

**Flujo principal**:
1. El usuario clickea sobre la función Añadir cita y se abre una ventana.
1. El sistema muestra una ventana con dos botones, aceptar y cancelar, un desplegable para seleccionar el paciente y un campo vacio para introducir la fecha y la hora.  
1. El usuario selecciona el paciente del desplegable e introduce la fecha y la hora. Posteriormente pulsa aceptar.
1. El sistema muestra una nueva ventana, con un boton de aceptar y con un mensaje confirmando que la cita ha sido guardada correctamente.
1. El usuario pulsa aceptar, y el programa vuelve a la pantalla principal.
 
**Postcondiciones**:

* La cita no puede suplantar a otra cita en la misma fecha y hora a otro paciente.
* Una vez terminado el proceso de añadir cita, muestran al usuario el calendario y las funciones disponibles. (interfaz principal)

**Flujos alternativos**:

4.a. Si la cita esta suplantando a otra cita de otro paciente, el sistema muestra una nueva ventana con un boton de aceptar y un mensaje 'La fecha y hora de la cita introducida ya existe.'. El usuario pulsa aceptar y el sistema vuelve a mostrar la ventana de añadir cita.   