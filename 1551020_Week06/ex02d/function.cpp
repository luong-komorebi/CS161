#include "function.h"
int SoDoiXung(int a)
{
   int b = 0;
   int sn = a;
   while (sn > 0)
   {
      b = b*10 + sn%10;
      sn /= 10;
   }
   return b;
}