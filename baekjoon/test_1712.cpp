#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>

using namespace std;
int main()
{
   std::cin.tie(NULL);
   std::cout.tie(NULL);
   std::ios::sync_with_stdio(false);
   
   int A, B, C;
   cin >> A >> B >> C;
   
   if(C - B <= 0) cout << -1 << "\n";
   else
   {
      int n = 0;
      n = A / (C - B) + 1;
      cout << n << "\n";
   }

   return 0;
}

