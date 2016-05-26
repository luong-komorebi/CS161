// Vo Tran THanh Luong
// 1551020
// Ex02
#include <iostream>
using namespace std; 

int main()
{
	int money,a,b,c,d,e,f,g;
	cout << " Please input the value of money you have :  ";
	cin >> money;
	while ( money % 500 !=0)
	{
		cout << " You are living in VN, so that number is impossible.\n BE SERIOUS AND INPUT ANOTHER ONE, MAN : ";
		cin>> money;
	}
	cout << " Nie! Let's see the magic : ";
	while (money>= 500000)
	{
		a= money/500000;
		cout << a << " * 500k + " ;
		money= money %500000;
	}
	while (money>= 200000)
	{
		b= money/200000;
		cout << b << " * 200k + " ;
		money= money %200000;
	}
	while (money>= 100000)
	{
		c= money/100000;
		cout << c << " * 100k + " ;
		money= money %100000;
	}
	while (money>= 50000)
	{
		d= money/50000;
		cout << d << " * 50k + " ;
		money= money %50000;
	}
	while (money>= 5000)
	{
		e= money/5000;
		cout << e << " * 5k + " ;
		money= money %5000;
	}
	while (money>=1000)
	{
		f= money/1000;
		cout << f << " * 1k + " ;
		money= money %1000;
	}
	while (money>= 500)
	{
		g= money/500;
		cout << g << " * 500 + " ;
		money= money %500;
	}
	cout << "0";
	return 0;
}