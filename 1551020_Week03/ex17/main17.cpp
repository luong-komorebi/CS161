// Vo Tran Thanh Luong
//1551020
//ex01
#include <iostream>
using namespace std;
int main()
{
	cout << "Welcome to my program" << endl;
	int a,b,c;
	cout<< "  Please input your current data storage capacity  " ;
	cin >> a;
	cout << " Please input the number of people who have accepted the invitation " ;
	cin >> b;
	if ( b <= 32 ) 
	{
		c= a+b*0,5;
		cout << " Your current storage capacity will now be   " << c << " GB " << endl;
	}
return 0;
}