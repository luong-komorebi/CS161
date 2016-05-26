#include <iostream>
#include <fstream>
using namespace std;

#include "Circles.h"

void main()
{
	Circles C[1000];
	int n;
	int traloi;
	cout <<" Do you want to input from console ( 0 ) or from file text ( 1 )? ";
	cin>> traloi;
	if ( traloi==0)
	{
		Input (C, n);
	}
	else
	{
		InputfromFile( C,n);
	}
	cout << " the circle with the biggest permieter has the radius : " << Circlemax(C,n) << endl;
	
}