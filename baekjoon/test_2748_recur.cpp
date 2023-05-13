#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>

using namespace std;
long long arr[100];
int fibo(int num)
{
   if(num == 0 || num == 1 || num == 2)
      return arr[num];
   else
   {
      arr[num] = fibo(num-2) + fibo(num-1);
      return arr[num];
   }
}
int main()
{
   std::cin.tie(NULL);
   std::cout.tie(NULL);
   std::ios::sync_with_stdio(false);
   
   int N = 0;
   cin >> N;

   arr[0] = 0;
   arr[1] = 1;
   arr[2] = 1;

   cout << fibo(N) << "\n";
   return 0;
}
