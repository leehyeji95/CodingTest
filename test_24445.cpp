#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

vector<int> v[100001];
queue<int> q;
int visited[100001] = {0,};
int cnt = 0;
void bfs(int idx)
{
   visited[idx] = ++cnt;
   q.push(idx);

   while(!q.empty())
   {
      int now = q.front();
      q.pop();
      for(int i=0; i<v[now].size(); i++)
      {
         if(visited[v[now][i]] == 0)
         {
            q.push(v[now][i]);
            visited[v[now][i]] = ++cnt;
         }
      }
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

   for(int i=0; i<100000; i++)
      sort(v[i].begin(), v[i].end(), greater<int>());

   bfs(R);

   for(int i=1; i<=N; i++)
      cout << visited[i] << "\n";

   return 0;
}
