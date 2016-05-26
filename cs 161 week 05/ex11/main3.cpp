// Vo Tran Thanh Luong
// Ex11
// 1551020
#include <iostream>
using namespace std;
int main()
{
	int a;
	cout << " Please input a ";
	cin >>a;
	for (int i=2 ; i <= a; )
	{
		if ( a%i ==0)
		{
			cout << i << " * ";
			a/=i;
		}
		else i++;
	}

	return 0;
}
