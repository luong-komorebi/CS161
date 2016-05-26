// ID : 1551020
// Name : Vo Tran Thanh Luong
// ex16
#include <iostream>
#include < math.h>
using namespace std;
int main()
{
	cout<< " Welcome to my program ";
	float x, sum; int a,i=2,mau=1;
	cout << " Please enter a number for n ";
	cin>> a;
	cout << " Please enter a number for x";
	cin >> x;
	while (a<1)
	{
		cout << " your input is invalid . Please enter another one ";
		cin>>a;
	}
	sum=x;
	while ( i <= a)
	{
		mau+= i;
		sum+= (pow(x,i) / mau);
		i++;
	}
	cout << " this is your result : " << sum << endl;

	return 0;
}