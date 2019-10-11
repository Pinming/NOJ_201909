# include <iostream>
# include <iomanip>
# include <cmath>
using namespace std;
int main()
{
	double i;
	double sum = 0, j = 0, t, m, a;
	for (i = 1; i <= 500000.5; i = i+1)
	{
		m = pow(-1.0, i - 1);
		t = 2 * i - 1;
		a = 1.0 / t;
		j = m * a;
		sum = sum + j;
	}
	cout << fixed << setprecision(6) << 4 * sum << endl;
	return 0;
}
