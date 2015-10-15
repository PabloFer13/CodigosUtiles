#include <cstdio>
#include <cmath>

using namespace std;

int a, b, i, root, res;
bool flag = false, tok = false;

int main()
{
	/*scanf("%d",&a);
	
	b = sqrt(a);
	b *= b;

	b == a ? flag = true : flag = false;
	i = 2;

	while(tok == false && i < (a/2))
	{
		if((a%i) == 0 && i != b)
		{
			tok == true;
		}
		i++;
	}

	if(tok == true && flag == true)
	{
		printf("ambos");
	}else if(tok)
	{
		printf("rectangulo");
	}else if(flag)
	{
		printf("cuadrado");
	}else
	{
		printf("ninguno");
	}*/

	scanf("%d", &a);

	root = sqrt(a);

	if((root * root) == a)
	{
		flag = true;
	}

	i = 2;

	while(i <= (a/2) &&  (a%i) != 0)
	{
		i++;
	}

	if(i != sqrt(a) && i <= (a/2))
	{
		tok = true;
	}

	if(tok == true && flag == true)
	{
		printf("ambos");
	}else if(tok)
	{
		printf("rectangulo");
	}else if(flag)
	{
		printf("cuadrado");
	}else
	{
		printf("ninguno");
	}

	return 0;
}