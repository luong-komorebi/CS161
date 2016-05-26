//1551031
//Vo Tran Thanh Luong
//Ex05
#include <iostream>
#include <string.h>

using namespace std;
int main()
{
	char cau[1000], FIX;
	int dem=0, dem1=0;
	cout<<" Input the paragraph : \n ( Do not start with a white space or a special character) "<<endl;
	cin.getline(cau, 1000,'\n');
	for(int i=0;i <= strlen(cau); i++)
	{
		
		if(cau[i]=='.' && cau[i-1]!=' ')
		{
			for(int j=i+1; j<=strlen(cau);j++)
				if(cau[j]>='a' && cau[j]<='z')
				{
					FIX = toupper(cau[j]);
					cau[j] = FIX;
					break;
				}
			dem1++;
			if(cau[i-1]!=' ')
				dem++;
		}
		else if(cau[i]==' ' && cau[i-1]!='.' && cau[i-1]!=' ')
			dem++;
		if(i==0)
		{
			FIX = toupper(cau[i]);
			cout<< FIX;
		}
		else cout<< cau[i];
	}
	cout<< endl;
	cout<< "the paragraph has " <<dem1<< " sentence(s)"<<endl;
	cout<< "the paragraph has " <<dem << " word(s)"<<endl;	
	return 0;
}