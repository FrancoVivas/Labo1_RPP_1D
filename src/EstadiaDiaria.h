/*
 * EstadiaDiaria.h
 *
 *  Created on: 29 oct. 2021
 *      Author: N3630024213
 */

#include "INPUTS.h"
#include "Perro.h"
#include "Fecha.h"
#ifndef ESTADIADIARIA_H_
#define ESTADIADIARIA_H_


typedef struct
{
	int id;
	char nombreDuenio[21];
	int telefonoContacto;
	int idPerro;
	eFecha fecha;
	int isEmpty;
}eEstadiaDiaria;

int EstadiaDiaria_initLista(eEstadiaDiaria list[], int len);
int EstadiaDiaria_addEstadiaDiaria(eEstadiaDiaria list[], int len, int id, char nombreduenio[],int telefonoContacto, int idPerro, eFecha fecha);
int EstadiaDiaria_addEstadiaDiariaHardcode(eEstadiaDiaria list[], int len, int id, char nombreduenio[],int telefonoContacto, int idPerro, int dia, int mes, int anio);
int EstadiaDiaria_buscarEspacioLibre(eEstadiaDiaria list[], int tam);
int EstadiaDiaria_findById(eEstadiaDiaria list[], int len,int id);
int EstadiaDiaria_removeEstadia(eEstadiaDiaria list[], int len, int id);
int EstadiaDiaria_printLista(eEstadiaDiaria list[], int length);
void EstadiaDiaria_printEncabezado();
void EstadiaDiaria_printOne(eEstadiaDiaria estadia);
int EstadiaDiaria_PedirIdPerro(ePerro list[], int length, int *idPerro,int cantidadIntentosPermitidos);
int EstadiaDiaria_sortEstadia(eEstadiaDiaria list[], int len, int order);

#endif /* ESTADIADIARIA_H_ */
