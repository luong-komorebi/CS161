// ID : 1551020
// Name : Vo Tran Thanh Luong
// ex68
#include <iostream>
#include <math.h>
using namespace std; 
int main()
{
	cout << " Welcome to my program";
	float x, sum; int a,i;
	cout << " Please enter a number for n ";
	cin>> a;
	cout << " Please enter a number for x";
	cin >> x;
	while (a<1)
	{
		cout << " your input is invalid . Please enter another one ";
		cin>>a;
	}
	sum=0;
	for ( i=1; i<=a; ++i)
	{
		sum+= (pow(-1.0, a*1.0)*pow(x*1.0, 2.0*a));
	}
	cout << " Sum :  " << sum << endl;
	return 0;
}
