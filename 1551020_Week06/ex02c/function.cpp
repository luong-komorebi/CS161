#include "function.h"

bool square( int n)
{
	for ( int i=1 ; i<= n/2; ++i)
	{
		if ((i*i)==n)
			return true;
	}
}
	