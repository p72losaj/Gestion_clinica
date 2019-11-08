## Proceso Añadir Nuevo Paciente

**ID**: 03
**Descripción**: Se clickea en la función, se introducen los datos del nuevo paciente y se comprueba que no haya ningún error.

**Actores principales**: Usuario

**Precondiciones**:
* Debe haber suficiente almacenamiento para guardar un nuevo usuario.

**Flujo principal**:
1. El usuario clickea sobre la función Nuevo Paciente y se abre una ventana.
1. El sistema muestra una ventana con varios campos a rellenar sobre los datos del nuevo paciente y dos botones, cancelar y aceptar.
1. El usuario introduce los datos del nuevo paciente y pulsa aceptar.
1. El sistema muestra una nueva ventana, con un boton de aceptar y con un mensaje confirmando que "El nuevo paciente ha sido introducido con éxito".
1. El usuario pulsa aceptar, y el programa vuelve a la pantalla principal.
 
**Postcondiciones**:

* El nuevo paciente tiene que haberse introducido correctamente.
* Una vez terminado el proceso de introducir el nuevo paciente, muestran al usuario el calendario y las funciones disponibles.

**Flujos alternativos**:

1.a. Si el sistema no tiene la suficiente cantidad de almacenamiento, muestra una ventana informando que no queda espacio de almacenamiento para introducir un nuevo paciente con un botón de aceptar, el cual el usuario de presionar y volverá el programa a la pantalla principal del programa.   

4.a. Si los campos obligatorios no están rellenados, el sistema muestra una nueva ventana con un boton de aceptar y un mensaje "Se necesitan introducir los datos obligatorios". El usuario pulsa aceptar y el sistema vuelve a mostrar la ventana de introducir nuevo paciente.   

4.b. Si los datos del paciente introducidos están duplicados, el sistema muestra una nueva ventana con un botón de aceptar y con un mensaje "El nuevo paciente es un paciente ya existente.". Posteriormente, el usuario pulsa aceptar y el sistema sale al menu principal.

