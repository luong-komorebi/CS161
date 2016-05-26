//Vo Tran Thanh Luong	
//1551020	
// Ex9
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n,k,n1,n2;
	cout << " Please input a number : " ;
	cin >> n;	
	cout << " The nearest 2^k-format number is : ";
	k=log(n*1.0)/log(2.0);
	n1=pow(2.0,k-1);
	n2=pow(2.0,k+1);
	if ((n-n1)<(n2-n))
		cout << n1 << endl;
	else cout << n2 << endl;
return 0;
}
