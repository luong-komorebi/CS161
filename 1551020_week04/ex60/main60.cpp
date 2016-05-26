// ID : 1551020
// Name : Vo Tran Thanh Luong
// ex60
#include <iostream>
using namespace std; 
int main()
{
	cout << " Welcome to my program";
	int n, i,r, min=10;
	bool a;
	cout << " Please input a number : ";
	cin>>n;
	while (n<1)
	{
		cout<< " Your input is invalid , please input another one : ";
		cin >>n;
	}
	for (i=10; n>=1; n=n/i)
	{
		r=n%i;
		if ( r > min )
			{
				a= false;
				cout << " This number has its elements not ascending from left to right";
				break;
			}
		else a=true;
		min=r;
	}
	if (a==true)
		cout << " This number has its elements ascending from left to right ";
	return 0;
	}

			