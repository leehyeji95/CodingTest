#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>

using namespace std;
int recur_cnt = 0;
int for_cnt = 0;
int arr[50];
int fibo_recur(int n)
{
   if(n == 1 || n == 2)
   {  
      recur_cnt++;
      return 1;
   }
   else
   {
      return fibo_recur(n-2) + fibo_recur(n-1);
   }
}
int fibo_dp(int n)
{
   for(int i=3; i<=n; i++)
   {
      for_cnt++;
      arr[i] = arr[i-2] + arr[i-1];
   }
   
   return arr[n];
}
int main()
{
   std::cin.tie(NULL);
   std::cout.tie(NULL);
   std::ios::sync_with_stdio(false);
   
   int N = 0;
   cin >> N;

   int arr[N];
   arr[0] = 0;
   arr[1] = 1;
   arr[2] = 1;

   fibo_recur(N);
   fibo_dp(N);

   cout << recur_cnt << " " << for_cnt << "\n";
   return 0;
}
