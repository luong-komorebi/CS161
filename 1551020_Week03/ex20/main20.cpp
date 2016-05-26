// Vo Tran Thanh Luong
//1551020
//ex01
#include <iostream>
using namespace std;
int main()
{
	cout << "Welcome to my program" << endl;
	int thu,gio;
	cout << " Please input the day you watched a movie at Galaxy \n ( Monday =2 , Tuesday =3.... Sunday =8)      " ;
	cin>> thu;
	cout << " Please input the time of that day ( on a 24h scale) " ;
	cin>> gio;
	if (thu ==3)
		cout <<" PROMOTION : you ONLY have to pay 50k " << endl;
	else if ( (thu == 6)|| (thu ==7)||(thu ==8))
	{
		if (gio>17)
				cout <<" You have to pay 80k " << endl;
		else
				cout << "You have to pay 75k " <<endl;
	}
	else
	{
			if (gio>17)
				cout <<" You have to pay 70k " << endl;
			else
				cout << "You have to pay 60k " <<endl;
	}
return 0;
}