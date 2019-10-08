# include <iostream>
# include <cmath>
# include <iomanip>
using namespace std;
int main()
{
	 double s=1, pi=0, n=1, t=1;
  while(fabs(t)>1e-6)
    pi=pi+t, n=n+2, s=-s, t=s/n;
  cout << fixed << setprecision(6) << pi*4 << endl;
  return 0;
}