#include "function.h"

void common(int n, int m)
{
	int i=1;
	for (i=1; (i<=n) && (i<=m) ; ++i)
	{
		if (( n%i == 0) && (m%i==0))
			cout << i << " " ;
	}
}

int greatest( int n, int m)
{
	int min =0;
	if ( n >= m)
		min = m;
	else min =n;
	for ( int i=min; (i<=n) && (i<=m) ; i-=1)
	{
		if (( n%i == 0) && (m%i==0))
			return i;
	}

}

int least( int n, int m)
{
	int max =0;
	if ( n >= m)
		max = n;
	else max =m;
	for ( int i =1; i>0; i++)
	{
		if ( ((max*i) % n== 0) && ((max*i)%m ==0) )
			return (max*i);
	}
}

int amicable( int n)
{
	int s1=0;
	for (int i=1; (i<=n) ; ++i)
	{
		if ( n%i == 0)
			s1+=i;
	}
	return s1;	
}