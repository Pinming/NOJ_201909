#include <iostream>
using namespace std;
int main()
{
	int monkey = 1, ps = 1, p = 1, i, q, t;
	while (monkey <= 5)
	{
		if (p % 5 == 1 && p / 5 != 0)
		{
			p = (p / 5) * 4;
			monkey++;
		}
		else
		{
			ps++;
			p = ps;
			monkey = 1;
		}
	}
	t = ps;
	for (i = 1; i <= 5; i = i + 1)
	{
		q = (t - 1) * 4.0 / 5;
		t = q;
	}
	cout << ps << ' ' << t << endl;
	return 0;
}
