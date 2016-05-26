// Vo Tran Thanh Luong
//1551020
//ex01
#include <iostream>
using namespace std;
int main()
{
	cout << "Welcome to my program" << endl;
	int a,b ;
	cout << " Please enter the first number " ;
	cin >> a;
	cout << " Please enter the second number" ;
	cin >> b;
	if ( a > b)
		cout << " The superior number is :  " << a << endl;
	else if ( a == b)
		cout << " These numbers are equal ";
	else
		cout  << " The superior number is : " << b << endl;
	return 0;
}