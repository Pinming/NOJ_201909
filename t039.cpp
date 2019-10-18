# include <iostream>
using namespace std;
template <typename T> void sort(T x, T y, T z)
{
	T t;
	if (x > y) {
		t = x, x = y, y = t;
	}
	if (x > z) {
		t = x, x = z, z = t;
	}
	if (y > z) {
		t = y, y = z, z = t;
	}
	cout << x << ' ' << y << ' ' << z << endl;
}
int main() {
	int a, b, c;
	char str[4]; // 避免数组越界
	double l, m, n;
	cin >> a >> b >> c;
	cin >> str;
	cin >> l >> m >> n;
	sort(a, b, c);
	sort(str[0], str[1], str[2]);
	sort(l, m, n);
	return 0;
}
