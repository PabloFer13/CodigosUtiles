#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{
	FILE *ptr;

	ptr= fopen("numeros.txt","a");

	for(int i = 1; i <= 100; i++)
	{
		fprintf(ptr,"%d ", (rand()%1000)+1);
	}

	fclose(ptr);

	return 0;
}