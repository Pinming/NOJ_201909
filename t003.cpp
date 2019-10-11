# include <iostream>
# include <iomanip>
using namespace std;
# define PI 3.1415926
int main()
{
	double a, b, c, t, avg;
	cin >> a >> b >> c;
	t = a + b + c;
	avg = (a + b + c) / 3;
	cout << setiosflags(ios::fixed) << setprecision(6);
	cout << t << endl;
	cout << avg << endl;
	return 0;
}