#include<iostream>
using namespace std;
int egcd(int a, int b, int s0, int s1, int r0, int r1, int q)
{
	if (b == 0)
	{
		cout << a << ' ' << r0 << ' ' << s0;
	}
	else
	{
		egcd(b, a % b, r1, r0 - q * r1, s1, s0 - q * s1, a / b);
	}
}
int main()
{
	int a, b, r0, r1, s0, s1, q;
	r0 = 1;
	r1 = 0;
	s0 = 0;
	s1 = 1;
	q = 0;
	cin >> a >> b;
	egcd(a, b, r0, r1, s0, s1, q);
	return 0;
}