# include <iostream>
using namespace std;
int main()
{
	int a, b, c, i, j, m;
	cin >> a >> b;
	if (a > b) {
		c = b;
		b = a;
		a = c;
	}
	for (i = a; i <= b; i++)
	{
		if (i == 2)
			cout << "2" << ' ';
		else
		{
			for (j = 2; j < i; j++)
			{
				m = i % j;
				if (m == 0)
					goto E;
			}
			cout << i << ' ';
    	E:continue;
		}
	}
	return 0;
}
