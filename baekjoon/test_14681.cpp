#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>

using namespace std;
int main()
{
   std::cin.tie(NULL);
   std::cout.tie(NULL);
   std::ios::sync_with_stdio(false);

   int x, y, res;
   cin >> x >> y;

   if(x > 0)
   {
      if(y > 0)
         res = 1;
      else
         res = 4;
   }
   else
   {
      if(y > 0)
         res = 2;
      else
         res = 3;
   }
   
   cout << res << "\n";     
   return 0;
}
