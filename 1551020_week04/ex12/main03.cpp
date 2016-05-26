// ID : 1551020
// Name : Vo Tran Thanh Luong
// ex12
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	cout<< " Welcome to my program ";
	float sum,n; int a,i=1;
	cout << " Please enter a number for n    ";
	cin>> a;
	while (a<1)
	{
		cout << " your input is invalid . Please enter another one    ";
		cin>>a;
	}
	cout << " Please enter a number for x     ";
	cin >>n;
	sum=0;
	while ( i <= a)
	{
		sum+=pow(n,i);
		i++;
	}
	cout << " this is your result : " << sum << endl;

	return 0;
}