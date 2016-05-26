#include <iostream>
#include <string.h>
using namespace std;
int main()
{	
	cout << "Welcome to my program" << endl;
	int a ,b, c, d;
	cout<< " Moi nhap vao so a    ";
	cin>>a;
	cout <<" Moi nhap vo so b   ";
	cin>>b;
	cout<<" Moi nhap so c   ";
	cin>>c;
	cout<< " moi nhap so d   ";
	cin>>d;
	if  ((a <b)  && (a<c) && ( a<d))
		cout<< " So nho nhatla:     " << a;
	else 
	{
		a=b;
			if  ((a<c) && ( a <d))
				cout<< " So nho nhatla: " << a;
			else 
				{
					a = c;
						if ( a<d)
							cout<< " So nho nhatla:    " << a;
						else cout<< " So nho nhat la:     " << d;
	}
			}

return 0;
}



		
