#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>

using namespace std;

int M, N, K;
int board[50][50] = {0,};
int visited[50][50] = {0,};
int dx[4] = {-1,0,1,0};
int dy[4] = {0,-1,0,1};

void dfs(int x, int y)
{
   visited[x][y] = 1;
   for(int i=0; i<4; i++)
   {
      int ax = x + dx[i];
      int ay = y + dy[i];

      if(ax<0 || ay<0 || ax>=M || ay>=N)
         continue;

      if(board[ax][ay] == 1 && visited[ax][ay] == 0)
         dfs(ax, ay);
   } 
}
int main()
{
   std::cin.tie(NULL);
   std::cout.tie(NULL);
   std::ios::sync_with_stdio(false);

   int T;      // TestCase
   cin >> T;
   while(T--)
   {
      memset(board, 0x00, sizeof(board));
      memset(visited, 0x00, sizeof(visited));
      int bug = 0;

      cin >> M >> N >> K;

      while(K--)
      {
         int S, E;
         cin >> S >> E;
         board[S][E]=1;
      }

      for(int i=0; i<M; i++)
      { 
         for(int j=0; j<N; j++)
         {  
            if(board[i][j] == 1 && visited[i][j] == 0)
            {
               bug++;
               dfs(i, j);
            }
         }
      }
      cout << bug << "\n";
   }
   
   return 0;
}
