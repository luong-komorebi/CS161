#include "function.h"
int CalS2( int n)
{
	int s=0;
	for ( int i=1; i<=n; ++i)
	{
		s+=(i*i);
	}
	return s;
}