/*
 * Fecha.h
 *
 *  Created on: 29 oct. 2021
 *      Author: N3630024213
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "INPUTS.h"

#ifndef FECHA_H_
#define FECHA_H_

typedef struct
{
	int dia;
	int mes;
	int anio;
}eFecha;

int Fecha_verificar(eFecha fecha);
int Fecha_pedir(eFecha* fecha, int cantidadIntentosPermitidos);
void Fecha_print(eFecha fecha);
int Fecha_comparacion(eFecha fecha1,eFecha fecha2);

#endif /* FECHA_H_ */
