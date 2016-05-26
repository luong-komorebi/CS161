// ID : 1551020
// Name : Vo Tran Thanh Luong
// ex24
#include <iostream>
using namespace std;
int main()
{
	cout << "Welcome to my program";
	int a,b,i;
	cout << " Please input a number ";
	cin >> a;
	while (a<1)
	{
		cout << "Your input is invalid, Please input a new one ";
		cin>>a;
	}
	for (i=1; i<=a; ++i)
	{
		if ( (a%i==0) && (i%2!=0) )
			cout << i << endl;
	}
	cout << " are all devisor of " << a <<endl;
	return 0;
}