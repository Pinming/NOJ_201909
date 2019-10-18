#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int fenzi, fenmu;
	int fenzisave, fenmusave;
	int array[10];
	int i;
	for (fenmu = 1234; fenmu <= 98765; fenmu++)
	{
		i = 0;
		fenzi = fenmu * n;
		fenzisave = fenzi;
		fenmusave = fenmu;
		if (fenzisave >= 10234 && fenzisave <= 98765)
		{
			while (fenzisave)
			{
				array[i++] = fenzisave % 10;
				fenzisave /= 10;
			}
			while (fenmusave)
			{
				array[i++] = fenmusave % 10;
				fenmusave /= 10;
			}
			bool flag = true;
			if (i == 9) array[i] = 0;
			sort(array, array + 10);

			for (i = 0; i <= 9; i++)
			{
				if (array[i] != i)
				{
					flag = false;
					break;
				}
			}

			if (flag) cout << fenzi << '/' << setw(5) << setfill('0') << fenmu << '=' << n << endl;
		}
	}
	return 0;
}