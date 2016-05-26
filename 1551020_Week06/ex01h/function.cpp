#include "function.h"

float CalS8( int n, int x )
{
	float s=1;
	int k=1;
	for ( int i=1 ; i<=n; i=i+2)
	{
		k*=i;
		s+=( pow(-1.0,(i-1)*1.0)*pow( x*1.0, i*1.0)/k);
	}
	return s;
}
