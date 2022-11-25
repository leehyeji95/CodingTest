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
   
   int n = 0;
   cin >> n;

   int arr[n];
   arr[0] = 0;
   arr[1] = 1;

   for(int i=2; i<=n; i++)
   {
      arr[i] = arr[i-2] + arr[i-1];
   }

   cout << arr[n] << "";
   return 0;
}
