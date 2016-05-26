// Vo Tran Thanh Luong
//1551020
//ex01
#include <iostream>
using namespace std;
int main()
{
	cout << "Welcome to my program" << endl;
	int a;
	char MIU;
	cout << " Do you sign up for MIU plan ? Answer Y for yes and N for no " ;
	cin>> MIU;
	if ( MIU == 'y')
		cout<< " All you have to pay is 70k" << endl;
	else
	{
	cout<< " Please enter the 3G data you have used  " ;
	cin >> a;
	cout << " All you have to pay is  " << 50*a << " dong " << endl;
	}
	return 0;
}