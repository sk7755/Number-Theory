#include <cstdio>
#include "Wilson_Fermat_Theorem.h"

void Factorization(int n)
{
	int f = Pollard_Factorization(n);

	if (f == 1)
	{
		printf("%d ", n);
		return;
	}
	
	Factorization(f);
	Factorization(n/f);
}

int main()
{
	int n;

	scanf("%d", &n);

	Factorization(n);
	return 0;
}