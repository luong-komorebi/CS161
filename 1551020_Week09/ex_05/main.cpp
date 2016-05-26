#include <iostream>
using namespace std;

#include "reference.h"


int main ()
{
	cout << " Hello" ;
	int n, traloi; 
	product a[1000];
	product b,c;
	
	cout << " Enter 1 for file input or 0 for normal input ";
	cin >> traloi;
	if ( traloi ==0)
		input ( a,n);
	else inputfromfile(a, n);
	b= MaximumWeight(a,n);	
	c = MaximumPrice(a,n);
	cout << " MAX WEIGHT : " << b.weight << endl;
	cout<< " MAX PRICE :  " << c.price << endl;



}