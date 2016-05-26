// Vo Tran Thanh Luong
//1551020
//ex01
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	cout << "Welcome to my program" << endl;
	float a,b,c;
	cout << " Please input 1st side of the triangle  ";
	cin>>a; 
	cout<<" Please input 2nd side of the triangle  ";
	cin>>b;
	cout<<" Please input 3rd side of the triangle  ";
	cin>>c;
	if ( ((a+b)>c) && (abs(a-b)<c))
	{
		if ((a==b) || (b==c) || (a==c))
			cout << " This must be a isosceles triangle" <<endl;
		else if( (a==b) && (a==c))
			cout << "This must be a equilateral triangle" << endl;
		else if ( (pow(a,2)+pow(b,2) == pow(c,2)) || (pow(c,2)+pow(b,2) == pow(a,2)) || (pow(a,2)+pow(c,2) == pow(b,2)) )
			cout << " This must be a right triangle" << endl;
		else cout << " This must be a normal triangle " << endl;
	}
	return 0;
}