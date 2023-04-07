#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
#include <algorithm>

using namespace std;
int main()
{
   std::cin.tie(NULL);
   std::cout.tie(NULL);
   std::ios::sync_with_stdio(false);

   int N;
   cin >> N;

   int arr[N];
   for(int i=0; i<N; i++)
      cin >> arr[i];

   sort(arr, arr+N);
   for(int i=0; i<N; i++)
      cout << arr[i] << "\n";
   return 0;
}
