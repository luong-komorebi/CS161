#include "function.h"

int main()
{
	int n,x;
	float a[100];
	cout <<" How many elements do you want to input ? "; 
	cin >> n;
	cout << " Please input a number for x " ;
	cin>> x;
	input(a,n);
	cout << endl;
	reflect(a,n);
	cout << endl;
	negative(a,n);
	cout << endl;
	float b=max(a,n);
	cout<< b <<  " is the biggest number " << endl;
	float c=firstPositive(a,n);
	if ( c!= -1)
		cout<< c << " is the first Positive number of the array " << endl;
	else cout<< " hoola " << c <<" .... ooops There is no positive number in the array " << endl;
	int d= MinPosition(a,n);
	cout << " At Postion " << d << " is the smallest value " <<endl;
	float e= MinPositive(a,n);
	if ( e!= -1)
		cout<< e << " is the smallest of all Positive numbers of the array " << endl;
	else cout<< " hoola "<< c <<" .... ooops There is no positive number in the array " << endl;
	float f= Min(a,n);
	cout << f << " is the smallest number " <<endl;
	float g= MaxNegative( a, n);
	if ( g!= -1)
		cout<< g << " is the biggest of all negative numbers of the array " << endl;
	else cout<< " hoola "<< g <<" .... ooops There is no negative number in the array " << endl;
	int h= MinNegativePosition( a,n);
	if ( h!= -1)
		cout<< " At Postion " << h << " is the smallest negative value " <<endl;
	else cout<< " hoola "<< h <<" .... ooops There is no negative number in the array " << endl;
	float j= Furthest(a,n,x);
	cout<< " the furthest number from x is : " << j << endl;
	Interval(a,n);
	float k= Intervalx(a,n);
	cout << " The interval that can contain all numbers is : ["<<-k<<","<<k<<"]" << "\n and x is" <<k<<endl;
	float l= FindLastNegative(a,n);
	if (l!=0)
		cout << " The last negative number, which is bigger than -1 is : " << l<<endl;
	else cout <<" Cannot find any negative number bigger than -1 " << endl;
	SearchAbs(a,n);
	SearchContrary(a,n);
	int m= CountBiggest ( a, n);
	cout << " The biggest number of the array appears for : " << m << " times " << endl;
	int o= CountNearby ( a, n);
	cout << " So luong cac phan tu ke nhau ma so dung sau cung dau so dung truoc \nva co gia tri tuyet doi lon hon so dung truoc la : " <<o <<endl;
	int p= CountDistinct( a, n);
	cout <<" The number of distinct elements in the array : " << p<<endl;
	ShowNotDistinct ( a, n);
	RemovingBiggestOnes( a, n);
	return 0;

}