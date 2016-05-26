//vo tran thanh luong
// 1551020
// ex05
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n;
	cout << " Please input a number : " ;
	cin >> n;
	cout << " All number with the format 2^k which is smaller than the given one are : " ;
	for (int i=1; pow(2,i*1.0)<=n; ++i)
	{
		cout << pow(2,i*1.0) << "\t";

	}
	return 0;
}