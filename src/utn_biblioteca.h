/*
 * utn_biblioteca.h
 *
 *  Created on: 7 sept 2021
 *      Author: juanm
 */

#include <stdio.h>
#include <stdlib.h>

#ifndef UTN_BIBLIOTECA_H_
#define UTN_BIBLIOTECA_H_

int pedirFloatAUsuario(float* pResultado, float min, float max, int reintentos, char* variableTexto, char* textoError);
int pedirIntAUsuario(int* pResultado, float min, float max, int reintentos, char* variableTexto, char* textoError);
int pedirCharUsuario(char* pResultado, char min, char max, int reintentos, char* variableTexto, char* textoError);

#endif /* UTN_BIBLIOTECA_H_ */
