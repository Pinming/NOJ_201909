# include <iostream>
using namespace std;
int main()
{
	int p;
	cin >> p;
	if (p < 60 && p >= 0)
		cout << "E" << endl;
	else
		if (p >= 60 && p <= 69)
			cout << "D" << endl;
		else
			if (p >= 70 && p <= 79)
				cout << "C" << endl;
			else
				if (p >= 80 && p <= 89)
					cout << "B" << endl;
				else
					if (p >= 90 && p <= 100)
						cout << "A" << endl;
	return 0;
}