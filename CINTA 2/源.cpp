#include <iostream>
using namespace std;
int gcd(int a, int b)
{
	int n;
	while (b)
	{
		n = a % b;
		a = b;
		b = n;
	}
	return a;
}

int main()
{
	int a, b, c = 0;
	cin >> a >> b;
	c = gcd(a, b);
	cout << c << endl;
	return 0;
}