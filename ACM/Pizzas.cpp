#include <cstdio>

using namespace std;

int pizzas, puebla, guanajuato, chihuahua;

int main()
{
	scanf("%d %d %d", &puebla, &chihuahua, &guanajuato);
	
	while(puebla > 0 && guanajuato > 0)
	{
		pizzas++;
		puebla--;
		guanajuato--;
	}

	while(puebla > 0 && chihuahua > 0)
	{
		pizzas++;
		puebla-=2;
		chihuahua--;
	}

	if(puebla > 0)
	{
		(puebla % 4) == 0 ? pizzas += (puebla/4) : pizzas += ((puebla/4)+1);
	}
	
	if(chihuahua > 0)
	{
		(chihuahua % 2) == 0 ? pizzas += (chihuahua/2) : pizzas += ((chihuahua/2)+1);
	}

	if(guanajuato > 0)
	{
		pizzas += guanajuato;
	}

	printf("%d", pizzas);

	return 0;
}