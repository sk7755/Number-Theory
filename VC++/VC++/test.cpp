#include "Pseudoprimes.h"
#include <iostream>

using namespace Pseudoprimes;
using namespace std;

int main()
{
	while (1)
	{
		int op, a, m;
		cin >> op;
		switch (op)
		{
		case 1:
			cin >> a >> m;
			if (pseudoprime_test(a, m))
				cout << a << " is pseudo prime to the base " << m << endl;
			else
				cout << a << " is not pseudo prime to the base " << m << endl;
			break;
		case 2:
			cin >> a;
			for (int i = 2; i <= a; i++)
			{
				if (carmichael_test(i))
					cout << i << ' ';
			}
			cout << endl;
			break;
		case 3:
			cin >> a >> m;
			cout << "Passing miller test" << endl;
			for (int i = 2; i <= a; i++)
			{
				if (miller_test(i,m))
					cout << i << ' ';
			}
			cout << endl;
			break;
		case 4:
			cin >> a;
			
			cout << "Miller Prime 2,3,5,7" << endl;
			for (int i = 2; i <= a; i++)
			{
				if (primality_test(i))
					cout << i << ' ';
			}
			cout << endl;
			break;
		case 5:
			cin >> a;

			cout << "Rabin Prime" << endl;
			for (int i = 2; i <= a; i++)
			{
				if (rabin_test(i, 100))
					cout << i << ' ';
			}
			cout << endl;
			break;
		}
	}
}