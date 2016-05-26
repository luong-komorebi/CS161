
#include <iostream>
#include <math.h>
using namespace std;

#include "struct.h"
void input( point p[], int &n)
{
	for ( int i=0; i<n; i++)
	{
		cout << " Enter the postion of the point " << endl;
		cout << " x is : ";
		cin >> p[i].x;
		cout <<"  y is : " ;
		cin>> p[i].y;
	}
}
void inputcircle( circle &C)
{
	cout << " Enter the postion of the center of the circle " << endl;
	cout << " x is : ";
	cin >> C.x;
	cout <<"  y is : " ;
	cin>> C.y;
	cout << " enter the radius of the circle: " ;
	cin >> C.r;
}
int Distance( point p[],circle C, int n)
{
	int temp=0;
	int min=0;
	int check=0;
	for ( int i=0; i < n; i++)
	{
		temp =abs( sqrt( (p[i].x-C.x)*(p[i].x-C.x) + (p[i].y-C.y)*(p[i].y-C.y)) - C.r);
		if ( temp <= min)
		{
			min= temp;
			check= i;
		}
	}
	return check;
}
