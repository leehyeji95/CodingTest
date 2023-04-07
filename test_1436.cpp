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

   int num = 0;
   cin >> num;
   int cnt = 0;
   int res = 0;
   int temp = 0;
   
   while(cnt != num)
   {
      res++;
      temp = res;
      while(temp != 0)
      {
         if(temp % 1000 == 666)
         {
            cnt++;
            break;
         }
         else
         {
            temp /= 10;
         }
      }
   }
   cout << res << "";

   return 0;
}
