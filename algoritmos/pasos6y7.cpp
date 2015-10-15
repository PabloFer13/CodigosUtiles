#include <stdio.h>

int main()
{

	int lados;

	printf("Ingrese los lados de la figura\n");
	scanf("%d", &lados);

	switch(lados)
	{
		case 1:
			printf("Lado Simple\n");
			break;

		case 3:
			printf("Triangulo\n");
			break;

		case 4:
			printf("Cuadrado\n");
			break;

		case 5:
			printf("Pentagono\n");
			break;

		default:
			if(lados < 3)
			{
				printf("Figura no Valida\n");
			}else
			{
				printf("Figura Valida\n");
			}
			break;
	}

	return 0;
}