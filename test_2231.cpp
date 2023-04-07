#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>

using namespace std;
int main()
{
   std::cin.tie(NULL);
   std::cout.tie(NULL);
   std::ios::sync_with_stdio(false);

   int num;
   int sum;
   int var;

   cin >> num;

   for(int i=0; i<num; i++)
   {
      sum = i;
      var = i;

      while(var)
      {
         sum += var % 10;
         var /= 10;
      }

      if(sum == num)
      {
         cout << i << "";
         return 0;
      }
   }
   cout << 0 << "";
   return 0;
}
