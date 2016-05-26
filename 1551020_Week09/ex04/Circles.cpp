#include <iostream>
#include <fstream>
using namespace std;

#include "Circles.h"

void Input( Circles C[], int &n)
{
	cout << " The number of Circles : " ;
	cin >>n;
	for ( int i =0 ; i < n ; i++)
	{
		cout << " Please enter the" <<i+1<<" Circle's radius : " ;
		cin>> C[i].r;
	}
}
float Circlemax( Circles C[], int n)
{
	float max;
	bool check=false;
	for ( int i = 0 ; i <n ; i++)
	{
		for ( int k=0 ; k<n ; k++)
		{
			if ( C[i].r < C[k].r)
			{
				check = false;
				break;
			}
			check= true;
		}
		if ( check==true ) 
			max = C[i].r;
			
	}
	return max;

}
void InputfromFile ( Circles C[], int &n)
{
	ifstream file;
	file.open("input.txt");
	file >>n;
	for ( int i =0; i < n; i++)
	{
		file >> C[i].r;
	}

	file.close();
}
