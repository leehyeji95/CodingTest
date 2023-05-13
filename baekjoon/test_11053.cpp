#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>

#define fnMax(x, y) x > y ? x : y
using namespace std;
int main()
{
   std::cin.tie(NULL);
   std::cout.tie(NULL);
   std::ios::sync_with_stdio(false);

   int arr[1000];
   int dp[1000];
   int N;
   cin >> N;

   for(int i=0; i<N; i++)
      cin >> arr[i];

   dp[0] = 1;
   int nMax = dp[0];
   for(int i=1; i<N; i++)
   {
      dp[i] = 1;
      for(int j=0; j<i; j++)
      {
         if(arr[i] > arr[j])
            dp[i] = fnMax(dp[i], dp[j] + 1);
      }
      if(nMax < dp[i])
         nMax = dp[i];
   }

   cout << nMax << "\n";
   return 0;
}
