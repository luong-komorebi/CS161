// Vo Tran Thanh Luong
//1551020
//ex01
#include <iostream>
using namespace std;
int main()
{
	cout << "Welcome to my program" << endl;
	int km;
	float money;
	cout << " Please input the distance of your journey:  ";
	cin>> km;
	money= 15;
	if ( km ==1)
		cout << " You have to pay 15k" << endl;
	else if ( km <= 5)
	{
		money= money+ 13,5*(km-1);
		cout<< " you have to pay :  " << money << " k" << endl;
	}
	else if ( km <= 12)
	{
		money=money+11;
		cout<< " You have to pay: " << money << " k"<< endl;
	}

	else 
	{
		money= (money+11* (km-12));
		money= money-10*money/100;
		cout<< " you have to pay:  " << money << "k" << endl;
	}
return 0;
}