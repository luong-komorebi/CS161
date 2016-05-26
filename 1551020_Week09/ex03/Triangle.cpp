#include <iostream>;
using namespace std;

#include "triangle.h"

Triangle Compare( Triangle f[1000], int n)
{
	Triangle max;
	bool check= false;
	for (int  i=0; i< n; i++)
	{
		check= true;
		for ( int k =0; k< n; k++)
		{
			if ( (f[i].a1+f[i].a2+f[i].a3 -( f[k].a1+f[k].a2+f[k].a3)) <0 )
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

void Output (Triangle k)
{
	cout << k.a1 << " + " << k.a2 << " + " << k.a3;
}

void InputFile( Triangle f[1000],int &n)
{
	ifstream file;
	file.open ("Input.txt");
	file >>n;

	for ( int i = 0; i< n ; i++)
	{
		file >> f[i].a1;
		file >> f[i].a2;
		file >> f[i].a3;
	}

	file.close();
}