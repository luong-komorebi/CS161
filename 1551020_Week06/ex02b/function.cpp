#include "function.h"
bool perfect ( int n)
{
	int tong=0;
	for (int i=1;i<n;i++)
	{
		if ((n%i)==0)
			tong+=i;
	}
	if ( tong == n)
		return true;
	else return false;
}