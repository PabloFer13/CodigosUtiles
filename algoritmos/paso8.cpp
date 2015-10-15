#include <stdio.h>

int main()
{
	int n;

	printf("Ingrese el numero\n");
	scanf("%d", &n);

	if(n == 0)
	{
		printf("El numero es 0 y no se considera multiplo\n");
	}else
	{
		if((n % 3) == 0)
		{
			printf("Si es Multiplo\n");
		}else
		{
			printf("No es Multiplo");
		}
	}

	return 0;
}