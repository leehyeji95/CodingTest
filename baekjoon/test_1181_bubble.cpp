#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>

#define MAX 20000
using namespace std;
int main()
{
   std::cin.tie(NULL);
   std::cout.tie(NULL);
   std::ios::sync_with_stdio(false);

   string arr[MAX];
   int N; 
   cin >> N;

   for(int i=0; i<N; i++)
      cin >> arr[i];

   for(int i=0; i<N-1; i++)
   {
      for(int j=1; j<N-i; j++)
      {
         if(arr[j].size() < arr[j-1].size())
         {
            string tmp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = tmp;
         }

         if(arr[j].size() == arr[j-1].size())
         {
            /*
            for(int k=0; k<arr[j].size(); k++)
            {
               if(arr[j].at(k) == arr[j-1].at(k)) continue;
               else if(arr[j].at(k) < arr[j-1].at(k))
               {
                  string tmp = arr[j];
                  arr[j] = arr[j-1];
                  arr[j-1] = tmp;
                  break;
               }
               else break;
            }
            */
            if(arr[j] < arr[j-1])
            {
                  string tmp = arr[j];
                  arr[j] = arr[j-1];
                  arr[j-1] = tmp;
            }
         }
      }
   }

   for(int i=0; i<N; i++)
   {
      if(i == 0) cout << arr[0] << "\n";
      else
      {
         if(arr[i-1] == arr[i])
            continue;
         else
            cout << arr[i] << "\n";
      } 
   }

   // Âü°í
   string temp;
   for(int i=0; i<N; i++)
   {
      if(temp == arr[i]) continue;
      cout << arr[i] << "\n";
      temp = arr[i];
   }

   return 0;
}
