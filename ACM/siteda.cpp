#include <cstdio>

using namespace std;

int primero, segundo, penultimo, ultimo, i, aux;

int main()
{
	scanf("%d %d", &primero, &segundo);

	penultimo = primero;
	ultimo = segundo;

	printf("%d %d", primero, segundo);
	
	do
	{
		aux = penultimo;
		penultimo = ultimo;
		ultimo = (aux + ultimo)%10;
		i++;

		printf(" %d", ultimo);
		
	}while((penultimo != primero) || (ultimo != segundo));

	printf("\n%d", i);

	return 0;
}