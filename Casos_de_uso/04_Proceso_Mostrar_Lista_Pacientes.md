## Proceso Mostrar Lista Pacientes

**ID**: 04
**Descripción**: Se clickea en la función Mostrar Lista de Pacientes. EL sistema muestra una lista con los pacientes.

**Actores principales**: Usuario

**Precondiciones**:
* Debe existir al menos un paciente.

**Flujo principal**:
1. El usuario clickea sobre la función Mostrar Lista Pacientes y se abre una ventana.
1. El sistema muestra una ventana con dos botones, aceptar y cancelar, y una lista con los pacientes ordenados por fecha.  
1. El usuario puede ordenadar los pacientes para una fecha determinada seleccionada en un desplegable.
1. El usuario pulsa aceptar, y el programa vuelve a la pantalla principal.
 
**Postcondiciones**:

* Ninguna.   
 
**Flujos alternativos**:

2.a. Si no existe ningún paciente, el sistema muestra una ventana con el boton aceptar y el mensaje "No hay pacientes disponibles". El usuario pulsa aceptar y el sistema muestra de nuevo la pantalla principal.
