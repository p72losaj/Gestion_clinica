## Proceso Buscar Paciente

**ID**: 04
**Descripción**: Se clickea en la función buscar paciente, el usuario introduce el nombre completo del paciente y el sistema muestra en una ventana el paciente.

**Actores principales**: Usuario

**Precondiciones**:
* Ninguna.

**Flujo principal**:
1. El usuario clickea sobre la función Buscar paciente y el sistema abre una ventana con un campo vacio para introducir el nombre completo del paciente, con un boton de aceptar y cancelar.   
1. El usuario introduce el nombre completo del paciente y pulsa en aceptar.  
1. El sistema muestra una ventana con un boton de aceptar y con el nombre completo del paciente.
1. El usuario pulsa aceptar, y el programa vuelve a la pantalla principal.
 
**Postcondiciones**:

* Una vez terminado el proceso de buscar paciente, se muestran al usuario el calendario y las funciones disponibles. (interfaz principal)

**Flujos alternativos**:

3.a. Si el nombre completo de paciente no se encuentra, el sistema devolvera un cuadro de error con el mensaje 'No se ha encontrado el paciente.' y un boton de aceptar. El usuario pulsa aceptar y el sistema vuelve a mostrar la interfaz principal.   