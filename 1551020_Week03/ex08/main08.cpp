#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	cout << "Welcome to my program" << endl;
	char a;
	cout << " Please enter a letter ";
	cin >> a;
	if ( (a >= 'A') && (a <= 'Z') )
         {
                int k =  int (a) + 32 ;
                cout<< " This is MAGIC  "<< char(k);
         }
    else if ( (a >= 'a') && (a<= 'z') )
         {
                int k = int (a) - 32;
                cout<< " This is MAGIC   " <<char(k);
         }
	else cout<< " Are you sure you input one LETTER? ";
    return 0;
}