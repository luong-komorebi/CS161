// ID : 1551020
// Name : Vo Tran Thanh Luong
// ex48
#include <iostream>
using namespace std; 
int main()
{
	cout << " Welcome to my program";
	int n, i,r, tich=1;
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
		if (n%2!=0)
			tich*=r;
	}

cout << " This is your result : " << tich << endl;
return 0;
}