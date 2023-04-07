#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
int main()
{
   std::cin.tie(NULL);
   std::cout.tie(NULL);
   std::ios::sync_with_stdio(false);

   int N, M;
   cin >> N >> M;

   int arr[N];
   for(int i=0; i<N; i++)
   {
      cin >> arr[i];
   }
   
   int max, sum = 0;
   for(int i=0; i<N; i++)
   {
      for(int j=i+1; j<N; j++)
      {
         for(int k=j+1; k<N; k++)
         {
            sum = arr[i] + arr[j] + arr[k];
            if(sum <= M && sum >= max)
            {
               cout << i << " " << j << " " << k << "\n";
               max = sum;
            }
         }
      }
   }

   cout << max << "";
   return 0;
}

