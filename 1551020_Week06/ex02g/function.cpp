#include "function.h"

float CalS6( int n)
{
	float s=0;
	for ( int i=1 ; i<=n; i++)
	{
		s=sqrt((2.0*i)+(s*1.0));
	}
	return s;
}
