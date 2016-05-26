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
		cout << " The inferior number is :  " << b << endl;
	else if ( a == b)
		cout << " These numbers are equal ";
	else
		cout  << " The inferior number is : " << a << endl;
	return 0;
}