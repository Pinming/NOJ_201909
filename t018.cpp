# include <iostream>
# include <iomanip>
using namespace std;
int main()
{
	double a = 2, b = 1, i, j, sum = 0;
	for (i = 1; i <= 20; i = i++)
	{
		j = a / b;
		a = a + b;
		b = a - b;
		sum = sum + j;
	}
	cout << fixed << setprecision(6) << sum << endl;
	return 0;
}
