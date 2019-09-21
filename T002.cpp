# include <iostream>
# include <iomanip>
using namespace std;
# define PI 3.1415926
int main()
{
	double r, h, l, s, sq, vq, vz;
	cin >> r >> h;
	l = 2 * PI * r;
	s = PI * r * r;
	sq = 4 * PI * r * r;
	vq = 4.0 / 3 * PI * r * r * r;
	vz = s * h;
	cout << setiosflags(ios::fixed) << setprecision(2);
	cout << l << endl;
	cout << s << endl;
	cout << sq << endl;
	cout << vq << endl;
	cout << vz << endl;
	return 0;
}