# include <iostream>
using namespace std;
int main()
{
	bool hui(int n);
		int a;
		while (cin >> a)
		{
			if (hui(a))
				cout << "yes" << endl;
			else
				cout << "no" << endl;
			return 0;
		}
		return 0;
}
bool hui(int n)
{
	unsigned i = n;
	unsigned m = 0;
	while (i > 0)
	{
		m = m * 10 + i % 10;
		i /= 10;
	}
	return m == n;
}