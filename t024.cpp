# include <iostream>
# include <cmath>
using namespace std;
int power(int x, int y)
{
	int t = x;
	if (y == 0) t=1;
	else 
	{
		for (int i = 2; i <= y; i++)
			t = t * x;
	}
	return t;
}
int main()
{
	int m, n, g=0, s=0, u, r, k, u1;
	cin >> m >> n;
		for (u = power(10, n - 1); u < power(10, n); u++)
		{
			u1 = u;
			for (r = 1; r <= n - 1; r++)
			{
				if (u1 % 10 != m)	
					u1 = u1 / 10;
			}
			if (u1 % 10 == m) goto A;
			else continue;
			A:if (u % m != 0)
			{
				g++;
				s = s + u;
			}
		}
	cout << g << ' ' << s << endl;
}