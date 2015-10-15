#include <stdio.h>

int main()
{
	int lados;

	printf("Ingrese el numero de lados de la figura\n");
	scanf("%d", &lados);

	if(lados < 3)
	{
		printf("Figura no valida\n");
	}

	if(lados > 2)
	{
		printf("Figura valida\n");
	}

	return 0;
}