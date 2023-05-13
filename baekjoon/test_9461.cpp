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

   int T;
   cin >> T;

   while(T--)
   {

      int N;
      cin >> N;

      long long arr[101] = {0,};
      arr[1] = 1;
      arr[2] = 1;
      arr[3] = 1;
      arr[4] = 2;

      for(int i=5; i<=N; i++)
      {
         arr[i] = arr[i-1]+arr[i-5];
         cout << arr[i] << "\n";
      }

         cout << arr[N] << "\n";

   }
   return 0;
}
