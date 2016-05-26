// ID : 1551020
// Name : Vo Tran Thanh Luong
// ex52
#include <iostream>
using namespace std; 
int main()
{
	cout << " Welcome to my program";
	int n, i,r, min=10;
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
		if ( r< min )
			min = r;
	}
	cout << " Min is : " << min << endl;
	return 0;
}
