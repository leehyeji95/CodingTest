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

   int N;
   cin >> N;

   int arr[100001][2];
   for(int i=0; i<N; i++)
      cin >> arr[i][0] >> arr[i][1];

   for(int i=0; i<N; i++)
   {
      for(int j=1; j<N-i; j++)
      {
         if(arr[j][0] < arr[j-1][0])
         {
            int x = arr[j][0];
            int y = arr[j][1];
            arr[j][0] = arr[j-1][0];
            arr[j][1] = arr[j-1][1];
            arr[j-1][0] = x;
            arr[j-1][1] = y;
         }
         
         if(arr[j][0] == arr[j-1][0])
         {
            if(arr[j][1] < arr[j-1][1])
            {
               int y = arr[j][1];
               int x = arr[j][0];
               arr[j][1] = arr[j-1][1];
               arr[j][0] = arr[j-1][0];
               arr[j-1][1] = y;
               arr[j-1][0] = x;
            }
         }
      }
   }

   for(int i=0; i<N; i++)
      cout << arr[i][0] << " " << arr[i][1] << "\n";

   return 0;
}
