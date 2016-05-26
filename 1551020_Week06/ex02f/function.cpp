#include "function.h"
bool Kaprekar ( int n)
{
	int A,B,b;
	for ( int i =1; i<=n; i++)
	for (int A=1; A<=n; A++)
	for (int b=1; b<=n; b++)
	for ( int B=1; B <=n; B++)
	{
		if  (((n*n) ==  A* pow(b*1.0, i*1.0) + B) && ( n==(A+B)) )
			return true;
	}
	return false;
}