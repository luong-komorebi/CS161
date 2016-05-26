// Vo Tran Thanh Luong
//1551020
//ex01
#include <iostream>
using namespace std;
int main()
{
	cout << "Welcome to my program" << endl;
	int a,b,t;
	float tien;
	cout << " Please input the amount of water used in previous month   ";
	cin >> a;
	cout << " Please input the amount of water used in next month  ";
	cin >> b;
	cout << " How many members does your family have ?   ";
	cin >> t;
	if ((b-a)/t <= 4) 
		tien= (b-a)*3300;
	else if ((b-a)/t <=6)
		tien= (b-a)*5200;
	else tien= (b-a)*7000;
	tien= tien+ 10*tien/100;
	cout << "You have to pay  " << tien << endl;
	return 0;
}