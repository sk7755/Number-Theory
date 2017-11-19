#include "Wilson_Fermat_Theorem.h"

int Linear_Congruence(int a, int b, int p)
{
	int inverse = a;
	for (int i = 1; i < p - 2; i++)
		inverse = (inverse * a) % p;

	return (b * inverse) % p;
}