## Eliminar Datos Tratamiento Paciente

**ID**: 14
**Descripción**: Se clickea en la función Modificar datos del paciente dentro del menu principal, se borra el tratamiento o se coloca "No asignado" y se comprueba que no haya ningun error.

**Actores principales**: Usuario

**Precondiciones**:
* El paciente al que debemos eliminar el tratamiento, debe existir.

**Flujo principal**:
1. El usuario clickea sobre la función Modificar datos paciente y se abre una ventana.
1. El sistema muestra una ventana con dos botones, aceptar y cancelar, y un campo vacio para introducir el nombre o los apellidos del paciente que se desea modificar los datos.  
1. Es usuario introduce el nombre o los apellidos del paciente. Posteriormente pulsa aceptar.
1. El sistema muestra una nueva ventana con los campos rellenados con los datos del paciente y dos botones, aceptar y cancelar.
1. EL usuario elimina el tratamiento del paciente o escribe "No asignado" y pulsa en aceptar.
1. EL sistema comprueba si existe algun fallo, y si todo es correcto, mostrará un recuadro con el mensaje "Datos modificados correctamente para el paciente." y un boton de aceptar.
1. EL usuario pulsa en aceptar, y el sistema vuelve a la interfaz principal.
 
**Postcondiciones**:

* En los datos del paciente no debe de haber tratamiento o debe aparecer como "No asignado.".

**Flujos alternativos**:

1.a. Si aún no hay ningún paciente, el programa devolverá un mensaje de error "No existen pacientes." y un botón de aceptar. El usuario pulsara en aceptar y el sistema volverá a la interfaz principal.

4.a. Si no se encuentra ningún paciente con los datos introducidos, el sistema mostrará una ventana con un boton de aceptar y el mensaje "No se ha encontrado ningún paciente con esos datos". El usuario pulsará en aceptar y el sistema volvera automáticamente a la interfaz principal.   

6.a. Si el tratamiento no es correcto o no tiene el formato correcto, el sistema devuelve una ventana con un mensaje de error "El tratamiento no es válido." y un boton de aceptar. EL usuario pulsará en aceptar y el sistema volverá al menú principal, sin modificar los datos.   
