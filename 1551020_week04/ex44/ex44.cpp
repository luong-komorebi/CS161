// ID : 1551020
// Name : Vo Tran Thanh Luong
// ex44
#include <iostream>
using namespace std;
int main()
{
	int n,sum=0,i=10,r;
	cout << " Please input a number for n";
	cin >> n;
	while (n<1)
	{
		cout << "Your input is invalid, Please input a new one ";
		cin>>n;
	}
	while (n>1)
	{
		r=n%i;
		sum+=r;
		n/=i;
	}
	cout<< " Sum   " << sum;
	return 0;
}