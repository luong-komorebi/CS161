#include "function.h"

void pt( int a, int b)
{
	int kq=0;
	if ( a==0)
	{
		if ( b==0)
			cout << " Any Number can validate this equation " << endl;
		else cout << " No number matches this equation" << endl;
	}
	else cout<< (-b/a);
}