int gcd(int a, int b)
{
	while (b)
	{
		long long tmp = b;
		b = a%b;
		a = tmp;
	}

	return a;
}

int Modulo_of_Power(int a, int k, int m)
{
	long long ret = 1;
	long long value = a;
	int mask = 1;
	for (int i = 0; i<32; i++)
	{
		if (mask & k)
			ret = (ret * value) % (long long)m;
		value = (value * value) % (long long)m;
		mask *= 2;
	}
	return (int)ret;
}

int Pollard_Factorization(int n)
{
	long long value = 2;
	int d = 1;
	
	for(int k = 2; k<n;k++)
	{
		int new_value = Modulo_of_Power(value, k, n);
		d = gcd(new_value - 1, n);
		value = new_value;
		
		if (d != 1 && d != n && d != -1 && d != -n)
			return d;
	}

	return 1;
}