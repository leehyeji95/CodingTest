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

   int N;
   cin >> N;
   
   int res = 1;
   if(N == 0) 
   {
      cout << res << "";
      return 0;
   }

   for(int i=N; i>0; i--)
   {
      res = res * i;
   }

   cout << res << "";
   return 0;
}
