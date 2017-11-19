#include "Pseudoprimes.h"
#include "cstdlib"
#include "ctime"

namespace Pseudoprimes
{
	int exponential_mod(int a, int n, int m)
	{
		long long ret = 1;
		unsigned int mask = 1;
		long long j = a;

		for (; mask <= n; mask *= 2)
		{
			if (mask & n)
			{
				ret = (ret * j) % m;
			}
			j = (j* j) % m;
		}

		return ret;
	}

	int pseudoprime_test(int a, int m)
	{
		return exponential_mod(m, a, a) == m ? 1 : 0;
	}

	int carmichael_test(int a)
	{
		for (int i = 2; i < a; i++)
		{
			if (!pseudoprime_test(a, i))
				return 0;
		}
		return 1;
	}
	int miller_test(int a, int m)
	{
		if (a == m)
			return 1;
		int s = 0;
		int t = a - 1;

		while (!(t %2))
		{
			s++;
			t /= 2;
		}
		
		long long temp = exponential_mod(m, t, a);
		if (temp == 1 % a)
			return 1;
		while (s--)
		{
			if (temp == a - 1)
				return 1;
			temp = (temp * temp) % a;
		}
		return 0;
	}
	int rabin_test(int a, int n)
	{
		srand(time(NULL));

		for (int i = 0; i < n; i++)
		{
			if (!miller_test(a, rand() % (a - 1) + 1))
				return 0;
		}
		return 1;
	}
	int primality_test(int a)
	{
		if (miller_test(a, 2) && miller_test(a, 3) && miller_test(a, 5) && miller_test(a, 7))
			return 1;
		else
			return 0;
	}

}