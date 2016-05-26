#include "function.h"

int CalS5( int n)
{
	int s=0;
	int k=1;
	for ( int i=1 ; i<=n; i++)
	{
		k=k*i;
		s+=k;
	}
	return s;
}
