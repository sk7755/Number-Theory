#include <cstdio>
#include "Wilson_Fermat_Theorem.h"

int main()
{
	int a, b, p;
	scanf("%d %d %d", &a,&b,&p);

	printf("%dx = %d (mod %d)\n", a, b, p);
	printf("x = %d (mod %d)\n", Linear_Congruence(a, b, p),p);

	return 0;
}