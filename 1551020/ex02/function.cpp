#include "function.h"

float  max( float all[], int n)
{
	float max = 0;
	for ( int i =1 ; i< n; i++)
	{
		if (all[i]>= max )
			max =all[i];
	}
	return max ;
}
void input ( float all[], int n)
{
	for ( int i = 0; i < n; i++)
	{
		cout <<" the " << i+1 << " is :" ;
		cin >> all[i];
	}
}
void position( float all[], int n)
{
	float max = 0;
	int position =0;
	for ( int i =1 ; i< n; i++)
	{
		if (all[i]>= max )
		{
			max =all[i];
			position =i;
		}	
	}
	for ( int i =1 ; i < n; i++)
	{
		if ( all[i] = max)
			cout << position;
	}
}