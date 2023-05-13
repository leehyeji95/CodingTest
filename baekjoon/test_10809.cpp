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

   int arr[26];
   for(int i=0; i<27; i++)
      arr[i] = -1;

   char S[101];
   cin >> S;

   for(int i=97; i<=122; i++)
   {
      for(int j=0; j<strlen(S); j++)
      {
         int asc = (int)S[j];
         if(i == asc)
         {
            if(arr[i-97] == -1)
               arr[i-97] = j;
         }
      }
      cout << arr[i-97] << " ";
   }
   return 0;
}
