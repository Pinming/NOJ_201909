# include <iostream>
using namespace std;
int main()
{
	int a, b, c, d, i,t1,t2;
	cin >> a >> b >> c;
	d = a % b;
	cout << a / b << '.';
	for (i = 0; i <= c-2; i++) 
	{
		d = 10 * d;
		cout << d / b;
		d = d % b;
	}
	i++;
	d = 10 * d;
	t1 = d / b;
	d = d % b;
	i++;
	d = 10 * d;
	t2 = d / b;
	if (t2 >= 0 && t2 < 5) 	cout << t1;
	else cout << t1 + 1;
}