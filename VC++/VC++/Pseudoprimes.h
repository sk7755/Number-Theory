#ifndef __PSEUDOPRIMES_H__
#define __PSEUDOPRIMES_H__

namespace Pseudoprimes
{
	int exponential_mod(int a, int n, int m);
	int pseudoprime_test(int a, int m);
	int carmichael_test(int a);
	int miller_test(int a, int m);
	int rabin_test(int a, int n);
	int primality_test(int a);
}

#endif