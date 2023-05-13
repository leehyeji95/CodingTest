#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
#include <vector>
#include <algorithm>
#include <tuple>

using namespace std;
bool compare(tuple<int, string, int>& a, tuple<int, string, int>& b)
{
   if(get<0>(a) == get<0>(b))
      return get<2>(a) < get<2>(b);
   
   return get<0>(a) < get<0>(b);
}
int main()
{
   std::cin.tie(NULL);
   std::cout.tie(NULL);
   std::ios::sync_with_stdio(false);

   int N;
   cin >> N;

   vector<tuple<int, string, int>> v;
   for(int i=0; i<N; i++)
   {
      int age;
      string name;
      cin >> age >> name;
      v.push_back(make_tuple(age, name, i));
   }

   sort(v.begin(), v.end(), compare);

   for(int i=0; i<v.size(); i++)
      cout << get<0>(v[i]) << " " << get<1>(v[i]) << "\n";

   return 0;
}
