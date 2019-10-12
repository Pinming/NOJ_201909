# include <iostream>
using namespace std;
int main()
{
	int a, b, c, sum, i; 
	cin >> a >> b >> c;
	for (i = 1; 7 * i + c <= 100; i++)
	{
		sum = 7 * i + c;
		if (((sum - a) % 3 == 0) && ((sum - b) % 5 == 0))
		{
			cout << sum << ' ';
			return 0;
		}
	}
	cout << -1 << endl;
	return 0;
}