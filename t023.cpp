# include <iostream>
using namespace std;
int main()
{
	int N, i = 7,a;
	cin >> N;
	for (i = 1; i <= N; i++)
	{
		if (i % 7 == 0)
			cout << i << " ";
		else
		{
			a = i;
			while (a > 0)
			{
				if (a % 10 == 7)
					cout << i << ' ';
				a = a / 10;
			}
		}
	}
	return 0;
}