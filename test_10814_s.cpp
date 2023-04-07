#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;
struct Info {
   int order;
   int age;
   string name;
};
bool compare(Info a, Info b)
{
   if(a.age == b.age)
      return a.order < b.order;
   
   return a.age < b.age;
}
int main()
{
   std::cin.tie(NULL);
   std::cout.tie(NULL);
   std::ios::sync_with_stdio(false);

   int N;
   cin >> N;

   vector<Info> v;
   for(int i=0; i<N; i++)
   {
      Info info;
      cin >> info.age >> info.name;
      info.order = i;
      v.push_back(info);
   }

   stable_sort(v.begin(), v.end(), compare);

   for(int i=0; i<v.size(); i++)
      cout << v[i].age << " " << v[i].name << "\n";

   return 0;
}
