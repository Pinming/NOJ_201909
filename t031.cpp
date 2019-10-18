# include <iostream>
using namespace std;
int main()
{
	int a, b, c, d, t1, t2, t3, t4, p, q, t;
	cin >> t;
	a = t / 1000;
	b = (t / 100) % 10;
	c = (t / 10) % 10;
	d = t % 10;
	t1 = (a + 5) % 10;
	t2 = (b + 5) % 10;
	t3 = (c + 5) % 10;
	t4 = (d + 5) % 10;
	p = t1;
	t1 = t4;
	t4 = p;
	q = t2;
	t2 = t3;
	t3 = q;
	cout << t1 << t2 << t3 << t4;
}