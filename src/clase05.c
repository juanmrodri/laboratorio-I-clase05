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

int pedirFloatAUsuario(float* pResultado, float min, float max, int reintentos, char* variableTexto, char* textoError);
int pedirIntAUsuario(int* pResultado, float min, float max, int reintentos, char* variableTexto, char* textoError);
int pedirCharUsuario(char* pResultado, char min, char max, int reintentos, char* variableTexto, char* textoError);

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

int pedirFloatAUsuario(float* pResultado, float min, float max, int reintentos, char* variableTexto, char* textoError)
{
	float aux;
	int retorno=-1; // el -1 ahora significa que los parametros estan mal
	int i;
	// podemos chequear que un puntero no este apuntando a una direccion invalida con NULL, solo me sirve para punteros, que chequean direccion de memoria, me sirve para saber si no apunto a la nada misma
	// ej pResultado != NULL
	if(pResultado != NULL && min<max && reintentos >=0 && variableTexto != NULL && textoError != NULL)
	{
		for (i=0; i<=reintentos; i++)
		{
			printf("%s",variableTexto);
			scanf("%f", &aux);

			if (aux>=min && aux<=max)
			{
				retorno = 0; // OK
				*pResultado=aux;
				break;
			}
			else
			{
				retorno = -2; // ahora -2 significa que hay un error
				printf("%s", textoError);
			}
		}
	}
	return retorno;
}

int pedirIntAUsuario(int* pResultado, float min, float max, int reintentos, char* variableTexto, char* textoError)
{
	float aux;
		int retorno=-1;
		int i;
		if(pResultado != NULL && min<max && reintentos >=0 && variableTexto != NULL && textoError != NULL)
		{
			for (i=0; i<=reintentos; i++)
			{
				printf("%s",variableTexto);
				scanf("%f", &aux);

				if (aux>=min && aux<=max)
				{
					retorno = 0; // OK
					*pResultado=aux;
					break;
				}
				else
				{
					retorno = -2;
					printf("%s", textoError);
				}
			}
		}
		return retorno;
}

int pedirCharUsuario(char* pResultado, char min, char max, int reintentos, char* variableTexto, char* textoError) // el min y el max puede ser int tambien
{
		char aux;
		int retorno=-1;
		int i;
		if(pResultado != NULL && min<max && reintentos >=0 && variableTexto != NULL && textoError != NULL)
		{
			for (i=0; i<=reintentos; i++)
			{
				fflush(stdin);
				printf("%s",variableTexto);
				scanf("%c", &aux);

				if (aux>=min && aux<=max)
				{
					retorno = 0; // OK
					*pResultado=aux;
					break;
				}
				else
				{
					retorno = -2; // ahora -2 significa que hay un error
					printf("%s", textoError);
				}
			}
		}
		return retorno;
}

