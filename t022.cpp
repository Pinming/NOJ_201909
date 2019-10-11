# include <iostream>
using namespace std;
int main()
{
	int k, x, y, j;
	cin >> k;
	for (y = k + 1; y > k && y <= 2 * k; y++)
	{
		if (k * y % (y - k) == 0)
		{
			x = k * y / (y - k);
			cout << "1/" << k << "=" << "1/" << x << "+" << "1/" << y << endl;
		}
	}
}