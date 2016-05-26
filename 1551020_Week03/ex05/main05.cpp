// Vo Tran Thanh Luong
//1551020
//ex01
#include <iostream>
using namespace std;
int main()
{
	cout << "Welcome to my program" << endl;
	float dtb;
	cout << "Please input your GPA " ;
	cin >> dtb;
	if ( dtb >10 )
	{
		cout << " Impossible ";
	}
	else if (( 10 >= dtb) && (dtb >= 9 ))
	{
		cout <<" Excellent ";
	}
	else if ( (9 > dtb) && (dtb >=8) ) 
	{
		cout << " Very Good ";
	}
	else if ( (8 > dtb) && (dtb >= 7))
	{
		cout<<" Fine";
	}
	else if ( (7 > dtb)&&(dtb >= 6))
	{
		cout <<" OK ";
	}
	else if ( (6 > dtb) && (dtb >= 5))
	{
		cout << " Average" ;
	}
	else if ( (5 > dtb) && (dtb >= 4)) 
	{
		cout << " Poor " ;
	}
	else
	{
		cout << " Disqualified ";
	}
	cout <<  " \n " ;
	return 0;
}
