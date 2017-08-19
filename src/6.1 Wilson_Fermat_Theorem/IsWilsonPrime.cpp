#include "Wilson_Fermat_Theorem.h"

int IsWilsonPrime(long long n)
{
	long long a = 1;

	for (long long i = 2; i < n; i++)
		a = (a*i) % n;

	return a == n-1 ? 1 : 0;
}