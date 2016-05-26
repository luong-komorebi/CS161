// Vo Tran Thanh Luong
//1551020
//ex01
#include <iostream>
using namespace std;
int main()
{
	cout << "Welcome to my program" << endl;
	int year;
	cout << " Please input the year   ";
	cin>> year;
	if ( (year%4==0) && (year%100!=0) && ( year%400==0))
		cout << " This is a leap year " << endl;
	else cout << " This is not a leap year" << endl;
	return 0;
}