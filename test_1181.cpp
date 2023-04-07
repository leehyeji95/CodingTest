#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
#include <vector>
#include <algorithm>

#define MAX 20000
using namespace std;
bool compare(string a, string b)
{
   if(a.length() == b.length())
      // a �� b�� ������ �������� ���� ��) no�� it ���ϸ� false 
      return a < b;
   return a.length() < b.length();
}

int main()
{
   std::cin.tie(NULL);
   std::cout.tie(NULL);
   std::ios::sync_with_stdio(false);

   vector<string> v;
   int N; 
   cin >> N;

   for(int i=0; i<N; i++)
   {
      string word;
      cin >> word;
      // �ߺ� �̸� Ȯ���ؼ� ���Ϳ� �ֱ� => �ߺ� ������ v.end() ��ȯ
      if(find(v.begin(), v.end(), word) == v.end())
         v. push_back(word);
   }

   sort(v.begin(), v.end(), compare);

   for(int i=0; i<v.size(); i++)
      cout << v[i] << "\n";
   
   return 0;
}
