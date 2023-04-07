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

   int a;
   int cnt = 0;
   cin >> a;
   if(a < 0 || a > 100)
      return 0;
   else
   {
      int aa = a;
      while(1)
      {
         cnt++;
         int left = aa / 10;
         int right = aa % 10;
         int sum = left + right;
         int sumRight = sum % 10;
         int newNum = right * 10 + sumRight;

         if(a == newNum)
            break;
         
         aa = newNum;
      }         
      cout << cnt << "\n";
      return 0;
   }
   return 0;
}
