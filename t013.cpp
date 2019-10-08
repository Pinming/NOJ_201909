#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	int n, x, y;
	double sum = 0, i;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		x = pow((-1), i);
		y = pow(2, i);
		sum = sum - (x * y * 1.0) / ((x + y) * (2 * y - x));
	}
	cout << fixed << setprecision(6) << sum << endl;
	return 0;
}

