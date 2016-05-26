// Vo Tran Thanh Luong
//1551020
//ex01
#include <iostream>
using namespace std;
int main()
{
	cout << "Welcome to my program" << endl;
	float th, lt , ltbt, tong; 
	cout << " Please enter your Practice scores: " ;
	cin >> th;
	cout << " Please enter your Theory scores: "; 
	cin >> lt;
	cout << " Please enter your Therory in Application scores: ";
	cin>> ltbt;
	tong = (40*lt/100) + (30*th/100) + (30*ltbt/100);
	if ( tong >= 5) 
		cout << " COngratulations! You have passes the exam. " << endl;
	else
		cout << " We are sorry to inform that you didn't pass the exam. " << endl;
	return 0;
}
