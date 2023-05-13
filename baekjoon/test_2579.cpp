#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>

using namespace std;
int Max(int a, int b)
{
   return a >= b ? a : b;
}
int main()
{
   std::cin.tie(NULL);
   std::cout.tie(NULL);
   std::ios::sync_with_stdio(false);

   int N;
   cin >> N;

   int arr[301]={0,};
   int dp[301]={0,};
   
   for(int i=1; i<=N; i++)
      cin >> arr[i];

   dp[1] = arr[1];
   dp[2] = arr[1] + arr[2];

   for(int i=3; i<=N; i++)
      dp[i] = Max(dp[i-3] + arr[i-1] + arr[i], dp[i-2] + arr[i]);

   cout << dp[N] << "\n";

   return 0;
}
