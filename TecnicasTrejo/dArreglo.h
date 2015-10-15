#include <cstdio>
#include <cstdlib>
#include <new>

using namespace std;

/*	
typedef struct dArreglo
{
	int a;
	dArreglo *siguiente;
}dArreglo;
*/


void dArreglo_init( int **dArr, int size)
{

	*dArr = new int[size];

	return;
}

void dArreglo_agrega(int index, int *dArr, int value)
{
	
	dArr[index] = value;

	return;
}

int dArr_obtain(int *dArr, int index)
{
	
	return dArr[index-1];
}

void dArr_update(int *dArr, int index, int value)
{
	dArr[index] = value;

	return;
}

void dArr_increase(int newSize, int *dArr)
{
	int i = 0;
	int *newArray;

	while(dArr[i])
	{
		i++;
	}

	newSize += i;

	newArray = (int*) realloc(dArr, newSize * sizeof(int));

	if(newArray != NULL)
	{
		dArr = newArray;
	}else
	{
		printf("ERROR\n");
	}
	return;
}

void dArr_free(int *dArr)
{
	free(dArr);
	return;
}

