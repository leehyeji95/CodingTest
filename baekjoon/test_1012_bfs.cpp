#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
#include <queue>

using namespace std;

int board[50][50]={0,};
int visited[50][50]={0,};
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,1,-1};
int M, N, K;
void bfs(int x, int y)
{
   queue <pair<int, int> >q;
   visited[x][y] = 1;
   //q.push(make_pair(x,y));
   q.push( {x, y} );
   while(!q.empty())
   {
      x = q.front().first;
      y = q.front().second;
      q.pop();
      for(int i=0; i<4; i++)
      {
         int ax = x + dx[i];
         int ay = y + dy[i];
         if(ax<0 || ay<0 || ax >=M || ay>=N)
            continue;
         if(board[ax][ay] == 1 && visited[ax][ay] == 0)
         {
            q.push( {ax, ay} );
            visited[ax][ay] = 1;
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
      memset(board, 0x00, sizeof(board));
      memset(visited, 0x00, sizeof(visited));
      int bug=0;

      cin >> M >> N >> K;
      while(K--)
      {
         int S, E;
         cin >> S >> E;
         board[S][E] = 1;
      }

      for(int i=0; i<M; i++)
      {
         for(int j=0; j<N; j++)
         {
            if(board[i][j] == 1 && visited[i][j] == 0)
            {
               bug++;
               bfs(i, j);
            }
         }
      }
      cout << bug <<"\n";
   }
   return 0;
}
