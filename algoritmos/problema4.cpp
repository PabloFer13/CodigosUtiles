#include <stdio.h>

int main()
{
	int dia, mes;

	printf("Ingresa el día\n");
	scanf("%d", &dia);

	printf("Ingresa el mes\n");
	scanf("%d", &mes);

	if(dia > 0 && mes > 0 && mes < 13)
	{
		if(mes  == 2 && dia <= 29)
		{
			printf("Fecha valida\n");
		}else if(m != 1 && mes != 3 && mes != 5 && mes != 7 && mes != 8 && mes != 10 && mes != 12 && dia <= 30)
		{
			printf("Fecha valida\n");
		}else if(m != 4 && mes != 6 && mes != 9 && mes != 11 && dia <= 31)
		{
			printf("Fecha valida\n");
		}else
		{
			printf("Fecha no valida\n");
		}
	}else
	{
		printf("Fecha no valida\n");
	}

	return 0;
}