#include <iostream>
using namespace std;

#include "student.h"
void main()
{
int n ;
int k=0;
Student S[1000];
int minday;
int minmonth;
input (S,n);
cout << endl;
days ( S,n, minday, minmonth,k);
cout <<" The Student with the nearest Birthday is student number : " << k << " Birthday on : " << minmonth << "/ " << minday << endl;
}