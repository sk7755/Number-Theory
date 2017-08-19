#include <cstdio>
#include "Wilson_Fermat_Theorem.h"

int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 2; i <= n; i++)
	{
		if (IsWilsonPrime(i))
			printf("%d ", i);
	}

	return 0;
}