# include <iostream>
# include <math.h>
# include <iomanip>
using namespace std;
int main()
{
	double f, d;
	cin >> d;
	double ud;
	ud = ceil(d);
	if (ud <= 2)
		f = 7;
	if (ud > 2)
		if (ud <= 15)
			f = 7 + 1.5 * (ud - 2);
		else
			f = 29.5 + 2.1 * (ud - 15);
	cout << setiosflags(ios::fixed) << setprecision(6);
	cout << f << endl;
}