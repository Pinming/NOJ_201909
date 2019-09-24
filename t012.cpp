# include <iostream>
using namespace std;
int main()
{
	double a;
	int t = 0, m = -1, n = 1;
	cin >> a;
	if (a < 1 && a > -1)
	{
		cout << 0 << endl;
	}
	else
	{
		do
		{
			m = 10 * m, n = 10 * n;
			t = t + 1;
		} while (!(a > m && a < n));
		cout << t << endl;
	}
	return 0;
}