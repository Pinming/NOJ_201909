# include <iostream>
using namespace std;
int main()
{
	int y, m, d;
	char ch;
	ch = '-';
	cin >> y >> ch >> m >> ch >> d;
	switch (m)
	{
		case 12:d = 30 + d;
		case 11:d = 31 + d;
		case 10:d = 30 + d;
		case 9:d = 31 + d;
		case 8:d = 31 + d;
		case 7:d = 30 + d;
		case 6:d = 31 + d;
		case 5:d = 30 + d;
		case 4:d = 31 + d;
		case 3:d = 28 + d;
		case 2:d = 31 + d;
		default:d = d;
	}
	cout << d << endl;
	return 0;
}