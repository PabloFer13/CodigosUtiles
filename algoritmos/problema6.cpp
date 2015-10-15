#include <stdio.h>
 
#define indicador 4

int main()
{
	int n, i, j, k, aux, last, inicio, suma;

	printf("Ingresa el numero limite: ");
	scanf("%d", &n);

	last = 0;

	for(i = 0; i < n; i++)
	{
		inicio = last + 1;
		aux = inicio;
		for(j = inicio; j != 1;j = suma)
		{
			//printf("J vale: %d\n", j);
			suma = 0;
			for(k = aux; k > 0; k = aux)
			{
				aux = k % 10;
				aux = aux * aux;
				suma = suma + aux;
				aux = k / 10;
			}
			//printf("Suma: %d\n",suma);
			if(suma == indicador)
			{
				inicio++;
				aux = inicio;
				suma = inicio;
			}else
			{
				aux = suma;
			}
		}
		last = inicio;
		printf("%d\n", last);
	}

	return 0;
}