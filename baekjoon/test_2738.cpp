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

   int n, m;
   cin >> n >> m;

   int arr1[100][100];
   int arr2[100][100];
   int arr3[100][100];

   for(int i=0; i<n; i++)
   {
      for(int j=0; j<m; j++)
      {
         cin >> arr1[i][j];
      }
   }

   for(int i=0; i<n; i++)
   {
      for(int j=0; j<m; j++)
      {
         cin >> arr2[i][j];
      }
   }

   for(int i=0; i<n; i++)
   {
      for(int j=0; j<m; j++)
      {
         arr3[i][j] = arr1[i][j] + arr2[i][j];
         cout << arr3[i][j] << " ";
      }
      cout << "\n";
   }
   return 0;
}

