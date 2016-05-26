#pragma once
#include <fstream>
using namespace std;

struct Fraction
{
	int num;
	int den;
};

void Input( Fraction f[1000], int &n);
Fraction Compare( Fraction f[1000], int n);
void Output ( Fraction k);
void InputFile ( Fraction f[1000], int &n);