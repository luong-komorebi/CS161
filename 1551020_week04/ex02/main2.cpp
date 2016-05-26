// ID : 1551020
// Name : Vo Tran Thanh Luong
// ex08
#include <iostream>
using namespace std;
int main()
{
	cout<< " Welcome to my program ";
	float sum; int a,i=1;
	cout << " Please enter a number ";
	cin>> a;
	while (a<1)
	{
		cout << " your input is invalid . Please enter another one";
		cin>>a;
	}
	sum=0;
	while ( i <= a)
	{
		sum+=((2*i+1)/(2*i+2));
		i++;
	}
	cout << " this is your result : " << sum << endl;

	return 0;
}