#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>

#define MAX 1000000000

using namespace std;
int main()
{
   std::cin.tie(NULL);
   std::cout.tie(NULL);
   std::ios::sync_with_stdio(false);

   string strArr;
   cin >> strArr;

   for(int i=0; i<strArr.length()-1; i++)
   {
      for(int j=1; j<strArr.length()-i; j++)
      {
         if(strArr.at(j) > strArr.at(j-1))
         {
            char tmp = strArr.at(j);
            strArr.at(j) = strArr.at(j-1);
            strArr.at(j-1) = tmp;
         }
      }
   }

   cout << strArr << "\n";

   return 0;
}
