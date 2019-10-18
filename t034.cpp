#include<iostream>
using namespace std;
double rect_area(double length, double width=0)
{
    double s;
    if (width!=0) s=length*width;    
    else s=length*length;

    return s;
}
int main()
{
    double length1, width1, length2, width2;
    cin >> length1;
    cin >> length2 >> width2;
    cout << length1*length1 << endl;
    cout << rect_area(length2, width2) << endl;
    return 0;
}