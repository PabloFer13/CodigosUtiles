#include <cstdio>
#define MAX 100002
using namespace std;

int LeeArch(FILE *ptr, int *Array)
{
	int i = 0;

	while(!feof(ptr))
	{
		fscanf(ptr,"%d",&Array[i]);
		i++;
	}

	return i;
}

int Insertion(int *Array, int tam)
{
	int aux, j, comp = 0;
	for(int i = 1; i < tam; i++)
	{
		aux = Array[i];
		j = i - 1;
		while(j >= 0 && Array[j] > aux)
		{
			Array[j+1] = Array[j];
			j--;
			comp++;
		}
		Array[j+1] = aux;
	}
	return comp;
}

int Selection(int *Array, int tam)
{
	int i,j,k,aux,comp = 0;
	for(int i = 0; i < (tam-1); i++)
	{
		aux = Array[i];
		k = i;
		for(j = i+1; j < tam; j++)
		{	
			comp++;
			if(Array[j] < aux)
			{
				aux = Array[j];
				k = j;
			}
		}
		Array[k] = Array[i];
		Array[i] = aux;
	}
	return comp;
}

int Bubble(int *Array, int tam)
{
	int aux, i,j, comp = 0;
	for(i = 0; i < tam;i++)
	{
		for(j = (tam-1); j > i; j--)
		{
			comp++;
			if(Array[i] > Array[j])
			{
				aux = Array[i];
				Array[i] = Array[j];
				Array[j] = aux;
			}
		}
	}
	return comp;
}

int main()
{
	//Pedir nombre del archivo
	char archivo[100];
	FILE *ptr, *res;
	int Array[MAX];
	int i, compInsertion = 0, compSelection = 0, compBubble = 0;

	printf("Ingresa el nombre del archivo\n");
	scanf("%s", archivo);

	ptr = fopen(archivo, "r");
	res = fopen("Resultados.txt", "w");
	
	i = LeeArch(ptr, Array);
	rewind(ptr);
	compInsertion = Insertion(Array, i);

	fprintf(res,"Insertion Sort\n--------------------------------------------------------------------\n");

	for(int j = 0; j < i; j++)
	{
		fprintf(res,"%d ", Array[j]);
	}

	fprintf(res, "Comparaciones: %d\n", compInsertion);

	i = LeeArch(ptr, Array);
	rewind(ptr);
	compSelection = Selection(Array, i);

	fprintf(res,"\n\nSelection Sort\n--------------------------------------------------------------------\n");

	for(int j = 0; j < i; j++)
	{
		fprintf(res,"%d ", Array[j]);
	}

	fprintf(res, "Comparaciones: %d\n", compSelection);

	i = LeeArch(ptr, Array);
	compBubble = Bubble(Array, i);

	fprintf(res,"\n\nBubble Sort\n--------------------------------------------------------------------\n");

	for(int j = 0; j < i; j++)
	{
		fprintf(res,"%d ", Array[j]);
	}

	fprintf(res, "Comparaciones: %d\n", compBubble);

	fclose(ptr);
	fclose(res);

	return 0;
}