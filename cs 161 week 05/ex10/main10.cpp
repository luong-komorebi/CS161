//Vo Tran Thanh Luong	
//1551020	
// Ex10
#include <iostream>
using namespace std;

int main()
{
	int n,i,k;
	cout << " Please input a number :  ";
	cin >> n;
	for (i=1; i<=n; ++i)
	{
		for (k=i; k<=n; ++k)
		{
			cout << k << " " ;
		}
		for (k=1; k <i; ++k)
		{
			cout << k << " ";
		}
		cout << endl;
	}
return 0;
}