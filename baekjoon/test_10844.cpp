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
   
   // 길이가 N인 숫자의 끝자리가 0~9 까지
   long long dp[101][11];

   for(int i=1; i<10; i++)
      dp[1][i] = 1;

   for(int i=2; i<=N; i++)
   {
      for(int j=0; j<10; j++)
      {
         if(j == 0)
            dp[i][j] = dp[i-1][j+1] % 1000000000;
         else if(j == 9)
            dp[i][j] = dp[i-1][j-1] % 1000000000;
         else
            dp[i][j] = (dp[i-1][j-1] + dp[i-1][j+1]) % 1000000000;
      }
   }

   long long nMax = 0;
   for(int i=0; i<10; i++)
      nMax += dp[N][i];

   // 왜 또 나눠?
   cout << nMax % 1000000000 << "\n";
   return 0;
}
