#include<iostream>
using namespace std;
int main()
{
	int i, j, m, sum = 0;
	for (m = 2; m <= 1000; m++)
	{
		for (i = 1; i <= m / 2; i++)
			if (m % i == 0)
				sum = sum + i;
		if (sum == m)
		{
			for (j = 1; j <= m / 2; j++)
			{
				for (j = 1; j <= m / 2; j++)
				{
					if (j == m / 2)
						cout << sum << "=";
				}
				for (j = 1; j <= m / 2; j++)
				{
					if (m % j == 0 && m / j != 2)
						cout << j << "+";
					if (m % j == 0 && m / j == 2)
						cout << j << endl;
				}
			}
		}
		sum = 0;
	}
	return 0;
}