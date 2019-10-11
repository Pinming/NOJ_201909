#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b;
	c = 1;
	while (b > 0) {
		c = c * a;
		c = c % 1000;
		b = b - 1;
	};
	cout << c << endl; 
	return 0;
}
