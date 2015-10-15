#include <stdio.h>

//Enero, Marzo, Mayo, Julio, Agosto, Octubre, Dieciembre

int main()
{
	unsigned a, m, d;

	printf("Ingresa el año\n");
	scanf("%d", &a);

	printf("Ingresa el mes\n");
	scanf("%d", &m);

	printf("Ingresa el dia\n");
	scanf("%d", &d);

	if(d <= 31 && m <= 12)
	{
		if( m != 2 && m != 4 && m != 6 && m != 9 && m != 11)
		{
			if(m == 12) //Diciembre se cambia el año
			{
				if(d == 31)
				{
					printf("%d 1 1", a+1);
				}else
				{
					printf("%d 12 %d", a, d+1);
				}
			}else //Resto de los meses con 31 días
			{
				if(d == 31)
				{
					printf("%d %d 1",a,m+1);
				}else
				{
					printf("%d %d %d", a,m,d+1);
				}
			}
		}else // mes con 31 días
		{
			if(m == 2)//Febrero validar que sea bisiesto
			{
				if((a%4) == 0)
				{
					if((a%100) != 0)
					{
						if(d > 29)
						{
							printf("Fecha no válida\n");
						}else
						{
							if(d == 29)
							{
								printf("%d 3 1",a);
							}else
							{
								printf("%d 2 %d",a,d+1);
							}
						}
					}else if((a%400) == 0)
					{
						if(d > 29)
						{
							printf("Fecha no válida\n");
						}else
						{
							if(d == 29)
							{
								printf("%d 3 1",a);
							}else
							{
								printf("%d 2 %d",a,d+1);
							}
						}
					}else
					{
						if(d > 28)
						{
							printf("Error fecha no valida\n");
						}else
						{
							if(d == 28)
							{
								printf("%d 3 1",a);
							}else
							{
								printf("%d 2 %d",a,d+1);
							}
						}
					}
				}else
				{
					if(d == 28)
					{
						printf("%d 3 1",a);
					}else
					{
						printf("%d 2 %d",a,d+1);
					}
				}
			}else //Mes con 30 días
			{
				if(d == 30)
				{
					printf("%d %d 1",a,m+1);
				}else
				{
					printf("%d %d %d",a,m,d+1);
				}
			}
		}
	}else
	{
		printf("Error Fecha invalida\n");
	}

	return 0;
}