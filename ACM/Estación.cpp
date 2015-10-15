#include <cstdio>

#define radioKarel 580
#define radioCPP 980
#define radioCompilo 1190
#define radioMando 1250
#define radioRecursion 1420

using namespace std;

int N, der, izq;

int main()
{
	scanf("%d", &N);

	if(N >= radioKarel && N < radioCPP)
	{
		izq = N - radioKarel;
		der = radioCPP - N;
		der <= izq ? printf("adelante %d", der) : printf("atras %d", izq);
	}else if(N >= radioCPP && N < radioCompilo)
	{
		izq = N - radioCPP;
		der = radioCompilo - N;
		der <= izq ? printf("adelante %d", der) : printf("atras %d", izq);
	}else if(N >= radioCompilo && N < radioMando)
	{
		izq = N - radioCompilo;
		der = radioMando - N;
		der <= izq ? printf("adelante %d", der) : printf("atras %d", izq);
	}else if(N >= radioMando && N <= radioRecursion)
	{
		izq = N - radioMando;
		der = radioRecursion - N;
		der <= izq ? printf("adelante %d", der) : printf("atras %d", izq);
	}else
	{
		printf("error");
	}

	return 0;
}