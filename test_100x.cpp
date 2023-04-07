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

   double a, b;
   cin >> a >> b;
   
   cout << fixed;
   cout.precision(10);
   cout << a / b << "\n";
   return 0;
}
