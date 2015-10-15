#include <stdio.h>

int main()
{
	int a,b,c;

	printf("Ingresa el valor del primer lado\n");
	scanf("%d", &a);

	printf("Ingresa el valor del segundo lado\n");
	scanf("%d", &b);

	printf("Ingresa el valor del tercer lado\n");
	scanf("%d", &c);

	if(a == b)
	{
		if(a == c)
		{
			printf("El triangulo es equilatero y es posible\n");
		}else if((a+b) < c)
		{
			printf("El triangulo es isoceles y es imposible");
		}else
		{
			printf("El triangulo es isoceles y es posible\n");
		}
	}else if(a == c)
	{
		if((a+c) < b)
		{
			printf("El triangulo es isoceles y es imposible\n");
		}else
		{
			printf("El triangulo es isoceles y es posible\n");
		}
	}else if(b == c)
	{
		if((b+c) < a)
		{
			printf("El triangulo es isoceles y es imposible\n");
		}else
		{
			printf("El triangulo es isoceles y es posible\n");
		}
	}else
	{
		printf("El triangulo es escaleno y es ");
		if((a+b) > c)
		{
			if((a+c) > b)
			{
				if((b+c) > a)
				{
					printf("posible\n");
				}else
				{
					printf("imposible");
				}
			}else
			{
				printf("imposible\n");
			}
		}else
		{
			printf("imposible\n");
		}
	}
	
	return 0;
}
