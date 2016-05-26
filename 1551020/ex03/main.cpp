
#include <iostream>
#include <math.h>
using namespace std;
#include "struct.h"
int main()
{
	int n;
	int k;
	point p[100];
	circle C;
	cout << " How many points  do you want to input";
	cin >> n;
	input( p,n);
	inputcircle(C);
	k= Distance(p ,C, n);
	cout << " The point that is nearest the circle is : ";
	cout << " ( " << p[k].x << "  " << p[k].y << " ) ";
	cout<< endl;
}