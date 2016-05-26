#pragma once
#include <iostream>
#include <fstream>
using namespace std;

struct Student
{
	char fullname [200];
	int day;
	int month;
	int year;
	char email[200];
	char address[129];
};

void input ( Student S[], int &n);
void days ( Student S[], int n , int& minday,int& minmonth, int &k);