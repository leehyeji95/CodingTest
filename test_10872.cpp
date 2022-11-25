#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>

using namespace std;
int factorial(int n)
{
   if(n == 0) return 1;
   return n * factorial(n-1);

}
int main()
{
   std::cin.tie(NULL);
   std::cout.tie(NULL);
   std::ios::sync_with_stdio(false);

   int N;
   cin >> N;
   
   int sum = factorial(N);
   
   cout << sum << "";
   return 0;
}
