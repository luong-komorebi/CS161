#include <iostream>
using namespace std;
void main()
{
	float goc;
	float kq;
	cout<<"Nhap goc can tinh";
	cin>>goc;
	kq=1/tan(3.14*goc/180);
	cout<<" Cotan cua goc can tinh la\n "<<kq;
}