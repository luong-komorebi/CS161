#include <iostream>
#include <math.h>
using namespace std;

struct test {
	int firstNumber;
	double secondNumber;
	int thirdNumber;
	char check;
};

void main (){
	int n;
	test* T;
	cout << " How many ? ";
	cin >> n;
	T= new test[n];
	if ( T!=NULL)
	{
		for ( int i = 0; i <= n ; i++){
			cout <<" Input the first number  : " ;
			cin>> T[i].firstNumber;
			cout <<" Input the second number : " ;
			cin >> T[i].secondNumber;
			cout << " Input the third number : " ;
			cin >> T[i].thirdNumber;
			cout << endl;
		}
	}
}