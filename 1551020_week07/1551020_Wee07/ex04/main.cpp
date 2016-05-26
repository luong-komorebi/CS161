//Vo Tran Thanh Luong
//1551020
// Ex04
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char fullname[100];
	char mail[100];
	char last[100];
	int k=0, g=0, m=0, i=0;
	int n;
	int dem=1;
	int ID;
	cout << " Hello " <<endl;
	cout<<" How many students you want to make email for : " ;
	cin >>n;
	cin.get();
	do 
	{
	cout << " Please enter student's  full name here : " <<endl;
	cin.getline(fullname, 100, '\n');
	cout << " Please enter students's ID : " << endl;
	cin >> ID;
	
	
		for(  i=0;i<=strlen(fullname); ++i)
		{
			if (fullname[i] == ' ')
			{
				g=i;
				mail[k]= fullname[i+1];
				k++;
			}
		
			if ( fullname[i]=='\0')
			{
				for ( m =0;g<=i; m++)
				{
					if (g>0)
					last[m]=fullname[g+2];
					g++;
				}
			}
		}
		mail[k]='\0';

		char z=fullname[0];
		cout <<" Your email is : " <<fullname[0]<<mail<<last<<"@apcs.vn"<<endl;
		dem++;
		cin.getline ( fullname ,100);
	} while ( n>=dem);
	
}

