#include <iostream>
using namespace std;
int main()
{
	cout << "Welcome to my program" << endl;
	int a;
	cout << "Please enter a random integer for me to read ";
	cin >> a;
	if ( (0 <= a) && ( a <= 9 ))
	{
		if (a=0) cout << " khong ";
		else if (a=1) cout << "mot";
		else if (a=2) cout << "hai";
		else if (a=3) cout << "ba";
		else if (a=4) cout << "bon";
		else if (a=5) cout << "nam";
		else if (a=6) cout << "sau";
		else if (a=7) cout << "bay";
		else if (a=8) cout << "tam";
		else cout << "chin";
	}
	else cout << " khong doc duoc " ;
	return 0;
}
