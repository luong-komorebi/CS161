#include<iostream>
using namespace std;
void  main()
{
	int so1, so2, tien;
	float thue;
	cout<< "Nhap so luong hang";
	cin>>so1;
	cout<< "nhap gia mot mon";
	cin>>so2;
	thue= so1*so2*10/100;
	tien= so1*so2 + thue;
	cout<< " So tien phai tra la:" <<tien;
}