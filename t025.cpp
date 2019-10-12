# include <iostream>
using namespace std;
int main()
{
	int i, a = 1, b = 0, t, a1;
	cin >> t;
	for (i = 0; i < t; i++)
	{
		a1 = a;
		a = b;
		b = 3 * a1 + 2 * b;
	}
	cout << a << ' ' << b << endl;}