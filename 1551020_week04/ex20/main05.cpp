// ID : 1551020
// Name : Vo Tran Thanh Luong
// ex01
#include <iostream>
using namespace std;
int main()
{
	cout << " Welcome to my program ";
	int n,i =1;
	cout << " Please enter a number ";
	cin >> n;
	while ( n < 1)
	{
		cout << " Your input is invalid. Please enter another one . ";
		cin >> n;
	}

	for ( i=1; i<=n ; ++i)
	{
		if ( n%i==0)
		cout << i << endl;
	}
	cout << " are all devisor of" << n <<endl;
	return 0;
}
	