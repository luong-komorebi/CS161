#include "function.h"
void GiaiPTBacHai(int a, int b, int c)
{
    int D = b*b - 4*a*c;
    if(D<0)
        cout <<"No VALUE ";
    else if(D == 0)
        cout<< " " <<-(b/(2*a));
    else
    {
       cout << " " << ((-b + sqrt(D*1.0))/(2*a));
       cout << " " << ((-b - sqrt(D*1.0))/(2*a));
    }
}