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

   int arr[50][2] = {};
   int n;
   cin >> n;
   int grade[n];

   for(int i=0; i<n; i++)
   {
      cin >> arr[i][0] >> arr[i][1];
      grade[i] = 1;
   }

   for(int i=0; i<n; i++)
   {
      for(int j=i+1; j<n; j++)
      {
         if(arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1])
            grade[i]++;
         else if(arr[i][0] > arr[j][0] && arr[i][1] > arr[j][1])
            grade[j]++;
      }
   }

   for(int i=0; i<n; i++)
      cout << grade[i] << " ";
      
   return 0;
}
