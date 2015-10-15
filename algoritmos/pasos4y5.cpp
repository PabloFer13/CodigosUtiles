#include <stdio.h>

int main()
{
	int lados;

	printf("Ingrese el numero de lados\n");
	scanf("%d", &lados);

	if(lados < 2)
	{
		if(lados == 1)
		{
			printf("Lado Simple\n");
		}else
		{
			printf("Figura no Valida");
		}
	}

	if(lados > 2)
	{
		if(lados == 3)
		{
			printf("Triangulo\n");
		}else
		{
			if(lados == 4)
			{
				printf("Cuadrado\n");
			}else
			{
				if(lados == 5)
				{
					printf("Pentagono");
				}else
				{
					printf("Figura valida");
				}
			}
		}
	}

	return 0;
}