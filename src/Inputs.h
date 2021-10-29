/*
 * Inputs.h
 *
 *  Created on: 29 oct. 2021
 *      Author: N3630024213
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef INPUTS_H_
#define INPUTS_H_

int pedirEntero(int* entero, char* mensaje, char* mensajeError, int min, int max, int intentos);
int pedirFlotante(float* flotante, char* mensaje, char* mensajeError, float min, float max, int intentos);
int pedirCadena(char* cadena, char* mensaje, char* mensajeError, int max, int intentos);
int pedirCadenaSoloLetras(char* cadena, char* mensaje, char* mensajeError, int max, int intentos);
int pedirCaracter(char* caracter, char* mensaje);
int contieneSoloLetras(char* cadena);

#endif /* INPUTS_H_ */
