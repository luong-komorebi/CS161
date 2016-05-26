#include <iostream>
#include <string.h>
using namespace std;
int main()
{	
	cout << "Welcome to my program" << endl;
	float a,b,x;
	cout << " Please input a " ;
	cin >> a;
	cout << " Please input b " ;
	cin >> b;
	if (a==0) 
	{
		if (b==0)
			cout << " x can be any values " ; 
		else 
			cout << " No x can satisfy this equation";
	}
	else
	{
			x=-b/a;
			cout << " x :  "<<x;
	}
	return 0;
}