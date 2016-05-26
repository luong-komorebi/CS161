#pragma once
#include <fstream>
using namespace std;

struct Triangle
{
	float a1;
	float a2;
	float a3;
};


 Triangle Compare( Triangle f[1000], int n);
void Output ( Triangle k);
void InputFile ( Triangle f[1000], int &n);