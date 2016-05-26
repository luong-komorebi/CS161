#include <iostream>
#include <iomanip>
using namespace std;
void main()
{
	float x, xx, y1, y2,e;
	cout<< " Nhap X vao day " ; 
	cin>>x;
	y1= 4* ( pow(2,x)+ 10*x*sqrt(x)+ 3*x+1);
	xx=2*x;
	e=2,71;
	y2= (sin(3.14* pow(2,x)) + sqrt( pow(2,x)+1))/ ( pow(xx,e) + cos (3.14/4*x));
	cout<<setiosflags(ios::fixed);
	cout<<setprecision(2);
	cout<< "\n day la ket qua y1 : " <<y1;
	cout<< " \n day la ket qua y2: " <<y2;
}