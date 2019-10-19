#include<iostream>
using namespace std;
int main()
{
	int m, n, j, i;
	int sa, sb;
	sa = 0;
	cin >> m >> n;
	for (i = 1; i < m; i++)
		if (m % i == 0)
			sa += i;
	sb = 0;
	for (j = 1; j < n; j++)
		if (n % j == 0)
			sb += j;
	if (sa == n && sb == m)
		cout << 'Y' << 'E' << 'S' << endl;
	else
		cout << 'N' << 'O' << endl;
	return 0;
}