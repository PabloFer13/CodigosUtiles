#include <cstdio>
#include <cmath>

using namespace std;

int n, m, logDos, i, aux, menor, nums, x, y, j;

float N, M;

int main()
{
	scanf("%d %d", &n, &m);

	if(n < m)
	{
		N = n;
		M = m;
		menor = 100000;
		//aux = M / N;

		logDos = ceil(log2(M/N));

		aux = pow(2,logDos);

		while(((n-i)*aux) >= m)
		{
			nums = (i+logDos) + (((n-i)*aux) - m);
			//nums++;

			if(nums < menor)
			{
				menor = nums;
			}

			i++;
		}

		for(i = 1; i <= logDos; i++)
		{
			x = n*(pow(2,i));
			y = n* (pow(2,i-1));
			j = 0;
			while((x-j) > y && ((x-j) * pow(2,logDos-i)) > m)
			{
				nums = ((i+j+1) + (((x-j) * pow(2,logDos-i))) - m);
				if(nums < menor)
				{
					menor = nums;
				}
				j++;
			}
		}

		printf("%d", menor);
	}else
	{
		printf("%d", n-m);
	}

	return 0;
}