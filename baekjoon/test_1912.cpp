#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>

#define max(x,y) x > y ? x : y
#define MAX_ARR 100000
using namespace std;

int main()
{
   std::cin.tie(NULL);
   std::cout.tie(NULL);
   std::ios::sync_with_stdio(false);

   int n;
   cin >> n;

   int arr[MAX_ARR];
   int dp[MAX_ARR];
   for(int i=0; i<n; i++)
      cin >> arr[i];
   
   // dp[n]은 N까지의 합의 최대값
   dp[0] = arr[0];
   int nMax = dp[0];
   for(int i=1; i<n; i++)
   {
      if(dp[i-1] < 0)
         dp[i] = arr[i];
      else
         dp[i] = dp[i-1] + arr[i];

      if(nMax < dp[i])
         nMax = dp[i];
      
   }

   cout << nMax << "\n";
   return 0;
}
