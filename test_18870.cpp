#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
int main()
{
   std::cin.tie(NULL);
   std::cout.tie(NULL);
   std::ios::sync_with_stdio(false);

   // ��ǥ���� : �������� ��ѷ��� ��ǥ���� ���ӵ� ���� ��� �����ϴ� ��. ���� ������ �����ؼ� 0���� �ε��� �ο�
   int N;
   cin >> N;
   vector<long long> v;
   long long arr[1000000];
   map<long long, int> m;

   for(int i=0; i<N; i++)
   {
      long long X;
      cin >> X;
      v.push_back(X);
      arr[i] = X;
   }
   
   // �������� ����
   sort(v.begin(), v.end());
   // �ߺ��� ����
   v.erase(unique(v.begin(), v.end()), v.end());

   for(int i=0; i<v.size(); i++)
   {
      m.insert({v[i], i});
   }

   for(int i=0; i<N; i++)
   {
      cout << m.find(arr[i])->second << " ";
   }
 
   return 0;
}
