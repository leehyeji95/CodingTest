#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>

using namespace std;
int fibo(int num)
{
   if(num == 0)
      return 0;
   if(num == 1)
      return 1;
   return fibo(num-2) + fibo(num-1);
}
int main()
{
   std::cin.tie(NULL);
   std::cout.tie(NULL);
   std::ios::sync_with_stdio(false);
   
   int N = 0;
   cin >> N;

   cout << fibo(N) << "\n";
   return 0;
}
