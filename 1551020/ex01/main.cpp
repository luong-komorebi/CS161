#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n;
	int temp;
	int h=0;
	cout <<" Hello users ! " << endl;
	cout << " Please input a random number of line that you want : " ;
	cin >> n;
	for(int i=n-1;i>=0;i--)
	{
		cout.width(n-i+1);
		for(int j=2*i+1;j>=1;j--)
			cout<<"*";
		cout<<endl;
	}
    return 0;
	
}