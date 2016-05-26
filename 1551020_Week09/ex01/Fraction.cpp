#include <iostream>;
using namespace std;

#include "Fraction.h"

Fraction Compare( Fraction f[1000], int n)
{
	Fraction max;
	bool check= false;
	for (int  i=0; i< n; i++)
	{
		check= true;
		for ( int k =0; k< n; k++)
		{
			if ( (f[i].num*f[k].den - f[k].num*f[i].den ) <0 )
			{
				check = false;
				break;
			}
		}
		if ( check== true)
		{
			max = f[i];
			break;
		}

	}
	return max;
}
void Input( Fraction f[1000], int &n)
{
	for ( int i =0; i< n; i++)
	{
		cout << " Numerator : ";
		cin>> f[i].num;
		cout << " Denumerator : ";
		cin >> f[i].den;
	}
}
void Output (Fraction k)
{
	cout << k.num << " / " << k.den;
}

void InputFile( Fraction f[1000],int &n)
{
	ifstream file;
	file.open ("Input.txt");
	file >>n;

	for ( int i = 0; i< n ; i++)
	{
		file >> f[i].num;
		file >> f[i].den;
		
	}

	file.close();
}