#include "function.h"

int main()
{
	int n;
	float all[1000], k;
	cout <<" Hello, this program find the largest numbers for you." << endl;
	cout <<" How many numbers do you want to input ? ";
	cin >> n;
	while ( n <0)
	{
		cout << " You must input at least one number. Reinput now : " << endl;
		cin >> n;
	}
	cout << " Please input them 1 by 1 now : " << endl;
	input(all, n);
	k= max( all, n);
	cout << " The largest number is : " << k ;
	cout << endl;
	cout <<" The postion of the largest numbers in the list is : " ;
	position(all,n);
	cout << endl;

}
