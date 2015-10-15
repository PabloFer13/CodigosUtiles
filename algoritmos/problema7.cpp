#include <stdio.h>

int main()
{
	int numA, denA, numB, denB, auxNum, auxDen;

	printf("Ingresa el numerador de la primer fracción\n");
	scanf("%d", &numA);

	printf("Ingresa el denominador de la primer fraccion\n");
	scanf("%d", &denA);

	printf("Ingresa el numerador de la segunda fracción\n");
	scanf("%d", &numB);

	printf("Ingresa el denominador de la segunda fraccion\n");
	scanf("%d", &denB);

	while(numA < denA && numB < denB)
	{
		printf("Suma:\n");
		auxNum = (numA*denB) + (numB * denA);
		auxDen = denA * denB;
		printf("%d  /  %d", auxNum, auxDen);

		printf("Resta:\n");
		auxNum = (numA*denB) - (numB * denA);
		auxDen = denA * denB;
		printf("%d  /  %d\n", auxNum, auxDen);

		printf("Multiplicacion:\n");
		auxNum = numA * numB;
		auxDen = denA * denB;
		printf("%d  /  %d\n", auxNum, auxDen);

		printf("Division:\n");
		auxNum = numA * denB;
		auxDen = numB * denA;
		printf("%d  /  %d\n", auxNum, auxDen);

		printf("Ingresa el nuevo numerador de la primer fracción\n");
		scanf("%d", &numA);

		printf("Ingresa el nuevo denominador de la primer fraccion\n");
		scanf("%d", &denA);

		printf("Ingresa el nuevo numerador de la segunda fracción\n");
		scanf("%d", &numB);

		printf("Ingresa el nuevo denominador de la segunda fraccion\n");
		scanf("%d", &denB);
	}

	return 0;
}