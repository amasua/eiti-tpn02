
#ifndef ALUMNO_H   /*! @cond    */
#define ALUMNO_H   /*! @endcond */

/** @file alumno.h
 **
 ** @brief Cabecera del modulo con las funciones de alumno 
 **
 ** 
 ** | RV | YYYY.MM.DD | Autor       | Descripción de los cambios              |
 ** |----|------------|-------------|-----------------------------------------|
 ** |  1 | 2022.08.27 | jcalvo      | Version inicial del archivo             |
 ** 
 ** @defgroup plantilla Plantilals de Archivos
 ** @brief Plantillas de archivos normalizadas
 ** @{ 
 */

/* === Inclusiones de archivos externos ==================================== */

/* === Cabecera C++ ======================================================== */
#ifdef __cplusplus
extern "C" {
#endif

/* === Definicion y Macros publicos ======================================== */

/* === Declaraciones de tipos de datos publicos ============================= */

/** 
 * @brief Estructura que contiene los datos del alumno
 * 
*/

struct alumno_s {
    char apellido[64];  //!< cadena de caracteres con el apellido del alumno
    char nombre[64];    //!< cadena de caracteres con el nombre del alumno
    char documento[16]; //!< cadena de caracteres con el documento del alumno
};

/* === Declaraciones de variables publicas ================================= */

/* === Declaraciones de funciones publicas ================================= */

/** 
 * @brief Función muestra los datos del alumno
 * 
 * Esta función muestra el nombre del alumno por pantalla
 * debe recibir un puntero a una estructura con los datos del alumno que se quiere mostrar
 * 
 * @param alumno  puntero a la estructura con los datos del alumno
 * 
*/
void nombre(const struct alumno_s * alumno);

/* === Ciere de documentacion ============================================== */
#ifdef __cplusplus
}
#endif

/** @} Final de la definición del modulo para doxygen */

#endif   /* ALUMNO_H */
