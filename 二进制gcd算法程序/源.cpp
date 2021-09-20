#include <iostream>
using namespace std;
unsigned int gcd(unsigned int a, unsigned int b)
{
	int m, n;
	if (a == 0) return b;
	if (b == 0) return a;
	for (m = 0; 0 == (a & 1); ++m)
	{
		a >>= 1;
	}
	for (n = 0; 0 == (b & 1); ++n)
	{
		b >>= 1;
	}
	if (n < m)
	{
		m = n;
	}
	while (true)
	{
		if (a < b)
		{
			a = a ^ b;
			b = b ^ a;
			a = a ^ b;
		}
		if (0 == (a -= b))
		{
			return b << m;
		}
		while (0 == (a & 1))
		{
			a >>= 1;
		}
	}
}
unsigned int main()
{
	unsigned int a, b, c = 0;
	cin >> a >> b;
	c = gcd(a, b);
	cout << c << endl;
	return 0;
}