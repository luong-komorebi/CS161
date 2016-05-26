// ID : 1551020
// Name : Vo Tran Thanh Luong
// ex56
#include <iostream>
using namespace std; 
int main()
{
	cout << " Welcome to my program";
	int n, i,r=0;
	bool odd;
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
		if (r%2!= 0)
			{
				odd=true;
			}
		else
			{
				odd= false;
				break;
			}
	}
	if ( odd==false ) 
		cout << " inside  the given number arent all odd numbers" << endl;
	else cout << " inside the given number are all odd numbers " <<endl;
	return 0;
}

