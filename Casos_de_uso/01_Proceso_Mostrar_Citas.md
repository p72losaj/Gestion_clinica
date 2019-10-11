## Proceso Mostrar Citas

**ID**: 01
**Descripción**: Se clickea en el calendario el dia elegido, se muestran en una ventana las citas previstas para ese dia.

**Actores principales**: Usuario

**Precondiciones**:
* Ninguna.

**Flujo principal**:
1. El usuario clickea en el calendario del menu principal el dia elegido para mostrar las citas.
1. El sistema abre una nueva ventana con un boton de aceptar y una lista de las citas previstas para ese dia.
1. El usuario pulsa en aceptar, se cierra la ventana del sistema y se vuelve a mostrar la interfaz principal con el calendario y las funciones a la derecha.
 
**Postcondiciones**:

* Una vez terminado el proceso de mostrar citas, muestran al usuario el calendario y las funciones disponibles. (interfaz principal).

**Flujos alternativos**:

4.a. Si en el dia seleccionado no existe ninguna cita, el sistema muestra una ventana con un boton de aceptar y un mensaje de error 'No se encontraron citas en el dia seleccionado'. Después de esto, el usuario pulsa aceptar y el sistema cierra la ventana y muestra la interfaz principal del programa.   
