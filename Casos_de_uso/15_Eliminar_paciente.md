## Eliminar Paciente

**ID**: 15
**Descripción**: Se clickea en la función Eliminar Paciente dentro del menu principal, se borra el paciente y se comprueba que no exista ese paciente.

**Actores principales**: Usuario

**Precondiciones**:
* El paciente que debemos eliminar, debe existir.

**Flujo principal**:
1. El usuario clickea sobre la función Eliminar paciente y se abre una ventana.
1. El sistema muestra una ventana con dos botones, aceptar y cancelar, y un campo vacio para introducir el nombre o los apellidos del paciente que se desea eliminar.
1. Es usuario introduce el nombre o los apellidos del paciente. Posteriormente pulsa aceptar.
1. EL sistema comprueba si existe algun fallo, y si todo es correcto, mostrará un recuadro con el mensaje "Paciente eliminado." y un boton de aceptar.
1. EL usuario pulsa en aceptar, y el sistema vuelve a la interfaz principal.
 
**Postcondiciones**:

* El paciente no puede existir.

**Flujos alternativos**:

1.a. Si aún no hay ningún paciente, el programa devolverá un mensaje de error "No existen pacientes." y un botón de aceptar. El usuario pulsara en aceptar y el sistema volverá a la interfaz principal.

3.a. Si no se encuentra ningún paciente con los datos introducidos, el sistema mostrará una ventana con un boton de aceptar y el mensaje "No se ha encontrado ningún paciente con esos datos". El usuario pulsará en aceptar y el sistema volvera automáticamente a la interfaz principal.   

4.a. Se la eliminación del paciente errónea, el sistema devuelve una ventana con un mensaje de error "El paciente no ha sido eliminado." y un boton de aceptar. EL usuario pulsará en aceptar y el sistema volverá al menú principal, sin eliminar el paciente.   
