#include "function.h"

void input(float a[100], int n)
{
	cout << " Please enter all elements you want";
	for ( int i = 0; i< n; i++)
	{
		cout << "  a["<<i<<"]= " ;
		cin >> a[i];
	}
}
void reflect( float a[100],int n)
{
	cout << " These are what you have inputted : " ;
	for ( int i = 0;i < n; i++)
	{
		cout << a[i] << " ";
	}
}
void negative( float a[100], int n)
{
	cout <<" These number are negative ones : " ;
	for (int i=0; i<n; ++i)
	{
		if (a[i] < 0 )
			cout << a[i] << " " ;
	}
}
float max( float a[100], int n)
{
	float max = a[0];
	for ( int i =0 ; i<n ; i++)
	{
		if ( a[i] > max )
		{
			max= a[i];
		}
	}
	return max;
}
float firstPositive( float a[100], int n)
{
	float first= a[0];
	for (int i= 0; i< n ; i++)
	{
		if ( a[i] > 0 )
		{
			first = a[i];
			return first;
		}
	}
	return -1;
}
int MinPosition( float a[100], int n)
{
	int i=0;
	float min = a[0];
	int b=0;
	for ( i =0 ; i<n ; i++)
	{
		if ( a[i] < min )
		{
			min= a[i];
			b=i;
		}
	}
	return b;
}
float MinPositive( float a[100], int n)
{
	int i=0;
	bool check= false;
	float min = 1000000;
	for ( i =0 ; i<n ; i++)
	{
		if (a [i] >0)
		{
			check = true;
			if ( a[i] < min )
			{
				min= a[i];
			}
		}
	}
	if ( check == false )
		return -1;
	else 
		return min;
}
float Min( float a[100], int n)
{
	int i=0;
	float min = a[0];
	for ( i=0 ; i<n ; i++)
	{
		if ( a[i] < min )
		{
			min= a[i];
		}
	}
	return min;
}
float MaxNegative ( float a[100], int n)
{
	int i=0;
	bool check= false;
	float max = -10000.0;
	for ( i =0 ; i<n ; i++)
	{
		if (a [i] <0)
		{
			check = true;
			if ( a[i] > max )
			{
				max = a[i];
			}
		}
	}
	if ( check == false )
		return -1;
	else 
		return max;
}
int MinNegativePosition( float a[100], int n)
{
	int i=0;
	float min = 0;
	int b=-1;
	for ( i =0 ; i<n ; i++)
	{
		if ( a[i] < min ) 
		{
			min= a[i];
			b=i;
		}
	}
	return b;
}
float Furthest( float a[100], int n , int x)
{
	float distance =0;
	float temp= a[0];
	for (int  i =0 ; i<n ; i++)
	{
		if ( abs(a[i]-x) > distance)
		{
			distance = abs(a[i]-x);
			temp= a[i];
		}
	}
	return temp;
}
void Interval( float a[100], int n)
{
	int i=0;
	float min = a[0];
	for ( i=0 ; i<n ; i++)
	{
		if ( a[i] < min )
		{
			min= a[i];
		}
	}
	float max = a[0];
	for ( i =0 ; i<n ; i++)
	{
		if ( a[i] > max )
		{
			max= a[i];
		}
	}
	cout << " The interval for all elements is :  ["<<min<<","<<max<<"]"<<endl;
}
float Intervalx( float a[100], int n)
{
	int i=0;
	float min = a[0];
	for ( i=0 ; i<n ; i++)
	{
		if ( a[i] < min )
		{
			min= a[i];
		}
	}
	float max = a[0];
	for ( i =0 ; i<n ; i++)
	{
		if ( a[i] > max )
		{
			max= a[i];
		}
	}
	if ( abs(max) > abs(min) )
		return abs(max);
	else return abs(min);
}
float FindLastNegative(float a[100], int n)
{
	for (int i = n-1; i >= 0; i-=1)
	{
		if ( (a[i] >= -1) && (a[i] <0))
			return a[i];
	}
	return 0;
}
void SearchAbs( float a[100], int n)
{
	cout << " All numbers that is smaller than the absolute value of \n the previous number and bigger than the next number are: " ;
	for ( int i =1; i< n-1 ; i++)
	{
		if ( a[i] < abs(a[i+1]) && a[i] > a[i-1])
			cout << a[i] << " " ;
	}
}
void SearchContrary( float a[100], int n)
{
	cout << " All numbers which has contrary ( in terms of negativeness/postiveness) numbers nearby are:  " ;
	for ( int i =0; i< n ; i++)
	{
		if (a[i]> 0&& ( a[i+1]<0 || a[i-1]<0))
			cout << a[i] << " " ;
	}
}
int CountBiggest ( float a[100], int n)	
{
	int count =0;
	float max = a[0];
	for ( int i =0 ; i<n ; i++)
	{
		if ( a[i] > max )
		{
			max= a[i];
		}
	}
	for ( int j = 0; j<n; j++)
	{
		if ( a[j] == max)
			count++;
	}
	return count;
}
int CountNearby ( float a[100], int n)
{
	int count =0;
	for ( int i =1; i< n ; i++)
		{
			if ((abs(a[i])> a[i-1]) && ( (a[i]>0 && a[i-1]>0) || (a[i]<0 && a[i-1] <0)))
				count ++;
		}
	return count;
}
int CountDistinct ( float a[100], int n)
{
	int count =0;
	for ( int i =0; i< n ; i++)
	{
		for ( int j =0; j< n; j++)
		{
			if( i!=j)
			{
				if (a[i]==a[j])
				break;
				count++;
			}
		}
	}
	return count;
}
void ShowNotDistinct ( float a[100], int n)
{
	for ( int i =0; i< n ; i++)
	{
		for ( int j =0; j< n; j++)
		{
			if( i!=j)
			{
				if (a[i]==a[j])
					cout << a[i] << " ";
			}
		}
	}
}
void RemovingBiggestOnes( float a[100], int n)
{
	float b[100];
	int k=0, vt =0;
	for ( int i=0; i<=n; i++)
	{
		b[k]=a[i];
		k++;
	}
	k--;
	float max = a[0];
	for ( int i =0 ; i<k ; i++)
	{
		if ( b[i] > max )
		{
			max= a[i];
			vt= i;
		}
	}
	for ( int i = vt ; i < k -2; i++)
	{
		b[i]=b[i+1];
	}
	
	for ( int i=0; i < k-1 ; i++)
		cout <<b[i] << " " ;
	cout << endl;
	
}
