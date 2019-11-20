## Mostrar Citas de Paciente

**ID**: 02
**Descripción**: Se clickea en la función Mostrar Datos Paciente, se muestran las citas del paciente.

**Actores principales**: Usuario

**Precondiciones**:
* Ninguna.

**Flujo principal**:
1. El usuario clickea sobre la función Mostrar Datos paciente y se abre una ventana.
1. El sistema muestra una ventana con dos botones, aceptar y cancelar, un campo vacío para introducir el nombre completo del paciente.  
1. El sistema muestra en una ventana con un boton de aceptar los datos del paciente.
1. El usuario puede mirar los Datos de la cita del paciente. Posteriormente pulsa aceptar.
1. El usuario pulsa aceptar, y el programa vuelve a la pantalla principal.
 
**Postcondiciones**:

* Los datos del paciente no se tienen que haberse modificado.
* Una vez terminado el proceso de ver citas, muestran al usuario el calendario y las funciones disponibles. (interfaz principal)

**Flujos alternativos**:

3.a. Si el sistema no encuentra el paciente, mostrará una ventana con un boton de aceptar y un mensaje de error "El paciente no existe.".   

5.a. Una vez temrmina el proceso, al darle al boton aceptar, vuelve al menu inicial.
