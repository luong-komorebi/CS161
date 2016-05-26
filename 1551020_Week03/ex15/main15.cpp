// Vo Tran Thanh Luong
//1551020
//ex01
#include <iostream>
using namespace std;
int main()
{
	cout << "Welcome to my program" << endl;
	int year, month;
	cout << " Please input the year   " ;
	cin >> year;
	cout << " Please input the month   " ;
	cin >> month;
	if (month <=12)
	{
	if ( (year%4==0) && (year%100!=0) && ( year%400==0))
	{
		if (month==2 )
			cout << " Thang co 29 ngay" << endl;
	}
	else
	{
		if (month==2)
			cout << " thang co 28 ngay" << endl;
		else if ( (month==1) || (month==3) || ( month==7) || (month==8) || (month==10) || (month==12))
			cout << " Thang co 31 ngay" << endl;
		else cout <<" thang co 30 ngay ";
	}
	}
	else cout << " You must be retarded . We just have 12 months per year" << endl;

	return 0;
}