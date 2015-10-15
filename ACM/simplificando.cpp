#include <cstdio>

using namespace std;

long long numA, denA, numB, denB, numRes, denRes;

void suma()
{
	numRes = (numA * denB) + (numB * denA);
	denRes = (denA * denB);

	return;
}

void simplifica()
{
	long long coef = 2, auxUno, auxDos;

	if((numRes % denRes) == 0)
	{
		coef = numRes / denRes;
		printf("%lld",coef);
	}else
	{
		auxUno = numRes/2;
		auxDos = denRes/2;
		while(coef <= auxUno && coef <= auxDos)
		{
			if((numRes % coef) == 0 && (denRes % coef) == 0)
			{
				numRes /= coef;
				denRes /= coef;
				auxUno = numRes/2;
				auxDos = denRes/2;
			}else
			{
				coef++;
			}
		}
		printf("%lld %lld", numRes, denRes);
	}
}


int main()
{
	scanf("%lld %lld", &numA, &denA);
	scanf("%lld %lld", &numB, &denB);

	suma();
	simplifica();

	return 0;
}