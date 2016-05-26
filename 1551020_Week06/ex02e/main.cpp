#include "function.h"
int main()
{
	int x;
	bool j;
	cout << " Please input the number you want to check : " ;
	cin >> x;
	j=	notperfect(x);
	if ( j==true) 
		cout << " Your number is an abundant one ";
	else cout << " Your number is not an abundant one " ;
	return 0;
}
