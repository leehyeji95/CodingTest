#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>

#include <algorithm>
#define max(a,b) (a > b) ? a : b

using namespace std;
int glasses[10001];
int dp[10001];
int main()
{
   std::cin.tie(NULL);
   std::cout.tie(NULL);
   std::ios::sync_with_stdio(false);

   int n;
   cin >> n;

   for(int i=1; i<=n; i++)
      cin >> glasses[i];

   int max = 0;
   dp[0] = 0;
   dp[1] = glasses[1];
   dp[2] = glasses[1] + glasses[2];

   for(int i=3; i<=n; i++)
      dp[i] = max(dp[i-2]+glasses[i], dp[i-3]+glasses[i-1]+glasses[i]);

   for(int i=1; i<=n; i++)
   {
      if(max < dp[i])
         max = dp[i];
   }

   cout << max << "\n";

   return 0;
}
