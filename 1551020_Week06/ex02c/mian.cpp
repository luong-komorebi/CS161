#include "function.h"

int main()
{
	int x;
	bool k= false;
	cout << " Please enter the number you want to check " ;
	cin >> x;
	k=square(x);
	if ( k == true )
		cout << " Your number is a square number" << endl;
	else cout << " Your number is not a square number " << endl ;
	return 0;
}