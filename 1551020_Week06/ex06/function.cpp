#include "function.h"

void doitien ( int n)
{
	for ( int i=0; 10000*i <=n  ; i++)
	for ( int j=0; 5000*j <=n  ; j++)
	for ( int g=0; 2000*g <=n ; g++)
	for ( int h=0; 1000*h <=n ; h++)
	for ( int k=0; 500*k <=n  ; k++)
	{
		if (i>0)
			{
				cout << i << " * 10k ";
				cout  << "+" ;
			}
		if (j>0)
			{
				cout << j << " * 5k ";
				cout  << "+" ;
			}
		if (g>0)
			{
				cout << g << " * 2k ";
				cout  << "+" ;
			}
		if (h>0)
			{
				cout << h << " * 1k ";
				cout  << "+" ;
			}
		if (k>0)
			{
				cout << k << " * 500 ";
				cout  << "+" ;
			}
		cout << " 0 " << endl;
	}
}