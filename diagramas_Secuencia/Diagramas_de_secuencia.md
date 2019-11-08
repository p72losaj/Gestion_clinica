
###	Secuencia: Mostrar Citas 
 
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

4.a. Si en el dia seleccionado no existe ninguna cita, el sistema muestra una ventana con un boton de aceptar y un mensaje de error "No se encontraron citas en el dia seleccionado". Después de esto, el usuario pulsa aceptar y el sistema cierra la ventana y muestra la interfaz principal del programa.   
 
###	Secuencia:	Mostrar Cita de Paciente

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



###	Secuencia: Añadir Paciente

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


###	Secuencia: Añadir Cita a Paciente

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



###	Secuencia: Añadir Tratamiento a Paciente

**ID**: 05
**Descripción**: Se clickea en la función Modificar Datos Paciente, se introducen los datos del nuevo tratamiento y se comprueba que no haya ningun error.

**Actores principales**: Usuario

**Precondiciones**:
* Ninguna.

**Flujo principal**:
1. El usuario clickea sobre la función Modificar Datos paciente y se abre una ventana.
1. El sistema muestra una ventana con dos botones, aceptar y cancelar, un campo vacío para introducir el nombre completo del paciente.  
1. El sistema muestra en una ventana con un boton de aceptar los datos del paciente.
1. El usuario modifica los Datos del Tratamiento del paciente. Posteriormente pulsa aceptar.
1. El sistema muestra una nueva ventana, con un boton de aceptar y con un mensaje confirmando que "Los datos del paciente han sido modificados correctamente.".
1. El usuario pulsa aceptar, y el programa vuelve a la pantalla principal.
 
**Postcondiciones**:

* El tratamiento no puede estar duplicado.
* Una vez terminado el proceso de añadir tratamiento, muestran al usuario el calendario y las funciones disponibles. (interfaz principal)

**Flujos alternativos**:

3.a. Si el sistema no encuentra el paciente, mostrará una ventana con un boton de aceptar y un mensaje de error "El paciente no existe.", y volvera a la pantalla principal.



###	Secuencia: Mostrar Lista Pacientes

**ID**: 06
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



###	Secuencia: Mostrar Tratamiento a Paciente

**ID**: 07
**Descripción**: Se clickea en la función Mostrar Datos Paciente, se observan los datos del nuevo tratamiento y se vuelve al menu principal.

**Actores principales**: Usuario

**Precondiciones**:
* Ninguna.

**Flujo principal**:
1. El usuario clickea sobre la función Mostrar Datos paciente y se abre una ventana.
1. El sistema muestra una ventana con dos botones, aceptar y cancelar, un campo vacío para introducir el nombre completo del paciente.  
1. El sistema muestra en una ventana con un boton de aceptar los datos del paciente. Posteriormente pulsa aceptar.
1. El usuario pulsa aceptar, y el programa vuelve a la pantalla principal.
 
**Postcondiciones**:

* Una vez terminado el proceso de mostrar tratamiento, muestran al usuario el calendario y las funciones disponibles. (interfaz principal)

**Flujos alternativos**:

3.a. Si el sistema no encuentra el paciente, mostrará una ventana con un boton de aceptar y un mensaje de error "El paciente no existe.".   



###	Secuencia: Buscar Paciente


**ID**: 08
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

3.a. Si el nombre completo de paciente no se encuentra, el sistema devolvera un cuadro de error con el mensaje "No se ha encontrado el paciente." y un boton de aceptar. El usuario pulsa aceptar y el sistema vuelve a mostrar la interfaz principal.   



###	Secuencia: Mostrar Información Paciente

**ID**: 09
**Descripción**: Se clickea en la función buscar paciente, el usuario introduce el nombre completo del paciente y el sistema muestra en una ventana el paciente. El usuario hace click sobre el nombre del paciente y se muestra la información del paciente.

**Actores principales**: Usuario

**Precondiciones**:
* Ninguna.

**Flujo principal**:
1. El usuario clickea sobre la función Buscar paciente y el sistema abre una ventana con un campo vacio para introducir el nombre completo del paciente, con un boton de aceptar y cancelar.   
1. El usuario introduce el nombre completo del paciente y pulsa en aceptar.  
1. El sistema abre una nueva ventana con un boton de aceptar, y muestra en la ventana la información del paciente.
1. El usuario pulsa aceptar, y el programa vuelve a la pantalla principal.
 
**Postcondiciones**:

* Una vez terminado el proceso de Mostrar información del paciente, se muestran al usuario el calendario y las funciones disponibles. (interfaz principal)

**Flujos alternativos**:

3.a. Si el nombre completo de paciente no se encuentra, el sistema devolvera un cuadro de error con el mensaje "No se ha encontrado el paciente." y un boton de aceptar. El usuario pulsa aceptar y el sistema vuelve a mostrar la interfaz principal.   



###	Secuencia: Modificar Datos Paciente

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



###	Secuencia: Modificar Datos Cita

**ID**: 11
**Descripción**: Se clickea en la función Modificar datos del paciente dentro del menu principal, se introducen los nuevos datos de la cita del paciente y se comprueba que no haya ningun error.

**Actores principales**: Usuario

**Precondiciones**:
* El paciente al que debemos modificar la cita, debe existir.

**Flujo principal**:
1. El usuario clickea sobre la función Modificar datos paciente y se abre una ventana.
1. El sistema muestra una ventana con dos botones, aceptar y cancelar, y un campo vacio para introducir el nombre o los apellidos del paciente que se desea modificar los datos.  
1. Es usuario introduce el nombre o los apellidos del paciente. Posteriormente pulsa aceptar.
1. El sistema muestra una nueva ventana la lista de los pacientes que tengan ese nombre o apellido.
1. El usuario selecciona el paciente deseado y pulsa en aceptar.
1. El sistema muestra una nueva ventana con los campos rellenados con los datos del paciente y dos botones, aceptar y cancelar.
1. EL usuario modifica la cita y pulsa en aceptar.
1. EL sistema comprueba si existe algun fallo, y si todo es correcto, mostrará un recuadro con el mensaje "Datos modificados correctamente para el paciente." y un boton de aceptar.
1. EL usuario pulsa en aceptar, y el sistema vuelve a la interfaz principal.
 
**Postcondiciones**:

* Los cita introducida tienen que ser correcta, no puede tener un formato erróneo.
* La cita no puede suplantar la cita de otro paciente.

**Flujos alternativos**:

1.a. Si aún no hay ningún paciente, el programa devolverá un mensaje de error "No existen pacientes." y un botón de aceptar. El usuario pulsara en aceptar y el sistema volverá a la interfaz principal.

4.a. Si no se encuentra ningún paciente con los datos introducidos, el sistema mostrará una ventana con un boton de aceptar y el mensaje "No se ha encontrado ningún paciente con esos datos". El usuario pulsará en aceptar y el sistema volvera automáticamente a la interfaz principal. 
  
8.a. Si la cita introducida no es correcta, o suplanta la cita de otro paciente, el sistema devuelve una ventana con un mensaje de error "Los datos no son correctos o estan duplicados." y un boton de aceptar. EL usuario pulsará en aceptar y el sistema volverá al menú principal, sin modificar los datos.   



###	Secuencia: Modificar Datos Tratamiento

**ID**: 12
**Descripción**: Se clickea en la función Modificar datos del paciente dentro del menu principal, se introduce el tratamiento del paciente y se comprueba que no haya ningun error.

**Actores principales**: Usuario

**Precondiciones**:
* El paciente al que debemos modificar el tratamiento, debe existir.

**Flujo principal**:
1. El usuario clickea sobre la función Modificar datos paciente y se abre una ventana.
1. El sistema muestra una ventana con dos botones, aceptar y cancelar, y un campo vacio para introducir el nombre o los apellidos del paciente que se desea modificar los datos.  
1. El usuario introduce el nombre o los apellidos del paciente. Posteriormente pulsa aceptar.
1. El sistema muestra una nueva ventana la lista de los pacientes que tengan ese nombre o apellido.
1. El usuario selecciona el paciente deseado y pulsa en aceptar.
1. El sistema muestra una nueva ventana con los campos rellenados con los datos del paciente y dos botones, aceptar y cancelar.
1. EL usuario modifica el tratamiento del paciente y pulsa en aceptar.
1. EL sistema comprueba si existe algun fallo, y si todo es correcto, mostrará un recuadro con el mensaje "Datos modificados correctamente para el paciente." y un boton de aceptar.
1. EL usuario pulsa en aceptar, y el sistema vuelve a la interfaz principal.
 
**Postcondiciones**:

* El tratamiento introducido tiene que ser correcto, no puede tener un formato erróneo.

* El tratamiento introducido no puede estar duplicado.

**Flujos alternativos**:

1.a. Si aún no hay ningún paciente, el programa devolverá un mensaje de error "No existen pacientes." y un botón de aceptar. El usuario pulsara en aceptar y el sistema volverá a la interfaz principal.

4.a. Si no se encuentra ningún paciente con los datos introducidos, el sistema mostrará una ventana con un boton de aceptar y el mensaje "No se ha encontrado ningún paciente con esos datos". El usuario pulsará en aceptar y el sistema volvera automáticamente a la interfaz principal.   

8.a. Si el tratamiento no es correcto o no tiene el formato correcto, el sistema devuelve una ventana con un mensaje de error "El tratamiento no es válido." y un boton de aceptar. EL usuario pulsará en aceptar y el sistema volverá al menú principal, sin modificar los datos.   



###	Secuencia: Cancelar Cita Paciente

**ID**: 13
**Descripción**: Se clickea en la función Modificar datos del paciente dentro del menu principal, se eliminan los datos de la cita del paciente y se comprueba que no haya ningun error.

**Actores principales**: Usuario

**Precondiciones**:
* El paciente al que debemos eliminar la cita, debe existir.

**Flujo principal**:
1. El usuario clickea sobre la función Modificar datos paciente y se abre una ventana.
1. El sistema muestra una ventana con dos botones, aceptar y cancelar, y un campo vacio para introducir el nombre o los apellidos del paciente que se desea modificar los datos.  
1. El usuario introduce el nombre o los apellidos del paciente. Posteriormente pulsa aceptar.
1. El sistema muestra una nueva ventana la lista de los pacientes que tengan ese nombre o apellido.
1. El usuario selecciona el paciente deseado y pulsa en aceptar.
1. El sistema muestra una nueva ventana con los campos rellenados con los datos del paciente y dos botones, aceptar y cancelar.
1. EL usuario elimina la cita de los Datos del paciente y pulsa en aceptar.
1. EL sistema comprueba si existe algun fallo, y si todo es correcto, mostrará un recuadro con el mensaje "Datos modificados correctamente para el paciente." y un boton de aceptar.
1. EL usuario pulsa en aceptar, y el sistema vuelve a la interfaz principal.
 
**Postcondiciones**:

* Los cita tiene que haber quedado borrada.

**Flujos alternativos**:

1.a. Si aún no hay ningún paciente, el programa devolverá un mensaje de error "No existen pacientes." y un botón de aceptar. El usuario pulsara en aceptar y el sistema volverá a la interfaz principal.

4.a. Si no se encuentra ningún paciente con los datos introducidos, el sistema mostrará una ventana con un boton de aceptar y el mensaje "No se ha encontrado ningún paciente con esos datos". El usuario pulsará en aceptar y el sistema volvera automáticamente a la interfaz principal. 



###	Secuencia: Cancelar Tratamiento Paciente

**ID**: 14
**Descripción**: Se clickea en la función Modificar datos del paciente dentro del menu principal, se borra el tratamiento o se coloca "No asignado" y se comprueba que no haya ningun error.

**Actores principales**: Usuario

**Precondiciones**:
* El paciente al que debemos eliminar el tratamiento, debe existir.

**Flujo principal**:
1. El usuario clickea sobre la función Modificar datos paciente y se abre una ventana.
1. El sistema muestra una ventana con dos botones, aceptar y cancelar, y un campo vacio para introducir el nombre o los apellidos del paciente que se desea modificar los datos.  
1. El usuario introduce el nombre o los apellidos del paciente. Posteriormente pulsa aceptar.
1. El sistema muestra una nueva ventana la lista de los pacientes que tengan ese nombre o apellido.
1. El usuario selecciona el paciente deseado y pulsa en aceptar.
1. El sistema muestra una nueva ventana con los campos rellenados con los datos del paciente y dos botones, aceptar y cancelar.
1. EL usuario elimina el tratamiento del paciente o escribe "No asignado" y pulsa en aceptar.
1. EL sistema comprueba si existe algun fallo, y si todo es correcto, mostrará un recuadro con el mensaje "Datos modificados correctamente para el paciente." y un boton de aceptar.
1. EL usuario pulsa en aceptar, y el sistema vuelve a la interfaz principal.
 
**Postcondiciones**:

* En los datos del paciente no debe de haber tratamiento o debe aparecer como "No asignado.".

**Flujos alternativos**:

1.a. Si aún no hay ningún paciente, el programa devolverá un mensaje de error "No existen pacientes." y un botón de aceptar. El usuario pulsara en aceptar y el sistema volverá a la interfaz principal.

4.a. Si no se encuentra ningún paciente con los datos introducidos, el sistema mostrará una ventana con un boton de aceptar y el mensaje "No se ha encontrado ningún paciente con esos datos". El usuario pulsará en aceptar y el sistema volvera automáticamente a la interfaz principal.   

8.a. Si el tratamiento no es correcto o no tiene el formato correcto, el sistema devuelve una ventana con un mensaje de error "El tratamiento no es válido." y un boton de aceptar. EL usuario pulsará en aceptar y el sistema volverá al menú principal, sin modificar los datos.   



###	Secuencia: Eliminar Paciente

**ID**: 15
**Descripción**: Se clickea en la función Eliminar Paciente dentro del menu principal, se borra el paciente y se comprueba que no exista ese paciente.

**Actores principales**: Usuario

**Precondiciones**:
* El paciente que debemos eliminar, debe existir.

**Flujo principal**:
1. El usuario clickea sobre la función Eliminar paciente y se abre una ventana.
1. El sistema muestra una ventana con dos botones, aceptar y cancelar, y un campo vacio para introducir el nombre o los apellidos del paciente que se desea eliminar.
1. Es usuario introduce el nombre o los apellidos del paciente. Posteriormente pulsa aceptar.
1. El sistema muestra una nueva ventana la lista de los pacientes que tengan ese nombre o apellido.
1. El usuario selecciona el paciente deseado y pulsa en aceptar.
1. EL sistema comprueba si existe algun fallo, y si todo es correcto, mostrará un recuadro con el mensaje "Paciente eliminado." y un boton de aceptar.
1. EL usuario pulsa en aceptar, y el sistema vuelve a la interfaz principal.
 
**Postcondiciones**:

* El paciente no puede existir.

**Flujos alternativos**:

1.a. Si aún no hay ningún paciente, el programa devolverá un mensaje de error "No existen pacientes." y un botón de aceptar. El usuario pulsara en aceptar y el sistema volverá a la interfaz principal.

3.a. Si no se encuentra ningún paciente con los datos introducidos, el sistema mostrará una ventana con un boton de aceptar y el mensaje "No se ha encontrado ningún paciente con esos datos". El usuario pulsará en aceptar y el sistema volvera automáticamente a la interfaz principal.   

6.a. Se la eliminación del paciente errónea, el sistema devuelve una ventana con un mensaje de error "El paciente no ha sido eliminado." y un boton de aceptar. EL usuario pulsará en aceptar y el sistema volverá al menú principal, sin eliminar el paciente.   





