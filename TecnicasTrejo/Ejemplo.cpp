#include <cstdio>
#include <cstdlib>
#include "dArreglo.h"

using namespace std;

void rellena(int *dArray, int size, int index)
{
	int valor;
	for(int i = index; i < size; i++)
	{
		printf("Ingresa la calificacion del alumno %d\n", size+i);
		scanf("%d", &valor);

		dArreglo_agrega(i, dArray, valor);
		}
	return;
}

int main()
{
	int *Calificaciones;
	int tam, agrega, valor, i, opc, x, suma;
	
	printf("Programa para el calculo del promedio ");
	printf("de calificaciones de Tecnicas Algoritmicas\n");

	printf("Ingrese el numero de alumnos del primer grupo\n");
	scanf("%d", &tam);

	dArreglo_init(&Calificaciones, tam);

	if(Calificaciones != NULL)
	{
		for(i = 0; i < tam; i++)
		{
			printf("Ingresa la calificacion del alumno %d\n", i+1);
			scanf("%d", &valor);

			dArreglo_agrega(i, Calificaciones, valor);
		}

		do
		{

			printf("Ahora, Que deseas hacer?\n");
			printf("1) Ver la calificacion de un alumno\n");
			printf("2) Actualizar la calificacion de un alumno\n");
			printf("3) Agregar mas alumnos\n");
			printf("4) Borrar las calificaciones actuales e ingresar nuevas\n");
			printf("5) Sacar el promedio y salir\n");
			printf("6) Solamente Salir\n");
			scanf("%d", &opc);

			switch(opc)
			{
				case 1:
					
					printf("Ingresa el numero de alumno\n");
					scanf("%d", &valor);

					x = dArr_obtain(Calificaciones, valor);

					if(x > -1)
					{
						printf("La calificacion del alumno es: %d\n", x);
					}

					break;
				case 2:
					
					printf("Ingresa el numero del alumno\n");
					scanf("%d", &x);
					printf("Ingresa la nueva calificacion\n");
					scanf("%d", &valor);

					dArr_update(Calificaciones, x, valor);

					break;
				case 3:
					printf("Cuantos alumnos mas desea agregar?\n");
					scanf("%d", &valor);

					tam += valor;
					
					dArr_increase(valor, Calificaciones);
					rellena(Calificaciones, tam, tam-valor);

					break;
				case 4:

					printf("Ingrese el nuevo numero de alumnos a ingresar\n");
					scanf("%d", &tam);

					dArr_free(Calificaciones);
					dArreglo_init(&Calificaciones, tam);
					rellena(Calificaciones, tam, 0);

					break;
				case 5:

					for(i = 0; i < tam; i++)
					{
						suma += Calificaciones[i];
					}

					printf("El promedio es %d \n", suma/(tam-1));

					break;
				case 6:
					printf("Adios\n");
					break;
				default:
					printf("Error, ingresa una opcion valida porfavor\n");
					break;
			}

		}while(opc != 6);

	}else
	{
		printf("ERROR\n");
	}



	return 0;
}