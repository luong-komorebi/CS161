#include "function.h"

int main()
{
	int a,b;
	int kq1,kq2,kq3,kq4;
	cout << " Please enter a number : " ;
	cin >> a;
	cout << " Please enter the next number : ";
	cin>>b ;
	cout <<" ALL common divisors of a,b are : " << endl;
	common(a,b);
	cout <<endl;
	kq1= greatest(a,b);
	cout << " the greatest common divisor of a and b is :  " << kq1 <<endl;
	kq2= least(a,b);
	cout << " The least common multiple of a and b is :  " << kq2 << endl;
	kq3=amicable (a);
	kq4=amicable(b);
	if ( kq3 == a)
		cout <<" a is amicable number " << endl;
	else cout << " a is not amicable number " << endl;
	if (kq4 == b)
		cout << " b is amicable number " << endl;
	else cout << " b is not amicable number " << endl;
	return 0;
	
}