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
   
   int hour, min;
   cin >> hour >> min;
   
   if(hour < 0 || hour > 23)
      return 0;
   
   if(min < 0 || min > 59)
      return 0;
   
   if(min - 45 < 0)
   {
      if(hour == 0)  hour = 24;
      hour--;
      min = min + 15;
   }
   else
   {
      min = min - 45;
   }
      
   cout << hour << " " << min << "\n";
   return 0;
}

