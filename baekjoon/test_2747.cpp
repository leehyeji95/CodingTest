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
   
   int N = 0;
   cin >> N;

   int arr[N];
   arr[0] = 0;
   arr[1] = 1;

   for(int i=2; i<=N; i++)
      arr[i] = arr[i-2] + arr[i-1];

   cout << arr[N] << "\n";
   return 0;
}
