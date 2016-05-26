// Vo Tran Thanh Luong
//1551020
// ex03
#include <iostream>
using namespace std;
int main()
{
	int n;
	bool j;
	cout << " Please input n " ;
	cin >> n;
	cout << " 1     ";
	if (n<3) cout<< " 2 ";
	else if ( n==3) cout << " 2    3 ";

	else { for ( int i=3; i <=n; ++i)
	{
		for ( int k=2; k<i; ++k)
		{
			if ( i%k==0) 
			{
				j=false ;
				break;
			}
			else j=true;
		}
		if (j == true ) cout  << i <<   "    " ;
	}
	}

	return 0;
}