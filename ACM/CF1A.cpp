#include <cstdio>

using namespace std;

unsigned long long n,m,a,x,y;

int main()
{
	scanf("%lld",&n);
	scanf("%lld",&m);
	scanf("%lld",&a);

	x=n/a;
	y=m/a;

	if(n%a!=0)
	{
		x++;
	}

	if(m%a!=0)
	{
		y++;
	}



	printf("%lld",x*y);
	return 0;
}