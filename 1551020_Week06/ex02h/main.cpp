#include "function.h"
int main()
{
	cout << "  I will List the nearest prime number to n " << endl;
	int n,a;
	cout << " Please enter n : " ;
	cin >>n;
	a=prime(n);
	cout << a << endl;
	return 0;
}