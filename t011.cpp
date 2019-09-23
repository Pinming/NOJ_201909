# include <iostream>
using namespace std;
int main()
{
	int i1, i2, i3, i = 1, s1 = 1, s2 = 1, s0 = s2 + 2 * s1, sum = s1 + s2, j = sum;
	while (!((j < 100) && (sum >= 100)))
	{
		j = sum;
		sum = sum + s0;
		s2 = s1;
		s1 = s0;
		s0 = s2 + 2 * s1;
		i++;
		i1 = i;
	}
	cout << i1 << endl;

	while (!((j < 1000) && (sum >= 1000)))
	{
		j = sum;
		sum = sum + s0;
		s2 = s1;
		s1 = s0;
		s0 = s2 + 2 * s1;
		i++;
		i2 = i;
	}
	cout << i2 << endl;

	while (!((j < 10000) && (sum >= 10000)))
	{
		j = sum;
		sum = sum + s0;
		s2 = s1;
		s1 = s0;
		s0 = s2 + 2 * s1;
		i++;
		i3 = i;
	}
	cout << i3 << endl;

	return 0;
}

