#ifndef __WILSON_FERMATE_THEOREM_H__
#define __WILSON_FERMATE_THEOREM_H__

//if n is prime return 1 else return 0
//<Input>	small integer n
//<Output>	if n is prime return 1 else return 0
//<Time>	O(n)
int IsWilsonPrime(long long n);

//Solve linear congruence ax = b (mod p)
//<Input>
//a,b,p corresponding with ax = b (mod p)
//p is prime, a is relatively prime with p
//<Output>
//Linear Congruence solution
//<Time>
//O(p)
int Linear_Congruence(int a, int b, int p);

//Factorization n by Pollard p-1 method
//<Input>
//n which you want to factorize
//<Output>
//Non trivial factor of n
//if n is prime, return 1;
//<Time>
//O(n) if n is prime
int Pollard_Factorization(int n);

#endif