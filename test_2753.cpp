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

   int year;
   cin >> year;
   if(year < 1 || year > 4000)
   return 0;

   if((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
      cout << "1" << "\n";
   else
      cout << "0" << "\n";
   
   return 0;
}
