#include <stdio.h>

int main()
{
	unsigned t, cant;

	printf("¿Que signo recibiste?\n1) \"-\"\n2) \"+\"\n");
	scanf("%d", &t);

	printf("Cuantos signos recibiste?\n");
	scanf("%d", &cant);

	//-- 0 a 2
	// - 3 a 5
	// + 7 a 8
	//++ 8 a 9
	//+++ FUCKING 10

	if(t == 1)
	{
		if(cant == 1)
		{
			printf("De 3 a 5\n");
		}else if(cant == 2)
		{
			printf("De Cero a 2\n");
		}else
		{
			printf("Error, calificacion no valida\n");
		}
	}else if(t == 2)
	{
		if(cant == 1)
		{
			printf("De 7 a 8\n");
		}else if(cant == 2)
		{
			printf("De 8 a 9\n");
		}else if(cant == 3)
		{
			printf("You're a fucking god, 10");
		}else
		{
			printf("Error calificación no valida\n");
		}
	}else
	{
		printf("Error calificación no valida\n");
	}

	return 0;
}