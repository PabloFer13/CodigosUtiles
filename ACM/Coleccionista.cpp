#include <cstdio>

using namespace std;

long long n, suma, sumat, x;

int main()
{
	scanf("%lld", &n);

	for(int i = 1; i < n; i++)
	{
		scanf("%lld", &x);
		suma += x;
	}

	sumat = (n*(n+1))/2;

	printf("%lld", sumat - suma);

	return 0;
}