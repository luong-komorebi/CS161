#include "function.h"

int prime ( int n)
{
	bool check=true ;
	for (int k=2; k<= n; ++k)
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
		cout << k << " " ; 
	}
	return 0;
}
	