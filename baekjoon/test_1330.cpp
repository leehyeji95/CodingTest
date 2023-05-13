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

   int a, b;
   cin >> a >> b;

   if(a > b)
   {
      cout << ">" << "\n";
   }
   else if(a < b)
   {
      cout << "<" << "\n";
   }
   else
   {
      cout << "==" << "\n";
   }
   return 0;
}
