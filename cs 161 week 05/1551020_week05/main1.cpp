// Vo Tran Thanh Luong
//1551020
// Ex01
#include <iostream>
using namespace std;
int main()
{
	int day, month, year , gap=-1 ;
	cout << " Please input the day : ";
	cin >> day;
	cout << " Please input the month :  " ;
	cin >> month;
	cout << " Please input the year :  " ;
	cin >> year;
	
	for ( int i=1; i< month ; ++i)
	{
		switch (month)
		{
			case 1:case 3:cout << "This month has 31 days. \n This month belongs to the first quarter of the year. " << endl;  gap =gap+31;break;
			case 5: case 7:cout << " This month haS 31 days. \n This month belongs to the second quarter of the year. " << endl; gap =gap+31;break;
			case 8:case 10:cout << " This month haS 31 days. \n This month belongs to the third quarter of the year. " << endl;gap =gap+31; break;
			case 12:cout << " This month haS 31 days. \n This month belongs to the fourth quarter of the year. " << endl; gap =gap+31;break;
			case 4:case 6: cout << " This month haS 30 days. \n This month belongs to the second quarter of the year. " << endl;gap =gap+30; break;
			case 9:cout << " This month haS 30 days. \n This month belongs to the third quarter of the year. " << endl;gap =gap+30; break;
			case 11:cout << " This month haS 30 days. \n This month belongs to the fourth quarter of the year. " << endl;gap =gap+30;break;
		}
		if ( (year%4==0) && (year%100 !=0) && ( year%400==0))
		{
			cout << " This year is a leap year " << endl; 
			if	(month ==2) { cout << " This month has 29 days. \n This month belongs to the first quarter of the year. " <<endl; gap = gap +29;break;}
		}
		else 
		{
			cout << " This year is not a leap year " <<endl;
			if ( month==2){ cout << " This month has 28 days. \n This month belongs to the first quarter of the year.  " << endl; gap = gap + 28;break;}
		}
	}
	cout << " Yesterday was : day  " << day-1 << endl;
	cout << "Tommorow will be : day  " << day+1 <<endl;
	cout << " The gap is :  " << gap+day << endl;
	
	return 0;
}