/*
y=0.1x (x<=10)
y=1+0.075(x-10) (10<x<20)
y=1.75+0.05(x-20) (20<=x<40)
y=2.75+0.03(x-40) (40<=x<60)
y=3.35+0.015(x-60)(60<=x<100)
y=3.95+0.01(x-100)(x>=100)
*/
# include <iostream>
# include <iomanip>
using namespace std;
int main()
{
	double x, y;
	cin >> x;
	if (x <= 10.0)
		y = 0.1 * x;
	else
		if (x < 20.0)
			y = 1.0 + 0.075 * (x - 10.0);
		else
			if (x < 40.0)
				y = 1.75 + 0.05 * (x - 20.0);
			else
				if (x < 60.0)
					y = 2.75 + 0.03 * (x - 40.0);
				else
					if (x < 100.0)
						y = 3.35 + 0.015 * (x - 60.0);
					else
						if (x > 100.0)
							y = 3.95 + 0.01 * (x - 100.0);
	cout << setiosflags(ios::fixed) << setprecision(6);
	cout << y << endl;
	return 0;
}