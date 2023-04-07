#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;
bool compare(pair<int, int> a, pair<int, int> b)
{
   if(a.second == b.second)
      return a.first < b.first;
   // Y 기준으로 오름차순 정렬
   // a < b : 왼쪽 a 보다 b 가 큰 방향으로 정렬 (즉, 오름차순)
   return a.second < b.second;
}
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
  
   sort(v.begin(), v.end(), compare);
   for(int i=0; i<v.size(); i++)
      cout << v[i].first << " " << v[i].second << "\n";
   
   return 0;
}
