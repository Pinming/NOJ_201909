# include <iostream>
using namespace std;
int main()
{
	int i, n, m, x = 0;
	cin >> n;
	for (m = 0; m < n; m++) 
	{
		cin >> i;
		if (i == 0) 
		{
			break;
		}
		if (i >= 100) 
		{
			x = x + i / 100;
			i = i % 100;
		}
		if (i >= 50) 
		{
			x = x + i / 50;
			i = i % 50;
		}
		if (i >= 10) 
		{
			x = x + i / 10;
			i = i % 10;
		}
		if (i >= 5) 
		{
			x = x + i / 5;
			i = i % 5;
		}
		if (i >= 2) 
		{
			x = x + i / 2;
			i = i % 2;
		}
		if (i >= 1)	x++;
	}
	cout << x << endl;
	return 0;
}
