#include "function.h"

int main()
{
	int x;
	bool k;
	cout << " Please enter the number you want to check " ;
	cin >> x;
	k=prime(x);
	if ( k == true )
		cout << " Your number is a prime number";
	else cout << " Your number is not a prime number " << endl ;
	return 0;
}