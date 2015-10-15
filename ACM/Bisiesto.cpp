#include <cstdio>

using namespace std;

int N, anio;

int main()
{
	scanf("%d", &N);

	while(N--)
	{
		scanf("%d", &anio);

		if((anio%4) == 0)
		{
			if((anio%100) == 0)
			{
				if((anio%400) == 0)
				{
					printf("S\n");
				}else
				{
					printf("N\n");
				}
			}else
			{
				printf("S\n");
			}
		}else
		{
			printf("N\n");
		}
	}

	return 0;
}