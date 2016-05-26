#include "function.h"

float CalS3( int n)
{
	float s=0;
	for ( int i=1 ; i<=n ; ++i)
	{
		s=s+(1/(i*1.0));
	}
	return s;
}
