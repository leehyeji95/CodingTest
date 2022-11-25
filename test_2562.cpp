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

   int arr[9] = {0,};
   for(int i=0; i<9; i++)
   {
      cin >> arr[i];
   }

   int max = arr[0];
   int loc = 0;
   for(int i=1; i<9; i++)
   {
      if(max < arr[i])
      {
         max = arr[i];
         loc = i;
      }
   }
   cout << max << "\n";
   cout << loc+1 << "\n";
   return 0;
}
