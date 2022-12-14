
/** @file main.c
 **
 ** @brief Plantilla de archivos fuente TPN02
 **
 ** Plantilla para los archivos de codigo fuente de prácticos de las 
 ** asignaturas Diseño Integrado de Sistemas Emebebidos y Sistemas Embebidos
 ** de Tiempo Real dictadas en de la Especialización en Integración de
 ** Sistemas Informaticos de la Univesidad Nacional de Tucumán
 ** 
 ** | RV | YYYY.MM.DD | Autor       | Descripción de los cambios              |
 ** |----|------------|-------------|-----------------------------------------|
 ** |  1 | 2022.08.27 | jcalvo      | Version inicial del archivo             |
 ** 
 ** @defgroup plantilla Plantillas de Archivos
 ** @brief Plantillas de archivos normalizadas
 ** @{ 
 */

/* === Inclusiones de cabeceras ============================================ */
#include "main.h"
#include "alumno.h"
#include <stdio.h>

/* === Definicion y Macros privados ======================================== */

/* === Declaraciones de tipos de datos privados ============================ */

/* === Definiciones de variables privadas ================================== */

/* === Definiciones de variables publicas ================================== */

/* === Declaraciones de funciones privadas ================================= */

/* === Definiciones de funciones privadas ================================== */

/* === Definiciones de funciones publicas ================================== */

int main(void) {
    static const struct alumno_s alumno = {
        .apellido = "CALVO",
        .nombre = "Julio",
        .documento = "14.023.732"
    };

    nombre(&alumno);
    return(0);

}

/* === Ciere de documentacion ============================================== */

/** @} Final de la definición del modulo para doxygen */

