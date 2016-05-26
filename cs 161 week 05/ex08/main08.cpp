//Vo Tran Thanh Luong	
//1551020	
// Ex7
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n,n1,n2,k1,k2;
	cout << " Please input a number : " ;
	cin >> n;
	cout << " The nearest prime number is : ";
	k1=ceil(sqrt(n*1.0)-1);
	k2=floor(sqrt(n*1.0)+1);
	n1= k1*k1;
	n2=k2*k2;
	if ( (n-n1) > (n2-n))
		cout << n1 << endl;
	else cout << n2 << endl;
	return 0;
}