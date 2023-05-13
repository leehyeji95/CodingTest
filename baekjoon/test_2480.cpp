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

   int dice[7] = {0,};

   int i, j, k;
   cin >> i >> j >> k;

   dice[i]++;
   dice[j]++;
   dice[k]++;

   for(int a=6; a>0; a--)
   {
      if(dice[a] == 0)
         continue;
      else if(dice[a] == 3)
      {
         cout << 10000 + a * 1000 << "\n";
         return 0;
      }
      else if(dice[a] == 2)
      {
         cout << 1000 + a * 100 << "\n";
         return 0;
      }
      else
      {

      }
   }

   // 다 다른 경우
   int max = i;
   if(max < j)
      max = j;
   if(max < k)
      max = k;
   
   cout << max * 100 << "\n";
   return 0;
}
