# include <iostream>
# include <iomanip>
using namespace std;
int main()
{
	int n, m, j, i;
	double q, sum = 0;
	cin >> n >> m;
	if (n >= m)
	{
		j = m;
		m = n;
		n = j;
	}
	for (i = 0; n+i!=m+1; i++)
	{
		q = 1.0 / (n + i) / (n + i);
		sum = sum + q;
	}
	cout << fixed << setprecision(5) << sum << endl;
}