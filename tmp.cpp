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

   vector<int> v;
   v.push_back(0);
   v.push_back(2);
   v.push_back(7);
   v.push_back(7);
   v.push_back(-3);
   v.push_back(-2);
   v.push_back(-2);
   v.push_back(8);

   //for(int i=0; i<v.size(); i++)
      //cout << v[i] << " ";

   sort(v.begin(), v.end());
   v.erase(unique(v.begin(), v.end()), v.end());

   for(int i=0; i<v.size(); i++)
      cout << v[i] << " ";

   return 0;
}
