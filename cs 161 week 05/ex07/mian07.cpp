//Vo Tran Thanh Luong	
//1551020	
// Ex7
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n,n1,n2;
	cout << " Please input a number : " ;
	cin >> n;
	cout << " The nearest prime number is : ";
	bool a,b;
	for (n1=n-1; n1>0; n1=n1-1)
	{
	for (int i =2 ;i<=sqrt(n1*1.0); ++i)
	{
		if (n1 %i==0)
			{
				a = false;
				break;
			}
		else 
			{
				a= true;
				
			}
	}
	if (a==true) break;
	}
	for ( n2=n+1; n2>0; n2=n2+1)
	{
	for (int i =2 ;i<=sqrt(n2*1.0); ++i)
	{
		if (n2 %i==0)
			{
				b = false;
				break;
			}
		else 
			{
				b= true;
				
			}
	}
	if (b==true) break;
	}
	if ((a==true) && ( b==true))
	{
		if ((n2-n)>(n-n1))
			cout << n2;
		else cout << n1;
	}

return 0;


}