#include "student.h"
#include <fstream>
#include <iostream>
using namespace std;


void input( Student S[], int &n)
{
	bool checkmail= false;
	cout << " How many students do you want to input ? ";
	cin >> n;
	cout <<" Please enter one by one starting now" << endl;
	for ( int i = 0; i < n ; i++)
	{
		cout <<" Student number : " << i+1 << endl;
		cout << " Please enter your name : " <<endl;
		cin.getline( S[i].fullname, 100);
		cout << " Please enter your day of birth : " <<endl;
		cin>> S[i].day;
		cout << " Please enter your month of birth : " << endl;
		cin>> S[i].month ;
		cout << " Please enter your year of birth : " << endl;
		cin >> S[i].year;
		if ( S[i].year >0)
		{
			if ( S[i].month < 12 && S[i].month > 0)
			{
				if (S[i].month  == 1 || S[i].month  == 3 ||  S[i].month  == 5 || S[i].month  == 7 ||  S[i].month  == 10 || S[i].month  == 12)
				{
					if (  S[i].day > 31 || S[i].day < 0)
					{
						cout <<"  Your input is invalid. Please be serious and refill everything again.";
						i--;
						break;
					}
				}
				else if (  S[i].month  == 4 ||  S[i].month  == 6 ||  S[i].month  == 9 || S[i].month  == 11)
				{
					if ( S[i].day> 30 ||S[i].day < 0)
					{
						cout <<"  Your input is invalid. Please be serious and refill everything again.";
						i--;
						break;
					}
				}
				else 
				{
					if ( (S[i].year%4 == 0) && (S[i].year%100!=0) && (S[i].year%400==0))
					{
						if (S[i].day > 29 || S[i].day < 0)
						{
							cout <<"  Your input is invalid. Please be serious and refill everything again.";
							i--;
							break;
						}
					}
					else 
					{
						if ( S[i].day > 28 ||S[i].day < 0)
						{
							cout <<"  Your input is invalid. Please be serious and refill everything again.";
							i--;
							break;
						}
					}
				}

			}
			else 
			{
				cout << " Your input is invalid. Please be serious and refill everything again." ;
				i--;
				break;
			}
		}
		else 
		{
			cout << " Your input is invalid " ;
			i--;
			break;
		}
		cin.get();
		cout << " Please enter your email " ;
		cin.getline( S[i].email , 200);
		for ( int j =0 ; j < 200-9 ; j++)
		{
			if (!( S[i].email[j] == '@' && S[i].email[j+1] == 'a' && S[i].email[j+2] == 'p' && S[i].email[j+3] == 'p' && S[i].email[j+4] == 'c' && S[i].email[j+5] == 's' && S[i].email[j+6] == '.' && S[i].email[j+7] == 'v' && S[i].email[j+8] == 'n'))
			{
				checkmail = false;
			}
			else
			{
				checkmail= true;
				break;
			}
		}
		if (checkmail == false)
		{
			cout << " Your input email is invalid. Please refill from the beginning " << endl;
			i--;
		}
		cin.get();
		cout <<" Please enter your address " ; 
		cin.getline ( S[i].address, 129);
		cin.get();
	}
}
void days ( Student S[], int n, int& minday,int& minmonth, int&k)

{
	int daynow;
	int monthnow;
	cout <<" please enter the current day " ;
	cin >> daynow;
	cout <<" Please enter the current month "; 
	cin >> monthnow;
	for ( int i = 0; i< n; i++)
	{
		for ( int j=0; j < n; j++)
		{
			if ( S[i].month != S[j].month)
			{
				if ( S[j].month - monthnow > S[i].month - monthnow)
				{
					minmonth= S[i].month;
					minday= S[i].day;
					k=i+1;
				}
				else 
				{
					minmonth= S[j].month;
					minday= S[j].day;
					k=j+1;
				}
			}
			else 
			{
				if ( S[j].day- daynow > S[i].day - daynow)
				{
					minmonth= S[i].month;
					minday= S[i].day;
					k=i+1;
				}
				else 
				{
					minmonth= S[j].month;
					minday= S[j].day;
					k=j+1;
				}
			}
		}
	}

}
