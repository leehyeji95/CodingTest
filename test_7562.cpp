#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
#include <queue>

using namespace std;
queue <pair<int, int> >q;
int dx[8] = {1,2,2,1,-1,-2,-2,-1};
int dy[8] = {2,1,-1,-2,-2,-1,1,2};
int visited[300][300] = {0,};
int dist[300][300];
int L;      // 체스판 가로세로
int N, M;   // 목적지 좌표
void bfs(int x, int y)
{
   queue <pair<int, int> >q;
   visited[x][y] = 1;
   q.push( {x, y} );
   while(!q.empty())
   {
      x = q.front().first;
      y = q.front().second;
      q.pop();
      if(x == N && y == M)
      {
         cout << dist[x][y] << "\n";
         return;
      }

      for(int i=0; i<8; i++)
      {
         int ax = x + dx[i];
         int ay = y + dy[i];
         if(ax<0 || ay<0 || ax>=L || ay>=L)
            continue;
         if(visited[ax][ay] == 0)
         {
            visited[ax][ay] = 1;
            dist[ax][ay] = dist[x][y] + 1;
            q.push( {ax, ay} );
         }
         if(ax == N && ay == M)
         {
            cout << dist[ax][ay] << "\n";
            return;
         }
      }
   }
}
int main()
{
   std::cin.tie(NULL);
   std::cout.tie(NULL);
   std::ios::sync_with_stdio(false);

   int T;
   cin >> T;
   while(T--)
   {
      memset(visited, 0x00, sizeof(visited));
      memset(dist, 0x00, sizeof(dist));
      cin >> L;
      int S, E;
      cin >> S >> E;
      cin >> N >> M;
      bfs(S, E); 
   }
   return 0;
}
