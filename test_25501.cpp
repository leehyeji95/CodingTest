#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
#include <string>

using namespace std;
int main()
{
   std::cin.tie(NULL);
   std::cout.tie(NULL);
   std::ios::sync_with_stdio(false);

   int T;
   cin >> T;
   
   for(int i=0; i<T; i++)
   {
      string s;
      cin >> s;

      int cnt = 0;
      int left = 0;
      int right = s.length() - 1;
      bool flag = true;
   
      while(1)
      {
         cnt++;
         if(left >= right)
            break;

         if(s[left] != s[right])
         {
            flag = false;
            break;
         }
         left++;
         right--;
      }
      cout << (int)flag << " " << cnt << "\n";
   }
   return 0;
}
