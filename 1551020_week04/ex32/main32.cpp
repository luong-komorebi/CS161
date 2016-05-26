// ID : 1551020
// Name : Vo Tran Thanh Luong
// ex32
#include <iostream>
using namespace std;
int main()
{
	cout << "Welcome to my program";
	int n,i;
	cout << " Please input a number ";
	cin >> n;
	while (n<=1)
	{
		cout << "Your input is invalid, Please input a new one ";
		cin>>n;
	}
	for (i=1; i<=n ; ++i)
	{
	if ( i*i==n)
		cout<< n <<"  is a square number "<< endl;
	}
	if (i==n)
		cout << n << "  is not a square number"<< endl;
	return 0;
}