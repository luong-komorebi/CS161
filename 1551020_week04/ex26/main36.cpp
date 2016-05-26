// ID : 1551020
// Name : Vo Tran Thanh Luong
// ex36
#include <iostream>
using namespace std;
int main()
{
	cout << "Welcome to my program";
	int n,i,k=1;
	float s=0;
	cout << " Please input a number ";
	cin >> n;
	while (n<1)
	{
		cout << "Your input is invalid, Please input a new one ";
		cin>>n;
	}
	for ( i=1; i<=n; ++i)
	{
		k*=i;
		s= sqrt(k+s);
	}
	cout << " the sum is : " << s << endl;
	return 0;
}