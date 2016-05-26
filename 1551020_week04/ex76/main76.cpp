// ID : 1551020
// Name : Vo Tran Thanh Luong
// ex16
#include <iostream>
#include < math.h>
using namespace std;
int main()
{
	cout<< " Welcome to my program ";
	unsigned long a;
	cout << " Please input a number : ";
	cin >> a;
	if ( ( log(a*1.0)/log(3.0))*1.0 -(log(a*1.0)/log(3.0))==0)
		cout << " This number is qualified with 3^k " ;
	else cout << "This number is not qualified with 3^k ";
	return 0;
}