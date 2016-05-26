#include "function.h"

int prime ( int n)
{
	bool check=true ;
	for (int k=n;; k-=1)
	{
		for ( int i=2 ; i<= sqrt(k*1.0); ++i)
		{
			if (k%i ==0)
			{
				check = false;
				break;
			}
			check = true ;
		}
	if ( check == true )
		return k;
	}	
}
	