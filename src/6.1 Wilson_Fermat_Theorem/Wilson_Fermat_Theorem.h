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

#endif