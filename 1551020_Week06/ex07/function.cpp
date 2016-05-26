#include "function.h"
void everything( int month, int day, int year)
{
int gap=0 ;
if ( (year%4==0) && (year%100 !=0) && ( year%400==0))
	{
		cout<< " This year is a leap year " << endl;
	}
else cout << " this year is not a leap year " << endl;

switch (month)
{
	case 1:case 3: case 5: case 7:case 8:case 10: case 12: cout << "This month has 31 days.  " << endl;
		gap =gap+31;
		break;
	case 4:case 6:case 9: case 11: cout << " This month has 30 days. " << endl;
		gap =gap+30;
		break;
	default:
		{
			if ( (year%4==0) && (year%100 !=0) && ( year%400==0))
				{
					cout << " This month has 29 days. " <<endl;
					gap = gap +29;
					break;
				}
			else 
				{
					cout << " This month has 28 days.  " << endl;
					gap = gap + 28;
					break;
				}
		}
}
	cout << " Yesterday was : day  " << day-1 << endl;
	cout << "Tommorow will be : day  " << day+1 <<endl;
	cout << " n is :  " << gap+day << endl;
	cout << " m is about : " << gap+day+ ( year -1)*365 << endl;
}