#include <cstdio>
#include <cstdlib>

using namespace std;

char Inicial[200];
char Final[200];
int n, orig, dest, der, izq, res;

int main()
{
	scanf("%d", &n);
	scanf("%s", Inicial);
	scanf("%s", Final);

	for(int i = 0; i < n; i++)
	{
		orig = Inicial[i] % 48;
		dest = Final[i] % 48;

		der = 0;
		izq = 0;

		if(orig > dest)
		{
			der = (10 - orig) + dest;
			izq = orig - dest;
		}else if(dest > orig)
		{
			der = dest - orig;
			izq = 10 + orig - dest;
		}

		der < izq ? res += der : res += izq;
	}

	printf("%d", res);

	return 0;
}