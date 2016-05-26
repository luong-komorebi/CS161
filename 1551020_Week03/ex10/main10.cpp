#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int main()
{	
	cout << "Welcome to my program" << endl;
	float a,b,x,m,y,c;
	cout << " Please input a " ;
	cin >> a;
	cout << " Please input b " ;
	cin >> b;
	cout << " Please input c ";
	cin >> c; 
	if (a==0) 
	{
		if (b==0)
		{
		if (c==0)
			cout << " x can be any values " ; 
		else 
			cout << " No x can satisfy this equation";
		}
		else
		{
			x=-c/b;
			cout << " x :  "<<x;
		}
	}
	else 
	{
		m= pow(b,2)- 4*a*c;
		if (m<0)
			cout << " no x can satisfy this equation ";
		else
		{
			x= (-b+sqrt(m))/(2*a);
			y= (-b-sqrt(m))/ (2*a);
			cout << " Hai nghiem cua pt lan luot la " <<x << "    " << y << "\n luu y neu thay hai nghiem giong nhau thi phuong trinh co nghime kep "<< endl;
		}
	}
	return 0;
}
