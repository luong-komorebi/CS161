#include <iostream>
using namespace std;

#include "triangle.h"

void main()
{
	Triangle f[1000];
	Triangle k;
	int n;
	int traloi;
	cout <<" this Program helps you compare perimeters " << endl;
	cout <<" Please input from file then type any key and press enter here." <<endl;
	cin >> n;
	InputFile(f,n);

	k= Compare( f,n);
	cout<< " This is the biggest one : " ;
	Output(k);
	cout << endl;
}