#include "function.h"

int main()
{
	int x;
	int k;
	cout << " pLease enter the number ya wanna check " ;
	cin >> x;
	k = SoDoiXung(x);
	if ( k == x) 
		cout << " Your number is a symmetric number ";
	else cout <<" Your number is not a symmetric number " ;
	return 0;

}