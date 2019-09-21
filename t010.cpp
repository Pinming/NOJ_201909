# include <iostream>
using namespace std;
int main()
{
	int x, y, a, b, c, d;
	char ch;
	ch = ',';
	cin >> x >> ch >> y;
	a = (x - 2) * (x - 2) + (y - 2) * (y - 2);
	b = (x + 2) * (x + 2) + (y - 2) * (y - 2);
	c = (x - 2) * (x - 2) + (y + 2) * (y + 2);
	d = (x + 2) * (x + 2) + (y + 2) * (y + 2);
	if (a <= 1 || b <= 1 || c <= 1 || d <= 1)
		cout << "10" << endl;
	else
		cout << "0" << endl;
	return 0;
}