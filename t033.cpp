# include <iostream>
using namespace std;
double fun(double x, double a0, double a1 = 0, double a2 = 0, double a3 = 0)
{
	double t;
	t = a0 + a1 * x + a2 * x * x + a3 * x * x * x;
	return t;
}
int main()
{
	double x, a0, a1, a2, a3, out;
	int n;
	cin >> x >> n;
	if (n == 0) 
	{
		cin >> a0;
		a1 = 0;
		a2 = 0;
		a3 = 0;
	}
	if (n == 1) 
	{
		cin >> a0 >> a1; 
		a2 = 0;
		a3 = 0;
	}
	if (n == 2)
	{
		cin >> a0 >> a1 >> a2;
		a3 = 0;
	}
	if (n == 3) cin >> a0 >> a1 >> a2 >> a3;
	cout << fun(x, a0, a1, a2, a3) << endl;
}