#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
#include <algorithm>

#define funcMin(x, y) x < y ? x: y

using namespace std;
int main()
{
   std::cin.tie(NULL);
   std::cout.tie(NULL);
   std::ios::sync_with_stdio(false);

   int house[1001][3];
   int dp[1001][3];
   int N;
   cin >> N;

   for(int i=0; i<N; i++)
   {
      for(int j=0; j<3; j++)
      {
         cin >> house[i][j];
         if(i == 0)
            dp[i][j] = house[i][j];
      }
   }

   for(int i=1; i<N; i++)
   {
      dp[i][0] = funcMin(dp[i-1][1] + house[i][0], dp[i-1][2] + house[i][0]);
      dp[i][1] = funcMin(dp[i-1][0] + house[i][1], dp[i-1][2] + house[i][1]);
      dp[i][2] = funcMin(dp[i-1][0] + house[i][2], dp[i-1][1] + house[i][2]);

      cout << "minR: " << dp[i][0] << "\n";
      cout << "minG: " << dp[i][1] << "\n";
      cout << "minB: " << dp[i][2] << "\n";
   }

   
/* Case1.
   int cost[1000] = {0,};
   for(int i=0; i<N; i++)
   {
      cost[i] = dp[i][0];
      for(int j=0; j<3; j++)
      {
         if(cost[i] > dp[i][j])
            cost[i] = dp[i][j];
      }
   }

   cout << cost[N-1] << "\n";
*/

   // Case 2.
   int tmp = funcMin(dp[N-1][0], dp[N-1][1]);
   cout << "SsS" << tmp << "\n";
   int minCost = funcMin(dp[N-1][2], funcMin(dp[N-1][0], dp[N-1][1]));
   //int minCost = funcMin(tmp, dp[N-1][2]);
   cout << "funcMin: " << (funcMin(dp[N-1][2], funcMin(dp[N-1][0], dp[N-1][1]))) << "\n";

   cout << min(min(dp[N-1][0], dp[N-1][1]), dp[N-1][2]) << "\n";
   
   return 0;
}
