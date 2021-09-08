/*
 ============================================================================
 Name        : clase05.c
 Author      : Juan Manuel
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn_biblioteca.h"



int main(void) {
	setbuf(stdout, NULL);
	// podemos chequear que un puntero no este apuntando a una direccion invalida con NULL,
	// ej pResultado != NULL
	float numeroFloat;
	int numeroInt;
	char pedirChar;
	int salidaFuncion;

	salidaFuncion = pedirFloatAUsuario(&numeroFloat,-10,800,2,"Dame un float loco: \n", "Error fuera de rango\n");
	if(salidaFuncion==0)
			{
				printf("Salio todo bien\n");
			}
	else
	{
		if(salidaFuncion==-2)
		{
			printf("te quedaste sin intentos\n");
		}
		else
		{
			printf("Error fuera de rango\n");
		}
	}
	printf("**************************************\n");
	salidaFuncion = pedirIntAUsuario(&numeroInt,-10,800,2,"Dame un int ahora loco: \n", "Error fuera de rango\n");
	if(salidaFuncion==0)
				{
					printf("Salio todo bien\n");
				}
		else
		{
			if(salidaFuncion==-2)
			{
				printf("te quedaste sin intentos\n");
			}
			else
			{
				printf("Error fuera de rango\n");
			}
		}
	printf("**************************************\n");
	salidaFuncion = pedirCharUsuario(&pedirChar,65,90,2,"Bueno ahora loco, dame un char: \n", "Error fuera de rango\n"); // desde a minuscula hasta z minuscula
		if(salidaFuncion==0)
					{
						printf("Salio todo bien\n");
					}
			else
			{
				if(salidaFuncion==-2)
				{
					printf("te quedaste sin intentos\n");
				}
				else
				{
					printf("Error fuera de rango\n");
				}
			}

	return EXIT_SUCCESS;
}


