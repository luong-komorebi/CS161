// Vo Tran Thanh Luong
//1551020
//ex01
#include <iostream>
using namespace std;
int main()
{
	cout << "Welcome to my program" << endl;
	float th, lt , ltbt, tong; 
	char exam;
	cout << " Please enter your Practice scores: " ;
	cin >> th;
	cout << " Please enter your Theory scores: "; 
	cin >> lt;
	cout << " Please enter your Therory in Application scores: ";
	cin>> ltbt;
	cout << " Did you do anything illegal in the exam ? Type yes ( Y ) or no ( N ) only ";
	cin >> exam;
	tong = (40*lt/100) + (30*th/100) + (30*ltbt/100);
	if ( exam == 'y') 
		cout << " Due to your record of illegal acts, we announce that you have failed " ;
	else
	{
		if ( ( tong >= 5) && ( lt != 0 ) && ( th != 0) && ( ltbt !=0))
		cout << " COngratulations! You have passed the exam. " << endl;
		else
		cout << " We are sorry to inform that you didn't pass the exam. " << endl;
	}
	return 0;
}