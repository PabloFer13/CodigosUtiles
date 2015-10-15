#include <cstdio>
#include <cmath>

using namespace std;

long long casos, monedas, ind, res;

int main()
{
	scanf("%lld", &casos);

	while(casos--)
	{
		scanf("%lld %lld", &monedas, &ind);

		res = pow((monedas * ind),2)+2;

		printf("%lld\n", res);
	}

	return 0;
}