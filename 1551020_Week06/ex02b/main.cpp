#include "function.h"
int main()
{
	int x;
	bool j;
	cout << " Please input the number you want to check : " ;
	cin >> x;
	j=perfect(x);
	if ( j== true) 
		cout << " Your number is a perfect one ";
	else cout << " Your number is not a perfect one " ;
	return 0;
}
