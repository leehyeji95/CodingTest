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

   int arr[1000001]={0,};
   arr[1] = 1;
   arr[2] = 2;

   int N;
   cin >> N;

   for(int i=3; i<=N; i++)
   {
      arr[i] = (arr[i-2] + arr[i-1]) % 15746;
      //arr[i] = arr[i-2] + arr[i-1];
      //cout << i << ", " << arr[i] << "\n";
   }

   cout << arr[N] << "\n";
   return 0;
}
