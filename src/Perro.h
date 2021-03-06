/*
 * Perro.h
 *
 *  Created on: 28 oct. 2021
 *      Author: N3630024213
 */

#ifndef PERRO_H_
#define PERRO_H_

typedef struct
{
	int id;
	char nombre[21];
	char raza[21];
	int edad;
	int isEmpty;
}ePerro;

int Perro_initLista(ePerro list[], int len);
int Perro_addPerro(ePerro list[], int len, int id, char name[],char raza[],int edad);
int Perro_buscarEspacioLibre(ePerro list[], int tam);
int Perro_findById(ePerro list[], int len,int id);
int Perro_removePerro(ePerro list[], int len, int id);
int Perro_contarPerrosActivos(ePerro list[],int len);
float Perro_TotalSumaEdades(ePerro list[],int len);
float Perro_PromedioEdades(ePerro list[],int len);
int Perro_printLista(ePerro list[], int length);
void Perro_printEncabezado();
void Perro_printOne(ePerro perro);
int Perro_CargaBaseDatos(ePerro list[], int length);

#endif /* PERRO_H_ */
