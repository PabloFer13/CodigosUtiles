#include <cstdio>

using namespace std;

int a, b, c;

int main()
{
	scanf("%d %d %d", &a, &b, &c);

	if(((a*a) + (b*b)) == (c*c))
	{
		printf("Si");
	}else if(((a*a) + (c*c)) == (b*b))
	{
		printf("Si");
	}else if(((c*c) + (b*b)) == (a*a))
	{
		printf("Si");
	}else
	{
		printf("No");
	}

	return 0;
}