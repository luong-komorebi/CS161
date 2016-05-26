// ID : 1551020
// Name : Vo Tran Thanh Luong
// ex28
#include <iostream>
using namespace std;
int main()
{
	cout << "Welcome to my program";
	int a,b,sum=0,i;
	cout << " Please input a number ";
	cin >> a;
	while (a<1)
	{
		cout << "Your input is invalid, Please input a new one ";
		cin>>a;
	}
	for (i=1; i<=a; ++i)
	{
		if  (a%i==0) 
			sum= sum+i;
	}
	cout << "this is the sum of all devisors:  "<<sum << endl;
	return 0;
}
	