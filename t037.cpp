#include<iostream>
// #include<iomanip>
using namespace std;
double jifen(double m, double n)
{
	double s = 0, j, y1, y2;
	while (m <= n - 0.0001)
	{
		y1 = 1.0 / (1.0 + m * m);
		y2 = 1.0 / (1.0 + (m + 0.0001) * (m + 0.0001));
		j = (y1 + y2) * 0.00005;
		s = s + j;
		m = m + 0.0001;
	}
	return s;
}
int main()
{
	double a, b, m;
	cin >> a >> b;
	if (a > b)
	{
		m = a;
		a = b;
		b = m;
	}
	cout << jifen(a, b) << endl;
}