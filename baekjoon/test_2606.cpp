#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> v[101];
int visited[101] = {0,};
int cnt = 0;
void dfs(int idx)
{
   visited[idx] = ++cnt;
   for(int i=0; i<v[idx].size(); i++)
   {
      int next = v[idx][i];
      if(visited[next] == 0)
         dfs(next);
   }
}

int main()
{
   std::cin.tie(NULL);
   std::cout.tie(NULL);
   std::ios::sync_with_stdio(false);

   int N, M;
   cin >> N >> M;
   while(M--)
   {
      int S, E;
      cin >> S >> E;
      v[S].push_back(E);
      v[E].push_back(S);
   }

   for(int i=0; i<100; i++)
      sort(v[i].begin(), v[i].end());

   dfs(1);

   cout << cnt-1 << "\n";
   return 0;
}
