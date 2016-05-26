#include "function.h"

float CalS4( int n)
{
	float s=1;
	for ( int i=1 ; i<=n ; ++i)
	{
		s*=i;
	}
	return s;
}
