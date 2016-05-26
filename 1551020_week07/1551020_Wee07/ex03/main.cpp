// VO Tran Thanh Luong
//1551020
//Ex03
#include <iostream>
#include < string.h>
using namespace std;


int main()
{
	char list[1000];
	cout <<" Hello!" << endl;
	cout << " Please enter a list of string : \n (enter Give Up when you want to give up)" << endl;
	cin.getline( list , 1000, '\n');
	int dem=0;
	int check= strcmp(list, "Give Up");
	while ( check!=0)
	{
		int check2= strcmp(list, "Yolo");
		++dem;
		if ( check2==0)
		{
			cout << " Congrats! You found out my secret code " << endl;
			cout << " You have inputed : " << dem << " times" << endl;
			return 0;
		}
		else 
		{
			cout << " Wrong one, keep going : ";
			cin.getline(list , 1000);
		}
	}
	if ( check ==0) cout<< "Okay! Bye" << endl;

	return 0;
}