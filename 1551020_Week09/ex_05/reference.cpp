

#include <fstream>
#include <iostream>
using namespace std; 
#include "reference.h"

void input (product a[], int &n)
{
	cout <<" How many product do you want to input " ;
	cin>>n;
	for ( int i = 0; i<n; i++)
	{
		cout <<" Product number : " << i+1 << endl;
		cout << " Weight : " ;
		cin >> a[i].weight;
		cout << " Price : " ;
		cin>> a[i].price;
	}
}
void inputfromfile( product a[], int n)
{
	ifstream in;
	in.open(" input.txt ");
	for ( int i = 0 ; i  < n ; i++)
	{
		in >> a[i].weight;
		in >> a[i].price;
	}
	in.close ();
}
product MaximumWeight ( product a[], int n)
{
	product max;
	bool check= false;
	for ( int i = 0; i < n ; i++)
	{
		for (int  j = 0; j < n ; j++)
		{
			if (a[i].weight < a[j].weight)
			{
				check = false;
				break;
			}
		
		}
		if ( check == true )
		{
			max= a[i];
	
		}
	}
	return max;
}
product MaximumPrice ( product a[], int n)
{
	product max2;
	bool check= false;
	for ( int i = 0; i < n ; i++)
	{
		for ( int j = 0; j < n ; j++)
		{
			if (a[i].weight < a[j].weight)
			{
				check = false;
				break;
			}
		
		}
		if ( check == true )
		{
			max2= a[i];
		}
	}
	return max2;
}