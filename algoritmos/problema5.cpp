#include <stdio.h>

#define indicador 4

int main()
{
	int n, i, j, aux, suma = 0;

	printf("Ingresa el numero\n");
	scanf("%d", &n);

	
	aux = n;
	for(i = 0; i != 1 && i != indicador;i = suma)
	{
		suma = 0;
		for(j = aux; j > 0; j = aux)
		{
			aux = j % 10;
			//printf("Modulo: %d\n", aux);
			aux = aux * aux;
			//printf("Cuadrado: %d\n", aux);
			suma = suma + aux;
			aux = j / 10;
			//printf("Nuevo J: %d\n", aux);
		}
		//printf("Suma final: %d\n", suma);
		aux = suma;
	}

	if(suma == 1)
	{
		printf("Si es Feliz\n");
	}else
	{
		printf("No es Feliz\n");
	}

	return 0;
}