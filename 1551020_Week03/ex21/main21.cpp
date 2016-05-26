// Vo Tran Thanh Luong
//1551020
//ex01
#include <iostream>
using namespace std;
int main()
{
	cout << "Welcome to my program" << endl;
	int a,b;
	float money;
	cout << " Please input the amount of electricity used in previous month ";
	cin >> a;
	cout << " Please input the amount of electricity used in previous month ";
	cin >> b;
	if ((b-a) <50)
		money= (b-a)*1484;
	else if ((b-a) <100)
		money= 50*1484+(b-a-50)*1533;
	else if (( b-a) <200)
		money=50*(1484+1533)+(b-a-100)*1786;
	else if ((b-a) <300)
		money=50*(1484+1533+1786)+(b-a-200)*2242;
	else if ((b-a) < 400)
		money=50*(1484+1533+1786+2242)+ (b-a-300)*2503;
	else
		money=50*(1484+1533+1786+2242+2503)+ (b-a-400)*2587;
	money=money+10*money/100;
	cout << "You have to pay " << money << endl;
	return 0;
}