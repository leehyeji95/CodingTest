#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>

using namespace std;
long long arr[100];
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

   for(int i=3; i<=N; i++)
   {
      arr[i] = arr[i-2] + arr[i-1];
   }
   cout << arr[N] << "\n";
   return 0;
}
