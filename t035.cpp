#include<iostream>
using namespace std;

int main()
{
	int AH, AM, AS, BH, BM, BS;
	cin >> AH >> AM >> AS >> BH >> BM >> BS;
	AS = AS + BS;
	AM = AM + BM;
	AH = AH + BH;
	if (AS >= 60)
	{
		AM = AM + 1;
		AS = AS - 60;
	}
	if (AM >= 60)
	{
		AH = AH + 1;
		AM = AM - 60;
	}
	cout << AH << ' ' << AM << ' ' << AS << endl;
}