#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
#include <algorithm>

using namespace std;
int arr[1000000] = {0,};
int main()
{
   std::cin.tie(NULL);
   std::cout.tie(NULL);
   std::ios::sync_with_stdio(false);

   int N;
   cin >> N;

   for(int i=0; i<N; i++)
      cin >> arr[i];

// 시간초과
   for(int i=0; i<N-1; i++)
   {
      for(int j=1; j<N-i; j++)
      {
         if(arr[j] < arr[j-1])
         {
            int tmp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = tmp;
         }
      }
   }

   // ASCENDING
   //sort(arr, arr+N);
   // DESCENDING
   //sort(arr, arr+N, greater<int>());

   for(int i=0; i<N; i++)
      cout << arr[i] << "\n";

   return 0;
}
