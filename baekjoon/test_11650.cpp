#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
   std::cin.tie(NULL);
   std::cout.tie(NULL);
   std::ios::sync_with_stdio(false);

   int N;
   cin >> N;

   vector<pair<int, int>> v;
   for(int i=0; i<N; i++)
   {
      int x, y;
      cin >> x >> y;
      v.push_back({x, y});
   }
  
   sort(v.begin(), v.end());
   for(int i=0; i<v.size(); i++)
      cout << v[i].first << " " << v[i].second << "\n";
   
   return 0;
}
