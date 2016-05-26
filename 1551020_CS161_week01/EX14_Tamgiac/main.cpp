#include <iostream>
using namespace std;
void main()
{
	float so1, so2, so3,chuvi,ncv,dientich;
	cout<<" Moi nhap do dai canh thu nhat: ";
	cin>>so1;
	cout<<"Moi nhap do dai canh thu hai:  ";
	cin>>so2;
	cout<<"Moi nhap do dai canh thu ba: ";
	cin>>so3;
	chuvi= so1+so2+so3;
	ncv=chuvi/2;
	dientich= sqrt(ncv*(ncv-so1)*(ncv-so2)*(ncv-so3));
	cout<<"day la dien tich cua quy khach        " <<dientich;
	cout<<"\nday la chu vi cua quy khach       " <<chuvi;
	cout<< "\n neu ket qua ra tam bay la do ban nhap cac canh \n khong theo dung bat dang thuc trong tam giac hoac \n ban nhap do dai mot canh la so am hoac so 0\n Instructor cua minh chua day cach xai cau dieu kien if\n nen ban vui long hoc lai lop 7 va dien dung \n thong tin giup minh, xin cam on \n " ;
}