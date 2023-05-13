#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;
bool compare(pair<int, string> a, pair<int, string> b)
{
   //if(a.first == b.first)
      //return a.second < b.second;
   
   return a.first < b.first;
}
int main()
{
   std::cin.tie(NULL);
   std::cout.tie(NULL);
   std::ios::sync_with_stdio(false);

   int N;
   cin >> N;

   vector<pair<int, string>> v;
   for(int i=0; i<N; i++)
   {
      int age;
      string name;
      cin >> age >> name;
      v.push_back({age, name});
   }

   stable_sort(v.begin(), v.end(), compare);

   for(int i=0; i<v.size(); i++)
      cout << v[i].first << " " << v[i].second << "\n";

   return 0;
}
