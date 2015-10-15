#include <cstdio>

using namespace std;

int a, b;

void resuelve(int mayor, int menor)
{
	int resta;
	int total = 24;

	resta = mayor - menor;
	printf("%d", total-resta);
	return;
}

int main()
{
	scanf("%d %d", &a, &b);

	if(a == b)
	{
		printf("0");
	}else
	{
		a > b ? resuelve(a,b) : resuelve(b,a);
	}

	return 0;
}


#include <cstdio>

using namespace std;

int inicio, fin, tiempo;

int main()
{
	scanf("%d %d", &inicio, &fin);

	inicio++;
	tiempo = 1;

	for(int i = inicio; i !=fin; i = ((i+1)%25)){
		tiempo++;
		//printf("%d\n", i);
	}

	printf("%d", tiempo-1);

	return 0;
}