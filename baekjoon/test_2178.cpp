#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
#include <queue>

using namespace std;

int N, M;
int cnt;
int visited[100][100];
char board[100][100];
int dist[100][100];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,-1,0,1};
queue <pair<int, int> >q;

void bfs(int x, int y)
{
 
   queue <pair<int, int> >q;
   visited[x][y] = 1;
   dist[x][y] = 1;
   q.push( {x, y});

   while(!q.empty())
   {
      x = q.front().first;
      y = q.front().second;
      q.pop();

      for(int i=0; i<4; i++)
      {
         int ax = x + dx[i];
         int ay = y + dy[i];
         if(ax<0||ay<0||ax>=N||ay>=M)
            continue;
         if(board[ax][ay] == '1' && visited[ax][ay] == 0)
         {
            visited[ax][ay] = 1;
            q.push( {ax, ay});
            dist[ax][ay] = dist[x][y] + 1;
            cout << "ax: " << ax << ", ay: " << ay << ",dist[x][y]: "<<dist[x][y] << "\n";
         }
      }
   }

}
int main()
{
   std::cin.tie(NULL);
   std::cout.tie(NULL);
   std::ios::sync_with_stdio(false);

   cin >> N >> M;
   for(int i=0; i<N; i++)
      cin >> board[i];

   bfs(0, 0);

/*
   for (int i=0; i<N; i++)
   {
      for(int j=0; j<M; j++)
      {
         if(board[i][j] == '1' && visited[i][j] == 0)
         {
            visited[i][j] = 1;
            dist[i][j] = 1;
            bfs(i, j);
         }
      }
   }
*/

   cout << dist[N-1][M-1] << "\n";
   return 0;
}
