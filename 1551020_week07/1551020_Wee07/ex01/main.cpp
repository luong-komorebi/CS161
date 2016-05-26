//VoTranThanhLuong
//1551020
//week07

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	cout<< " Hello ! " << endl;
	char username[100], password[100];
	cout << " Please input your user name : "<<endl;
	cin.getline( username, 100, '\n');	
	if ( strcmp(username, "tploc"))
		{
			cout<< "Your username was not right " << endl;
			return 0;
		}
	cout<<" Please input your password : " <<endl;
	cin.getline(password, 100, '\n');
	if ( strcmp(password, "loctp"))
		cout << " Your pass word was not right " << endl;
	else cout << " Login successfully ! " << endl;
	return 0;

}