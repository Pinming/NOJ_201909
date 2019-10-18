# include <iostream>
# include <cmath>
using namespace std;
int fun(int a, int b) 
{
	int flag = 0;
	for (int j = a; j <= b; j++) 
	{
		for (int k = 2; k * k <= j; k++) 
		{
			if (j % k == 0)
			{ 
				flag++;
				break;
			}
		}
	}
	return flag;
}
int main() {
	int m = 1671800, n, cnt, count = 0;
	cin >> n;
	for (int i = 1;; i++) 
	{
		cnt = fun(m, m + 99);
		if (cnt == 100) 
		{
			count++;
		}
		if (count == n) 
		{
			cout << m << " " << m + 99;
			break;
		}
		m += 100;
	}
	return 0;
}