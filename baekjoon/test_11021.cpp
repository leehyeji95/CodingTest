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
   for(int i = 0; i < T; i++)
   {
      int a, b;
      cin >> a >> b;
      cout << "Case #" << i+1 << ": " << a+b << "\n";
   }



   return 0;
}
