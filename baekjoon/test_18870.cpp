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

   // 좌표압축 : 여러곳에 흩뿌려진 좌표들을 연속된 수로 모아 압축하는 것. 작은 값부터 시작해서 0부터 인덱스 부여
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
   
   // 오름차순 정렬
   sort(v.begin(), v.end());
   // 중복값 제거
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
