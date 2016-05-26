#include "function.h"
int main()
{
	int x;
	bool j;
	cout << " Please input the number you want to check : " ;
	cin >> x;
	j=Kaprekar(x);
	if ( j==true) 
		cout << " Your number is Kaprekar ";
	else cout << " Your number is not Kaprekar " ;
	return 0;
}
