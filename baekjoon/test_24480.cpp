#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;
vector<int> v[200001];
int visited[2000001] = {0,};
int cnt = 0;
void dfs(int idx)
{
   visited[idx] = ++cnt;
   for(int i=0;i<v[idx].size();i++)
   {
      int next = v[idx][i];
      if(visited[next] == 0) dfs(next);
   }
}
int main()
{
   std::cin.tie(NULL);
   std::cout.tie(NULL);
   std::ios::sync_with_stdio(false);

   memset(visited, 0x00, sizeof(visited));
   int N, M, R;
   cin >> N >> M >> R;
   while(M--)
   {
      int S, E;
      cin >> S >> E;
      v[S].push_back(E);
      v[E].push_back(S);
   }

   for(int i=0;i<200000;i++)
   {
      sort(v[i].begin(), v[i].end(), greater<int>()); 
   }
       
   dfs(R);

   for(int i=1; i<=N; i++)
      cout << visited[i] << "\n"; 
   return 0;
}
