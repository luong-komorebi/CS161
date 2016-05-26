#include <iostream>
using namespace std;

#include "Fraction.h"

void main()
{
	Fraction f[1000];
	Fraction k;
	int n;
	int traloi;
	cout <<" this Program helps you compare fractions " << endl;
	cout <<"  How many fraction do you want to input ";
	cin >> n;
	cout << " Do you want to input from file or from console ? ( Answer 0 for file 1 for console " ;
	cin>> traloi;
	if ( traloi == 0)
	{
		InputFile(f,n);
	}
	else if ( traloi ==1) 
		Input( f,n);
	else cout << " wtf ?? ";
	k= Compare( f,n);
	cout<< " This is the biggest one : " ;
	Output(k);
}