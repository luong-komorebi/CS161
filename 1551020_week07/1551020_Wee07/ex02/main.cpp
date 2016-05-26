// Vo Tran Thanh luong
//1551020
//Ex02
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char fname[100],pass[100], email[100], cemail[100], cpass[100], lname[100];
	int check=0, check2=0;
	int day, month,year;
	cout << " Welcome to Facebook ! This program helps you sign up a Facebook account !" <<endl;
	cout << " Please enter your email account " << endl;
	cin.getline( email,100);
	cout << " Confirm your email address "<< endl;
	cin.getline( cemail, 100);
	if (strcmp(email, cemail)==0)
	{
		for ( int i=1; i <= strlen (email); ++i)
		{
			if ( email[i]== '@')
				check++;
		}
		if ( check >1 || check <1) 
		{
			cout << " Your Input is invalid, please start over again " <<endl;
			return 0;
		}
	}
	else 
	{
	cout << " Your email is not the same , start over again";
	return 0;
	}
	cout << " Please enter your First name : " <<endl;
	cin.getline(fname, 100);
	cout << " Please enter your Last name : " << endl;
	cin.getline(lname,100);
	cout << " Please enter your day of birth : " <<endl;
	cin>> day;
	cout << " Please enter your month of birth : " << endl;
	cin >> month ;
	cout << " Please enter your year of birth : " << endl;
	cin >> year;
	if ( year >0)
	{
		if ( month < 12 && month > 0)
		{
			if ( month == 1 || month == 3 || month == 5 || month == 7 || month == 10 || month == 12)
			{
				if ( day > 31 || day < 0)
				{
					cout <<"  Your input is invalid. Please be serious and refill everything again.";
					return 0;
				}
			}
			else if ( month == 4 || month == 6 || month == 9 || month == 11)
			{
				if ( day > 30 || day < 0)
				{
					cout <<"  Your input is invalid. Please be serious and refill everything again.";
					return 0;
				}
			}
			else 
			{
				if ( (year%4 == 0) && (year%100!=0) && (year%400==0))
				{
					if ( day > 29 || day < 0)
					{
						cout <<"  Your input is invalid. Please be serious and refill everything again.";
						return 0;
					}
				}
				else 
				{
					if ( day > 28 || day < 0)
					{
						cout <<"  Your input is invalid. Please be serious and refill everything again.";
						return 0;
					}
				}
			}

		}
		else 
		{
			cout << " Your input is invalid. Please be serious and refill everything again." ;
			return 0;
		}
	}
	else 
	{
		cout << " Your input is invalid " ;
		return 0;
	}
	cin.get();

	cout << " Please enter your password (must contain digits and letters) : " <<endl;
	cin.getline(pass,100);
	cout << " Please confirm your password :  " << endl;
	cin.getline(pass,100);
	if ( strcmp(pass, cpass)==0)
	{
		int check4=0, check5=0;
		for ( int k=1; k <= strlen (pass); ++k)
		{
			int check3 = pass[k];
			if (!(( check3 >= 48 && check3 <=57 ) || ( check3 >=65 && check3 <=90) || ( check3 >=97 && check3 <=122)))
			{
				cout << " Passwords must contain letters and digits" <<endl;
				cout <<" Retry now" ;
				cin.getline(pass, 100);
			}
			if ( check3 >= 48 && check3 <=57 )
				check4++;
			if (( check3 >=65 && check3 <=90) || ( check3 >=97 && check3 <=122))
				check5++;
		}
		if (!((check4!=0)&& (check5!=0)))
		{
			cout << " Passwords must contain letters and digits" <<endl;
			cout <<" Retry now" ;
			cin.getline(pass, 100);
		}
			
	}
	else
	{
		cout << " Password not match. Reconfirm now: ";
		cin.getline( cpass, 100);
	}
	cout << " Registration was finished successfully " <<endl;
	return 0;

}