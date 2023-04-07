#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
#include <algorithm>

using namespace std;
int main()
{
   std::cin.tie(NULL);
   std::cout.tie(NULL);
   std::ios::sync_with_stdio(false);

   int n;
   cin >> n;

   int tri[500][500];
   int dp[500][500];
   int nMax[500] = {0,};
   for(int i=0; i<n; i++)
   {
      for(int j=0; j<=i; j++)
         cin >> tri[i][j];
   }
   dp[0][0] = tri[0][0];
   nMax[0] = dp[0][0];

   for(int i=1; i<n; i++)
   {
      for(int j=0; j<=i; j++)
      {
         if(j == 0)
            dp[i][j] = dp[i-1][j] + tri[i][j];
         else if(i == j)
            dp[i][j] = dp[i-1][j-1] + tri[i][j];
         else
            dp[i][j] = max(dp[i-1][j-1] + tri[i][j], dp[i-1][j] + tri[i][j]);

         nMax[i] = max(nMax[i], dp[i][j]); 
      }
   }
   
   cout << nMax[n-1] << "\n";
   return 0;
}
