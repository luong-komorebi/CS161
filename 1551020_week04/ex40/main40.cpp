// ID : 1551020
// Name : Vo Tran Thanh Luong
// ex40
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	cout << "Welcome to my program";
	int n,i;
	float x,s=0;
	cout << " Please input a number for x ";
	cin>>x;
	cout << " Please input a number for n";
	cin >> n;
	while (n<1)
	{
		cout << "Your input is invalid, Please input a new one ";
		cin>>n;
	}
	for (i=1; i<n; ++i)
	{
		s=sqrt( pow(x,i)+s);
	}
	cout << " The sum is : "<<s << endl;
	return 0;
}