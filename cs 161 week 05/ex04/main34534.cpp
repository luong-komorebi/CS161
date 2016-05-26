// Vo Tran Thanh Luong
//1551020
// ex03
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << " Please input n " ;
	cin >> n;
	for (int i=0; i<=n; ++i)
	{
		if ( i*i <=n)
		cout  << i*i << endl;
	}

	return 0;
}