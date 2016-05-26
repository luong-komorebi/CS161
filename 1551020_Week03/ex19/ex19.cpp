// Vo Tran Thanh Luong
//1551020
//ex01
#include <iostream>
using namespace std;
int main()
{
	cout << "Welcome to my program" << endl;
	int ll,hh,dd,tt,k;
	char VIP;
	cout << " How long did you use our karaoke service ";
	cin >> ll;
	cout << " Exactly at what time? ";
	cin >> hh;
	cout << " What was the date of the week ? (Input one number: Monday = 2,..., Sunday = 8) \n ( please notice that we only support one day calculation \n You will have to calculate your self if you use our service past the time of one day)   ";
	cin>>dd;
	cout << " Did you use the VIP service ? (Y/N) ";
	cin >>VIP;
	if (VIP == 'y')
	{
		if ( (dd==7) || (dd==8) )
		{
			tt=400000*ll;
			cout << " You have to pay " << tt << endl;
		}
		else
		{
			k=1;
			tt=0;
			while ( k < ll)
			{
				hh= hh+k;
				if ((hh>=10) && (hh <=18))
				{
					tt= tt+ 300;
					cout << " You have to pay  " << tt << endl;
				}
				else
				{
					tt=tt+100;
					cout<< " You have to pay " << tt << endl;
				}
				k++;
			}
		}
	}
	else
	{
		if ( (dd==7) || (dd==8) ) 
		{
			tt=200000*ll;
			cout<< " You have to pay  " << tt << endl;
		}
		else
		{
			k=1;
			tt=0;
			while ( k < ll)
			{
				hh= hh+k;
				if ((hh>=10) && (hh <=18))
				{
					tt= tt+ 200;
					cout << " You have to pay  " << tt << endl;
				}
				else
				{
					tt=tt+80;
					cout<< " You have to pay " << tt << endl;
				}
				k++;
			}
		}
	}
	return 0;
}